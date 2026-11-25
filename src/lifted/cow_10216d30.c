/* f_0x10216d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=6 */
uint32_t cow_fn_10216d30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
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
    uint32_t t90;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 188u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10216d72u: in_edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_10216d72;
    case 0x10216d8au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; goto E_10216d8a;
    case 0x10216d93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; goto E_10216d93;
    case 0x10216d9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216d9c;
    case 0x10216da6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216da6;
    case 0x10216db2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216db2;
    case 0x10216dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216dc7;
    case 0x10216dd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216dd6;
    case 0x10216ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216ddf;
    case 0x10216decu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216dec;
    case 0x10216e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e1c;
    case 0x10216e20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e20;
    case 0x10216e25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e25;
    case 0x10216e2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10216e2e;
    case 0x10216e51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e51;
    case 0x10216e5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e5a;
    case 0x10216e69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e69;
    case 0x10216e76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e76;
    case 0x10216e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e7b;
    case 0x10216e89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e89;
    case 0x10216e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e8c;
    case 0x10216e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e92;
    case 0x10216e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216e99;
    case 0x10216ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216ea6;
    case 0x10216eb2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216eb2;
    case 0x10216ebbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216ebb;
    case 0x10216ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216ef2;
    case 0x10216ef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216ef6;
    case 0x10216efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216efb;
    case 0x10216f09u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f09;
    case 0x10216f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f39;
    case 0x10216f3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f3d;
    case 0x10216f42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f42;
    case 0x10216f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f52;
    case 0x10216f57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f57;
    case 0x10216f5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f5e;
    case 0x10216f6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f6a;
    case 0x10216f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f6e;
    case 0x10216f8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f8d;
    case 0x10216f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f92;
    case 0x10216f99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216f99;
    case 0x10216fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216fa5;
    case 0x10216fb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216fb0;
    case 0x10216fb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216fb8;
    case 0x10216fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216fba;
    case 0x10216fbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216fbe;
    case 0x10216febu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216feb;
    case 0x10216fefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216fef;
    case 0x10216ff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10216ff4;
    case 0x1021700bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021700b;
    case 0x1021701au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021701a;
    case 0x10217023u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217023;
    case 0x10217033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217033;
    case 0x10217042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217042;
    case 0x1021704au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021704a;
    case 0x1021705eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); goto E_1021705e;
    case 0x10217069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217069;
    case 0x10217071u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217071;
    case 0x10217073u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217073;
    case 0x1021707bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021707b;
    case 0x102170a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102170a8;
    case 0x102170b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102170b0;
    case 0x102170ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102170cc;
    case 0x102170d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102170d0;
    case 0x102170d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102170d8;
    case 0x102170e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102170e1;
    case 0x102170f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102170f4;
    case 0x10217103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217103;
    case 0x1021710bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021710b;
    case 0x10217116u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217116;
    case 0x10217143u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217143;
    case 0x10217147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217147;
    case 0x1021714cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021714c;
    case 0x10217163u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217163;
    case 0x10217167u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217167;
    case 0x10217172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217172;
    case 0x1021717fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021717f;
    case 0x1021718eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021718e;
    case 0x1021719au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021719a;
    case 0x102171a2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102171a2;
    case 0x102171adu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102171ad;
    case 0x102171dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102171da;
    case 0x102171deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102171de;
    case 0x102171e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102171e3;
    case 0x1021721fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021721f;
    case 0x1021723bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021723b;
    case 0x1021723fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021723f;
    case 0x10217248u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217248;
    case 0x10217252u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217252;
    case 0x10217269u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); goto E_10217269;
    case 0x10217273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); goto E_10217273;
    case 0x1021727cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021727c;
    case 0x1021728bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021728b;
    case 0x10217290u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217290;
    case 0x10217296u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10217296;
    case 0x102172a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102172a1;
    case 0x102172ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102172ce;
    case 0x102172d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102172d2;
    case 0x102172d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_102172d7;
    case 0x102172edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); loc_84 = rd32(sp0 - 0x84u); goto E_102172ed;
    case 0x102172f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_102172f1;
    case 0x102172f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_102172f5;
    case 0x102172f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_102172f9;
    case 0x10217308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10217308;
    case 0x1021731au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021731a;
    case 0x1021731eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021731e;
    case 0x1021732au: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021732a;
    case 0x1021733au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021733a;
    case 0x1021733eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021733e;
    case 0x10217344u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217344;
    case 0x10217371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217371;
    case 0x10217375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10217375;
    case 0x1021737au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021737a;
    case 0x1021737fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_84 = rd32(sp0 - 0x84u); goto E_1021737f;
    default: break;
    }
