/* f_0x102dcb23 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dcb23(Guest* g)
{
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
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dcb36u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); goto E_102dcb36;
    case 0x102dcb41u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); goto E_102dcb41;
    case 0x102dcb4eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); goto E_102dcb4e;
    case 0x102dcb58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); goto E_102dcb58;
    case 0x102dcb7au: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcb7a;
    case 0x102dcb7fu: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcb7f;
    case 0x102dcb81u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcb81;
    case 0x102dcb88u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcb88;
    case 0x102dcb8bu: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcb8b;
    case 0x102dcb99u: eax = g->eax; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcb99;
    case 0x102dcba2u: eax = g->eax; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcba2;
    case 0x102dcbaau: eax = g->eax; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcbaa;
    case 0x102dcbadu: eax = g->eax; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcbad;
    case 0x102dcbb7u: eax = g->eax; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcbb7;
    case 0x102dcbbau: eax = g->eax; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcbba;
    case 0x102dcbccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcbcc;
    case 0x102dcbd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcbd6;
    case 0x102dcbdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcbde;
    case 0x102dcc10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc10;
    case 0x102dcc18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc18;
    case 0x102dcc1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc1c;
    case 0x102dcc24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc24;
    case 0x102dcc28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc28;
    case 0x102dcc30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc30;
    case 0x102dcc36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc36;
    case 0x102dcc3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc3e;
    case 0x102dcc44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc44;
    case 0x102dcc4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc4c;
    case 0x102dcc50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc50;
    case 0x102dcc58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc58;
    case 0x102dcc5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc5b;
    case 0x102dcc67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc67;
    case 0x102dcc69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc69;
    case 0x102dcc6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc6c;
    case 0x102dcc79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc79;
    case 0x102dcc89u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc89;
    case 0x102dcc92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcc92;
    case 0x102dcca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcca2;
    case 0x102dcca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcca8;
    case 0x102dccb6u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dccb6;
    case 0x102dccc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dccc4;
    case 0x102dccc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dccc8;
    case 0x102dccd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dccd6;
    case 0x102dccdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dccdb;
    case 0x102dccdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dccde;
    case 0x102dccf6u: self = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dccf6;
    case 0x102dcd02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd02;
    case 0x102dcd0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd0b;
    case 0x102dcd0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd0d;
    case 0x102dcd15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd15;
    case 0x102dcd1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd1b;
    case 0x102dcd2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd2c;
    case 0x102dcd32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd32;
    case 0x102dcd37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd37;
    case 0x102dcd43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd43;
    case 0x102dcd4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd4c;
    case 0x102dcd4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd4e;
    case 0x102dcd56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd56;
    case 0x102dcd5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd5b;
    case 0x102dcd65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd65;
    case 0x102dcd6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd6c;
    case 0x102dcd73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd73;
    case 0x102dcd7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd7a;
    case 0x102dcd81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd81;
    case 0x102dcd88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd88;
    case 0x102dcd8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd8f;
    case 0x102dcd9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcd9d;
    case 0x102dcda5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcda5;
    case 0x102dcdacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcdac;
    case 0x102dcdb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcdb7;
    case 0x102dcdc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcdc0;
    case 0x102dcdc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dcdc9;
    case 0x102dce02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce02;
    case 0x102dce0fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce0f;
    case 0x102dce13u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce13;
    case 0x102dce15u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce15;
    case 0x102dce19u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce19;
    case 0x102dce1du: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce1d;
    case 0x102dce1fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce1f;
    case 0x102dce27u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce27;
    case 0x102dce2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce2c;
    case 0x102dce2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce2f;
    case 0x102dce3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce3e;
    case 0x102dce4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce4d;
    case 0x102dce51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce51;
    case 0x102dce58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce58;
    case 0x102dce5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x3cu); in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x3cu); goto E_102dce5d;
    case 0x102dce5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x38u); goto E_102dce5e;
    default: break;
    }
#endif

    COW_AT(102dcb23)
    if (rd32(sp0 + 8u) < 4u) goto L_102dcb4e;
    COW_AT(102dcb36)
    if (rd32(rd32(sp0 + 4u)) != 0x20534444u) goto L_102dcb4e;
    eax = rd32(sp0 + 4u);
    COW_AT(102dcb41)
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 4u);
    if (rd32(sp0 + 8u) >= 0x7cu)
    {
        eax = eax + 4u;
        goto L_102dcb58;
    }
L_102dcb4e: ;
    COW_AT(102dcb4e)
    eax = 0x80004005u;
    edx = in_edx;
L_102dce5e: ;
    COW_AT(102dce5e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_102dcb58: ;
    COW_AT(102dcb58)
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 0x7cu);
    t1 = rd32(eax + 0xcu);
    wr32(self + 0xcu, t1);
    t2 = rd32(eax + 8u);
    wr32(self + 0x10u, t2);
    if ((rd8(eax + 6u) & 0x80u) == 0u)
    {
        esi = eax;
        loc_8 = eax + 0x7cu;
    COW_AT(102dcb7f)
        eax = 1u;
    }
    else
    {
        esi = eax;
        loc_8 = eax + 0x7cu;
    COW_AT(102dcb7a)
        eax = rd32(esi + 0x14u);
    }
    COW_AT(102dcb81)
    wr32(self + 0x14u, eax);
    if (eax == 0u)
    {
    COW_AT(102dcb88)
        wr32(self + 0x14u, 1u);
    }
    COW_AT(102dcb8b)
    if ((rd32(esi + 0x6cu) & 0xfc00u) != 0xfc00u)
    {
        eax = rd32(esi + 0x6cu) & 0xfc00u;
        goto L_102dcba2;
    }
    COW_AT(102dcb99)
    loc_18 = 6u;
L_102dcbad: ;
    COW_AT(102dcbad)
    t3 = rd32(esi + 0x18u);
    if (rd32(esi + 0x18u) != 0u)
    {
        eax = t3;
        loc_24 = t3;
    }
    else
    {
        eax = t3;
    COW_AT(102dcbb7)
        loc_24 = 1u;
    }
    COW_AT(102dcbba)
    if (rd32(COW_IMG(0x103cc680u)) == 0u)
    {
        ecx = 0xfc00u;
        edx = 1u;
        edi = COW_IMG(0x103cc680u);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_102dcc6c;
    }
    ecx = 0xfc00u;
    edx = 1u;
    edi = COW_IMG(0x103cc680u);
    loc_2c = rd32(sp0 - 0x2cu);
L_102dcbcc: ;
    COW_AT(102dcbcc)
    if (rd32(esi + 0x48u) != 0x20u) goto L_102dcc5b;
    COW_AT(102dcbd6)
    if (rd32(esi + 0x4cu) != rd32(edi + 8u))
    {
        eax = rd32(edi + 8u);
        goto L_102dcc5b;
    }
    eax = rd32(edi + 8u);
    COW_AT(102dcbde)
    wr32(sp0 + 4u, eax & 0xc4440u);
    if ((eax & 4u) == 0u)
    {
        ecx = eax & 0xc4462u;
        edx = eax & 0xe4040u;
        ebx = eax & 0x80003u;
        loc_2c = eax & 0xc4040u;
        goto L_102dcc18;
    }
    ecx = eax & 0xc4462u;
    edx = eax & 0xe4040u;
    ebx = eax & 0x80003u;
    loc_2c = eax & 0xc4040u;
    COW_AT(102dcc10)
    if (rd32(esi + 0x50u) != rd32(edi + 0xcu))
    {
        eax = rd32(esi + 0x50u);
        goto L_102dcc58;
    }
    eax = rd32(esi + 0x50u);
L_102dcc18: ;
    COW_AT(102dcc18)
    if (ecx == 0u) goto L_102dcc24;
    COW_AT(102dcc1c)
    if (rd32(esi + 0x54u) != rd32(edi + 0x10u))
    {
        eax = rd32(esi + 0x54u);
        goto L_102dcc58;
    }
    eax = rd32(esi + 0x54u);
L_102dcc24: ;
    COW_AT(102dcc24)
    if (edx == 0u) goto L_102dcc30;
    COW_AT(102dcc28)
    if (rd32(esi + 0x58u) != rd32(edi + 0x14u))
    {
        eax = rd32(esi + 0x58u);
        goto L_102dcc58;
    }
    eax = rd32(esi + 0x58u);
L_102dcc30: ;
    COW_AT(102dcc30)
    if (rd32(sp0 + 4u) == 0u) goto L_102dcc3e;
    COW_AT(102dcc36)
    if (rd32(esi + 0x5cu) != rd32(edi + 0x18u))
    {
        eax = rd32(esi + 0x5cu);
        goto L_102dcc58;
    }
    eax = rd32(esi + 0x5cu);
L_102dcc3e: ;
    COW_AT(102dcc3e)
    if (loc_2c == 0u) goto L_102dcc4c;
    COW_AT(102dcc44)
    if (rd32(esi + 0x60u) != rd32(edi + 0x1cu))
    {
        eax = rd32(esi + 0x60u);
        goto L_102dcc58;
    }
    eax = rd32(esi + 0x60u);
L_102dcc4c: ;
    COW_AT(102dcc4c)
    if (ebx == 0u) goto L_102dcc69;
    COW_AT(102dcc50)
    if (rd32(esi + 0x64u) == rd32(edi + 0x20u))
    {
        eax = rd32(esi + 0x64u);
        goto L_102dcc69;
    }
    eax = rd32(esi + 0x64u);
L_102dcc58: ;
    COW_AT(102dcc58)
L_102dcc5b: ;
    COW_AT(102dcc5b)
    if (rd32(edi + 0x24u) != 0u)
    {
        edi = edi + 0x24u;
        goto L_102dcbcc;
    }
    edi = edi + 0x24u;
    COW_AT(102dcc67)
L_102dcc6c: ;
    COW_AT(102dcc6c)
    if (rd32(edi) == 0u) goto L_102dce58;
    loc_28 = rd32(edi);
    edi = rd32(edi);
    COW_AT(102dcc79)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t4 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, edi);
    t5 = g->edx;
    if ((rd8(esi + 6u) & 0x80u) == 0u)
    {
        eax = t4;
        edx = t5;
        loc_30 = t4;
    COW_AT(102dcc92)
        t6 = (loc_18 == 6u) * 2u + 3u;
        wr32(self + 0x44u, t6);
    }
    else
    {
        eax = t4;
        edx = t5;
        loc_30 = t4;
    COW_AT(102dcc89)
        wr32(self + 0x44u, 4u);
    }
    COW_AT(102dcca2)
    if (rd32(eax + 4u) != 1u) goto L_102dccc4;
    COW_AT(102dcca8)
    if (rd32(sp0 + 8u) < 0x400u) goto L_102dce58;
    COW_AT(102dccb6)
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 0x400u);
    loc_2c = loc_8;
    loc_8 = loc_8 + 0x400u;
L_102dccc8: ;
    COW_AT(102dccc8)
    if (loc_18 == 0u) goto L_102dce4d;
    COW_AT(102dccd6)
    esi = rd32(sp0 + 8u);
    loc_14 = 0u;
    loc_10 = rd32(sp0 - 0x10u);
    loc_1c = rd32(sp0 - 0x1cu);
L_102dccde: ;
    COW_AT(102dccde)
    t7 = rd32(self + 0x10u);
    t8 = rd32(self + 0x14u);
    t9 = rd32(self + 0xcu);
    wr32(sp0 + 4u, t8);
    if (loc_14 == 0u)
    {
        eax = self;
        ecx = t8;
        ebx = t7;
        edi = t9;
        loc_20 = t7;
        goto L_102dcd1b;
    }
    ecx = t8;
    ebx = t7;
    edi = t9;
    loc_20 = t7;
    COW_AT(102dccf6)
    g->eax = self;
    g->esp = sp0 - 0x34u;
    t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x54u, in_esi, in_edi);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
    COW_AT(102dcd0b)
        eax = 0u;
    }
    else
    {
        eax = t10;
        edx = t11;
    COW_AT(102dcd02)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t12 = cow_thiscall(g, COW_IMG(0x102daff3u), eax, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    COW_AT(102dcd0d)
    if (eax == 0u) goto L_102dce51;
    COW_AT(102dcd15)
    wr32(loc_1c + 0x50u, eax);
    ecx = loc_1c;
L_102dcd1b: ;
    COW_AT(102dcd1b)
    if (loc_24 == 0u)
    {
        loc_10 = 0u;
        loc_1c = eax;
        goto L_102dce3e;
    }
    loc_10 = 0u;
    loc_1c = eax;
L_102dcd2c: ;
    COW_AT(102dcd2c)
    if (loc_10 != 0u) goto L_102dcd37;
    COW_AT(102dcd32)
    esi = loc_1c;
L_102dcd5b: ;
    COW_AT(102dcd5b)
    if (loc_28 == 0x31545844u) goto L_102dcdb7;
    eax = loc_28;
    COW_AT(102dcd65)
    if (eax == 0x32545844u) goto L_102dcdac;
    COW_AT(102dcd6c)
    if (eax == 0x32595559u) goto L_102dcd9d;
    COW_AT(102dcd73)
    if (eax == 0x33545844u) goto L_102dcdac;
    COW_AT(102dcd7a)
    if (eax == 0x34545844u) goto L_102dcdac;
    COW_AT(102dcd81)
    if (eax == 0x35545844u) goto L_102dcdac;
    COW_AT(102dcd88)
    if (eax == 0x59565955u) goto L_102dcd9d;
    COW_AT(102dcd8f)
    eax = (rd32(loc_30 + 8u) >> 3u) * edi;
L_102dcda5: ;
    COW_AT(102dcda5)
    ecx = eax * ebx;
L_102dcdc9: ;
    COW_AT(102dcdc9)
    wr32(esi + 0x38u, 0u);
    wr32(esi + 0x3cu, 0u);
    t18 = rd32(sp0 + 4u);
    t19 = rd32(sp0 + 8u);
    wr32(esi, loc_28);
    wr32(esi + 0x30u, eax);
    t20 = rd32(sp0 + 4u);
    wr32(esi + 4u, loc_8);
    wr32(esi + 0x14u, t20);
    wr32(esi + 0x34u, ecx);
    wr32(esi + 0xcu, edi);
    wr32(esi + 0x10u, loc_20);
    wr32(esi + 8u, loc_2c);
    if (t19 < ecx * t18)
    {
        edx = ecx * t18;
        goto L_102dce58;
    }
    edx = ecx * t18;
    ebx = loc_20;
    COW_AT(102dce02)
    wr32(sp0 + 8u, rd32(sp0 + 8u) - edx);
    if (edi != 1u)
    {
        loc_8 = edx + loc_8;
    COW_AT(102dce13)
        edi = edi >> 1u;
    }
    else
    {
        loc_8 = edx + loc_8;
    COW_AT(102dce0f)
        edi = 1u;
    }
    COW_AT(102dce15)
    if (ebx != 1u)
    {
    COW_AT(102dce1d)
        ebx = ebx >> 1u;
    }
    else
    {
    COW_AT(102dce19)
        ebx = 1u;
    }
    COW_AT(102dce1f)
    if (rd32(sp0 + 4u) != 1u)
    {
        loc_20 = ebx;
    COW_AT(102dce2c)
        wr32(sp0 + 4u, rd32(sp0 + 4u) >> 1u);
    }
    else
    {
        loc_20 = ebx;
    COW_AT(102dce27)
        wr32(sp0 + 4u, 1u);
    }
    COW_AT(102dce2f)
    if (loc_10 + 1u < loc_24)
    {
        eax = loc_10 + 1u;
        loc_10 = loc_10 + 1u;
        goto L_102dcd2c;
    }
    loc_10 = loc_10 + 1u;
L_102dce3e: ;
    COW_AT(102dce3e)
    if (loc_14 + 1u < loc_18)
    {
        loc_14 = loc_14 + 1u;
        goto L_102dccdb;
    }
L_102dce4d: ;
    COW_AT(102dce4d)
    eax = 0u;
L_102dce5d: ;
    COW_AT(102dce5d)
    goto L_102dce5e;
L_102dcba2: ;
    COW_AT(102dcba2)
    if (eax != 0u)
    {
        edx = 1u;
        goto L_102dce58;
    }
    COW_AT(102dcbaa)
    loc_18 = 1u;
    goto L_102dcbad;
L_102dcc69: ;
    COW_AT(102dcc69)
    goto L_102dcc6c;
L_102dccc4: ;
    COW_AT(102dccc4)
    loc_2c = 0u;
    goto L_102dccc8;
L_102dccdb: ;
    COW_AT(102dccdb)
    goto L_102dccde;
L_102dcd37: ;
    COW_AT(102dcd37)
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x54u, in_esi, in_edi);
    t15 = g->edx;
    if (t14 == 0u)
    {
        edx = t15;
    COW_AT(102dcd4c)
        eax = 0u;
    }
    else
    {
        eax = t14;
        edx = t15;
    COW_AT(102dcd43)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t16 = cow_thiscall(g, COW_IMG(0x102daff3u), eax, 0);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    COW_AT(102dcd4e)
    if (eax == 0u) goto L_102dce51;
    COW_AT(102dcd56)
    wr32(esi + 0x4cu, eax);
    esi = eax;
    goto L_102dcd5b;
L_102dcd9d: ;
    COW_AT(102dcd9d)
    eax = (edi + 1u) >> 1u << 2u;
    goto L_102dcda5;
L_102dcdac: ;
    COW_AT(102dcdac)
    eax = (edi + 3u) >> 2u << 4u;
L_102dcdc0: ;
    COW_AT(102dcdc0)
    ecx = ((ebx + 3u) >> 2u) * eax;
    goto L_102dcdc9;
L_102dcdb7: ;
    COW_AT(102dcdb7)
    eax = (edi + 3u) >> 2u << 3u;
    goto L_102dcdc0;
L_102dce51: ;
    COW_AT(102dce51)
    eax = 0x8007000eu;
    goto L_102dce5d;
L_102dce58: ;
    COW_AT(102dce58)
    eax = 0x80004005u;
    goto L_102dce5d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dcb23(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dcb36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcb58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcb99u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0xfc00u;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcba2u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0xfc00u;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcbaau:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0xfc00u;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcbadu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0xfc00u;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcbb7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0xfc00u;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcbbau:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0xfc00u;
        g->edx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcbccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcbd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcbdeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc18u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc24u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc28u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc36u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc44u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcc67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcc69u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcc6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcc79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcc89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcc92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcca2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcca8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dccb6u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 0x400u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dccc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dccc8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dccd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dccdbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dccdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dccf6u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        self = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102dcd02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd15u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd2cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd43u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd5bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd65u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd81u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd88u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcd9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcda5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcdacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcdb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcdc0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcdc9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce0fu:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce13u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce15u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce19u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce1du:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce1fu:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce27u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->eax = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce2cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce4du:
    {
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce51u:
    {
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce58u:
    {
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce5du:
    {
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x3cu);
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dce5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dcb23(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dcb23(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
