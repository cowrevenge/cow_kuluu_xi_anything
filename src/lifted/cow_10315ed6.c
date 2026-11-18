/* f_0x10315ed6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10315ed6(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10315ef3u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315ef3;
    case 0x10315efcu: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315efc;
    case 0x10315f07u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f07;
    case 0x10315f10u: in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f10;
    case 0x10315f15u: in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f15;
    case 0x10315f1du: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f1d;
    case 0x10315f21u: eax = g->eax; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f21;
    case 0x10315f2cu: in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f2c;
    case 0x10315f2fu: in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f2f;
    case 0x10315f36u: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f36;
    case 0x10315f3fu: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f3f;
    case 0x10315f48u: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f48;
    case 0x10315f4fu: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f4f;
    case 0x10315f57u: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f57;
    case 0x10315f5cu: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f5c;
    case 0x10315f61u: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f61;
    case 0x10315f66u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f66;
    case 0x10315f6bu: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f6b;
    case 0x10315f74u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f74;
    case 0x10315f7du: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f7d;
    case 0x10315f80u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f80;
    case 0x10315f95u: in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f95;
    case 0x10315f97u: in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f97;
    case 0x10315f9bu: esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f9b;
    case 0x10315f9fu: esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315f9f;
    case 0x10315fa7u: esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315fa7;
    case 0x10315fafu: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315faf;
    case 0x10315fb8u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315fb8;
    case 0x10315fc1u: eax = g->eax; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315fc1;
    case 0x10315fc6u: esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315fc6;
    case 0x10315fceu: esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315fce;
    case 0x10315fd6u: esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315fd6;
    case 0x10315fdau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315fda;
    case 0x10315ff4u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315ff4;
    case 0x10315ffdu: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10315ffd;
    case 0x10316004u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316004;
    case 0x10316010u: ecx = g->ecx; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316010;
    case 0x10316020u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316020;
    case 0x10316023u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316023;
    case 0x10316027u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316027;
    case 0x10316031u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316031;
    case 0x10316036u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316036;
    case 0x10316038u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316038;
    case 0x1031603cu: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031603c;
    case 0x10316044u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316044;
    case 0x10316048u: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10316048;
    case 0x1031604eu: ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1031604e;
    case 0x1031605cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031605c;
    case 0x10316076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10316076;
    case 0x10316095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10316095;
    case 0x103160a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_103160a9;
    case 0x103160b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_103160b4;
    case 0x103160bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103160bd;
    case 0x103160c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103160c2;
    case 0x103160c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103160c8;
    case 0x103160cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103160cd;
    case 0x103160d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103160d1;
    case 0x10316106u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10316106;
    case 0x1031610bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031610b;
    case 0x10316111u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10316111;
    case 0x10316126u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_10316126;
    case 0x10316133u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10316133;
    case 0x1031613fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1031613f;
    case 0x10316156u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10316156;
    case 0x1031615cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031615c;
    case 0x1031616cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031616c;
    case 0x1031617eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031617e;
    case 0x10316184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10316184;
    case 0x1031618au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031618a;
    case 0x10316195u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10316195;
    case 0x10316197u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10316197;
    case 0x103161a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_103161a0;
    default: break;
    }
#endif

    COW_AT(10315ed6)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x20u, 0xcu);
    wr32(sp0 - 0x1cu, 0u);
    if ((arg2 & 0x80u) == 0u)
    {
    COW_AT(10315efc)
        wr8(sp0 - 5u, 0u);
        wr32(sp0 - 0x18u, 1u);
    }
    else
    {
    COW_AT(10315ef3)
        wr32(sp0 - 0x18u, 0u);
        wr8(sp0 - 5u, 0x10u);
    }
    COW_AT(10315f07)
    if ((arg2 & 0x8000u) == 0u)
    {
    COW_AT(10315f10)
        if ((arg2 >> 8u & 0x40u) != 0u) goto L_10315f1d;
    COW_AT(10315f15)
        if (rd32(COW_IMG(0x109b28ccu)) == 0x8000u) goto L_10315f21;
L_10315f1d: ;
    COW_AT(10315f1d)
        wr8(sp0 - 5u, rd8(sp0 - 5u) | 0x80u);
    }
L_10315f21: ;
    COW_AT(10315f21)
    wr32(sp0 - 0x30u, 3u);
    if ((arg2 & 3u) == 0u) goto L_10315f48;
    COW_AT(10315f2c)
    if ((arg2 & 3u) == 1u) goto L_10315f3f;
    COW_AT(10315f2f)
    if ((arg2 & 3u) != 2u)
    {
        eax = (arg2 & 3u) - 2u;
        ecx = arg2;
        edx = in_edx;
        goto L_10315fda;
    }
    COW_AT(10315f36)
    wr32(sp0 - 0x10u, 0xc0000000u);
    loc_10 = 0xc0000000u;
L_10315f4f: ;
    COW_AT(10315f4f)
    if (rd32(sp0 + 0xcu) == 0x10u) goto L_10315f7d;
    eax = rd32(sp0 + 0xcu);
    COW_AT(10315f57)
    if (eax == 0x20u) goto L_10315f74;
    COW_AT(10315f5c)
    if (eax == 0x30u) goto L_10315f6b;
    COW_AT(10315f61)
    if (eax != 0x40u)
    {
        ecx = arg2;
        edx = in_edx;
        goto L_10315fda;
    }
    COW_AT(10315f66)
    wr32(sp0 - 0x14u, 3u);
    loc_14 = 3u;
L_10315f80: ;
    COW_AT(10315f80)
    if ((int32_t)(arg2 & 0x700u) > 1024) goto L_10315fc6;
    COW_AT(10315f95)
    if ((arg2 & 0x700u) == 0x400u) goto L_10315fc1;
    COW_AT(10315f97)
    if ((arg2 & 0x700u) == 0u) goto L_10315fc1;
    COW_AT(10315f9b)
    if ((arg2 & 0x700u) == 0x100u) goto L_10315fb8;
    COW_AT(10315f9f)
    if ((arg2 & 0x700u) == 0x200u) goto L_10315ff4;
    COW_AT(10315fa7)
    if ((arg2 & 0x700u) != 0x300u)
    {
        eax = 0x400u;
        ecx = arg2 & 0x700u;
        edx = 0x700u;
        goto L_10315fda;
    }
    COW_AT(10315faf)
    wr32(sp0 - 0xcu, 2u);
    loc_c = 2u;
L_10316004: ;
    COW_AT(10316004)
    if ((arg2 & 0x100u) == 0u)
    {
        ecx = arg2 & 0x700u;
        esi = 0x80u;
    }
    else
    {
    COW_AT(10316010)
        if ((~rd32(COW_IMG(0x109b26c4u)) & arg4 & 0x80u) != 0u)
        {
            ecx = ~rd32(COW_IMG(0x109b26c4u)) & arg4;
            esi = 0x80u;
        }
        else
        {
            ecx = ~rd32(COW_IMG(0x109b26c4u)) & arg4;
    COW_AT(10316020)
            wr32(sp0 - 0x30u, 1u);
            esi = 1u;
        }
    }
    COW_AT(10316023)
    if ((arg2 & 0x40u) != 0u)
    {
    COW_AT(10316027)
        wr8(sp0 - 0xeu, (uint8_t)(loc_10 >> 0x10u | 1u));
        esi = esi | 0x4000000u;
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(10316031)
    if ((arg2 >> 8u & 0x10u) != 0u)
    {
    COW_AT(10316036)
        esi = esi | 0x100u;
    }
    COW_AT(10316038)
    if ((arg2 & 0x20u) == 0u)
    {
    COW_AT(10316044)
        if ((arg2 & 0x10u) != 0u)
        {
    COW_AT(10316048)
            esi = esi | 0x10000000u;
        }
    }
    else
    {
    COW_AT(1031603c)
        esi = esi | 0x8000000u;
    }
    COW_AT(1031604e)
    g->ebx = 0u;
    g->edi = 0x100u;
    g->eax = arg2;
    g->esp = sp0 - 0x2cu;
    t6 = cow_fastcall(g, COW_IMG(0x10320a48u), ecx, 0x700u, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0xffffffffu)
    {
        ecx = t7;
        edx = t8;
        ebx = t6;
    COW_AT(10316076)
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, esi);
        t14 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x38u, t14);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        t15 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x40u, t15);
        t16 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x44u, t16);
        t17 = rd32(sp0 + 4u);
        wr32(sp0 - 0x48u, t17);
        g->eax = sp0 - 0x20u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t18 = cow_stdcall(g, rd32(COW_IMG(0x103291ecu)), 7, t17, t16, t15, sp0 - 0x20u, t14, esi, 0u);   /* kernel32.dll!CreateFileA */
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 != 0xffffffffu)
        {
            eax = t18;
            ecx = t19;
            edx = t20;
            esi = t18;
            goto L_103160a9;
        }
        eax = t18;
        ecx = t19;
        edx = t20;