#endif

    COW_AT(10216d30)
    wr32(sp0 - 0x98u, in_ebx);
    wr32(sp0 - 0x9cu, in_ebp);
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    wr8(sp0 - 0x91u, 0u);
    wr32(sp0 - 0x90u, arg1);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr8(sp0 - 0x92u, 2u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    if ((uint8_t)arg4 == 0u)
    {
        eax = sp0 - 0x80u;
        ecx = (self & 0xffffff00u) | (uint8_t)arg4;
        edx = in_edx;
        ebx = sp0 - 0x80u;
        loc_98 = in_ebx;
        loc_9c = in_ebp;
        loc_a0 = in_esi;
        loc_a4 = in_edi;
        loc_90 = arg1;
        loc_8c = sp0 - 0x80u;
        loc_88 = 0u;
        loc_84 = 0u;
    }
    else
    {
    COW_AT(10216d72)
        wr8(sp0 - 0x80u, (uint8_t)arg4);
        wr32(sp0 - 0xa8u, sp0 - 0x88u);
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        wr8(sp0 - 0x7fu, 0u);
        g->eax = sp0 - 0x88u;
        g->ecx = sp0 - 0x8cu;
        g->edx = in_edx;
        g->esp = sp0 - 0xa0u;
        t1 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 - 0x8cu, sp0 - 0x88u, in_edi);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(10216d8a)
        wr32(sp0 - 0xacu, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        cow_call_regs(g, COW_IMG(0x1011d840u), eax, g->ecx, g->edx, 1, 2, eax, rd32(sp0 - 0xa8u));
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    COW_AT(10216d93)
        t6 = rd32(sp0 - 0x8cu);
        eax = t6;
        ebx = t6;
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    COW_AT(10216d9c)
    t7 = rd8(arg1);
    if ((uint8_t)t7 == 0u)
    {
        edi = 0u;
        goto L_10217308;
    }
    edi = 0u;
L_10216da6: ;
    COW_AT(10216da6)
    if ((uint16_t)arg3 == 0u) goto L_10216dc7;
    COW_AT(10216db2)
    if ((int32_t)(loc_84 + 0xeu) > (int32_t)(uint16_t)arg3)
    {
        ecx = (uint16_t)arg3;
        edx = loc_84 + 0xeu;
        goto L_10217308;
    }
L_10216dc7: ;
    COW_AT(10216dc7)
    if (rd8(loc_90) == 0xau) goto L_10217296;
    ecx = (loc_90 & 0xffffff00u) | rd8(loc_90);
    COW_AT(10216dd6)
    if ((uint8_t)ecx == 0xdu) goto L_10217296;
    COW_AT(10216ddf)
    if (eax - (sp0 - 0x80u) <= 0x7cu) goto L_10216e2e;
    COW_AT(10216dec)
    wr8(ebx, 0u);
    wr32(sp0 - 0xa8u, arg6);
    wr32(sp0 - 0xacu, arg2);
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    t8 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb4u, t8);
    t9 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb8u, t9);
    g->eax = t8;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xa4u;
    t10 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t9, t8, sp0 - 0x80u, arg2, arg6);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(10216e1c)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10216e20)
        wr8(sp0 - 0x91u, 1u);
    }
    COW_AT(10216e25)
    edi = rd32(sp0 - 0x88u);
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_90 = rd32(sp0 - 0x90u);
L_102172f1: ;
    COW_AT(102172f1)
    eax = sp0 - 0x80u;
L_102172f5: ;
    COW_AT(102172f5)
    wr32(sp0 - 0x8cu, eax);
    loc_8c = eax;
