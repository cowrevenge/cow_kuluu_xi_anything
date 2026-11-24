/* f_0x102d2c36 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_102d2c36(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t loc_e4;
    uint32_t loc_e8;
    uint32_t loc_ec;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 260u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d2c54u: edx = g->edx; in_edx = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c54;
    case 0x102d2c59u: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c59;
    case 0x102d2c5bu: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c5b;
    case 0x102d2c67u: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c67;
    case 0x102d2c6bu: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c6b;
    case 0x102d2c70u: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c70;
    case 0x102d2c75u: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c75;
    case 0x102d2c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c7a;
    case 0x102d2c84u: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c84;
    case 0x102d2c88u: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c88;
    case 0x102d2c8fu: edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c8f;
    case 0x102d2c93u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c93;
    case 0x102d2c98u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2c98;
    case 0x102d2ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d2ca0;
    case 0x102d2cabu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d2cab;
    case 0x102d2cb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_102d2cb5;
    case 0x102d2cbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2cbf;
    case 0x102d2cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xecu); in_esi = rd32(sp0 - 0xe8u); in_ebx = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xe4u); g->edi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xe8u); goto E_102d2cc5;
    case 0x102d2cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2ccc;
    case 0x102d2cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2cd0;
    case 0x102d2cd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2cd7;
    case 0x102d2cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2cdb;
    case 0x102d2ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2ce1;
    case 0x102d2ce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2ce8;
    case 0x102d2cebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2ceb;
    case 0x102d2cf2u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2cf2;
    case 0x102d2cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102d2cf9;
    case 0x102d2cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2cfd;
    case 0x102d2d0au: edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d0a;
    case 0x102d2d0eu: edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d0e;
    case 0x102d2d15u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d15;
    case 0x102d2d1au: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d1a;
    case 0x102d2d1eu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d1e;
    case 0x102d2d21u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d21;
    case 0x102d2d27u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d27;
    case 0x102d2d2eu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d2e;
    case 0x102d2d32u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d32;
    case 0x102d2d33u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d33;
    case 0x102d2d3bu: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d3b;
    case 0x102d2d40u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d40;
    case 0x102d2d43u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d43;
    case 0x102d2d46u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d46;
    case 0x102d2d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d4b;
    case 0x102d2d51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d51;
    case 0x102d2d58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d58;
    case 0x102d2d62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2d62;
    case 0x102d2d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d6f;
    case 0x102d2d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d74;
    case 0x102d2d7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d7c;
    case 0x102d2d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2d7f;
    case 0x102d2d84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2d84;
    case 0x102d2d89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d89;
    case 0x102d2d94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d94;
    case 0x102d2d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d97;
    case 0x102d2d9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d9c;
    case 0x102d2d9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2d9f;
    case 0x102d2da4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2da4;
    case 0x102d2dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2dad;
    case 0x102d2db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2db2;
    case 0x102d2db5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2db5;
    case 0x102d2db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2db9;
    case 0x102d2dc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2dc3;
    case 0x102d2dc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102d2dc6;
    case 0x102d2dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2dca;
    case 0x102d2dceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2dce;
    case 0x102d2dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2dd0;
    case 0x102d2dd7u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2dd7;
    case 0x102d2ddau: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2dda;
    case 0x102d2dddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2ddd;
    case 0x102d2de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2de4;
    case 0x102d2debu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2deb;
    case 0x102d2df0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2df0;
    case 0x102d2df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2df3;
    case 0x102d2dfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2dfd;
    case 0x102d2e0au: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2e0a;
    case 0x102d2e12u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2e12;
    case 0x102d2e1au: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2e1a;
    case 0x102d2e20u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2e20;
    case 0x102d2e2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102d2e2a;
    case 0x102d2e32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e32;
    case 0x102d2e3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e3c;
    case 0x102d2e43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e43;
    case 0x102d2e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e4a;
    case 0x102d2e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e51;
    case 0x102d2e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e58;
    case 0x102d2e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e6c;
    case 0x102d2e6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e6f;
    case 0x102d2e76u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e76;
    case 0x102d2e79u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e79;
    case 0x102d2e7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e7c;
    case 0x102d2e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e83;
    case 0x102d2e8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e8a;
    case 0x102d2e91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e91;
    case 0x102d2e94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e94;
    case 0x102d2e9bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e9b;
    case 0x102d2e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2e9f;
    case 0x102d2ea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ea2;
    case 0x102d2ea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ea8;
    case 0x102d2eb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2eb2;
    case 0x102d2ebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ebb;
    case 0x102d2ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ec2;
    case 0x102d2ec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ec9;
    case 0x102d2ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ed3;
    case 0x102d2ed8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ed8;
    case 0x102d2edfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2edf;
    case 0x102d2ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ee2;
    case 0x102d2ee6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ee6;
    case 0x102d2eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2eee;
    case 0x102d2ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2ef5;
    case 0x102d2efeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2efe;
    case 0x102d2f05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f05;
    case 0x102d2f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f0b;
    case 0x102d2f0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f0d;
    case 0x102d2f13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f13;
    case 0x102d2f17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f17;
    case 0x102d2f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f19;
    case 0x102d2f1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f1d;
    case 0x102d2f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f21;
    case 0x102d2f23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f23;
    case 0x102d2f2au: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f2a;
    case 0x102d2f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f2f;
    case 0x102d2f36u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f36;
    case 0x102d2f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f38;
    case 0x102d2f3fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f3f;
    case 0x102d2f44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f44;
    case 0x102d2f4bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f4b;
    case 0x102d2f4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f4d;
    case 0x102d2f54u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f54;
    case 0x102d2f59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f59;
    case 0x102d2f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d2f5b;
    default: break;
    }
#endif

    COW_AT(102d2c36)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xe4u, in_ebx);
    wr32(sp0 - 0xe8u, in_esi);
    wr32(sp0 - 0xecu, in_edi);
    if (rd32(sp0 + 4u) == 0u)
    {
        edx = in_edx;
        goto L_102d2c7a;
    }
    edi = rd32(sp0 + 4u);
    COW_AT(102d2c54)
    if (in_edx != 0xffffffffu)
    {
        esi = in_edx;
    }
    else
    {
    COW_AT(102d2c59)
        esi = 0u;
    }
    COW_AT(102d2c5b)
    if (esi != (esi & 0x20bu))
    {
        edx = esi & 0x20bu;
        goto L_102d2c7a;
    }
    edx = esi & 0x20bu;
    COW_AT(102d2c67)
    if (arg7 == 0u) goto L_102d2c84;
    COW_AT(102d2c6b)
    if (arg7 == 1u) goto L_102d2c84;
    COW_AT(102d2c70)
    if (arg7 == 2u) goto L_102d2c84;
    COW_AT(102d2c75)
    if (arg7 == 3u) goto L_102d2c84;
L_102d2c7a: ;
    COW_AT(102d2c7a)
    eax = 0x8876086cu;
    loc_4 = in_ebp;
    loc_e4 = in_ebx;
    loc_e8 = in_esi;
    loc_ec = in_edi;
L_102d2f5b: ;
    COW_AT(102d2f5b)
    g->ebx = loc_e4;
    g->esi = loc_e8;
    g->edi = loc_ec;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102d2c84: ;
    COW_AT(102d2c84)
    if (arg6 == 0u)
    {
    COW_AT(102d2c8f)
        t1 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0xcu, 0u);
        ecx = arg6;
        loc_c = 0u;
    }
    else
    {
    COW_AT(102d2c88)
        wr32(sp0 - 0xcu, rd32(arg6));
        ecx = rd32(arg6);
        loc_c = rd32(arg6);
    }
    COW_AT(102d2c93)
    if (arg7 == 3u) goto L_102d2cbf;
    COW_AT(102d2c98)
    wr32(sp0 - 0xf0u, loc_c);
    g->eax = arg7;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    t2 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, loc_c);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(102d2ca0)
    wr32(sp0 - 0xf4u, eax);
    wr32(sp0 - 0xf8u, arg8);
    wr32(sp0 - 0xfcu, esi);
    wr32(sp0 - 0x100u, edi);
    g->ebx = arg2;
    g->eax = eax;
    g->esp = sp0 - 0xf0u;
    t5 = cow_call_regs(g, COW_IMG(0x102d272du), g->eax, ecx, edx, 1, 4, edi, esi, arg8, eax);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(102d2cab)
    wr32(sp0 - 0xcu, eax);
    if (eax != 0u)
    {
        loc_c = eax;
        loc_4 = rd32(sp0 - 4u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_ec = rd32(sp0 - 0xecu);
        goto L_102d2ccc;
    }
    COW_AT(102d2cb5)
    eax = 0x8876086au;
    loc_4 = rd32(sp0 - 4u);
    loc_e4 = rd32(sp0 - 0xe4u);
    loc_e8 = rd32(sp0 - 0xe8u);
    loc_ec = rd32(sp0 - 0xecu);
    goto L_102d2f5b;
L_102d2cbf: ;
    COW_AT(102d2cbf)
    if (loc_c != 0u)
    {
        loc_4 = in_ebp;
        loc_e4 = in_ebx;
        loc_e8 = in_esi;
        loc_ec = in_edi;
    }
    else
    {
    COW_AT(102d2cc5)
        wr32(sp0 - 0xcu, 0x15u);
        loc_c = 0x15u;
        loc_4 = in_ebp;
        loc_e4 = in_ebx;
        loc_e8 = in_esi;
        loc_ec = in_edi;
    }
L_102d2ccc: ;
    COW_AT(102d2ccc)
    if (arg2 == 0u)
    {
    COW_AT(102d2cd7)
        t8 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, 0xffffffffu);
    }
    else
    {
    COW_AT(102d2cd0)
        wr32(sp0 + 4u, rd32(arg2));
    }
    COW_AT(102d2cdb)
    if (arg3 == 0u)
    {
    COW_AT(102d2ce8)
        ebx = 0xffffffffu;
    }
    else
    {
    COW_AT(102d2ce1)
        ebx = rd32(arg3);
    }
    COW_AT(102d2ceb)
    if (arg4 == 0u)
    {
    COW_AT(102d2cf9)
        t9 = rd32(sp0 - 8u);
        wr32(sp0 - 8u, 0xffffffffu);
        loc_8 = 0xffffffffu;
    }
    else
    {
    COW_AT(102d2cf2)
        wr32(sp0 - 8u, rd32(arg4));
        loc_8 = rd32(arg4);
    }
    COW_AT(102d2cfd)
    t10 = rd32(sp0 + 4u);
    if (t10 != 0xffffffffu) goto L_102d2d1a;
    COW_AT(102d2d0a)
    if (ebx != 0xffffffffu) goto L_102d2d15;
    COW_AT(102d2d0e)
    wr32(sp0 + 4u, 0x100u);
    ebx = 0x100u;
L_102d2d33: ;
    COW_AT(102d2d33)
    if (arg8 == 5u)
    {
    COW_AT(102d2d3b)
        t12 = rd32(sp0 + 4u);
        if (t12 > ebx)
        {
    COW_AT(102d2d40)
            ebx = rd32(sp0 + 4u);
        }
    COW_AT(102d2d43)
        wr32(sp0 + 4u, ebx);
    }
    COW_AT(102d2d46)
    if (loc_8 == 0xffffffffu) goto L_102d2d51;
    COW_AT(102d2d4b)
    if (loc_8 != 0u) goto L_102d2d58;
L_102d2d51: ;
    COW_AT(102d2d51)
    wr32(sp0 - 8u, 1u);
    loc_8 = 1u;
L_102d2d58: ;
    COW_AT(102d2d58)
    if (arg7 != 3u)
    {
    COW_AT(102d2d62)
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        wr32(sp0 - 0xf4u, edi);
        g->esp = sp0 - 0xecu;
        cow_thiscall(g, rd32(rd32(edi) + 0x1cu), sp0 - 0xe0u, 2, edi, sp0 - 0xe0u);
    COW_AT(102d2d6f)
        if (arg8 != 4u) goto L_102d2d89;
    COW_AT(102d2d74)
        t13 = rd32(sp0 - 8u);
        if (t13 <= rd32(sp0 - 0x80u))
        {
            eax = rd32(sp0 - 0x80u);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            eax = rd32(sp0 - 0x80u);
    COW_AT(102d2d7c)
            wr32(sp0 - 8u, eax);
            loc_8 = eax;
        }
    COW_AT(102d2d7f)
        t14 = rd32(sp0 + 4u);
        if (t14 > eax)
        {
    COW_AT(102d2d84)
            wr32(sp0 + 4u, eax);
        }
L_102d2dca: ;
    COW_AT(102d2dca)
        if (ebx > eax)
        {
    COW_AT(102d2dce)
            ebx = eax;
        }
L_102d2dd0: ;
    COW_AT(102d2dd0)
        if (arg8 == 3u)
        {
    COW_AT(102d2deb)
            wr32(sp0 - 0xf0u, 2u);
            eax = 2u;
        }
        else
        {
    COW_AT(102d2dd7)
            if (arg8 == 4u)
            {
    COW_AT(102d2de4)
                eax = 0x40000u;
            }
            else
            {
    COW_AT(102d2dda)
                if (arg8 != 5u)
                {
    COW_AT(102d2df0)
                    eax = rd32(sp0 + 4u);
                }
                else
                {
    COW_AT(102d2ddd)
                    eax = 0x20000u;
                }
            }
        }
    COW_AT(102d2df3)
        if ((rd32(sp0 - 0xa4u) & eax) == 0u)
        {
            loc_c = rd32(sp0 - 0xcu);
            loc_4 = rd32(sp0 - 4u);
            loc_e4 = rd32(sp0 - 0xe4u);
            loc_e8 = rd32(sp0 - 0xe8u);
            loc_ec = rd32(sp0 - 0xecu);
        }
        else
        {
    COW_AT(102d2dfd)
            t18 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, 1u);
            if (t18 <= 1u) goto L_102d2e12;
            eax = t18;
L_102d2e0a: ;
    COW_AT(102d2e0a)
            t19 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t19 << 1u);
            t20 = rd32(sp0 + 4u);
            if (t20 < eax) goto L_102d2e0a;
L_102d2e12: ;
    COW_AT(102d2e12)
            if (ebx <= 1u)
            {
                ebx = 1u;
                goto L_102d2e20;
            }
            eax = ebx;
            ebx = 1u;
L_102d2e1a: ;
    COW_AT(102d2e1a)
            if (ebx << 1u < eax)
            {
                ebx = ebx << 1u;
                goto L_102d2e1a;
            }
            ebx = ebx << 1u;
L_102d2e20: ;
    COW_AT(102d2e20)
            wr32(sp0 - 8u, 1u);
            if (loc_8 <= 1u)
            {
                loc_c = rd32(sp0 - 0xcu);
                loc_4 = rd32(sp0 - 4u);
                loc_e4 = rd32(sp0 - 0xe4u);
                loc_e8 = rd32(sp0 - 0xe8u);
                loc_ec = rd32(sp0 - 0xecu);
                loc_8 = 1u;
                goto L_102d2e32;
            }
            eax = loc_8;
            loc_8 = 1u;
L_102d2e2a: ;
    COW_AT(102d2e2a)
            wr32(sp0 - 8u, loc_8 << 1u);
            if (loc_8 << 1u < eax)
            {
                loc_8 = loc_8 << 1u;
                goto L_102d2e2a;
            }
            loc_c = rd32(sp0 - 0xcu);
            loc_4 = rd32(sp0 - 4u);
            loc_e4 = rd32(sp0 - 0xe4u);
            loc_e8 = rd32(sp0 - 0xe8u);
            loc_ec = rd32(sp0 - 0xecu);
            loc_8 = loc_8 << 1u;
        }
    }
L_102d2e32: ;
    COW_AT(102d2e32)
    if (loc_c == 0x31545844u) goto L_102d2e58;
    eax = loc_c;
    COW_AT(102d2e3c)
    if (eax == 0x32545844u) goto L_102d2e58;
    COW_AT(102d2e43)
    if (eax == 0x33545844u) goto L_102d2e58;
    COW_AT(102d2e4a)
    if (eax == 0x34545844u) goto L_102d2e58;
    COW_AT(102d2e51)
    if (eax != 0x35545844u) goto L_102d2e6c;
L_102d2e58: ;
    COW_AT(102d2e58)
    t21 = rd32(sp0 + 4u) + 3u & 0xfffffffcu;
    wr32(sp0 + 4u, t21);
    edx = t21;
    ebx = ebx + 3u & 0xfffffffcu;
L_102d2e6f: ;
    COW_AT(102d2e6f)
    if (arg8 == 3u)
    {
    COW_AT(102d2e8a)
        eax = 0x4000u;
    }
    else
    {
    COW_AT(102d2e76)
        if (arg8 == 4u)
        {
    COW_AT(102d2e83)
            eax = 0x8000u;
        }
        else
        {
    COW_AT(102d2e79)
            if (arg8 != 5u)
            {
    COW_AT(102d2e91)
                eax = rd32(sp0 + 4u);
            }
            else
            {
    COW_AT(102d2e7c)
                eax = 0x10000u;
            }
        }
    }
    COW_AT(102d2e94)
    if (arg5 == 0u)
    {
    COW_AT(102d2e9f)
        edi = 0xffffffffu;
    }
    else
    {
    COW_AT(102d2e9b)
        edi = rd32(arg5);
    }
    COW_AT(102d2ea2)
    if (arg7 == 3u) goto L_102d2ed8;
    COW_AT(102d2ea8)
    if ((rd32(sp0 - 0xa4u) & eax) == 0u) goto L_102d2ed3;
    COW_AT(102d2eb2)
    t22 = rd8(sp0 - 0xa3u);
    if (!(t22 & 1u)) goto L_102d2ed8;
    COW_AT(102d2ebb)
    if ((edx & edx - 1u) != 0u) goto L_102d2ed3;
    COW_AT(102d2ec2)
    if ((ebx & ebx - 1u) != 0u) goto L_102d2ed3;
    COW_AT(102d2ec9)
    if ((loc_8 & loc_8 - 1u) == 0u) goto L_102d2ed8;
L_102d2ed3: ;
    COW_AT(102d2ed3)
    edi = 1u;
L_102d2f23: ;
    COW_AT(102d2f23)
    if (arg2 != 0u)
    {
    COW_AT(102d2f2a)
        t23 = rd32(sp0 + 4u);
        wr32(arg2, t23);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(102d2f2f)
    if (arg3 != 0u)
    {
    COW_AT(102d2f36)
        wr32(arg3, ebx);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(102d2f38)
    if (arg4 != 0u)
    {
    COW_AT(102d2f3f)
        wr32(arg4, loc_8);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_ec = rd32(sp0 - 0xecu);
    }
    COW_AT(102d2f44)
    if (arg5 != 0u)
    {
    COW_AT(102d2f4b)
        wr32(arg5, edi);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_ec = rd32(sp0 - 0xecu);
    }
    COW_AT(102d2f4d)
    if (arg6 != 0u)
    {
    COW_AT(102d2f54)
        wr32(arg6, loc_c);
        loc_4 = rd32(sp0 - 4u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_ec = rd32(sp0 - 0xecu);
    }
    COW_AT(102d2f59)
    eax = 0u;
    goto L_102d2f5b;
L_102d2d15: ;
    COW_AT(102d2d15)
    wr32(sp0 + 4u, ebx);
L_102d2d21: ;
    COW_AT(102d2d21)
    t11 = rd32(sp0 + 4u);
    if (t11 == 0u)
    {
    COW_AT(102d2d27)
        wr32(sp0 + 4u, 1u);
    }
    COW_AT(102d2d2e)
    if (ebx == 0u)
    {
    COW_AT(102d2d32)
        ebx = ebx + 1u;
    }
    goto L_102d2d33;
L_102d2d1a: ;
    COW_AT(102d2d1a)
    if (ebx == 0xffffffffu)
    {
    COW_AT(102d2d1e)
        ebx = rd32(sp0 + 4u);
    }
    goto L_102d2d21;
L_102d2d89: ;
    COW_AT(102d2d89)
    t15 = rd32(sp0 + 4u);
    if (t15 > rd32(sp0 - 0x88u))
    {
        eax = rd32(sp0 - 0x88u);
    COW_AT(102d2d94)
        wr32(sp0 + 4u, eax);
    }
    COW_AT(102d2d97)
    if (ebx > rd32(sp0 - 0x84u))
    {
    COW_AT(102d2d9c)
        ebx = rd32(sp0 - 0x84u);
    }
    COW_AT(102d2d9f)
    if (arg8 != 3u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102d2dd0;
    }
    COW_AT(102d2da4)
    t16 = rd8(sp0 - 0xa4u);
    if ((t16 & 0x20u) == 0u)
    {
    COW_AT(102d2db2)
        eax = rd32(sp0 - 0x78u);
    }
    else
    {
    COW_AT(102d2dad)
        eax = 1u;
    }
    COW_AT(102d2db5)
    if (eax == 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102d2dd0;
    }
    COW_AT(102d2db9)
    t17 = rd32(sp0 + 4u);
    if (t17 > eax * ebx)
    {
        ecx = eax * ebx;
    COW_AT(102d2dc3)
        wr32(sp0 + 4u, ecx);
    }
    COW_AT(102d2dc6)
    eax = eax * rd32(sp0 + 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_102d2dca;
L_102d2e6c: ;
    COW_AT(102d2e6c)
    edx = rd32(sp0 + 4u);
    goto L_102d2e6f;
L_102d2ed8: ;
    COW_AT(102d2ed8)
    eax = rd32(sp0 + 4u);
    esi = 0u;
L_102d2ee2: ;
    COW_AT(102d2ee2)
    if (eax != 0u) goto L_102d2edf;
    COW_AT(102d2ee6)
    if (ebx == 0u)
    {
        ecx = 0u;
        goto L_102d2ef5;
    }
    eax = ebx;
    ecx = 0u;
L_102d2eee: ;
    COW_AT(102d2eee)
    if (eax >> 1u != 0u)
    {
        eax = eax >> 1u;
        ecx = ecx + 1u;
        goto L_102d2eee;
    }
    ecx = ecx + 1u;
L_102d2ef5: ;
    COW_AT(102d2ef5)
    if (loc_8 == 0u)
    {
        edx = 0u;
        goto L_102d2f05;
    }
    eax = loc_8;
    edx = 0u;
L_102d2efe: ;
    COW_AT(102d2efe)
    if (eax >> 1u != 0u)
    {
        eax = eax >> 1u;
        edx = edx + 1u;
        goto L_102d2efe;
    }
    edx = edx + 1u;
L_102d2f05: ;
    COW_AT(102d2f05)
    if (esi > ecx)
    {
        eax = esi;
    }
    else
    {
    COW_AT(102d2f0b)
        eax = ecx;
    }
    COW_AT(102d2f0d)
    if (arg8 == 4u)
    {
    COW_AT(102d2f13)
        if (edx > eax)
        {
    COW_AT(102d2f17)
            eax = edx;
        }
    }
    COW_AT(102d2f19)
    if (edi > eax) goto L_102d2f21;
    COW_AT(102d2f1d)
    if (edi != 0u) goto L_102d2f23;
L_102d2f21: ;
    COW_AT(102d2f21)
    edi = eax;
    goto L_102d2f23;
L_102d2edf: ;
    COW_AT(102d2edf)
    eax = eax >> 1u;
    esi = esi + 1u;
    goto L_102d2ee2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d2c36(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d2c54u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        edx = g->edx;
        in_edx = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c59u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c5bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c67u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c6bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c70u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c75u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c7au:
    {
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
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c84u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c88u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c8fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ecx = arg6;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c93u:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2c98u:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg7;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ca0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cabu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x100u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cb5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cbfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cc5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xecu);
        in_esi = rd32(sp0 - 0xe8u);
        in_ebx = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cccu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cd0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cd7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cdbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ce1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ce8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cf2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg4;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cf9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2cfdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d0au:
    {
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = 0x100u;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d0eu:
    {
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = 0x100u;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d15u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d27u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d33u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2d3bu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d40u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d43u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d46u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = 0xffffffffu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d4bu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d51u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d58u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d62u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2d6fu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d74u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d7cu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d7fu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d84u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d89u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d94u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d97u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d9cu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2d9fu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2da4u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dadu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2db2u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2db5u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2db9u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dc3u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dc6u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
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
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dcau:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dceu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dd0u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dd7u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->eax = arg8 - 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2ddau:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->eax = arg8 - 4u;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2dddu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2de4u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2debu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2df0u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102d2df3u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2dfdu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e0au:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e12u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e1au:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e20u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e2au:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e32u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e3cu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e43u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e4au:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e51u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e58u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e6cu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e6fu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        g->esi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102d2e76u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg8 - 3u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e79u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg8 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e8au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e91u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e9bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ecx = arg5;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2e9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ea2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ea8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2eb2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ebbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ec2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ec9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ed3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ed8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2edfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ee2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ee6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2eeeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2ef5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2efeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f17u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f23u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f2au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f36u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f3fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg4;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f44u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f4bu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg5;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f4du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f54u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->eax = arg6;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f59u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d2f5bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xecu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d2c36(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d2c36(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