L_10316095: ;
    COW_AT(10316095)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t27 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
        t28 = g->ecx;
        t29 = g->edx;
        wr32(sp0 - 0x30u, t27);
        t30 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, t28, t29, 1, 1, t27);
        t31 = g->edx;
        eax = t30;
        ecx = rd32(sp0 - 0x30u);
        edx = t31;
        esi = 0xffffffffu;
L_10316197: ;
    COW_AT(10316197)
        wr32(sp0 - 0x30u, ebx);
        g->esp = sp0 - 0x2cu;
        cow_call_regs(g, COW_IMG(0x10320daeu), g->eax, g->ecx, edx, 1, 1, ebx);
        t55 = g->edx;
        eax = esi;
        edx = t55;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(1031605c)
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t9 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(t9, 0x18u);
        t12 = cow_fastcall(g, COW_IMG(0x10319c92u), t10, t11, 0);
        t13 = g->edx;
        wr32(t12, 0u);
        eax = 0xffffffffu;
        edx = t13;
    }
L_103161a0: ;
    COW_AT(103161a0)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10315f3f: ;
    COW_AT(10315f3f)
    wr32(sp0 - 0x10u, 0x40000000u);
    loc_10 = 0x40000000u;
    goto L_10315f4f;
L_10315f48: ;
    COW_AT(10315f48)
    wr32(sp0 - 0x10u, 0x80000000u);
    loc_10 = 0x80000000u;
    goto L_10315f4f;