L_102172f9: ;
    COW_AT(102172f9)
    t83 = rd8(loc_90);
    if ((uint8_t)t83 != 0u)
    {
        ebx = eax;
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        goto L_10216da6;
    }
    ecx = loc_90;
    ebx = eax;
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_a4 = rd32(sp0 - 0xa4u);
L_10217308: ;
    COW_AT(10217308)
    wr8(ebx, 0u);
    if (rd8(sp0 - 0x80u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg5;
        goto L_1021731e;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg5;
    COW_AT(1021731a)
    if ((uint8_t)ecx == 0u)
    {
        loc_84 = rd32(sp0 - 0x84u);
        goto L_1021737f;
    }
L_1021731e: ;
    COW_AT(1021731e)
    if ((uint16_t)arg3 == 0u) goto L_1021733a;
    COW_AT(1021732a)
    if ((int32_t)(rd32(sp0 - 0x84u) + 0xeu) > (int32_t)(uint16_t)arg3)
    {
        eax = (uint16_t)arg3;
        edx = rd32(sp0 - 0x84u) + 0xeu;
        loc_84 = rd32(sp0 - 0x84u);
        goto L_1021737f;
    }
L_1021733a: ;
    COW_AT(1021733a)
    if ((uint8_t)ecx != 0u)
    {
    COW_AT(1021733e)
        wr8(ebx, (uint8_t)ecx);
        wr8(ebx + 1u, 0u);
    }
    COW_AT(10217344)
    wr32(sp0 - 0xa8u, arg6);
    wr32(sp0 - 0xacu, arg2);
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    t84 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb4u, t84);
    t85 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb8u, t85);
    g->eax = t84;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xa4u;
    t86 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t85, t84, sp0 - 0x80u, arg2, arg6);
    t87 = g->edx;
    eax = t86;
    edx = t87;
    COW_AT(10217371)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10217375)
        wr8(sp0 - 0x91u, 1u);
    }
    COW_AT(1021737a)
    t88 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0x84u, t88 + 0xeu);
    loc_84 = t88 + 0xeu;
L_1021737f: ;
    COW_AT(1021737f)
    t89 = rd16(self + 0xau);
    t90 = rd8(sp0 - 0x91u);
    wr16(self + 0xau, (uint16_t)(t89 + (uint16_t)loc_84));
    g->ebx = rd32(sp0 - 0x98u);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0x9cu);
    return (eax & 0xffffff00u) | t90;
L_10216e2e: ;
    COW_AT(10216e2e)
    wr8(eax, (uint8_t)ecx);
    t12 = rd32(sp0 - 0x8cu);
    wr8(t12 + 1u, rd8(loc_90 + 1u));
    wr32(sp0 - 0xa8u, sp0 - 0x88u);
    wr32(sp0 - 0xacu, sp0 - 0x8cu);
    g->eax = sp0 - 0x8cu;
    g->ecx = t12;
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0xa0u;
    t13 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 - 0x8cu, sp0 - 0x88u, rd32(sp0 - 0xa4u));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    ebp = loc_88;
    COW_AT(10216e51)
    wr32(sp0 - 0xacu, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    cow_call_regs(g, COW_IMG(0x1011d840u), eax, g->ecx, g->edx, 1, 2, eax, rd32(sp0 - 0xa8u));
    t16 = g->ecx;
    t17 = g->edx;
    ecx = t16;
    edx = t17;
    COW_AT(10216e5a)
    if (rd32(sp0 - 0x8cu) == ebx)
    {
        eax = rd32(sp0 - 0x8cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_10217308;
    }
    eax = rd32(sp0 - 0x8cu);
    COW_AT(10216e69)
    if ((int32_t)(eax - ebx) > 2)
    {
        ecx = eax - ebx;
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_10217308;
    }
    ecx = eax - ebx;
    COW_AT(10216e76)
    if ((int32_t)ecx <= 1)
    {
        zf = ecx == 1u;
        goto L_10216e8c;
    }
    COW_AT(10216e7b)
    t18 = rd8(rd32(sp0 - 0x90u) + 1u);
    if ((uint8_t)t18 == 0u)
    {
        edx = rd32(sp0 - 0x90u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_10217308;
    }
    edx = rd32(sp0 - 0x90u);
    COW_AT(10216e89)
    zf = ecx == 1u;
L_10216e8c: ;
    COW_AT(10216e8c)
    if (!zf) goto L_10216f52;
    COW_AT(10216e92)
    t19 = rd8(sp0 - 0x92u);
    if ((uint8_t)t19 > 1u) goto L_10216ea6;
    COW_AT(10216e99)
    t20 = rd8(rd32(sp0 - 0x90u));
    if ((uint8_t)t20 != 0x20u)
    {
        edx = rd32(sp0 - 0x90u);
        goto L_10216f52;
    }
L_10216ea6: ;
    COW_AT(10216ea6)
    if (ebx == sp0 - 0x80u)
    {
        edx = sp0 - 0x80u;
        goto L_10216f52;
    }
    COW_AT(10216eb2)
    t21 = rd8(rd32(sp0 - 0x90u));
    if ((uint8_t)t21 != 0x20u)
    {
    COW_AT(10216f09)
        wr8(ebx, 0u);
        wr32(sp0 - 0xa8u, arg6);
        wr32(sp0 - 0xacu, arg2);
        wr32(sp0 - 0xb0u, sp0 - 0x80u);
        t27 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb4u, t27);
        t28 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb8u, t28);
        g->eax = t28;
        g->edx = t27;
        g->esp = sp0 - 0xa4u;
        t29 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t28, t27, sp0 - 0x80u, arg2, arg6);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    COW_AT(10216f39)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(10216f3d)
            wr8(sp0 - 0x91u, 1u);
        }
    COW_AT(10216f42)
        wr32(sp0 - 0x88u, ebp);
        wr8(sp0 - 0x92u, 1u);
        edi = ebp;
        loc_88 = ebp;
        loc_84 = rd32(sp0 - 0x84u);
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
        ecx = rd32(sp0 - 0x90u);
    COW_AT(10216ebb)
        wr8(eax, 0u);
        wr32(sp0 - 0xa8u, arg6);
        wr32(sp0 - 0xacu, arg2);
        wr32(sp0 - 0x90u, ecx + 1u);
        wr32(sp0 - 0xb0u, sp0 - 0x80u);
        t22 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb4u, t22);
        t23 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb8u, t23);
        g->eax = t22;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0xa4u;
        t24 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t23, t22, sp0 - 0x80u, arg2, arg6);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    COW_AT(10216ef2)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(10216ef6)
            wr8(sp0 - 0x91u, 1u);
        }
    COW_AT(10216efb)
        t26 = rd32(sp0 - 0x88u);
        wr8(sp0 - 0x92u, 1u);
        edi = t26;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_90 = rd32(sp0 - 0x90u);
    }
    goto L_102172f1;
