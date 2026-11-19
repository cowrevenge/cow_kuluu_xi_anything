/* f_0x1015be00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1015be00(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015be1eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be1e;
    case 0x1015be32u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be32;
    case 0x1015be42u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be42;
    case 0x1015be47u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be47;
    case 0x1015be4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be4c;
    case 0x1015be53u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be53;
    case 0x1015be56u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be56;
    case 0x1015be5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be5c;
    case 0x1015be63u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be63;
    case 0x1015be7fu: eax = g->eax; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be7f;
    case 0x1015be85u: edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be85;
    case 0x1015be87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be87;
    case 0x1015be9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015be9f;
    case 0x1015bea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bea3;
    case 0x1015beb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015beb5;
    case 0x1015bec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bec6;
    case 0x1015bee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bee9;
    case 0x1015bf05u: eax = g->eax; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf05;
    case 0x1015bf0bu: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf0b;
    case 0x1015bf0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf0f;
    case 0x1015bf26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf26;
    case 0x1015bf2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf2a;
    case 0x1015bf3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf3c;
    case 0x1015bf4du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf4d;
    case 0x1015bf59u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf59;
    case 0x1015bf75u: eax = g->eax; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf75;
    case 0x1015bf7bu: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf7b;
    case 0x1015bf7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf7f;
    case 0x1015bf96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf96;
    case 0x1015bf9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bf9a;
    case 0x1015bfacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bfac;
    case 0x1015bfb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bfb9;
    case 0x1015bfc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bfc2;
    case 0x1015bfdau: eax = g->eax; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bfda;
    case 0x1015bfe0u: eax = g->eax; edx = g->edx; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bfe0;
    case 0x1015bfe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bfe4;
    case 0x1015bffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bffb;
    case 0x1015bfffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015bfff;
    case 0x1015c00du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015c00d;
    case 0x1015c01au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015c01a;
    case 0x1015c021u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015c021;
    case 0x1015c038u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1015c038;
    default: break;
    }
#endif

    COW_AT(1015be00)
    wr32(arg1 + 0x14c8u, COW_IMG(0x103d3c84u));
    eax = 0u;
    ecx = arg1 + 8u;
L_1015be1e: ;
    COW_AT(1015be1e)
    wr32(ecx, COW_IMG(0x103d3c84u));
    wr8(arg1 + eax + 4u, 0u);
    if ((int32_t)(eax + 1u) < 2)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_1015be1e;
    }
    COW_AT(1015be32)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1015be53;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(1015be42)
    if (eax == 2u) goto L_1015be4c;
    COW_AT(1015be47)
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_1015be56;
    }
L_1015be4c: ;
    COW_AT(1015be4c)
    eax = 1u;
L_1015be5c: ;
    COW_AT(1015be5c)
    t1 = rd32(COW_IMG(0x1015c040u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1015be63u: goto L_1015be63;
    case 0x1015bee9u: goto L_1015bee9;
    case 0x1015bf59u: goto L_1015bf59;
    case 0x1015bfc2u: goto L_1015bfc2;
    default: rt_fatal(g, COW_IMG(0x1015be5cu), "switch");
    }
    return;
L_1015be53: ;
    COW_AT(1015be53)
    cf = eax < 3u;
    zf = eax == 3u;
L_1015be56: ;
    COW_AT(1015be56)
    if (!cf && !zf) goto L_1015c038;
    goto L_1015be5c;
L_1015be63: ;
    COW_AT(1015be63)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t42 = cow_cdecl(g, COW_IMG(0x102574f0u), 1, arg2);
    t43 = g->edx;
    if (t42 != arg3 + 1u) goto L_1015c038;
    edx = t43;
    COW_AT(1015be7f)
    if (arg3 == 0u)
    {
        eax = 0u;
        ecx = arg3 + 1u;
    }
    else
    {
    COW_AT(1015be85)
        eax = 0u;
        ecx = arg3 + 1u;
        edi = arg1 + 8u;
L_1015be87: ;
    COW_AT(1015be87)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t44 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, eax + 1u);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(edi, t44);
        if (eax + 1u < arg3)
        {
            eax = eax + 1u;
            ecx = t45;
            edx = t46;
            edi = edi + 4u;
            goto L_1015be87;
        }
        eax = eax + 1u;
        ecx = t45;
        edx = t46;
    COW_AT(1015be9f)
    }
    COW_AT(1015bea3)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t47 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 8u, in_edi, in_esi);
    t48 = g->edx;
    if (t47 == 0u) goto L_1015c038;
    eax = t47;
    edx = t48;
    COW_AT(1015beb5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t49 = cow_thiscall(g, COW_IMG(0x10156be0u), eax, 0);
    t50 = g->ecx;
    t51 = g->edx;
    if (t49 == 0u) goto L_1015c038;
    eax = t49;
    ecx = t50;
    edx = t51;
    esi = t49;
    COW_AT(1015bec6)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t52 = cow_cdecl(g, COW_IMG(0x1015d5d0u), 2, esi, arg2);
    g->edx = rd32(esi);
    t53 = rd32(esi);
    g->esp = sp0;
    t54 = cow_thiscall(g, rd32(t53 + 4u), esi, 5, in_edi, in_esi, in_ebp, in_ebx, arg1 + 8u);
    t55 = g->ecx;
    t56 = g->edx;
    wr32(arg1 + 0x14c8u, t54);
    g->ebx = arg2;
    g->esi = esi;
    g->edi = arg1;
    g->ebp = arg3;
    g->edx = t56;
    cow_tailcall(g, COW_IMG(0x1015beddu), t54, t55, t56);
    return;
L_1015bee9: ;
    COW_AT(1015bee9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t28 = cow_cdecl(g, COW_IMG(0x102574f0u), 1, arg2);
    t29 = g->edx;
    if (t28 != arg3 + 4u) goto L_1015c038;
    eax = t28;
    edx = t29;
    COW_AT(1015bf05)
    if (arg3 == 0u)
    {
        ecx = arg3 + 4u;
    }
    else
    {
    COW_AT(1015bf0b)
        ecx = arg3 + 4u;
        esi = 0u;
        edi = arg1 + 8u;
L_1015bf0f: ;
    COW_AT(1015bf0f)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = esi + 4u;
        g->esp = sp0 - 0x14u;
        t30 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, esi + 4u);
        t31 = g->ecx;
        t32 = g->edx;
        wr32(edi, t30);
        if (esi + 1u < arg3)
        {
            eax = t30;
            ecx = t31;
            esi = esi + 1u;
            edi = edi + 4u;
            goto L_1015bf0f;
        }
        eax = t30;
        ecx = t31;
        edx = t32;
    COW_AT(1015bf26)
    }
    COW_AT(1015bf2a)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t33 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
    t34 = g->edx;
    if (t33 == 0u) goto L_1015c038;
    eax = t33;
    edx = t34;
    COW_AT(1015bf3c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t35 = cow_thiscall(g, COW_IMG(0x10156620u), eax, 0);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 == 0u) goto L_1015c038;
    eax = t35;
    ecx = t36;
    edx = t37;
    esi = t35;
    COW_AT(1015bf4d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t38 = cow_cdecl(g, COW_IMG(0x1015d5f0u), 4, esi, arg2, in_edi, in_esi);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
L_1015c021: ;
    COW_AT(1015c021)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t41 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, 0u);
    wr32(arg1 + 0x14c8u, t41);
    wr32(arg1 + 0x14ccu, esi);
L_1015c038: ;
    COW_AT(1015c038)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1015bf59: ;
    COW_AT(1015bf59)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_cdecl(g, COW_IMG(0x102574f0u), 1, arg2);
    t16 = g->edx;
    if (t15 != arg3 + 8u) goto L_1015c038;
    eax = t15;
    edx = t16;
    COW_AT(1015bf75)
    if (arg3 == 0u)
    {
        ecx = arg3 + 8u;
    }
    else
    {
    COW_AT(1015bf7b)
        ecx = arg3 + 8u;
        esi = 0u;
        edi = arg1 + 8u;
L_1015bf7f: ;
    COW_AT(1015bf7f)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = esi + 8u;
        g->esp = sp0 - 0x14u;
        t17 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, esi + 8u);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(edi, t17);
        if (esi + 1u < arg3)
        {
            eax = t17;
            ecx = t18;
            esi = esi + 1u;
            edi = edi + 4u;
            goto L_1015bf7f;
        }
        eax = t17;
        ecx = t18;
        edx = t19;
    COW_AT(1015bf96)
    }
    COW_AT(1015bf9a)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, in_edi, in_esi);
    t21 = g->edx;
    if (t20 == 0u) goto L_1015c038;
    eax = t20;
    edx = t21;
    COW_AT(1015bfac)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_thiscall(g, COW_IMG(0x10155e90u), eax, 0);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 0u) goto L_1015c038;
    eax = t22;
    ecx = t23;
    edx = t24;
    esi = t22;
    COW_AT(1015bfb9)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_cdecl(g, COW_IMG(0x1015d630u), 4, esi, arg2, in_edi, in_esi);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    goto L_1015c021;
L_1015bfc2: ;
    COW_AT(1015bfc2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x102574f0u), 1, arg2);
    t3 = g->edx;
    if (t2 != arg3 + 5u) goto L_1015c038;
    eax = t2;
    edx = t3;
    COW_AT(1015bfda)
    if (arg3 == 0u)
    {
        ecx = arg3 + 5u;
    }
    else
    {
    COW_AT(1015bfe0)
        ecx = arg3 + 5u;
        esi = 0u;
        edi = arg1 + 8u;
L_1015bfe4: ;
    COW_AT(1015bfe4)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = esi + 5u;
        g->esp = sp0 - 0x14u;
        t4 = cow_cdecl(g, COW_IMG(0x10257510u), 2, arg2, esi + 5u);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(edi, t4);
        if (esi + 1u < arg3)
        {
            eax = t4;
            ecx = t5;
            esi = esi + 1u;
            edi = edi + 4u;
            goto L_1015bfe4;
        }
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(1015bffb)
    }
    COW_AT(1015bfff)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
    t8 = g->edx;
    if (t7 == 0u) goto L_1015c038;
    eax = t7;
    edx = t8;
    COW_AT(1015c00d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x101569a0u), eax, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u) goto L_1015c038;
    eax = t9;
    ecx = t10;
    edx = t11;
    esi = t9;
    COW_AT(1015c01a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x1015d700u), 4, esi, arg2, in_edi, in_esi);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    goto L_1015c021;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015be00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015be1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be63u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg3 + 1u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1 + 8u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->eax = 0u;
        g->ecx = arg3 + 1u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1 + 8u;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015be9fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bea3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015beb5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bec6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bee9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg3 + 4u;
        g->ebx = arg3;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg3 + 4u;
        g->ebx = arg3;
        g->ebp = arg2;
        g->esi = 0u;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->ebp = arg2;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf2au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg3 + 8u;
        g->ebx = arg3;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf7bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg3 + 8u;
        g->ebx = arg3;
        g->ebp = arg2;
        g->esi = 0u;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->ebp = arg2;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bf9au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bfacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bfb9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bfc2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bfdau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg3 + 5u;
        g->ebx = arg3;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bfe0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg3 + 5u;
        g->ebx = arg3;
        g->ebp = arg2;
        g->esi = 0u;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bfe4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        g->ebp = arg2;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bffbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015bfffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015c00du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015c01au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015c021u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1015c038u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 4u, arg1 + 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015be00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1015be00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