L_10315f6b: ;
    COW_AT(10315f6b)
    wr32(sp0 - 0x14u, 2u);
    loc_14 = 2u;
    goto L_10315f80;
L_10315f74: ;
    COW_AT(10315f74)
    wr32(sp0 - 0x14u, 1u);
    loc_14 = 1u;
    goto L_10315f80;
L_10315f7d: ;
    COW_AT(10315f7d)
    wr32(sp0 - 0x14u, 0u);
    loc_14 = 0u;
    goto L_10315f80;
L_10315fb8: ;
    COW_AT(10315fb8)
    wr32(sp0 - 0xcu, 4u);
    loc_c = 4u;
    goto L_10316004;
L_10315fc1: ;
    COW_AT(10315fc1)
    wr32(sp0 - 0xcu, 3u);
    loc_c = 3u;
    goto L_10316004;
L_10315fc6: ;
    COW_AT(10315fc6)
    if ((arg2 & 0x700u) == 0x500u) goto L_10315ffd;
    COW_AT(10315fce)
    if ((arg2 & 0x700u) == 0x600u) goto L_10315ff4;
    COW_AT(10315fd6)
    if ((arg2 & 0x700u) == 0x700u) goto L_10315ffd;
    eax = 0x400u;
    ecx = arg2 & 0x700u;
    edx = 0x700u;