L_10216f52: ;
    COW_AT(10216f52)
    if (ecx == 1u) goto L_10216f5e;
    COW_AT(10216f57)
    if (rd8(self + 0xcu) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0xcu);
        goto L_10216f8d;
    }
L_10216f5e: ;
    COW_AT(10216f5e)
    t31 = rd32(sp0 - 0x88u);
    if ((int32_t)t31 <= (int32_t)rd16(self + 8u))
    {
        edx = rd16(self + 8u);
        goto L_10216f8d;
    }
    edx = rd16(self + 8u);
    COW_AT(10216f6a)
    if ((int32_t)edi <= 0) goto L_10216f8d;
    COW_AT(10216f6e)
    wr32(sp0 - 0x88u, ebp - edi);
    t32 = rd32(sp0 - 0x84u) + 0xfu;
    wr32(sp0 - 0x84u, t32);
    wr8(sp0 - 0x92u, 1u);
    eax = ebx;
    loc_88 = ebp - edi;
    edi = 0u;
    loc_84 = t32;
    loc_90 = rd32(sp0 - 0x90u);
    goto L_102172f5;
L_10216f8d: ;
    COW_AT(10216f8d)
    if (ecx == 1u) goto L_10216f99;
    COW_AT(10216f92)
    if (rd8(self + 0xcu) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0xcu);
        goto L_1021700b;
    }
L_10216f99: ;
    COW_AT(10216f99)
    t33 = rd32(sp0 - 0x88u);
    if ((int32_t)t33 <= (int32_t)rd16(self + 8u))
    {
        edx = rd16(self + 8u);
        goto L_1021700b;
    }
    edx = rd16(self + 8u);
    COW_AT(10216fa5)
    wr8(ebx, 0u);
    if (edi != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
        goto L_10216fba;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
    COW_AT(10216fb0)
    if ((uint8_t)eax == 0u)
    {
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_10217308;
    }
    COW_AT(10216fb8)
L_10216fbe: ;
    COW_AT(10216fbe)
    wr32(sp0 - 0xa8u, arg6);
    wr32(sp0 - 0xacu, arg2);
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    t34 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb4u, t34);
    t35 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb8u, t35);
    g->eax = t34;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xa4u;
    t36 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t35, t34, sp0 - 0x80u, arg2, arg6);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(10216feb)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10216fef)
        wr8(sp0 - 0x91u, 1u);
    }
