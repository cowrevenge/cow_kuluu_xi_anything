/* f_0x1021b3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1021b3f0(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
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
    case 0x1021b42du: in_edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_1021b42d;
    case 0x1021b445u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; goto E_1021b445;
    case 0x1021b44eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; goto E_1021b44e;
    case 0x1021b457u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b457;
    case 0x1021b461u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b461;
    case 0x1021b46du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b46d;
    case 0x1021b482u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b482;
    case 0x1021b48du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b48d;
    case 0x1021b498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b498;
    case 0x1021b4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b4c5;
    case 0x1021b4e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b4e8;
    case 0x1021b4f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b4f5;
    case 0x1021b525u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b525;
    case 0x1021b536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b536;
    case 0x1021b559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b559;
    case 0x1021b562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b562;
    case 0x1021b571u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b571;
    case 0x1021b57eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b57e;
    case 0x1021b583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b583;
    case 0x1021b591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b591;
    case 0x1021b594u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b594;
    case 0x1021b59au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b59a;
    case 0x1021b5a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b5a1;
    case 0x1021b5aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b5ae;
    case 0x1021b5bau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b5ba;
    case 0x1021b5c3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b5c3;
    case 0x1021b5f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b5f8;
    case 0x1021b60eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b60e;
    case 0x1021b63eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b63e;
    case 0x1021b656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b656;
    case 0x1021b65bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b65b;
    case 0x1021b662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b662;
    case 0x1021b66eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b66e;
    case 0x1021b672u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b672;
    case 0x1021b695u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b695;
    case 0x1021b69au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b69a;
    case 0x1021b6a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b6a1;
    case 0x1021b6adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b6ad;
    case 0x1021b6b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b6b8;
    case 0x1021b6c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b6c0;
    case 0x1021b6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b6c2;
    case 0x1021b6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b6c6;
    case 0x1021b6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b6f3;
    case 0x1021b716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b716;
    case 0x1021b725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b725;
    case 0x1021b72eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b72e;
    case 0x1021b73eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b73e;
    case 0x1021b74du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b74d;
    case 0x1021b755u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b755;
    case 0x1021b769u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); goto E_1021b769;
    case 0x1021b774u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b774;
    case 0x1021b77cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b77c;
    case 0x1021b77eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b77e;
    case 0x1021b782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b782;
    case 0x1021b7afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b7af;
    case 0x1021b7d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b7d2;
    case 0x1021b7d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b7d6;
    case 0x1021b7deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b7de;
    case 0x1021b7e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b7e7;
    case 0x1021b7fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b7fa;
    case 0x1021b809u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b809;
    case 0x1021b811u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b811;
    case 0x1021b81cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b81c;
    case 0x1021b849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b849;
    case 0x1021b86cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b86c;
    case 0x1021b870u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b870;
    case 0x1021b87bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b87b;
    case 0x1021b888u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b888;
    case 0x1021b897u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b897;
    case 0x1021b8a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b8a3;
    case 0x1021b8abu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b8ab;
    case 0x1021b8b6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b8b6;
    case 0x1021b8e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b8e3;
    case 0x1021b91cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b91c;
    case 0x1021b935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b935;
    case 0x1021b939u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b939;
    case 0x1021b942u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b942;
    case 0x1021b94cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b94c;
    case 0x1021b963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); goto E_1021b963;
    case 0x1021b966u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); goto E_1021b966;
    case 0x1021b96fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b96f;
    case 0x1021b97eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b97e;
    case 0x1021b983u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b983;
    case 0x1021b989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b989;
    case 0x1021b98du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b98d;
    case 0x1021b99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1021b99c;
    case 0x1021b9aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b9ae;
    case 0x1021b9b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b9b2;
    case 0x1021b9c2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b9c2;
    case 0x1021b9cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b9cf;
    case 0x1021b9d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b9d3;
    case 0x1021b9ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021b9dd;
    case 0x1021ba06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021ba06;
    case 0x1021ba0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021ba0d;
    case 0x1021ba1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1021ba1e;
    default: break;
    }
#endif

    COW_AT(1021b3f0)
    wr32(sp0 - 0x98u, in_ebx);
    wr32(sp0 - 0x9cu, in_ebp);
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0x90u, arg2);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr8(sp0 - 0x91u, 2u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    if ((uint8_t)arg5 == 0u)
    {
        eax = sp0 - 0x80u;
        ecx = (self & 0xffffff00u) | (uint8_t)arg5;
        ebx = sp0 - 0x80u;
        loc_98 = in_ebx;
        loc_9c = in_ebp;
        loc_a0 = in_esi;
        loc_a4 = in_edi;
        loc_90 = arg2;
        loc_8c = sp0 - 0x80u;
        loc_88 = 0u;
        loc_84 = 0u;
    }
    else
    {
    COW_AT(1021b42d)
        wr8(sp0 - 0x80u, (uint8_t)arg5);
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
    COW_AT(1021b445)
        wr32(sp0 - 0xacu, eax);
        g->ecx = ecx;
        g->esp = sp0 - 0xa4u;
        cow_call_regs(g, COW_IMG(0x1011d840u), eax, g->ecx, g->edx, 1, 2, eax, rd32(sp0 - 0xa8u));
        t4 = g->ecx;
        ecx = t4;
    COW_AT(1021b44e)
        t5 = rd32(sp0 - 0x8cu);
        eax = t5;
        ebx = t5;
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    COW_AT(1021b457)
    t6 = rd8(arg2);
    if ((uint8_t)t6 == 0u)
    {
        edi = 0u;
        goto L_1021b99c;
    }
    edi = 0u;
L_1021b461: ;
    COW_AT(1021b461)
    if ((uint16_t)arg4 == 0u) goto L_1021b482;
    COW_AT(1021b46d)
    if ((int32_t)(loc_84 + 0xeu) > (int32_t)(uint16_t)arg4)
    {
        ecx = (uint16_t)arg4;
        goto L_1021b99c;
    }
L_1021b482: ;
    COW_AT(1021b482)
    if (rd8(loc_90) != 0xau)
    {
        ecx = (loc_90 & 0xffffff00u) | rd8(loc_90);
        goto L_1021b4e8;
    }
    COW_AT(1021b48d)
    wr8(ebx, 0u);
    if (rd8(sp0 - 0x80u) != 0u)
    {
    COW_AT(1021b498)
        wr32(sp0 - 0xa8u, arg3);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        t7 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb0u, t7);
        t8 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb4u, t8);
        wr32(sp0 - 0xb8u, arg1);
        g->esp = sp0 - 0xa4u;
        cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t8, t7, sp0 - 0x80u, arg3);
    }
    COW_AT(1021b4c5)
    wr32(sp0 - 0x88u, 0u);
    t9 = rd32(sp0 - 0x84u) + 0x10u;
    wr32(sp0 - 0x84u, t9);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    eax = sp0 - 0x80u;
    ecx = rd32(sp0 - 0x90u) + 1u;
    edi = 0u;
    loc_88 = 0u;
    loc_84 = t9;
    loc_8c = sp0 - 0x80u;
L_1021b989: ;
    COW_AT(1021b989)
    wr32(sp0 - 0x90u, ecx);
    loc_90 = ecx;
L_1021b98d: ;
    COW_AT(1021b98d)
    t69 = rd8(loc_90);
    if ((uint8_t)t69 != 0u)
    {
        ebx = eax;
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        goto L_1021b461;
    }
    ebx = eax;
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_a4 = rd32(sp0 - 0xa4u);
L_1021b99c: ;
    COW_AT(1021b99c)
    wr8(ebx, 0u);
    if (rd8(sp0 - 0x80u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg6;
        goto L_1021b9b2;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg6;
    COW_AT(1021b9ae)
    if ((uint8_t)ecx == 0u) goto L_1021ba1e;
L_1021b9b2: ;
    COW_AT(1021b9b2)
    if ((uint16_t)arg4 == 0u)
    {
        eax = rd32(sp0 - 0x84u);
        goto L_1021b9cf;
    }
    eax = rd32(sp0 - 0x84u);
    COW_AT(1021b9c2)
    if ((int32_t)(eax + 0xeu) > (int32_t)(uint16_t)arg4) goto L_1021ba0d;
L_1021b9cf: ;
    COW_AT(1021b9cf)
    if ((uint8_t)ecx != 0u)
    {
    COW_AT(1021b9d3)
        wr8(ebx, (uint8_t)ecx);
        wr8(ebx + 1u, 0u);
        eax = rd32(sp0 - 0x84u);
    }
    COW_AT(1021b9dd)
    wr32(sp0 - 0xa8u, arg3);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    t72 = eax + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb0u, t72);
    t73 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb4u, t73);
    wr32(sp0 - 0xb8u, arg1);
    g->esp = sp0 - 0xa4u;
    cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t73, t72, sp0 - 0x80u, arg3);
    COW_AT(1021ba06)
    eax = rd32(sp0 - 0x84u) + 0xeu;
L_1021ba0d: ;
    COW_AT(1021ba0d)
    t74 = rd16(self + 0xau);
    wr16(self + 0xau, (uint16_t)(t74 + (uint16_t)eax));
    g->ebx = rd32(sp0 - 0x98u);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0x9cu);
    return;
L_1021b4e8: ;
    COW_AT(1021b4e8)
    if (eax - (sp0 - 0x80u) <= 0x7cu) goto L_1021b536;
    COW_AT(1021b4f5)
    wr8(ebx, 0u);
    wr32(sp0 - 0xa8u, arg3);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    t10 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb0u, t10);
    t11 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb4u, t11);
    wr32(sp0 - 0xb8u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0xa4u;
    cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t11, t10, sp0 - 0x80u, arg3);
    t12 = g->ecx;
    ecx = t12;
    COW_AT(1021b525)
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    eax = sp0 - 0x80u;
    edi = rd32(sp0 - 0x88u);
    loc_8c = sp0 - 0x80u;
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_90 = rd32(sp0 - 0x90u);
    goto L_1021b98d;
L_1021b536: ;
    COW_AT(1021b536)
    wr8(eax, (uint8_t)ecx);
    t13 = rd32(sp0 - 0x8cu);
    wr8(t13 + 1u, rd8(loc_90 + 1u));
    wr32(sp0 - 0xa8u, sp0 - 0x88u);
    wr32(sp0 - 0xacu, sp0 - 0x8cu);
    g->eax = sp0 - 0x8cu;
    g->ecx = t13;
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0xa0u;
    t14 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 - 0x8cu, sp0 - 0x88u, rd32(sp0 - 0xa4u));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    ebp = loc_88;
    COW_AT(1021b559)
    wr32(sp0 - 0xacu, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    cow_call_regs(g, COW_IMG(0x1011d840u), eax, g->ecx, g->edx, 1, 2, eax, rd32(sp0 - 0xa8u));
    t17 = g->ecx;
    t18 = g->edx;
    ecx = t17;
    edx = t18;
    COW_AT(1021b562)
    if (rd32(sp0 - 0x8cu) == ebx)
    {
        eax = rd32(sp0 - 0x8cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_1021b99c;
    }
    eax = rd32(sp0 - 0x8cu);
    COW_AT(1021b571)
    if ((int32_t)(eax - ebx) > 2)
    {
        ecx = eax - ebx;
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_1021b99c;
    }
    ecx = eax - ebx;
    COW_AT(1021b57e)
    if ((int32_t)ecx <= 1)
    {
        zf = ecx == 1u;
        goto L_1021b594;
    }
    COW_AT(1021b583)
    t19 = rd8(rd32(sp0 - 0x90u) + 1u);
    if ((uint8_t)t19 == 0u)
    {
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_1021b99c;
    }
    edx = rd32(sp0 - 0x90u);
    COW_AT(1021b591)
    zf = ecx == 1u;
L_1021b594: ;
    COW_AT(1021b594)
    if (!zf) goto L_1021b656;
    COW_AT(1021b59a)
    t20 = rd8(sp0 - 0x91u);
    if ((uint8_t)t20 > 1u) goto L_1021b5ae;
    COW_AT(1021b5a1)
    t21 = rd8(rd32(sp0 - 0x90u));
    if ((uint8_t)t21 != 0x20u)
    {
        edx = rd32(sp0 - 0x90u);
        goto L_1021b656;
    }
L_1021b5ae: ;
    COW_AT(1021b5ae)
    if (ebx == sp0 - 0x80u)
    {
        edx = sp0 - 0x80u;
        goto L_1021b656;
    }
    COW_AT(1021b5ba)
    t22 = rd8(rd32(sp0 - 0x90u));
    if ((uint8_t)t22 != 0x20u)
    {
    COW_AT(1021b60e)
        wr8(ebx, 0u);
        wr32(sp0 - 0xa8u, arg3);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        t27 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb0u, t27);
        t28 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb4u, t28);
        wr32(sp0 - 0xb8u, arg1);
        g->ecx = self;
        g->esp = sp0 - 0xa4u;
        cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t28, t27, sp0 - 0x80u, arg3);
        t29 = g->ecx;
        ecx = t29;
    COW_AT(1021b63e)
        wr32(sp0 - 0x88u, ebp);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        wr8(sp0 - 0x91u, 1u);
        eax = sp0 - 0x80u;
        edi = ebp;
        loc_8c = sp0 - 0x80u;
        loc_88 = ebp;
        loc_84 = rd32(sp0 - 0x84u);
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
        ecx = rd32(sp0 - 0x90u);
    COW_AT(1021b5c3)
        wr8(eax, 0u);
        wr32(sp0 - 0xa8u, arg3);
        wr32(sp0 - 0x90u, ecx + 1u);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        t23 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb0u, t23);
        t24 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb4u, t24);
        wr32(sp0 - 0xb8u, arg1);
        g->ecx = self;
        g->esp = sp0 - 0xa4u;
        cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t24, t23, sp0 - 0x80u, arg3);
        t25 = g->ecx;
        ecx = t25;
    COW_AT(1021b5f8)
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        t26 = rd32(sp0 - 0x88u);
        wr8(sp0 - 0x91u, 1u);
        eax = sp0 - 0x80u;
        edi = t26;
        loc_8c = sp0 - 0x80u;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_90 = rd32(sp0 - 0x90u);
    }
    goto L_1021b98d;
L_1021b656: ;
    COW_AT(1021b656)
    if (ecx == 1u) goto L_1021b662;
    COW_AT(1021b65b)
    if (rd8(self + 0xcu) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0xcu);
        goto L_1021b695;
    }
L_1021b662: ;
    COW_AT(1021b662)
    t30 = rd32(sp0 - 0x88u);
    if ((int32_t)t30 <= (int32_t)rd16(self + 8u))
    {
        edx = rd16(self + 8u);
        goto L_1021b695;
    }
    edx = rd16(self + 8u);
    COW_AT(1021b66e)
    if ((int32_t)edi <= 0) goto L_1021b695;
    COW_AT(1021b672)
    wr32(sp0 - 0x88u, ebp - edi);
    t31 = rd32(sp0 - 0x84u) + 0xfu;
    wr32(sp0 - 0x84u, t31);
    wr32(sp0 - 0x8cu, ebx);
    wr8(sp0 - 0x91u, 1u);
    eax = ebx;
    loc_8c = ebx;
    loc_88 = ebp - edi;
    edi = 0u;
    loc_84 = t31;
    loc_90 = rd32(sp0 - 0x90u);
    goto L_1021b98d;
L_1021b695: ;
    COW_AT(1021b695)
    if (ecx == 1u) goto L_1021b6a1;
    COW_AT(1021b69a)
    if (rd8(self + 0xcu) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0xcu);
        goto L_1021b716;
    }
L_1021b6a1: ;
    COW_AT(1021b6a1)
    t32 = rd32(sp0 - 0x88u);
    if ((int32_t)t32 <= (int32_t)rd16(self + 8u))
    {
        edx = rd16(self + 8u);
        goto L_1021b716;
    }
    COW_AT(1021b6ad)
    wr8(ebx, 0u);
    if (edi != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
        goto L_1021b6c2;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
    COW_AT(1021b6b8)
    if ((uint8_t)eax == 0u)
    {
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_1021b99c;
    }
    COW_AT(1021b6c0)
L_1021b6c6: ;
    COW_AT(1021b6c6)
    wr32(sp0 - 0xa8u, arg3);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    t33 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb0u, t33);
    t34 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb4u, t34);
    wr32(sp0 - 0xb8u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0xa4u;
    cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t34, t33, sp0 - 0x80u, arg3);
    t35 = g->ecx;
    ecx = t35;
L_1021b6f3: ;
    COW_AT(1021b6f3)
    wr32(sp0 - 0x88u, 0u);
    t36 = rd32(sp0 - 0x84u) + 0xfu;
    wr32(sp0 - 0x84u, t36);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr8(sp0 - 0x91u, 1u);
    eax = sp0 - 0x80u;
    edi = 0u;
    loc_8c = sp0 - 0x80u;
    loc_88 = 0u;
    loc_84 = t36;
    loc_90 = rd32(sp0 - 0x90u);
    goto L_1021b98d;
L_1021b6c2: ;
    COW_AT(1021b6c2)
    if ((uint8_t)eax == 0u) goto L_1021b6f3;
    goto L_1021b6c6;
L_1021b716: ;
    COW_AT(1021b716)
    t37 = rd8(self + 0xcu);
    wr8(sp0 - 0x91u, (uint8_t)t37);
    if ((uint8_t)t37 != 0u) goto L_1021b870;
    edx = (edx & 0xffffff00u) | t37;
    COW_AT(1021b725)
    if ((int32_t)ecx <= 1) goto L_1021b7d6;
    COW_AT(1021b72e)
    t38 = rd32(sp0 - 0x88u);
    if ((int32_t)t38 <= (int32_t)rd16(self + 8u))
    {
        edx = rd16(self + 8u);
        goto L_1021b7d2;
    }
    edx = rd16(self + 8u);
    COW_AT(1021b73e)
    wr32(sp0 - 0xa8u, COW_IMG(0x10385d30u));
    t39 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xacu, t39);
    g->eax = t39;
    g->esp = sp0 - 0xa4u;
    t40 = cow_call_regs(g, COW_IMG(0x1021ba40u), g->eax, ecx, edx, 1, 2, t39, COW_IMG(0x10385d30u));
    t41 = g->ecx;
    eax = t40;
    ecx = t41;
    COW_AT(1021b74d)
    if ((uint16_t)eax == 0u)
    {
        loc_90 = rd32(sp0 - 0x90u);
    }
    else
    {
    COW_AT(1021b755)
        t42 = rd32(sp0 - 0x8cu);
        t43 = t42 + rd32(sp0 - 0x90u) - ebx;
        wr32(sp0 - 0x90u, t43);
        eax = t42;
        ecx = t42 - ebx;
        ebx = t42;
        loc_90 = t43;
    }
    COW_AT(1021b769)
    wr8(ebx, 0u);
    if (edi != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
        goto L_1021b77e;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x80u);
    COW_AT(1021b774)
    if ((uint8_t)eax == 0u)
    {
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_1021b99c;
    }
    COW_AT(1021b77c)
L_1021b782: ;
    COW_AT(1021b782)
    wr32(sp0 - 0xa8u, arg3);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    t44 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
    wr32(sp0 - 0xb0u, t44);
    t45 = edi + (uint32_t)(int16_t)rd16(self);
    wr32(sp0 - 0xb4u, t45);
    wr32(sp0 - 0xb8u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0xa4u;
    cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t45, t44, sp0 - 0x80u, arg3);
    t46 = g->ecx;
    ecx = t46;
L_1021b7af: ;
    COW_AT(1021b7af)
    wr32(sp0 - 0x88u, 0u);
    t47 = rd32(sp0 - 0x84u) + 0xfu;
    wr32(sp0 - 0x84u, t47);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr8(sp0 - 0x91u, 2u);
    eax = sp0 - 0x80u;
    edi = 0u;
    loc_8c = sp0 - 0x80u;
    loc_88 = 0u;
    loc_84 = t47;
    loc_90 = rd32(sp0 - 0x90u);
    goto L_1021b98d;
L_1021b77e: ;
    COW_AT(1021b77e)
    if ((uint8_t)eax == 0u) goto L_1021b7af;
    goto L_1021b782;
L_1021b7d2: ;
    COW_AT(1021b7d2)
    edx = (edx & 0xffffff00u) | rd8(sp0 - 0x91u);
L_1021b7d6: ;
    COW_AT(1021b7d6)
    if ((uint8_t)edx != 0u) goto L_1021b870;
    COW_AT(1021b7de)
    if ((int32_t)ecx <= 1) goto L_1021b870;
    COW_AT(1021b7e7)
    if ((int32_t)(rd32(sp0 - 0x88u) * 2u - ebp) < (int32_t)rd16(self + 8u))
    {
        ecx = rd16(self + 8u);
        goto L_1021b870;
    }
    ecx = rd16(self + 8u);
    COW_AT(1021b7fa)
    wr32(sp0 - 0xa8u, COW_IMG(0x10385d28u));
    t48 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xacu, t48);
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t49 = cow_call_regs(g, COW_IMG(0x1021ba40u), g->eax, ecx, t48, 1, 2, t48, COW_IMG(0x10385d28u));
    t50 = g->ecx;
    eax = t49;
    ecx = t50;
    COW_AT(1021b809)
    if ((uint16_t)eax == 0u) goto L_1021b86c;
    COW_AT(1021b811)
    wr8(ebx, 0u);
    if (rd8(sp0 - 0x80u) != 0u)
    {
    COW_AT(1021b81c)
        wr32(sp0 - 0xa8u, arg3);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        t51 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
        wr32(sp0 - 0xb0u, t51);
        t52 = edi + (uint32_t)(int16_t)rd16(self);
        wr32(sp0 - 0xb4u, t52);
        wr32(sp0 - 0xb8u, arg1);
        g->ecx = self;
        g->esp = sp0 - 0xa4u;
        cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t52, t51, sp0 - 0x80u, arg3);
        t53 = g->ecx;
        ecx = t53;
    }
    COW_AT(1021b849)
    wr32(sp0 - 0x88u, 0u);
    t54 = rd32(sp0 - 0x84u) + 0xfu;
    wr32(sp0 - 0x84u, t54);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr8(sp0 - 0x91u, 2u);
    eax = sp0 - 0x80u;
    edi = 0u;
    loc_8c = sp0 - 0x80u;
    loc_88 = 0u;
    loc_84 = t54;
    loc_90 = rd32(sp0 - 0x90u);
    goto L_1021b98d;
L_1021b86c: ;
    COW_AT(1021b86c)
    eax = rd32(sp0 - 0x8cu);
L_1021b870: ;
    COW_AT(1021b870)
    if (rd8(self + 0xcu) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0xcu);
        goto L_1021b939;
    }
    ecx = (ecx & 0xffffff00u) | rd8(self + 0xcu);
    COW_AT(1021b87b)
    if ((int32_t)(eax - ebx) <= 1) goto L_1021b939;
    edx = eax - ebx;
    COW_AT(1021b888)
    wr32(sp0 - 0xa8u, COW_IMG(0x10385d28u));
    t55 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xacu, t55);
    g->eax = t55;
    g->esp = sp0 - 0xa4u;
    t56 = cow_call_regs(g, COW_IMG(0x1021ba40u), g->eax, ecx, edx, 1, 2, t55, COW_IMG(0x10385d28u));
    t57 = g->ecx;
    t58 = g->edx;
    eax = t56;
    ecx = t57;
    edx = t58;
    COW_AT(1021b897)
    if ((uint16_t)eax == 0u) goto L_1021b935;
    COW_AT(1021b8a3)
    if (ebx == sp0 - 0x80u)
    {
    COW_AT(1021b91c)
        t64 = rd32(sp0 - 0x8cu);
        t65 = rd32(sp0 - 0x90u);
        wr8(sp0 - 0x91u, 1u);
        t66 = t64 + t65 - ebx;
        wr32(sp0 - 0x90u, t66);
        eax = t64;
        ecx = t64 - ebx;
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_90 = t66;
    }
    else
    {
    COW_AT(1021b8ab)
        wr8(ebx, 0u);
        if (rd8(sp0 - 0x80u) != 0u)
        {
    COW_AT(1021b8b6)
            wr32(sp0 - 0xa8u, arg3);
            wr32(sp0 - 0xacu, sp0 - 0x80u);
            t59 = rd32(sp0 - 0x84u) + (uint32_t)(int16_t)rd16(self + 2u);
            wr32(sp0 - 0xb0u, t59);
            t60 = edi + (uint32_t)(int16_t)rd16(self);
            wr32(sp0 - 0xb4u, t60);
            wr32(sp0 - 0xb8u, arg1);
            g->edx = t60;
            g->esp = sp0 - 0xa4u;
            cow_stdcall(g, COW_IMG(0x1021b3b0u), 5, arg1, t60, t59, sp0 - 0x80u, arg3);
            t61 = g->edx;
            edx = t61;
        }
    COW_AT(1021b8e3)
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        wr32(sp0 - 0x8cu, sp0 - 0x7fu);
        t62 = rd32(sp0 - 0x90u);
        t63 = rd8(rd32(sp0 - 0x90u));
        wr8(sp0 - 0x80u, (uint8_t)t63);
        wr8(sp0 - 0x7fu, rd8(t62 + 1u));
        wr32(sp0 - 0x8cu, sp0 - 0x7eu);
        wr32(sp0 - 0x90u, t62 + 2u);
        wr8(sp0 - 0x91u, 1u);
        eax = sp0 - 0x7eu;
        ecx = t62 + 2u;
        edi = ebp;
        loc_8c = sp0 - 0x7eu;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_90 = t62 + 2u;
    }
    goto L_1021b98d;
L_1021b935: ;
    COW_AT(1021b935)
    eax = rd32(sp0 - 0x8cu);
L_1021b939: ;
    COW_AT(1021b939)
    if (eax - ebx != 1u)
    {
        edx = eax - ebx;
        goto L_1021b96f;
    }
    edx = eax - ebx;
    COW_AT(1021b942)
    t67 = rd8(rd32(sp0 - 0x90u));
    if ((uint8_t)t67 != 0x5fu) goto L_1021b96f;
    ebp = rd32(sp0 - 0x90u);
    COW_AT(1021b94c)
    t68 = rd8(ebp + 1u);
    wr8(sp0 - 0x91u, (uint8_t)((uint8_t)eax - (uint8_t)ebx));
    wr32(sp0 - 0x90u, ebp + 1u);
    if ((uint8_t)t68 != 0x5fu)
    {
        ecx = ebp + 1u;
        loc_90 = ebp + 1u;
        goto L_1021b966;
    }
    ecx = ebp + 1u;
    COW_AT(1021b963)
    ecx = ecx + 1u;
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_8c = rd32(sp0 - 0x8cu);
    goto L_1021b989;
L_1021b966: ;
    COW_AT(1021b966)
    wr8(ebx, 0x20u);
    eax = rd32(sp0 - 0x8cu);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_90 = rd32(sp0 - 0x90u);
    goto L_1021b98d;
L_1021b96f: ;
    COW_AT(1021b96f)
    wr8(sp0 - 0x91u, (uint8_t)((uint8_t)eax - (uint8_t)ebx));
    if (rd8(self + 0xcu) != 0u)
    {
    COW_AT(1021b97e)
        wr8(sp0 - 0x91u, 1u);
    }
    COW_AT(1021b983)
    ecx = edx + rd32(sp0 - 0x90u);
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_8c = rd32(sp0 - 0x8cu);
    goto L_1021b989;
L_1021ba1e: ;
    COW_AT(1021ba1e)
    t70 = rd16(self + 0xau);
    t71 = rd32(sp0 - 0xa4u);
    wr16(self + 0xau, (uint16_t)(t70 + rd16(sp0 - 0x84u)));
    g->ebx = rd32(sp0 - 0x98u);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = t71;
    g->ebp = rd32(sp0 - 0x9cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021b3f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021b42du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ecx = (self & 0xffffff00u) | (uint8_t)arg5;
        g->ebx = sp0 - 0x80u;
        g->ebp = arg2;
        g->edi = 0u;
        wr32(sp0 - 0x90u, arg2);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        wr32(sp0 - 0x88u, 0u);
        wr32(sp0 - 0x84u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021b445u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021b44eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021b457u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->ebp = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021b461u:
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
    case 0x1021b46du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->ecx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1021b482u:
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
    case 0x1021b48du:
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
    case 0x1021b498u:
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
    case 0x1021b4c5u:
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
    case 0x1021b4e8u:
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
    case 0x1021b4f5u:
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
    case 0x1021b525u:
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
    case 0x1021b536u:
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
    case 0x1021b559u:
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
    case 0x1021b562u:
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
    case 0x1021b571u:
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
    case 0x1021b57eu:
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
    case 0x1021b583u:
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
    case 0x1021b591u:
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
    case 0x1021b594u:
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
    case 0x1021b59au:
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
    case 0x1021b5a1u:
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
    case 0x1021b5aeu:
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
    case 0x1021b5bau:
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
    case 0x1021b5c3u:
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
    case 0x1021b5f8u:
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
    case 0x1021b60eu:
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
    case 0x1021b63eu:
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
    case 0x1021b656u:
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
    case 0x1021b65bu:
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
    case 0x1021b662u:
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
    case 0x1021b66eu:
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
    case 0x1021b672u:
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
    case 0x1021b695u:
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
    case 0x1021b69au:
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
    case 0x1021b6a1u:
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
    case 0x1021b6adu:
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
    case 0x1021b6b8u:
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
    case 0x1021b6c0u:
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
    case 0x1021b6c2u:
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
    case 0x1021b6c6u:
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
    case 0x1021b6f3u:
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
    case 0x1021b716u:
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
    case 0x1021b725u:
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
    case 0x1021b72eu:
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
    case 0x1021b73eu:
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
    case 0x1021b74du:
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
    case 0x1021b755u:
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
    case 0x1021b769u:
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
    case 0x1021b774u:
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
    case 0x1021b77cu:
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
    case 0x1021b77eu:
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
    case 0x1021b782u:
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
    case 0x1021b7afu:
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
    case 0x1021b7d2u:
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
    case 0x1021b7d6u:
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
    case 0x1021b7deu:
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
    case 0x1021b7e7u:
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
    case 0x1021b7fau:
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
    case 0x1021b809u:
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
    case 0x1021b811u:
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
    case 0x1021b81cu:
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
    case 0x1021b849u:
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
    case 0x1021b86cu:
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
    case 0x1021b870u:
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
    case 0x1021b87bu:
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
    case 0x1021b888u:
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
    case 0x1021b897u:
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
    case 0x1021b8a3u:
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
    case 0x1021b8abu:
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
    case 0x1021b8b6u:
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
    case 0x1021b8e3u:
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
    case 0x1021b91cu:
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
    case 0x1021b935u:
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
    case 0x1021b939u:
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
    case 0x1021b942u:
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
    case 0x1021b94cu:
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
    case 0x1021b963u:
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
    case 0x1021b966u:
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
    case 0x1021b96fu:
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
    case 0x1021b97eu:
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
    case 0x1021b983u:
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
    case 0x1021b989u:
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
    case 0x1021b98du:
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
    case 0x1021b99cu:
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
    case 0x1021b9aeu:
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
    case 0x1021b9b2u:
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
    case 0x1021b9c2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->edx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1021b9cfu:
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
    case 0x1021b9d3u:
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
    case 0x1021b9ddu:
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
    case 0x1021ba06u:
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
    case 0x1021ba0du:
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
    case 0x1021ba1eu:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021b3f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1021b3f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