L_10315fda: ;
    COW_AT(10315fda)
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t1 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(t1, 0x16u);
    t4 = cow_fastcall(g, COW_IMG(0x10319c92u), t2, t3, 0);
    t5 = g->edx;
    wr32(t4, 0u);
    eax = 0xffffffffu;
    edx = t5;
    goto L_103161a0;
L_10315ff4: ;
    COW_AT(10315ff4)
    wr32(sp0 - 0xcu, 5u);
    loc_c = 5u;
    goto L_10316004;
L_10315ffd: ;
    COW_AT(10315ffd)
    wr32(sp0 - 0xcu, 1u);
    loc_c = 1u;
    goto L_10316004;
L_103160a9: ;
    COW_AT(103160a9)
    wr32(sp0 - 0x30u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t21 = cow_stdcall(g, rd32(COW_IMG(0x103290e8u)), 1, esi);   /* kernel32.dll!GetFileType */
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 != 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_103160bd;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(103160b4)
    wr32(sp0 - 0x30u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t24 = cow_stdcall(g, rd32(COW_IMG(0x10329104u)), 1, esi);   /* kernel32.dll!CloseHandle */
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    goto L_10316095;
L_103160bd: ;
    COW_AT(103160bd)
    if (eax != 2u)
    {
    COW_AT(103160c8)
        if (eax == 3u)
        {
    COW_AT(103160cd)
            wr8(sp0 - 5u, rd8(sp0 - 5u) | 8u);
        }
    }
    else
    {
    COW_AT(103160c2)
        wr8(sp0 - 5u, rd8(sp0 - 5u) | 0x40u);
    }
    COW_AT(103160d1)
    wr32(sp0 - 0x30u, esi);
    wr32(sp0 - 0x34u, ebx);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10320b6bu), g->eax, g->ecx, edx, 1, 2, ebx, esi);
    t32 = g->edx;
    t33 = rd32(sp0 - 0x30u);
    t34 = rd8(sp0 - 5u);
    wr8(sp0 + 7u, (uint8_t)(t34 | 1u));
    t35 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ebx >> 5u) * 4u);
    wr8(sp0 + 7u, rd8(sp0 + 7u) & 0x48u);
    t36 = rd8(sp0 + 7u);
    wr8(t35 + (ebx & 0x1fu) * 0x24u + 4u, (uint8_t)(t34 | 1u));
    if ((t36 & 0x48u) != 0u)
    {
        eax = t35;
        ecx = (t33 & 0xffffff00u) | t34 | 1u;
        edx = t32;
        esi = (ebx & 0x1fu) * 0x24u;
        edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ebx >> 5u) * 4u;
        goto L_1031617e;
    }
    eax = t35;
    ecx = (t33 & 0xffffff00u) | t34 | 1u;
    edx = t32;
    esi = (ebx & 0x1fu) * 0x24u;
    edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ebx >> 5u) * 4u;
    COW_AT(10316106)
    if ((ecx & 0x80u) == 0u) goto L_1031617e;
    COW_AT(1031610b)
    if ((arg2 & 2u) == 0u) goto L_1031617e;
    COW_AT(10316111)
    wr32(sp0 - 0x30u, 2u);
    wr32(sp0 - 0x34u, 0xffffffffu);
    wr32(sp0 - 0x38u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t37 = cow_cdecl(g, COW_IMG(0x1031f155u), 3, ebx, 0xffffffffu, 2u);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x14u, t37);
    if (t37 != 0xffffffffu)
    {
        ecx = t38;
        edx = t39;
        loc_14 = t37;
        goto L_1031613f;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    COW_AT(10316126)
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t40 = cow_fastcall(g, COW_IMG(0x10319c92u), ecx, edx, 0);
    t41 = g->ecx;
    t42 = g->edx;
    if (rd32(t40) == 0x83u)
    {
        eax = t40;
        ecx = t41;
        edx = t42;
        goto L_1031617e;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
L_10316133: ;
    COW_AT(10316133)
    wr32(sp0 - 0x30u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t52 = cow_call_regs(g, COW_IMG(0x10315ddfu), g->eax, ecx, edx, 1, 3, ebx, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t53 = g->edx;
    eax = t52;
    ecx = rd32(sp0 - 0x30u);
    edx = t53;
    esi = 0xffffffffu;
    goto L_10316197;
L_1031613f: ;
    COW_AT(1031613f)
    wr8(sp0 + 0xfu, 0u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, sp0 + 0xfu);
    wr32(sp0 - 0x38u, ebx);
    g->eax = sp0 + 0xfu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t43 = cow_cdecl(g, COW_IMG(0x10319646u), 5, ebx, sp0 + 0xfu, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t44 = g->ecx;
    t45 = g->edx;
    if (t43 != 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        goto L_1031616c;
    }
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(10316156)
    if (rd8(sp0 + 0xfu) != 0x1au) goto L_1031616c;
    COW_AT(1031615c)
    t46 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x30u, t46);
    wr32(sp0 - 0x34u, ebx);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x10320e29u), ecx, 2, ebx, t46);
    t48 = g->edx;
    if (t47 == 0xffffffffu)
    {
        eax = t47;
        ecx = rd32(sp0 - 0x30u);
        edx = t48;
        goto L_10316133;
    }
    eax = t47;
    ecx = rd32(sp0 - 0x30u);
    edx = t48;
L_1031616c: ;
    COW_AT(1031616c)
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t49 = cow_cdecl(g, COW_IMG(0x1031f155u), 3, ebx, 0u, 0u);
    t50 = g->ecx;
    t51 = g->edx;
    if (t49 == 0xffffffffu)
    {
        eax = t49;
        ecx = t50;
        edx = t51;
        goto L_10316133;
    }
    eax = t49;
    ecx = t50;
    edx = t51;
L_1031617e: ;
    COW_AT(1031617e)
    if (rd8(sp0 + 7u) == 0u)
    {
    COW_AT(10316184)
        if ((arg2 & 8u) != 0u)
        {
    COW_AT(1031618a)
            t54 = rd32(edi);
            wr8(esi + t54 + 4u, rd8(esi + t54 + 4u) | 0x20u);
            eax = esi + t54 + 4u;
        }
    }
    COW_AT(10316195)
    esi = ebx;
    goto L_10316197;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10315ed6(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10315ef3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315efcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315f07u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315f10u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x8000u;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315f15u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x8000u;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315f1du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315f21u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315f2cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2 & 3u;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f2fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = (arg2 & 3u) - 1u;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f36u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f3fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f48u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f4fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f57u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f5cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f61u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f66u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f6bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f74u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f7du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f80u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        (void)sp0;
        return 1;
    }
    case 0x10315f95u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        g->edi = 0x100u;
        g->zf = (uint8_t)((arg2 & 0x700u) == 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10315f97u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315f9bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315f9fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fa7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fafu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fb8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fc1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 3u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fc6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fd6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x400u;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315fdau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10315ff4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10315ffdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316004u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg2 & 0x700u;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316010u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0x80u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316020u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316023u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316027u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316031u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316036u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316038u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x1031603cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316044u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x10316048u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x1031604eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->eax = arg2;
        g->edx = 0x700u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x1031605cu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10316076u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10316095u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103160a9u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103160b4u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103160bdu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103160c2u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103160c8u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103160cdu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103160d1u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316106u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1031610bu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316111u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316126u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316133u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1031613fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316156u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 + 0xfu);
        (void)sp0;
        return 1;
    }
    case 0x1031615cu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 + 0xfu);
        (void)sp0;
        return 1;
    }
    case 0x1031616cu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1031617eu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316184u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1031618au:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316195u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10316197u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x103161a0u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10315ed6(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10315ed6(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