L_10216ff4: ;
    COW_AT(10216ff4)
    t38 = rd32(sp0 - 0x84u);
    wr8(sp0 - 0x92u, 1u);
    wr32(sp0 - 0x84u, t38 + 0xfu);
    loc_84 = t38 + 0xfu;
    loc_90 = rd32(sp0 - 0x90u);
L_102172ed: ;
    COW_AT(102172ed)
    wr32(sp0 - 0x88u, 0u);
    edi = 0u;
    loc_88 = 0u;
    goto L_102172f1;
L_10216fba: ;
    COW_AT(10216fba)
    if ((uint8_t)eax == 0u) goto L_10216ff4;
    goto L_10216fbe;
L_1021700b: ;
    COW_AT(1021700b)
    t39 = rd8(self + 0xcu);
    wr8(sp0 - 0x92u, (uint8_t)t39);
    if ((uint8_t)t39 != 0u) goto L_10217167;
    edx = (edx & 0xffffff00u) | t39;
    COW_AT(1021701a)
    if ((int32_t)ecx <= 1) goto L_102170d0;
    COW_AT(10217023)
    t40 = rd32(sp0 - 0x88u);
    if ((int32_t)t40 <= (int32_t)rd16(self + 8u))
    {
        edx = rd16(self + 8u);
        goto L_102170cc;
    }
    edx = rd16(self + 8u);
    COW_AT(10217033)
    wr32(sp0 - 0xa8u, COW_IMG(0x10385c60u));
    t41 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xacu, t41);
    g->eax = t41;
    g->esp = sp0 - 0xa4u;
    t42 = cow_call_regs(g, COW_IMG(0x102173a0u), g->eax, ecx, edx, 1, 2, t41, COW_IMG(0x10385c60u));
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(10217042)
    if ((uint16_t)eax == 0u)
    {
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
    COW_AT(1021704a)
        t45 = rd32(sp0 - 0x8cu);
        t46 = t45 + rd32(sp0 - 0x90u) - ebx;
        wr32(sp0 - 0x90u, t46);
        eax = t45;
        ecx = t45 - ebx;
        edx = t46;
        ebx = t45;
        loc_90 = t46;
    }
    COW_AT(1021705e)
    wr8(ebx, 0u);
    if (edi != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
        goto L_10217073;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
    COW_AT(10217069)
    if ((uint8_t)eax == 0u)
    {
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_10217308;
    }
    COW_AT(10217071)
L_1021707b: ;
    COW_AT(1021707b)
    wr32(sp0 - 0xa8u, arg6);
    wr32(sp0 - 0xacu, arg2);
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    t47 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb4u, t47);
    t48 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb8u, t48);
    g->eax = t48;
    g->edx = t47;
    g->esp = sp0 - 0xa4u;
    t49 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t48, t47, sp0 - 0x80u, arg2, arg6);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(102170a8)
    if ((uint8_t)eax == 0u) goto L_1021714c;
    COW_AT(102170b0)
    t51 = rd32(sp0 - 0x84u);
    wr8(sp0 - 0x91u, 1u);
    wr32(sp0 - 0x84u, t51 + 0xfu);
    wr8(sp0 - 0x92u, 2u);
    loc_84 = t51 + 0xfu;
    loc_90 = rd32(sp0 - 0x90u);
    goto L_102172ed;
L_10217073: ;
    COW_AT(10217073)
    if ((uint8_t)eax == 0u) goto L_1021714c;
    goto L_1021707b;
L_102170cc: ;
    COW_AT(102170cc)
    edx = (edx & 0xffffff00u) | rd8(sp0 - 0x92u);
L_102170d0: ;
    COW_AT(102170d0)
    if ((uint8_t)edx != 0u) goto L_10217167;
    COW_AT(102170d8)
    if ((int32_t)ecx <= 1) goto L_10217167;
    COW_AT(102170e1)
    if ((int32_t)(rd32(sp0 - 0x88u) * 2u - ebp) < (int32_t)rd16(self + 8u))
    {
        ecx = rd16(self + 8u);
        goto L_10217167;
    }
    ecx = rd16(self + 8u);
    COW_AT(102170f4)
    wr32(sp0 - 0xa8u, COW_IMG(0x10385c58u));
    t52 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xacu, t52);
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t53 = cow_call_regs(g, COW_IMG(0x102173a0u), g->eax, ecx, t52, 1, 2, t52, COW_IMG(0x10385c58u));
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(10217103)
    if ((uint16_t)eax == 0u) goto L_10217163;
    COW_AT(1021710b)
    wr8(ebx, 0u);
    if (rd8(sp0 - 0x80u) != 0u)
    {
    COW_AT(10217116)
        wr32(sp0 - 0xa8u, arg6);
        wr32(sp0 - 0xacu, arg2);
        wr32(sp0 - 0xb0u, sp0 - 0x80u);
        t56 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb4u, t56);
        t57 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb8u, t57);
        g->eax = t56;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0xa4u;
        t58 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t57, t56, sp0 - 0x80u, arg2, arg6);
        t59 = g->edx;
        eax = t58;
        edx = t59;
    COW_AT(10217143)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(10217147)
            wr8(sp0 - 0x91u, 1u);
        }
    }
