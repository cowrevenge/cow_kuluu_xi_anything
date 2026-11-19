/* f_0x10167f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10167f50(Guest* g)
{
    double d10;
    double d12;
    double d29;
    double d30;
    double d32;
    double d33;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t11;
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
    uint32_t t3;
    uint32_t t31;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10167faau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10167faa;
    case 0x10167fb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10167fb3;
    case 0x10167fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10167fba;
    case 0x1016802au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016802a;
    case 0x1016805fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016805f;
    case 0x1016806au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016806a;
    case 0x1016807cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016807c;
    case 0x101680adu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680ad;
    case 0x101680afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680af;
    case 0x101680b1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680b1;
    case 0x101680d4u: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680d4;
    case 0x101680dau: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680da;
    case 0x101680dfu: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680df;
    case 0x101680e6u: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680e6;
    case 0x101680ebu: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680eb;
    case 0x101680f2u: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101680f2;
    case 0x10168101u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168101;
    case 0x10168111u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168111;
    case 0x10168121u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168121;
    case 0x10168131u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168131;
    case 0x101681ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101681dd;
    case 0x10168206u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168206;
    case 0x1016822fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016822f;
    case 0x10168236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168236;
    case 0x1016824eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016824e;
    case 0x10168256u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168256;
    case 0x10168274u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168274;
    case 0x10168276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168276;
    case 0x10168288u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168288;
    case 0x10168295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168295;
    case 0x10168297u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168297;
    case 0x1016829du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016829d;
    case 0x101682a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682a6;
    case 0x101682abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682ab;
    case 0x101682b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682b2;
    case 0x101682bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682bc;
    case 0x101682c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682c1;
    case 0x101682c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682c7;
    case 0x101682dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682da;
    case 0x101682deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682de;
    case 0x101682ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101682eb;
    case 0x10168301u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168301;
    case 0x10168305u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168305;
    case 0x1016830fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016830f;
    case 0x1016831au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016831a;
    case 0x10168324u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168324;
    case 0x10168332u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168332;
    case 0x10168350u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168350;
    case 0x1016835au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016835a;
    case 0x10168368u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168368;
    case 0x10168386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168386;
    case 0x10168390u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168390;
    case 0x1016839eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016839e;
    case 0x101683bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101683bc;
    case 0x101683c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101683c6;
    case 0x101683d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101683d0;
    case 0x101683eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101683ee;
    case 0x10168407u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168407;
    case 0x1016840du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016840d;
    case 0x1016841du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016841d;
    case 0x10168424u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168424;
    case 0x1016842cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016842c;
    case 0x10168431u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168431;
    case 0x10168440u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10168440;
    case 0x1016844du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1016844d;
    default: break;
    }
#endif

    COW_AT(10167f50)
    t1 = rd8(sp0 + 0x10u);
    t2 = rd32(sp0 + 0xcu);
    wr8(self + 0x34138u, t1 & 1u);
    wr8(self + 0x34139u, t1 >> 2u & 1u);
    wr32(self + 0x1807cu, 0u);
    wr32(self + 0x6cu, t2);
    wr8(self + 0x3413au, t1 >> 3u & 1u);
    wr8(self + 0x3413bu, t1 >> 4u & 1u);
    if ((int32_t)t2 <= 25)
    {
    COW_AT(10167fb3)
        wr32(self + 0x70u, 0x80u);
    }
    else
    {
    COW_AT(10167faa)
        wr32(self + 0x70u, 0xc0u);
    }
    COW_AT(10167fba)
    t3 = rd32(arg1 + 0x10u);
    wr32(self + 0x30u, t3);
    t4 = rd32(arg1 + 0x14u);
    wr32(self + 0x34u, t4);
    t5 = rd32(arg1 + 0x18u);
    wr32(self + 0x38u, t5);
    t6 = rd32(arg1 + 0x1cu);
    wr32(self + 0x3cu, t6);
    t7 = rd32(self + 0x30u) * t5;
    t8 = rd32(self + 0x3cu);
    wr32(sp0 + 0x10u, t7);
    t9 = rd32(self + 0x34u);
    d10 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x40u, (float)d10);
    wr32(sp0 + 0x10u, t8 * t9);
    t11 = (uint32_t)((int32_t)(t7 + ((uint32_t)((int32_t)t7 >> 0x1fu) & 3u)) >> 2u);
    d12 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(self + 0x48u, t11);
    wrf32(self + 0x44u, (float)d12);
    t13 = (uint32_t)((int32_t)(t8 * t9 + ((uint32_t)((int32_t)(t8 * t9) >> 0x1fu) & 3u)) >> 2u);
    wr32(self + 0x4cu, t13);
    if (rd32(arg1 + 0xcu) != 0u)
    {
        eax = rd32(arg1 + 0xcu);
    COW_AT(1016802a)
        wr32(self + 0x50u, rd32(eax));
        t14 = rd32(arg1 + 8u) + rd32(eax + 4u);
        wr32(self + 0x54u, t14);
        t15 = rd32(eax + 8u);
        wr32(self + 0x58u, t15);
        t16 = rd32(arg1 + 8u) + rd32(eax + 0xcu);
        wr32(self + 0x5cu, t16);
        t17 = rd32(eax + 0x18u);
        wr32(self + 0x64u, t17);
        t18 = rd32(arg1 + 8u) + rd32(eax + 0x14u);
        wr32(self + 0x68u, t18);
        if (rd32(arg1) != 1u)
        {
            edx = t18;
        }
        else
        {
            edx = t18;
    COW_AT(1016805f)
            t19 = rd32(arg1 + 8u) + rd32(eax + 0x10u);
            wr32(self + 0x60u, t19);
        }
    COW_AT(1016806a)
        t20 = rd32(self + 0x54u);
        t21 = rd32(self + 0x50u);
        wr32(sp0 + 0x10u, 0u);
        if ((int32_t)t21 <= 0)
        {
            loc_20 = 0u;
            goto L_10168276;
        }
        ebx = t20;
        loc_20 = 0u;
L_1016807c: ;
    COW_AT(1016807c)
        t22 = rd32(ebx) + rd32(arg1 + 8u);
        t23 = rd32(ebx + 8u);
        t24 = rd32(ebx + 4u);
        wr32(ebx, t22);
        t25 = t24 + rd32(arg1 + 8u);
        wr32(ebx + 4u, t25);
        t26 = t23 + rd32(arg1 + 8u);
        t27 = rd32(arg1 + 8u);
        t28 = rd16(ebx + 0xcu);
        wr32(ebx + 8u, t26);
        if ((int16_t)t28 > 0)
        {
            eax = t27;
            esi = t26;
    COW_AT(101680ad)
            ebp = arg1;
            loc_8 = 0u;
L_101680b1: ;
    COW_AT(101680b1)
            if (rd32(rd32(ebx + 4u) + (rd16(esi + 6u) & 0x7fffu) * 0xcu) != 0xffc00000u)
            {
                ecx = rd32(ebx + 4u) + (rd16(esi + 6u) & 0x7fffu) * 0xcu;
            }
            else
            {
                ecx = rd32(ebx + 4u) + (rd16(esi + 6u) & 0x7fffu) * 0xcu;
    COW_AT(101680d4)
                wr32(ecx, 0u);
                loc_20 = 1u;
            }
    COW_AT(101680da)
            if (rd32(ecx + 4u) == 0xffc00000u)
            {
    COW_AT(101680df)
                wr32(ecx + 4u, 0u);
                loc_20 = 1u;
            }
    COW_AT(101680e6)
            if (rd32(ecx + 8u) == 0xffc00000u)
            {
    COW_AT(101680eb)
                wr32(ecx + 8u, 0u);
                loc_20 = 1u;
            }
    COW_AT(101680f2)
            if ((double)rdf32(ecx) != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x103295d8u)), 0u) | 0xffc00000u;
            }
            else
            {
                eax = (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x103295d8u)), 0u) | 0xffc00000u;
    COW_AT(10168101)
                d29 = (double)rdf32(ecx + 4u);
                if (d29 != (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10168111)
                    d30 = (double)rdf32(ecx + 8u);
                    if (d30 != (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10168121)
                        wr32(ecx, 0u);
                        wr32(ecx + 4u, 0x358637bdu);
                        wr32(ecx + 8u, 0u);
                        loc_20 = 1u;
                    }
                }
            }
    COW_AT(10168131)
            t31 = (ebp & 0xffff0000u) | rd16(esi + 2u);
            d32 = (double)(float)fr(g, (double)rdf32(rd32(ebx) + (t31 & 0x3fffu) * 0xcu) - (double)rdf32(rd32(ebx) + (rd16(esi + 4u) & 0x3fffu) * 0xcu));
            d33 = (double)(float)fr(g, (double)rdf32(rd32(ebx) + (t31 & 0x3fffu) * 0xcu + 4u) - (double)rdf32(rd32(ebx) + (rd16(esi + 4u) & 0x3fffu) * 0xcu + 4u));
            t34 = rd32(ebx);
            t35 = rd16(esi);
            t36 = rd16(esi + 4u);
            d37 = fr(g, (double)rdf32(rd32(ebx) + (t31 & 0x3fffu) * 0xcu + 8u) - (double)rdf32(rd32(ebx) + (rd16(esi + 4u) & 0x3fffu) * 0xcu + 8u));
            d38 = fr(g, (double)rdf32(rd32(ebx) + (rd16(esi) & 0x7fffu) * 0xcu + 8u) - (double)rdf32(rd32(ebx) + (t31 & 0x3fffu) * 0xcu + 8u));
            d39 = fr(g, (double)rdf32(rd32(ebx) + (rd16(esi) & 0x7fffu) * 0xcu + 4u) - (double)rdf32(rd32(ebx) + (t31 & 0x3fffu) * 0xcu + 4u));
            d40 = fr(g, (double)rdf32(rd32(ebx) + (rd16(esi) & 0x7fffu) * 0xcu) - (double)rdf32(rd32(ebx) + (t31 & 0x3fffu) * 0xcu));
            wrf32(sp0 + 0xcu, (float)d37);
            d41 = (double)(float)fr(g, (double)rdf32(t34 + (t36 & 0x3fffu) * 0xcu) - (double)rdf32(t34 + (t35 & 0x7fffu) * 0xcu));
            d42 = (double)(float)fr(g, (double)rdf32(t34 + (t36 & 0x3fffu) * 0xcu + 4u) - (double)rdf32(t34 + (t35 & 0x7fffu) * 0xcu + 4u));
            d43 = fr(g, (double)rdf32(t34 + (t36 & 0x3fffu) * 0xcu + 8u) - (double)rdf32(t34 + (t35 & 0x7fffu) * 0xcu + 8u));
            wr16(esi + 2u, t31 & 0xbfffu);
            d44 = fr(g, fr(g, fr(g, d38 * d38) + fr(g, d39 * d39)) + fr(g, d40 * d40));
            if (d44 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                ecx = t31 & 0xbfffu;
                ebp = t31;
                goto L_1016822f;
            }
            eax = (t34 + (t35 & 0x7fffu) * 0xcu & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            ecx = t31 & 0xbfffu;
            ebp = t31;
            loc_18_f = d32;
            loc_1c_f = d33;
            loc_c_f = d41;
            loc_10_f = d42;
            loc_14_f = (double)(float)d43;
    COW_AT(101681dd)
            d45 = (double)rdf32(sp0 + 0xcu);
            d46 = fr(g, fr(g, fr(g, d45 * d45) + fr(g, loc_1c_f * loc_1c_f)) + fr(g, loc_18_f * loc_18_f));
            if (d46 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_1016822f;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10168206)
            d47 = fr(g, fr(g, fr(g, loc_14_f * loc_14_f) + fr(g, loc_10_f * loc_10_f)) + fr(g, loc_c_f * loc_c_f));
            if (d47 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_10168236;
L_1016822f: ;
    COW_AT(1016822f)
            wr16(esi + 2u, (uint16_t)((ecx & 0xffff00ffu) | (ecx >> 8u | 0x40u) << 8u));
L_10168236: ;
    COW_AT(10168236)
            if ((int32_t)(loc_8 + 1u) < (int16_t)rd16(ebx + 0xcu))
            {
                eax = loc_8 + 1u;
                esi = esi + 8u;
                loc_8 = loc_8 + 1u;
                goto L_101680af;
            }
    COW_AT(1016824e)
        }
    COW_AT(10168256)
        t48 = rd32(sp0 + 0x10u) + 1u;
        t49 = rd16(ebx + 0xcu);
        t50 = rd32(ebx + 8u);
        t51 = rd32(sp0 + 0x10u);
        t52 = rd32(self + 0x50u);
        wr32(sp0 + 0x10u, t48);
        if ((int32_t)(t51 + 1u) < (int32_t)t52)
        {
            ebx = t50 + (uint32_t)(int16_t)t49 * 8u;
            goto L_1016807c;
        }
        edx = (uint32_t)(int16_t)t49;
    COW_AT(10168274)
L_10168276: ;
    COW_AT(10168276)
        t53 = rd32(self + 0x5cu);
        t54 = rd32(self + 0x58u);
        wr32(sp0 + 0x10u, 0u);
        if ((int32_t)t54 <= 0) goto L_101682eb;
        ecx = t53;
        esi = 0u;
L_10168288: ;
    COW_AT(10168288)
        if ((int32_t)(rd32(ecx) & 0x7ffu) <= 0)
        {
            eax = ecx + 4u;
        }
        else
        {
            eax = ecx + 4u;
            ecx = rd32(ecx) & 0x7ffu;
    COW_AT(10168295)
            edx = ecx;
L_10168297: ;
    COW_AT(10168297)
            if (rd32(eax) == 0u)
            {
    COW_AT(101682a6)
                esi = 1u;
            }
            else
            {
                ecx = rd32(eax);
    COW_AT(1016829d)
                t55 = ecx + rd32(arg1 + 8u);
                wr32(eax, t55);
            }
    COW_AT(101682ab)
            if (rd32(eax + 4u) == 0u)
            {
    COW_AT(101682bc)
                esi = 1u;
            }
            else
            {
                ecx = rd32(eax + 4u);
    COW_AT(101682b2)
                t56 = ecx + rd32(arg1 + 8u);
                wr32(eax + 4u, t56);
            }
    COW_AT(101682c1)
            if (edx != 1u)
            {
                eax = eax + 8u;
                edx = edx - 1u;
                goto L_10168297;
            }
            eax = eax + 8u;
        }
    COW_AT(101682c7)
        t57 = rd32(sp0 + 0x10u) + 1u;
        t58 = rd32(self + 0x58u);
        t59 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t57);
        if ((int32_t)(t59 + 1u) < (int32_t)t58)
        {
            ecx = eax + 4u;
            goto L_10168288;
        }
        ecx = eax + 4u;
        eax = t57;
        edx = t58;
    COW_AT(101682da)
        if (esi != 0u)
        {
    COW_AT(101682de)
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            t60 = g->edx;
            edx = t60;
        }
L_101682eb: ;
    COW_AT(101682eb)
        t61 = rd32(self + 0x68u);
        t62 = rd32(self + 0x64u);
        wr32(sp0 + 0x10u, 0u);
        if ((int32_t)t62 <= 0)
        {
            ecx = t62;
        }
        else
        {
            eax = t61;
    COW_AT(10168301)
L_10168305: ;
    COW_AT(10168305)
            if (rd32(eax + 0xa8u) != 0u)
            {
                ecx = rd32(eax + 0xa8u);
    COW_AT(1016830f)
                t63 = ecx + rd32(arg1 + 8u);
                wr32(eax + 0xa8u, t63);
                edx = t63;
            }
    COW_AT(1016831a)
            if (rd8(eax + 0xacu) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0xacu);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0xacu);
    COW_AT(10168324)
                if ((rd32(eax + 0xa4u) & 0x10000000u) == 0u)
                {
                    ecx = rd32(eax + 0xa4u);
    COW_AT(10168332)
                    t64 = rd8(arg2 + (uint8_t)edx - 1u);
                    wr8(eax + 0xacu, (uint8_t)(t64 + 1u));
                    wr32(eax + 0xa4u, ecx | 0x10000000u);
                    edx = (t64 & 0xffffff00u) | (uint8_t)(t64 + 1u);
                }
            }
    COW_AT(10168350)
            if (rd8(eax + 0xadu) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0xadu);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0xadu);
    COW_AT(1016835a)
                if ((rd32(eax + 0xa4u) & 0x20000000u) == 0u)
                {
                    ecx = rd32(eax + 0xa4u);
    COW_AT(10168368)
                    t65 = rd8(arg2 + (uint8_t)edx - 1u);
                    wr8(eax + 0xadu, (uint8_t)(t65 + 1u));
                    wr32(eax + 0xa4u, ecx | 0x20000000u);
                    edx = (t65 & 0xffffff00u) | (uint8_t)(t65 + 1u);
                }
            }
    COW_AT(10168386)
            if (rd8(eax + 0xaeu) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0xaeu);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0xaeu);
    COW_AT(10168390)
                if ((rd32(eax + 0xa4u) & 0x40000000u) == 0u)
                {
                    ecx = rd32(eax + 0xa4u);
    COW_AT(1016839e)
                    t66 = rd8(arg2 + (uint8_t)edx - 1u);
                    wr8(eax + 0xaeu, (uint8_t)(t66 + 1u));
                    wr32(eax + 0xa4u, ecx | 0x40000000u);
                    edx = (t66 & 0xffffff00u) | (uint8_t)(t66 + 1u);
                }
            }
    COW_AT(101683bc)
            if (rd8(eax + 0xafu) != 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(eax + 0xafu);
    COW_AT(101683c6)
                if ((int32_t)rd32(eax + 0xa4u) >= 0)
                {
                    ecx = rd32(eax + 0xa4u);
    COW_AT(101683d0)
                    wr8(eax + 0xafu, (uint8_t)(rd8(arg2 + (uint8_t)edx - 1u) + 1u));
                    wr32(eax + 0xa4u, ecx | 0x80000000u);
                }
            }
    COW_AT(101683ee)
            t67 = rd32(sp0 + 0x10u) + 1u;
            t68 = rd32(self + 0x70u);
            t69 = rd32(self + 0x64u);
            t70 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t67);
            if ((int32_t)(t70 + 1u) < (int32_t)t69)
            {
                eax = eax + t68;
                edx = t69;
                goto L_10168305;
            }
            ecx = t67;
            edx = t69;
        }
    COW_AT(10168407)
        if (rd32(arg1) == 1u)
        {
    COW_AT(1016840d)
            if ((int32_t)(rd32(self + 0x48u) * rd32(self + 0x4cu)) <= 0)
            {
                edx = rd32(self + 0x60u);
                goto L_10168431;
            }
            eax = 0u;
            edx = rd32(self + 0x60u);
            esi = rd32(self + 0x48u) * rd32(self + 0x4cu);
L_1016841d: ;
    COW_AT(1016841d)
            if (rd32(eax * 4u + edx) == 0u)
            {
                ecx = rd32(eax * 4u + edx);
            }
            else
            {
                ecx = rd32(eax * 4u + edx);
    COW_AT(10168424)
                t71 = ecx + rd32(arg1 + 8u);
                wr32(eax * 4u + edx, t71);
            }
    COW_AT(1016842c)
            if ((int32_t)(eax + 1u) < (int32_t)esi)
            {
                eax = eax + 1u;
                goto L_1016841d;
            }
        }
L_10168431: ;
    COW_AT(10168431)
        t72 = rd32(arg1 + 8u);
        wr32(self + 8u, t72);
        if (loc_20 != 0u)
        {
            eax = loc_20;
    COW_AT(10168440)
            g->esp = sp0 - 0x30u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        }
    }
    COW_AT(1016844d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_101680af: ;
    COW_AT(101680af)
    goto L_101680b1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10167f50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10167faau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10167fb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10167fbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1016802au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->ebp = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1016805fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1016806au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1016807cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101680adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        g->ebp = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101680afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101680b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101680d4u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->eax = 0xffc00000u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101680dau:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->eax = 0xffc00000u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101680dfu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->eax = 0xffc00000u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101680e6u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->eax = 0xffc00000u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101680ebu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->eax = 0xffc00000u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101680f2u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->eax = 0xffc00000u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10168101u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10168111u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10168121u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10168131u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101681ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10168206u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1016822fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10168236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1016824eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10168256u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10168274u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168276u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10168288u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168295u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168297u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016829du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101682ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168301u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168305u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016830fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016831au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10168324u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10168332u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10168350u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016835au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10168368u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10168386u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10168390u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016839eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101683bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101683c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101683d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101683eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10168407u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016840du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016841du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168424u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016842cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168431u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10168440u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1016844du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_8;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10167f50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10167f50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
