/* f_0x102a4130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102a4130(Guest* g)
{
    double d34;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    double loc_18_d;
    uint32_t loc_24;
    uint32_t loc_30;
    uint32_t loc_3c;
    uint32_t loc_48;
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
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
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
    case 0x102a4140u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4140;
    case 0x102a414fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a414f;
    case 0x102a415fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a415f;
    case 0x102a4166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4166;
    case 0x102a4173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4173;
    case 0x102a4179u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4179;
    case 0x102a4187u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4187;
    case 0x102a418du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a418d;
    case 0x102a419bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a419b;
    case 0x102a41a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41a1;
    case 0x102a41afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41af;
    case 0x102a41b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41b5;
    case 0x102a41c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41c8;
    case 0x102a41ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41ce;
    case 0x102a41dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41dc;
    case 0x102a41e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41e2;
    case 0x102a41f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41f0;
    case 0x102a41f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a41f6;
    case 0x102a4204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4204;
    case 0x102a420au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a420a;
    case 0x102a4218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4218;
    case 0x102a421eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18_d = rdf64(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a421e;
    case 0x102a422fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a422f;
    case 0x102a4235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4235;
    case 0x102a4243u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4243;
    case 0x102a424bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a424b;
    case 0x102a4254u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4254;
    case 0x102a4256u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4256;
    case 0x102a426au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a426a;
    case 0x102a4278u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4278;
    case 0x102a427cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a427c;
    case 0x102a4282u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4282;
    case 0x102a4290u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4290;
    case 0x102a4299u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4299;
    case 0x102a42a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a42a7;
    case 0x102a42aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a42aa;
    case 0x102a42b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a42b0;
    case 0x102a42beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a42be;
    case 0x102a42c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a42c1;
    default: break;
    }
#endif

    COW_AT(102a4130)
    g->eax = arg3;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    COW_RET(0x102a4140u);
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a4140)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    COW_RET(0x102a414fu);
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb5cu), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102a414f)
    if ((int32_t)arg2 >= 1)
    {
    COW_AT(102a415f)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        COW_RET(0x102a4166u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebp, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    COW_AT(102a4166)
        g->ebx = arg2;
        g->eax = rd32(arg1);
        g->ecx = ecx;
        g->edx = edx;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        COW_RET(0x102a4173u);
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda40u), t9);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
        loc_18 = t9;
    COW_AT(102a4173)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        COW_RET(0x102a4179u);
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda40u), loc_18);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(102a4179)
        t15 = rd32(arg1 + 0xcu);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = t15;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        COW_RET(0x102a4187u);
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda30u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
        loc_24 = t15;
    COW_AT(102a4187)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x20u;
        COW_RET(0x102a418du);
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda30u), loc_24);
        t20 = g->ecx;
        eax = t19;
        ecx = t20;
    COW_AT(102a418d)
        t21 = rd32(arg1 + 0x10u);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t21;
        g->esp = sp0 - 0x2cu;
        COW_RET(0x102a419bu);
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda20u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
        loc_30 = t21;
    COW_AT(102a419b)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        COW_RET(0x102a41a1u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda20u), loc_30);
        t25 = g->ecx;
        t26 = g->edx;
        ecx = t25;
        edx = t26;
    COW_AT(102a41a1)
        t27 = rd32(arg1 + 0x1cu);
        g->ebx = arg2;
        g->eax = t27;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        COW_RET(0x102a41afu);
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda10u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
        loc_3c = t27;
    COW_AT(102a41af)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        COW_RET(0x102a41b5u);
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda10u), loc_3c);
        t32 = g->ecx;
        t33 = g->edx;
        eax = t31;
        ecx = t32;
        edx = t33;
    COW_AT(102a41b5)
        d34 = (double)rdf32(arg1 + 0x20u);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        COW_RET(0x102a41c8u);
        t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda00u), cow_dlo(d34));
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
        loc_18_d = d34;
    COW_AT(102a41c8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        COW_RET(0x102a41ceu);
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda00u), cow_dlo(loc_18_d));
        t39 = g->edx;
        eax = t38;
        edx = t39;
    COW_AT(102a41ce)
        t40 = rd32(arg1 + 0x24u);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = t40;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        COW_RET(0x102a41dcu);
        t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb50u), t40);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
        loc_24 = t40;
    COW_AT(102a41dc)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x20u;
        COW_RET(0x102a41e2u);
        t44 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb50u), loc_24);
        t45 = g->ecx;
        eax = t44;
        ecx = t45;
    COW_AT(102a41e2)
        t46 = rd32(arg1 + 0x28u);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t46;
        g->esp = sp0 - 0x2cu;
        COW_RET(0x102a41f0u);
        t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb3cu), t46);
        t48 = g->ecx;
        t49 = g->edx;
        eax = t47;
        ecx = t48;
        edx = t49;
        loc_30 = t46;
    COW_AT(102a41f0)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        COW_RET(0x102a41f6u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb3cu), loc_30);
        t50 = g->ecx;
        t51 = g->edx;
        ecx = t50;
        edx = t51;
    COW_AT(102a41f6)
        t52 = rd32(arg1 + 0x2cu);
        g->ebx = arg2;
        g->eax = t52;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        COW_RET(0x102a4204u);
        t53 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb2cu), t52);
        t54 = g->ecx;
        t55 = g->edx;
        eax = t53;
        ecx = t54;
        edx = t55;
        loc_3c = t52;
    COW_AT(102a4204)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        COW_RET(0x102a420au);
        t56 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb2cu), loc_3c);
        t57 = g->edx;
        eax = t56;
        edx = t57;
    COW_AT(102a420a)
        t58 = rd32(arg1 + 0x30u);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = t58;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        COW_RET(0x102a4218u);
        t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb1cu), t58);
        t60 = g->ecx;
        t61 = g->edx;
        eax = t59;
        ecx = t60;
        edx = t61;
        loc_48 = t58;
    COW_AT(102a4218)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x44u;
        COW_RET(0x102a421eu);
        t62 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb1cu), loc_48);
        t63 = g->ecx;
        eax = t62;
        ecx = t63;
    COW_AT(102a421e)
        t64 = rd32(arg1 + 0x34u);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t64;
        g->esp = sp0 - 0x10u;
        COW_RET(0x102a422fu);
        t65 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb08u), t64);
        t66 = g->ecx;
        t67 = g->edx;
        eax = t65;
        ecx = t66;
        edx = t67;
        loc_14 = t64;
    COW_AT(102a422f)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        COW_RET(0x102a4235u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb08u), loc_14);
        t68 = g->ecx;
        t69 = g->edx;
        ecx = t68;
        edx = t69;
    COW_AT(102a4235)
        t70 = rd32(arg1 + 0x38u);
        g->ebx = arg2;
        g->eax = t70;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x102a4243u);
        t71 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdaf8u), t70);
        t72 = g->ecx;
        t73 = g->edx;
        eax = t71;
        ecx = t72;
        edx = t73;
    COW_AT(102a4243)
        if ((int32_t)arg2 >= 2)
        {
    COW_AT(102a424b)
            if ((int32_t)rd32(arg1 + 0x34u) <= 0)
            {
                eax = rd32(arg1 + 0x34u);
            }
            else
            {
    COW_AT(102a4254)
                ebx = 0u;
                ebp = 0u;
L_102a4256: ;
    COW_AT(102a4256)
                t74 = ebx + rd32(arg1 + 0x38u);
                g->ecx = arg2;
                g->edx = t74;
                g->esp = sp0;
                COW_RET(0x102a426au);
                cow_cdecl(g, COW_IMG(0x102a3f10u), 7, t74, arg2, arg3 + 2u, in_ebp, in_edi, in_esi, in_ebx);
                t75 = g->ecx;
                t76 = g->edx;
                ecx = t75;
                edx = t76;
    COW_AT(102a426a)
                if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    ebx = ebx + 0x30u;
                    ebp = ebp + 1u;
                    goto L_102a4256;
                }
                eax = rd32(arg1 + 0x34u);
    COW_AT(102a4278)
            }
        }
    COW_AT(102a427c)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        COW_RET(0x102a4282u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebp, in_edi);
        t77 = g->ecx;
        t78 = g->edx;
        ecx = t77;
        edx = t78;
    COW_AT(102a4282)
        t79 = rd32(arg1 + 0x3cu);
        g->ebx = arg2;
        g->eax = t79;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        COW_RET(0x102a4290u);
        t80 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdaecu), t79);
        t81 = g->ecx;
        t82 = g->edx;
        eax = t80;
        ecx = t81;
        edx = t82;
    COW_AT(102a4290)
        if ((int32_t)arg2 >= 2)
        {
    COW_AT(102a4299)
            t83 = rd32(arg1 + 0x3cu);
            g->eax = eax;
            g->ecx = arg3 + 2u;
            g->edx = t83;
            g->esp = sp0 - 0xcu;
            COW_RET(0x102a42a7u);
            t84 = cow_cdecl(g, COW_IMG(0x102940c0u), 3, t83, arg2, arg3 + 2u);
            t85 = g->ecx;
            t86 = g->edx;
            eax = t84;
            ecx = t85;
            edx = t86;
    COW_AT(102a42a7)
        }
    COW_AT(102a42aa)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        COW_RET(0x102a42b0u);
        t87 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t88 = g->ecx;
        t89 = g->edx;
        eax = t87;
        ecx = t88;
        edx = t89;
    COW_AT(102a42b0)
        g->ebx = arg2;
        g->esp = sp0 - 0x10u;
        COW_RET(0x102a42beu);
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd84u), arg1 + 0x40u);
    COW_AT(102a42be)
    }
    COW_AT(102a42c1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a4130(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a4140u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edi = arg3 + 1u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a414fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a415fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4166u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4173u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x1cu, COW_IMG(0x103bda40u));
        (void)sp0;
        return 1;
    }
    case 0x102a4179u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4187u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x28u, COW_IMG(0x103bda30u));
        (void)sp0;
        return 1;
    }
    case 0x102a418du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a419bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x34u, COW_IMG(0x103bda20u));
        (void)sp0;
        return 1;
    }
    case 0x102a41a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a41afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x40u, COW_IMG(0x103bda10u));
        (void)sp0;
        return 1;
    }
    case 0x102a41b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a41c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x1cu, COW_IMG(0x103bda00u));
        (void)sp0;
        return 1;
    }
    case 0x102a41ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a41dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x28u, COW_IMG(0x103bdb50u));
        (void)sp0;
        return 1;
    }
    case 0x102a41e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a41f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x34u, COW_IMG(0x103bdb3cu));
        (void)sp0;
        return 1;
    }
    case 0x102a41f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4204u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x40u, COW_IMG(0x103bdb2cu));
        (void)sp0;
        return 1;
    }
    case 0x102a420au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4218u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4cu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x4cu, COW_IMG(0x103bdb1cu));
        (void)sp0;
        return 1;
    }
    case 0x102a421eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_d;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18_d = rdf64(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a422fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x18u, COW_IMG(0x103bdb08u));
        (void)sp0;
        return 1;
    }
    case 0x102a4235u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4243u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a424bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4254u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4256u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a426au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4278u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a427cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4282u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4290u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a4299u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a42a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a42aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a42b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a42beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102a42c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
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
void cow_adapter_102a4130(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102a4130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