L_1021714c: ;
    COW_AT(1021714c)
    t60 = rd32(sp0 - 0x84u);
    wr8(sp0 - 0x92u, 2u);
    wr32(sp0 - 0x84u, t60 + 0xfu);
    loc_84 = t60 + 0xfu;
    loc_90 = rd32(sp0 - 0x90u);
    goto L_102172ed;
L_10217163: ;
    COW_AT(10217163)
    eax = rd32(sp0 - 0x8cu);
L_10217167: ;
    COW_AT(10217167)
    if (rd8(self + 0xcu) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0xcu);
        goto L_1021723f;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0xcu);
    COW_AT(10217172)
    if ((int32_t)(eax - ebx) <= 1) goto L_1021723f;
    edx = eax - ebx;
    COW_AT(1021717f)
    wr32(sp0 - 0xa8u, COW_IMG(0x10385c58u));
    t61 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xacu, t61);
    g->eax = t61;
    g->esp = sp0 - 0xa4u;
    t62 = cow_call_regs(g, COW_IMG(0x102173a0u), g->eax, ecx, edx, 1, 2, t61, COW_IMG(0x10385c58u));
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(1021718e)
    if ((uint16_t)eax == 0u) goto L_1021723b;
    COW_AT(1021719a)
    if (ebx == sp0 - 0x80u)
    {
    COW_AT(1021721f)
        t72 = rd32(sp0 - 0x8cu);
        t73 = rd32(sp0 - 0x90u);
        wr8(sp0 - 0x92u, 1u);
        t74 = t72 + t73 - ebx;
        wr32(sp0 - 0x90u, t74);
        eax = t72;
        edx = t74;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = t74;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    else
    {
    COW_AT(102171a2)
        wr8(ebx, 0u);
        if (rd8(sp0 - 0x80u) != 0u)
        {
    COW_AT(102171ad)
            wr32(sp0 - 0xa8u, arg6);
            wr32(sp0 - 0xacu, arg2);
            wr32(sp0 - 0xb0u, sp0 - 0x80u);
            t65 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
            wr32(sp0 - 0xb4u, t65);
            t66 = edi + (uint32_t)(int16_t)rd16(self);
            wr32(sp0 - 0xb8u, t66);
            g->eax = t66;
            g->edx = t65;
            g->esp = sp0 - 0xa4u;
            t67 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t66, t65, sp0 - 0x80u, arg2, arg6);
            t68 = g->edx;
            eax = t67;
            edx = t68;
    COW_AT(102171da)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(102171de)
                wr8(sp0 - 0x91u, 1u);
            }
        }
    COW_AT(102171e3)
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, sp0 - 0x7fu);
        t69 = rd32(sp0 - 0x90u);
        t70 = rd8(rd32(sp0 - 0x90u));
        wr8(sp0 - 0x80u, (uint8_t)t70);
        t71 = rd8(t69 + 1u);
        wr8(sp0 - 0x7fu, (uint8_t)t71);
        wr32(sp0 - 0x8cu, sp0 - 0x7eu);
        wr32(sp0 - 0x90u, t69 + 2u);
        wr8(sp0 - 0x92u, 1u);
        eax = sp0 - 0x7eu;
        edx = ((edx | t70) & 0xffffff00u) | t71;
        edi = ebp;
        loc_8c = sp0 - 0x7eu;
        loc_90 = t69 + 2u;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    goto L_102172f9;
L_1021723b: ;
    COW_AT(1021723b)
    eax = rd32(sp0 - 0x8cu);
