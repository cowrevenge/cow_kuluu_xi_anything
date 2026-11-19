/* f_0x10183760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10183760(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a8;
    uint32_t loc_ac;
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
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10183787u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); self = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_10183787;
    case 0x101837afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); goto E_101837af;
    case 0x101837b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); goto E_101837b7;
    case 0x10183811u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10183811;
    case 0x10183822u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10183822;
    case 0x1018382eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1018382e;
    case 0x10183831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); goto E_10183831;
    case 0x10183846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10183846;
    case 0x1018385du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_1018385d;
    case 0x10183875u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183875;
    case 0x10183880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183880;
    case 0x10183893u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183893;
    case 0x101838a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); goto E_101838a8;
    case 0x101838abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101838ab;
    case 0x101838b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101838b4;
    case 0x101838bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101838bf;
    case 0x101838c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101838c7;
    case 0x101838e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_ac = rd32(sp0 - 0xacu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101838e9;
    case 0x101838efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101838ef;
    case 0x10183906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183906;
    case 0x1018391du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_1018391d;
    case 0x10183935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183935;
    case 0x1018394du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_1018394d;
    case 0x10183964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); goto E_10183964;
    case 0x1018397bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_1018397b;
    case 0x10183992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183992;
    case 0x101839a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_101839a9;
    case 0x101839c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_101839c1;
    case 0x101839d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_101839d9;
    case 0x101839e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_ac = rd32(sp0 - 0xacu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101839e1;
    case 0x101839e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101839e7;
    case 0x101839ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_101839ff;
    case 0x10183a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183a17;
    case 0x10183a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183a2f;
    case 0x10183a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183a47;
    case 0x10183a5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183a5f;
    case 0x10183a77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183a77;
    case 0x10183a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183a8f;
    case 0x10183aa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183aa7;
    case 0x10183aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10183aab;
    case 0x10183abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a0 = rd32(sp0 - 0xa0u); goto E_10183abf;
    case 0x10183ad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183ad7;
    case 0x10183aefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183aef;
    case 0x10183af9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183af9;
    case 0x10183b0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183b0f;
    case 0x10183b26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183b26;
    case 0x10183b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183b2f;
    case 0x10183b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183b4b;
    case 0x10183b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); goto E_10183b62;
    case 0x10183b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183b7a;
    case 0x10183b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183b92;
    case 0x10183ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); goto E_10183ba9;
    case 0x10183bc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183bc1;
    case 0x10183bd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10183bd6;
    case 0x10183becu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183bec;
    case 0x10183bfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183bfc;
    case 0x10183c02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10183c02;
    case 0x10183c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); goto E_10183c31;
    case 0x10183c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183c46;
    case 0x10183c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183c5f;
    case 0x10183c76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183c76;
    case 0x10183c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183c7a;
    case 0x10183c92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183c92;
    case 0x10183caau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183caa;
    case 0x10183cc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183cc2;
    case 0x10183cdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10183cda;
    case 0x10183cf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183cf2;
    case 0x10183d0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183d0a;
    case 0x10183d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183d22;
    case 0x10183d3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183d3a;
    case 0x10183d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183d48;
    case 0x10183d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10183d53;
    case 0x10183d56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10183d56;
    default: break;
    }
#endif

    COW_AT(10183760)
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x8cu, self);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr32(sp0 - 0xa0u, self + 0x38e5cu);
    wr32(sp0 - 0xa4u, arg1);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x9cu;
    t1 = cow_stdcall(g, COW_IMG(0x102d6f23u), 3, sp0 - 0x80u, arg1, self + 0x38e5cu);
    eax = t1;
    COW_AT(10183787)
    esi = sp0 - 0x80u;
    edi = sp0 - 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xa0u, arg2 + 0x70u);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x9cu;
    t2 = cow_call_regs(g, COW_IMG(0x10182070u), eax, g->ecx, g->edx, 0, 2, sp0 - 0x40u, arg2 + 0x70u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(101837af)
    if (eax == 0u)
    {
    COW_AT(101837b7)
        esi = arg1;
        edi = sp0 - 0x80u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        d4 = fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(arg2 + 0xe0u));
        wrf32(sp0 - 0x50u, (float)(double)(float)d4);
        d5 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(arg2 + 0xe4u));
        wrf32(sp0 - 0x4cu, (float)(double)(float)d5);
        d6 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(arg2 + 0xe8u));
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, 0x100u);
        wrf32(sp0 - 0x48u, (float)(double)(float)d6);
        d7 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(arg2 + 0xecu));
        wrf32(sp0 - 0x44u, (float)(double)(float)d7);
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0x9cu;
        t8 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x80u);
        eax = t8;
    COW_AT(10183811)
        if (rd8(rd32(sp0 - 0x8cu) + 0x39598u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x8cu) + 0x39598u);
            ecx = rd32(sp0 - 0x8cu);
    COW_AT(10183822)
            wr32(sp0 - 0xa0u, rd32(COW_IMG(0x1065c4d0u)));
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x1065c4d0u)));
    COW_AT(1018382e)
        }
    COW_AT(10183831)
        t9 = rd32(arg2 + 0x20u);
        wr32(sp0 - 0xa0u, t9);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa4u, t10);
        g->edx = t9;
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t10) + 0x130u), rd32(t10), 2, t10, t9);
        t11 = g->edx;
        edx = t11;
    COW_AT(10183846)
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 0xdu);
        wr32(sp0 - 0xa8u, 0u);
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xacu, t12);
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 0xdu, 1u);
    COW_AT(1018385d)
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 0xeu);
        wr32(sp0 - 0xa8u, 0u);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xacu, t13);
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 0u, 0xeu, 1u);
    COW_AT(10183875)
        if (rd32(arg2 + 0x60u) != 0u)
        {
            ebx = rd32(arg2 + 0x60u);
    COW_AT(10183880)
            wr32(sp0 - 0x88u, 0u);
            if ((int32_t)rd32(arg2 + 0x44u) <= 0) goto L_10183c7a;
            edi = 0xffffffffu;
            loc_88 = 0u;
L_10183893: ;
    COW_AT(10183893)
            wr32(sp0 - 0x84u, 0u);
            if ((int32_t)rd32(ebx) > 0)
            {
                eax = rd32(ebx + 4u);
    COW_AT(101838a8)
                esi = eax + 0x28u;
                loc_84 = 0u;
L_101838ab: ;
    COW_AT(101838ab)
                if (rd32(esi) != 0u)
                {
    COW_AT(101838b4)
                    if (rd32(esi - 0x24u) == 0u)
                    {
    COW_AT(10183b26)
                        if (edi != 1u)
                        {
    COW_AT(10183b2f)
                            wr32(sp0 - 0xa0u, 5u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t39);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t39) + 0xfcu), rd32(t39), 4, t39, 0u, 1u, 5u);
    COW_AT(10183b4b)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 2u);
                            wr32(sp0 - 0xa8u, 0u);
                            t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t40);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t40) + 0xfcu), rd32(t40), 4, t40, 0u, 2u, 1u);
    COW_AT(10183b62)
                            wr32(sp0 - 0xa0u, 3u);
                            wr32(sp0 - 0xa4u, 3u);
                            wr32(sp0 - 0xa8u, 0u);
                            t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t41);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t41) + 0xfcu), rd32(t41), 4, t41, 0u, 3u, 3u);
    COW_AT(10183b7a)
                            wr32(sp0 - 0xa0u, 6u);
                            wr32(sp0 - 0xa4u, 4u);
                            wr32(sp0 - 0xa8u, 0u);
                            t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t42);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t42) + 0xfcu), rd32(t42), 4, t42, 0u, 4u, 6u);
    COW_AT(10183b92)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 5u);
                            wr32(sp0 - 0xa8u, 0u);
                            t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t43);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t43) + 0xfcu), rd32(t43), 4, t43, 0u, 5u, 1u);
    COW_AT(10183ba9)
                            wr32(sp0 - 0xa0u, 3u);
                            wr32(sp0 - 0xa4u, 6u);
                            wr32(sp0 - 0xa8u, 0u);
                            t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t44);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t44) + 0xfcu), rd32(t44), 4, t44, 0u, 6u, 3u);
    COW_AT(10183bc1)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 1u);
                            t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t45);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t45) + 0xfcu), rd32(t45), 4, t45, 1u, 1u, 1u);
    COW_AT(10183bd6)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 4u);
                            wr32(sp0 - 0xa8u, 1u);
                            t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t46);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t46) + 0xfcu), rd32(t46), 4, t46, 1u, 4u, 1u);
                            edi = 1u;
                            loc_88 = rd32(sp0 - 0x88u);
                            loc_84 = rd32(sp0 - 0x84u);
                        }
    COW_AT(10183bec)
                        wr32(sp0 - 0xa0u, 0u);
                        wr32(sp0 - 0xa4u, 0u);
                        t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0xa8u, t47);
                        eax = t47;
                        ecx = rd32(t47);
                        edx = rd32(COW_IMG(0x1045666cu));
                        loc_a8 = t47;
                        loc_a0 = 0u;
                    }
                    else
                    {
    COW_AT(101838bf)
                        if (edi != 0u)
                        {
    COW_AT(101838c7)
                            wr32(sp0 - 0xa0u, 4u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 0u);
                            t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t14);
                            if (arg3 != 0u)
                            {
                                eax = t14;
                                ecx = rd32(t14);
                                edx = rd32(COW_IMG(0x1045666cu));
                                loc_ac = t14;
    COW_AT(101839e1)
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 6, loc_ac, 0u, 1u, 4u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
    COW_AT(101839e7)
                                wr32(sp0 - 0x98u, 2u);
                                wr32(sp0 - 0x9cu, 2u);
                                wr32(sp0 - 0xa0u, 0u);
                                t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t25);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 2u, 2u);
    COW_AT(101839ff)
                                wr32(sp0 - 0x98u, 1u);
                                wr32(sp0 - 0x9cu, 3u);
                                wr32(sp0 - 0xa0u, 0u);
                                t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t26);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 0u, 3u, 1u);
    COW_AT(10183a17)
                                wr32(sp0 - 0x98u, 6u);
                                wr32(sp0 - 0x9cu, 1u);
                                wr32(sp0 - 0xa0u, 1u);
                                t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t27);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 1u, 1u, 6u);
    COW_AT(10183a2f)
                                wr32(sp0 - 0x98u, 1u);
                                wr32(sp0 - 0x9cu, 2u);
                                wr32(sp0 - 0xa0u, 1u);
                                t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t28);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 1u, 2u, 1u);
    COW_AT(10183a47)
                                wr32(sp0 - 0x98u, 3u);
                                wr32(sp0 - 0x9cu, 3u);
                                wr32(sp0 - 0xa0u, 1u);
                                t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t29);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 4, t29, 1u, 3u, 3u);
    COW_AT(10183a5f)
                                wr32(sp0 - 0x98u, 6u);
                                wr32(sp0 - 0x9cu, 4u);
                                wr32(sp0 - 0xa0u, 0u);
                                t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t30);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t30) + 0xfcu), rd32(t30), 4, t30, 0u, 4u, 6u);
    COW_AT(10183a77)
                                wr32(sp0 - 0x98u, 0u);
                                wr32(sp0 - 0x9cu, 5u);
                                wr32(sp0 - 0xa0u, 0u);
                                t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t31);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t31) + 0xfcu), rd32(t31), 4, t31, 0u, 5u, 0u);
    COW_AT(10183a8f)
                                wr32(sp0 - 0x98u, 3u);
                                wr32(sp0 - 0x9cu, 6u);
                                wr32(sp0 - 0xa0u, 0u);
                                t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t32);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t32) + 0xfcu), rd32(t32), 4, t32, 0u, 6u, 3u);
    COW_AT(10183aa7)
                                wr32(sp0 - 0x98u, 1u);
                                wr32(sp0 - 0x9cu, 4u);
                                loc_9c = 4u;
                                loc_98 = 1u;
                            }
                            else
                            {
                                eax = t14;
                                ecx = rd32(t14);
                                edx = rd32(COW_IMG(0x1045666cu));
                                loc_ac = t14;
    COW_AT(101838e9)
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 6, loc_ac, 0u, 1u, 4u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
    COW_AT(101838ef)
                                wr32(sp0 - 0x98u, 2u);
                                wr32(sp0 - 0x9cu, 2u);
                                wr32(sp0 - 0xa0u, 0u);
                                t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t15);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 2u, 2u);
    COW_AT(10183906)
                                wr32(sp0 - 0x98u, 3u);
                                wr32(sp0 - 0x9cu, 3u);
                                wr32(sp0 - 0xa0u, 0u);
                                t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t16);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, 0u, 3u, 3u);
    COW_AT(1018391d)
                                wr32(sp0 - 0x98u, 6u);
                                wr32(sp0 - 0x9cu, 1u);
                                wr32(sp0 - 0xa0u, 1u);
                                t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t17);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 1u, 1u, 6u);
    COW_AT(10183935)
                                wr32(sp0 - 0x98u, 1u);
                                wr32(sp0 - 0x9cu, 2u);
                                wr32(sp0 - 0xa0u, 1u);
                                t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t18);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 1u, 2u, 1u);
    COW_AT(1018394d)
                                wr32(sp0 - 0x98u, 0u);
                                wr32(sp0 - 0x9cu, 3u);
                                wr32(sp0 - 0xa0u, 1u);
                                t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t19);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 1u, 3u, 0u);
    COW_AT(10183964)
                                wr32(sp0 - 0x98u, 5u);
                                wr32(sp0 - 0x9cu, 4u);
                                wr32(sp0 - 0xa0u, 0u);
                                t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t20);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 0u, 4u, 5u);
    COW_AT(1018397b)
                                wr32(sp0 - 0x98u, 2u);
                                wr32(sp0 - 0x9cu, 5u);
                                wr32(sp0 - 0xa0u, 0u);
                                t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t21);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t21) + 0xfcu), rd32(t21), 4, t21, 0u, 5u, 2u);
    COW_AT(10183992)
                                wr32(sp0 - 0x98u, 3u);
                                wr32(sp0 - 0x9cu, 6u);
                                wr32(sp0 - 0xa0u, 0u);
                                t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t22);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t22) + 0xfcu), rd32(t22), 4, t22, 0u, 6u, 3u);
    COW_AT(101839a9)
                                wr32(sp0 - 0x98u, 6u);
                                wr32(sp0 - 0x9cu, 4u);
                                wr32(sp0 - 0xa0u, 1u);
                                t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t23);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t23) + 0xfcu), rd32(t23), 4, t23, 1u, 4u, 6u);
    COW_AT(101839c1)
                                wr32(sp0 - 0x98u, 1u);
                                wr32(sp0 - 0x9cu, 5u);
                                wr32(sp0 - 0xa0u, 1u);
                                t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0xa4u, t24);
                                g->esp = sp0 - 0x94u;
                                cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 1u, 5u, 1u);
    COW_AT(101839d9)
                                wr32(sp0 - 0x98u, 0u);
                                wr32(sp0 - 0x9cu, 6u);
                                loc_9c = 6u;
                                loc_98 = 0u;
                            }
    COW_AT(10183aab)
                            wr32(sp0 - 0xa0u, 1u);
                            t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa4u, t33);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t33) + 0xfcu), rd32(t33), 2, t33, 1u);
    COW_AT(10183abf)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 1u);
                            wr32(sp0 - 0xa8u, 2u);
                            t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t34);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t34) + 0xfcu), rd32(t34), 4, t34, 2u, 1u, 1u);
    COW_AT(10183ad7)
                            wr32(sp0 - 0xa0u, 1u);
                            wr32(sp0 - 0xa4u, 4u);
                            wr32(sp0 - 0xa8u, 2u);
                            t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xacu, t35);
                            g->esp = sp0 - 0x9cu;
                            cow_thiscall(g, rd32(rd32(t35) + 0xfcu), rd32(t35), 4, t35, 2u, 4u, 1u);
                            edi = 0u;
                            loc_88 = rd32(sp0 - 0x88u);
                            loc_84 = rd32(sp0 - 0x84u);
                        }
    COW_AT(10183aef)
                        if (rd32(rd32(esi - 0x24u) + 0x40u) == 0u)
                        {
                            eax = rd32(esi - 0x24u);
    COW_AT(10183b0f)
                            t37 = rd32(eax + 0x44u);
                            wr32(sp0 - 0xa0u, t37);
                            wr32(sp0 - 0xa4u, 0u);
                            t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t38);
                            eax = t37;
                            ecx = rd32(t38);
                            edx = t38;
                            loc_a8 = t38;
                            loc_a0 = t37;
                        }
                        else
                        {
                            ecx = rd32(rd32(esi - 0x24u) + 0x40u);
    COW_AT(10183af9)
                            wr32(sp0 - 0xa0u, ecx);
                            wr32(sp0 - 0xa4u, 0u);
                            t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            wr32(sp0 - 0xa8u, t36);
                            eax = ecx;
                            edx = t36;
                            loc_a8 = t36;
                            loc_a0 = ecx;
                            ecx = rd32(t36);
                        }
                    }
    COW_AT(10183bfc)
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, rd32(ecx + 0xf4u), ecx, 3, loc_a8, 0u, loc_a0);
    COW_AT(10183c02)
                    t48 = rd32(esi - 0x10u) + rd32(rd32(sp0 - 0x8cu) + 0x38d48u);
                    wr32(rd32(sp0 - 0x8cu) + 0x38d48u, t48);
                    t49 = rd32(arg2 + 0x24u);
                    wr32(sp0 - 0xa0u, t49);
                    wr32(sp0 - 0xa4u, rd32(esi));
                    wr32(sp0 - 0xa8u, 0u);
                    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xacu, t50);
                    g->edx = rd32(esi);
                    t51 = rd32(esi);
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t50, 0u, t51, t49);
                    t52 = g->edx;
                    edx = t52;
    COW_AT(10183c31)
                    t53 = rd32(esi - 0x10u);
                    wr32(sp0 - 0xa0u, t53);
                    wr32(sp0 - 0xa4u, 0u);
                    t54 = rd32(arg2 + 0x2cu);
                    wr32(sp0 - 0xa8u, t54);
                    g->ebx = ebx;
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t54, 0u, t53);
                    loc_88 = rd32(sp0 - 0x88u);
                    loc_84 = rd32(sp0 - 0x84u);
                }
    COW_AT(10183c46)
                wr32(sp0 - 0x84u, loc_84 + 1u);
                if ((int32_t)(loc_84 + 1u) < (int32_t)rd32(ebx))
                {
                    esi = esi + 0xc0u;
                    loc_84 = loc_84 + 1u;
                    goto L_101838ab;
                }
            }
    COW_AT(10183c5f)
            wr32(sp0 - 0x88u, loc_88 + 1u);
            if ((int32_t)(loc_88 + 1u) < (int32_t)rd32(arg2 + 0x44u))
            {
                ebx = ebx + 0x24u;
                loc_88 = loc_88 + 1u;
                goto L_10183893;
            }
    COW_AT(10183c76)
            if (edi == 0u) goto L_10183cda;
L_10183c7a: ;
    COW_AT(10183c7a)
            wr32(sp0 - 0xa0u, 5u);
            wr32(sp0 - 0xa4u, 1u);
            wr32(sp0 - 0xa8u, 0u);
            t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t55);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 0u, 1u, 5u);
    COW_AT(10183c92)
            wr32(sp0 - 0xa0u, 2u);
            wr32(sp0 - 0xa4u, 2u);
            wr32(sp0 - 0xa8u, 0u);
            t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t56);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 0u, 2u, 2u);
    COW_AT(10183caa)
            wr32(sp0 - 0xa0u, 1u);
            wr32(sp0 - 0xa4u, 3u);
            wr32(sp0 - 0xa8u, 0u);
            t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t57);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 4, t57, 0u, 3u, 1u);
    COW_AT(10183cc2)
            wr32(sp0 - 0xa0u, 1u);
            wr32(sp0 - 0xa4u, 1u);
            wr32(sp0 - 0xa8u, 1u);
            t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t58);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 4, t58, 1u, 1u, 1u);
L_10183cda: ;
    COW_AT(10183cda)
            wr32(sp0 - 0xa0u, 6u);
            wr32(sp0 - 0xa4u, 4u);
            wr32(sp0 - 0xa8u, 0u);
            t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t59);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 4, t59, 0u, 4u, 6u);
    COW_AT(10183cf2)
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0xa4u, 5u);
            wr32(sp0 - 0xa8u, 0u);
            t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t60);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t60) + 0xfcu), rd32(t60), 4, t60, 0u, 5u, 0u);
    COW_AT(10183d0a)
            wr32(sp0 - 0xa0u, 2u);
            wr32(sp0 - 0xa4u, 6u);
            wr32(sp0 - 0xa8u, 0u);
            t61 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t61);
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(t61) + 0xfcu), rd32(t61), 4, t61, 0u, 6u, 2u);
    COW_AT(10183d22)
            wr32(sp0 - 0xa0u, 1u);
            wr32(sp0 - 0xa4u, 4u);
            wr32(sp0 - 0xa8u, 1u);
            t62 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xacu, t62);
            g->eax = t62;
            t63 = rd32(t62);
            g->esp = sp0 - 0x9cu;
            t64 = cow_thiscall(g, rd32(t63 + 0xfcu), t63, 4, t62, 1u, 4u, 1u);
            t65 = g->ecx;
            eax = t64;
            ecx = t65;
    COW_AT(10183d3a)
            if (rd8(rd32(sp0 - 0x8cu) + 0x39598u) == 0u)
            {
                edx = rd32(sp0 - 0x8cu);
    COW_AT(10183d48)
                wr32(sp0 - 0xa0u, rd32(COW_IMG(0x10621c00u)));
                g->esp = sp0 - 0x9cu;
                cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
    COW_AT(10183d53)
            }
        }
    }
    COW_AT(10183d56)
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = rd32(sp0 - 0x9cu);
    g->ebp = rd32(sp0 - 0x94u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10183760(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10183787u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        self = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x9cu;
        g->ebx = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101837afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x101837b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebx = arg1;
        g->ebp = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10183811u:
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
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183822u:
    {
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
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018382eu:
    {
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
        g->esp = sp0 - 0xa0u;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183831u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10183846u:
    {
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
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1018385du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10183875u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10183880u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10183893u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        wr32(sp0 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101838abu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838b4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838bfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838c7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101838e9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xacu;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xa4u, 1u);
        wr32(sp0 - 0xa0u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x101838efu:
    {
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
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183906u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018391du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183935u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018394du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183964u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018397bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183992u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101839a9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101839c1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101839d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101839e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_ac = rd32(sp0 - 0xacu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xacu;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xa4u, 1u);
        wr32(sp0 - 0xa0u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x101839e7u:
    {
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
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101839ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183a17u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183a2fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183a47u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183a5fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183a77u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183a8fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183aa7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183aabu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183abfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183ad7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10183aefu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183af9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183b0fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183b26u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183b2fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183b4bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10183b62u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10183b7au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10183b92u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10183ba9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10183bc1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10183bd6u:
    {
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
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10183becu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183bfcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa8u;
        g->ebp = arg2;
        wr32(sp0 - 0xa4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10183c02u:
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
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183c31u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183c46u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183c5fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10183c76u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183c7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183c92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183caau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183cc2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183cdau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183cf2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183d0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183d22u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183d3au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183d48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10183d53u:
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
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10183d56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10183760(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10183760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
