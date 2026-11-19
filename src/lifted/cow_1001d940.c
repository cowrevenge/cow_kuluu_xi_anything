/* f_0x1001d940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1001d940(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001d96cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d96c;
    case 0x1001d971u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d971;
    case 0x1001d978u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d978;
    case 0x1001d97fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d97f;
    case 0x1001d986u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d986;
    case 0x1001d98du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d98d;
    case 0x1001d994u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d994;
    case 0x1001d99bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d99b;
    case 0x1001d9a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d9a7;
    case 0x1001d9d8u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d9d8;
    case 0x1001d9dfu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d9df;
    case 0x1001d9ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d9eb;
    case 0x1001d9f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d9f5;
    case 0x1001d9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001d9fd;
    case 0x1001da06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da06;
    case 0x1001da0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da0a;
    case 0x1001da12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da12;
    case 0x1001da17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da17;
    case 0x1001da1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da1d;
    case 0x1001da21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da21;
    case 0x1001da27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da27;
    case 0x1001da2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da2d;
    case 0x1001da3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da3f;
    case 0x1001da54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da54;
    case 0x1001da65u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da65;
    case 0x1001da74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da74;
    case 0x1001da7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da7e;
    case 0x1001da82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da82;
    case 0x1001da86u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da86;
    case 0x1001da8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da8b;
    case 0x1001da90u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da90;
    case 0x1001da93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001da93;
    case 0x1001daacu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001daac;
    case 0x1001dab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001dab6;
    case 0x1001dabau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001daba;
    case 0x1001dabeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001dabe;
    case 0x1001dac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001dac6;
    case 0x1001daceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001dace;
    case 0x1001dad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001dad4;
    case 0x1001dae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001dae7;
    case 0x1001dafbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001dafb;
    case 0x1001db11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db11;
    case 0x1001db25u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db25;
    case 0x1001db29u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db29;
    case 0x1001db34u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db34;
    case 0x1001db3au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db3a;
    case 0x1001db42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db42;
    case 0x1001db4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db4b;
    case 0x1001db4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db4f;
    case 0x1001db57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db57;
    case 0x1001db5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db5c;
    case 0x1001db62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db62;
    case 0x1001db66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db66;
    case 0x1001db6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db6c;
    case 0x1001db6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db6e;
    case 0x1001db7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001db7a;
    default: break;
    }
#endif

    COW_AT(1001d940)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, arg2);
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, in_edx, 1, arg2);
    t1 = g->edx;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x100398e0u), arg1, 1, sp0 - 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)rd32(sp0 - 0x10u) != 0x63u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = rd32(sp0 - 0x10u);
        ecx = t2;
        edx = t3;
    COW_AT(1001d96c)
        if ((uint8_t)(eax >> 8u) == 0x75u)
        {
    COW_AT(1001d971)
            if (rd8(sp0 - 0xeu) == 0x62u)
            {
    COW_AT(1001d978)
                if (rd8(sp0 - 0xdu) == 0x65u)
                {
    COW_AT(1001d97f)
                    if (rd8(sp0 - 0xcu) == 0x6du)
                    {
    COW_AT(1001d986)
                        if (rd8(sp0 - 0xbu) == 0x61u)
                        {
    COW_AT(1001d98d)
                            if (rd8(sp0 - 0xau) == 0x70u)
                            {
    COW_AT(1001d994)
                                if (rd8(sp0 - 9u) == 0x20u)
                                {
    COW_AT(1001d99b)
                                    t4 = (rd32(arg1 + 0x2cu) & 0xfffffffdu) | 5u;
                                    wr32(arg1 + 0x2cu, t4);
                                    ecx = t4;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    COW_AT(1001d9a7)
    t5 = rd16(arg2 + 0x14u);
    wr16(arg1 + 0x24u, (uint16_t)t5);
    t6 = rd16(arg2 + 0x18u);
    wr16(arg1 + 0x26u, (uint16_t)t6);
    t7 = rd8(arg2 + 0x1eu);
    wr8(arg1 + 0x28u, (uint8_t)t7);
    wr8(arg1 + 0x29u, rd8(arg2 + 0x34u));
    if (arg4 > 3u)
    {
        edx = (((edx & 0xffff0000u) | t5) & 0xffffff00u) | t7;
        goto L_1001db7a;
    }
    ecx = (ecx & 0xffff0000u) | t6;
    edx = (((edx & 0xffff0000u) | t5) & 0xffffff00u) | t7;
    COW_AT(1001d9d8)
    t8 = rd32(COW_IMG(0x1001db84u) + arg4 * 4u);
    switch (t8 - RD)
    {
    case 0x1001d9dfu: goto L_1001d9df;
    case 0x1001da3fu: goto L_1001da3f;
    case 0x1001da54u: edi = arg2 + 0x38u; goto L_1001da54;
    default: rt_fatal(g, COW_IMG(0x1001d9d8u), "switch");
    }
    return;
L_1001d9df: ;
    COW_AT(1001d9df)
    if ((uint8_t)arg3 == 0u) goto L_1001db7a;
    COW_AT(1001d9eb)
    if (rd32(arg2 + 0x38u) == 0u)
    {
        edx = rd32(arg2 + 0x38u);
        goto L_1001db7a;
    }
    edx = rd32(arg2 + 0x38u);
    COW_AT(1001d9f5)
    eax = 0u;
    ecx = rd32(COW_IMG(0x1045666cu));
    ebx = in_ebx;
L_1001d9fd: ;
    COW_AT(1001d9fd)
    if (edx != rd32(COW_IMG(0x103511e0u) + eax * 4u)) goto L_1001da21;
    COW_AT(1001da06)
    if (eax != 0u) goto L_1001da12;
    COW_AT(1001da0a)
    ebx = (ebx & 0xffffff00u) | rd8(ecx + 0x910u);
L_1001da1d: ;
    COW_AT(1001da1d)
    if ((uint8_t)ebx != 0u) goto L_1001da2d;
L_1001da21: ;
    COW_AT(1001da21)
    if ((int32_t)(eax + 1u) < 5)
    {
        eax = eax + 1u;
        goto L_1001d9fd;
    }
    zf = eax == 4u;
    eax = eax + 1u;
    COW_AT(1001da27)
    if (zf) goto L_1001db7a;
L_1001da2d: ;
    COW_AT(1001da2d)
    wr32(arg1 + 0x20u, arg2 + 0x3cu);
    wr8(arg1 + 0x29u, (uint8_t)(eax | 0x80u));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return;
L_1001da12: ;
    COW_AT(1001da12)
    if (eax != 2u) goto L_1001da21;
    COW_AT(1001da17)
    ebx = (ebx & 0xffffff00u) | rd8(ecx + 0x911u);
    goto L_1001da1d;
L_1001da3f: ;
    COW_AT(1001da3f)
    t9 = (rd8(arg2 + 0x38u) & 0xfu) << 4u ^ ((rd32(arg1 + 0x2cu) & 0xffffff00u) | (rd32(arg1 + 0x2cu) & 0xfu));
    wr32(arg1 + 0x2cu, t9);
    ecx = t9;
    edi = arg2 + 0x3cu;
L_1001da54: ;
    COW_AT(1001da54)
    if (rd8(arg1 + 0x28u) - 4u > 0x1cu) goto L_1001db25;
    eax = rd8(arg1 + 0x28u) - 4u;
    COW_AT(1001da65)
    t10 = rd32(COW_IMG(0x1001db94u) + rd8(COW_IMG(0x1001dbacu) + eax) * 4u);
    switch (t10 - RD)
    {
    case 0x1001da74u: goto L_1001da74;
    case 0x1001daacu: goto L_1001daac;
    case 0x1001dae7u: edx = rd8(COW_IMG(0x1001dbacu) + eax); goto L_1001dae7;
    case 0x1001dafbu: goto L_1001dafb;
    case 0x1001db11u: goto L_1001db11;
    case 0x1001db25u: edx = rd8(COW_IMG(0x1001dbacu) + eax); goto L_1001db25;
    default: rt_fatal(g, COW_IMG(0x1001da6du), "switch");
    }
    return;
L_1001da74: ;
    COW_AT(1001da74)
    t12 = rd8(arg1 + 0x29u);
    wr32(arg1 + 0x1cu, edi);
    if ((uint8_t)t12 == 0x10u)
    {
    COW_AT(1001da90)
        edi = edi + 0x20u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t12;
    COW_AT(1001da7e)
        if ((uint8_t)eax == 0x18u)
        {
    COW_AT(1001da8b)
            edi = edi + 0x30u;
        }
        else
        {
    COW_AT(1001da82)
            if ((uint8_t)eax == 0x20u)
            {
    COW_AT(1001da86)
                edi = edi + 0x40u;
            }
        }
    }
    COW_AT(1001da93)
    eax = edi + (uint32_t)((int32_t)((uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) + 1u - (uint32_t)((int32_t)((uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) + 1u) >> 0x1fu)) >> 1u);
    ecx = rd16(arg1 + 0x24u);
    edx = (uint32_t)((int32_t)((uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) + 1u) >> 0x1fu);
L_1001db29: ;
    COW_AT(1001db29)
    wr32(arg1 + 0x20u, edi);
    if ((uint8_t)arg3 != 0u)
    {
    COW_AT(1001db34)
        if (rd32(eax) != 0u)
        {
            edi = rd32(eax);
    COW_AT(1001db3a)
            ecx = 0u;
            edx = rd32(COW_IMG(0x1045666cu));
            ebx = in_ebx;
L_1001db42: ;
    COW_AT(1001db42)
            if (edi != rd32(COW_IMG(0x103511ccu) + ecx * 4u)) goto L_1001db66;
    COW_AT(1001db4b)
            if (ecx != 0u) goto L_1001db57;
    COW_AT(1001db4f)
            ebx = (ebx & 0xffffff00u) | rd8(edx + 0x910u);
L_1001db62: ;
    COW_AT(1001db62)
            if ((uint8_t)ebx != 0u) goto L_1001db6e;
L_1001db66: ;
    COW_AT(1001db66)
            if ((int32_t)(ecx + 1u) < 5)
            {
                ecx = ecx + 1u;
                goto L_1001db42;
            }
            zf = ecx == 4u;
            ecx = ecx + 1u;
    COW_AT(1001db6c)
            if (zf) goto L_1001db7a;
L_1001db6e: ;
    COW_AT(1001db6e)
            wr32(arg1 + 0x20u, eax + 4u);
            wr8(arg1 + 0x29u, (uint8_t)(ecx | 0x80u));
        }
    }
L_1001db7a: ;
    COW_AT(1001db7a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return;
L_1001daac: ;
    COW_AT(1001daac)
    t11 = rd8(arg1 + 0x29u);
    wr32(arg1 + 0x1cu, edi);
    if ((uint8_t)t11 == 0x10u)
    {
    COW_AT(1001dace)
        edi = edi + 0x200u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t11;
    COW_AT(1001dab6)
        if ((uint8_t)eax == 0x18u)
        {
    COW_AT(1001dac6)
            edi = edi + 0x300u;
        }
        else
        {
    COW_AT(1001daba)
            if ((uint8_t)eax == 0x20u)
            {
    COW_AT(1001dabe)
                edi = edi + 0x400u;
            }
        }
    }
    COW_AT(1001dad4)
    eax = edi + (uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u);
    edx = rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001dae7: ;
    COW_AT(1001dae7)
    eax = edi + (uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 2u;
    ecx = rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001dafb: ;
    COW_AT(1001dafb)
    eax = edi + (uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 3u;
    ecx = edi + (uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 2u;
    edx = rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001db11: ;
    COW_AT(1001db11)
    eax = edi + (uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 4u;
    edx = (uint32_t)rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001db25: ;
    COW_AT(1001db25)
    eax = arg3;
    goto L_1001db29;
L_1001db57: ;
    COW_AT(1001db57)
    if (ecx != 2u) goto L_1001db66;
    COW_AT(1001db5c)
    ebx = (ebx & 0xffffff00u) | rd8(edx + 0x911u);
    goto L_1001db62;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001d940(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001d96cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d971u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d978u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d97fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d986u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d98du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d994u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d99bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d9a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d9d8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->eax = arg4;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d9dfu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->eax = arg4;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d9ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d9f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001d9fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da06u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da17u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001da3fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg2 + 0x38u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da54u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da74u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da8bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001da93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001daacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001dab6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001dabau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001dabeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001dac6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001daceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001dad4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001dae7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001dafbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001db11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001db25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001db29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001db34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001db3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1001db42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db4bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db62u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db66u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db6eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1001db7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d940(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1001d940(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