L_1021723f: ;
    COW_AT(1021723f)
    if (eax - ebx != 1u)
    {
        edx = eax - ebx;
        goto L_1021727c;
    }
    edx = eax - ebx;
    COW_AT(10217248)
    t75 = rd8(rd32(sp0 - 0x90u));
    if ((uint8_t)t75 != 0x5fu) goto L_1021727c;
    ebp = rd32(sp0 - 0x90u);
    COW_AT(10217252)
    t76 = rd8(ebp + 1u);
    wr8(sp0 - 0x92u, (uint8_t)((uint8_t)eax - (uint8_t)ebx));
    wr32(sp0 - 0x90u, ebp + 1u);
    if ((uint8_t)t76 != 0x5fu)
    {
        edx = (edx & 0xffffff00u) | t76;
        loc_90 = ebp + 1u;
    COW_AT(10217273)
        wr8(ebx, 0x20u);
        eax = rd32(sp0 - 0x8cu);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    else
    {
        ecx = ebp + 1u;
        edx = (edx & 0xffffff00u) | t76;
    COW_AT(10217269)
        wr32(sp0 - 0x90u, ecx + 1u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_90 = ecx + 1u;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    goto L_102172f9;
L_1021727c: ;
    COW_AT(1021727c)
    wr8(sp0 - 0x92u, (uint8_t)((uint8_t)eax - (uint8_t)ebx));
    if (rd8(self + 0xcu) != 0u)
    {
    COW_AT(1021728b)
        wr8(sp0 - 0x92u, 1u);
    }
    COW_AT(10217290)
    t77 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0x90u, edx + t77);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_90 = edx + t77;
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    goto L_102172f9;
L_10217296: ;
    COW_AT(10217296)
    wr8(ebx, 0u);
    if (rd8(sp0 - 0x80u) != 0u)
    {
    COW_AT(102172a1)
        wr32(sp0 - 0xa8u, arg6);
        wr32(sp0 - 0xacu, arg2);
        wr32(sp0 - 0xb0u, sp0 - 0x80u);
        t78 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb4u, t78);
        t79 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb8u, t79);
        g->eax = t79;
        g->esp = sp0 - 0xa4u;
        t80 = cow_stdcall(g, COW_IMG(0x10216ce0u), 5, t79, t78, sp0 - 0x80u, arg2, arg6);
        eax = t80;
    COW_AT(102172ce)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(102172d2)
            wr8(sp0 - 0x91u, 1u);
        }
    }
    COW_AT(102172d7)
    t81 = rd32(sp0 - 0x84u) + 0x10u;
    wr32(sp0 - 0x84u, t81);
    t82 = rd32(sp0 - 0x90u) + 1u;
    wr32(sp0 - 0x90u, t82);
    edx = t81;
    loc_84 = t81;
    loc_90 = t82;
    goto L_102172ed;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10216d30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10216d72u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        in_edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x9cu);
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->eax = sp0 - 0x80u;
        g->ecx = (self & 0xffffff00u) | (uint8_t)arg4;
        g->ebx = sp0 - 0x80u;
        g->ebp = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x90u, arg1);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        wr32(sp0 - 0x88u, 0u);
        wr32(sp0 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10216d8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        g->ebx = sp0 - 0x80u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10216d93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        g->ebx = sp0 - 0x80u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10216d9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10216da6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216db2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10216dc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216dd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216ddfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216decu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216e1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216e20u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216e25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216e2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216e51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10216e5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10216e69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216e76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216e7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216e89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216e8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216e92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216e99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216ea6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216eb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->edx = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216ebbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->edx = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216ef2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216ef6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216efbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->edx = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10216f39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216f99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216fa5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216fb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216fb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216fbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216fbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216febu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216fefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10216ff4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021700bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021701au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217023u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217033u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217042u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1021704au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021705eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217069u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217071u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217073u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021707bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102170a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102170b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102170ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102170d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102170d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102170e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102170f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217103u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1021710bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217116u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217143u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217147u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021714cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217163u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217167u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217172u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021717fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021718eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1021719au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102171a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ecx = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x102171adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ecx = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x102171dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102171deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102171e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021721fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ecx = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1021723bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021723fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217248u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217252u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217269u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217273u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021727cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021728bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217290u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217296u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102172a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102172ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102172d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102172d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102172edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_90;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102172f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102172f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102172f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217308u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021731au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021731eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021732au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1021733au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021733eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217344u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217371u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10217375u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021737au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1021737fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10216d30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10216d30(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
