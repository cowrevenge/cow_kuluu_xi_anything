/* f_0x1003f440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1003f440(Guest* g)
{
    double d86;
    double d87;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003f451u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f451;
    case 0x1003f499u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f499;
    case 0x1003f4a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f4a1;
    case 0x1003f4c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f4c4;
    case 0x1003f4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f4cc;
    case 0x1003f4dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f4df;
    case 0x1003f4fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f4fc;
    case 0x1003f503u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f503;
    case 0x1003f50du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f50d;
    case 0x1003f565u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f565;
    case 0x1003f576u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f576;
    case 0x1003f60au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f60a;
    case 0x1003f60fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f60f;
    case 0x1003f620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f620;
    case 0x1003f622u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f622;
    case 0x1003f626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f626;
    case 0x1003f6a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6a4;
    case 0x1003f6a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6a9;
    case 0x1003f6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6b1;
    case 0x1003f6b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6b6;
    case 0x1003f6beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6be;
    case 0x1003f6c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6c3;
    case 0x1003f6cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6cb;
    case 0x1003f6d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f6d0;
    case 0x1003f726u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f726;
    case 0x1003f744u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f744;
    case 0x1003f766u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f766;
    case 0x1003f79eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f79e;
    case 0x1003f7a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f7a7;
    case 0x1003f81fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f81f;
    case 0x1003f83du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f83d;
    case 0x1003f846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f846;
    case 0x1003f87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1003f87f;
    default: break;
    }
#endif

    COW_AT(1003f440)
    if ((int8_t)rd8(self + 0x32u) >= 0)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x32u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(1003f451)
        t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        t2 = rd32(t1);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t2 + 0xc8u), t2, 3, t1, 0xfu, 1u);
        t3 = g->ecx;
        t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = rd32(t4);
        t5 = rd32(t4);
        cow_thiscall(g, rd32(t5 + 0xc8u), t3, 3, t4, 0x19u, 5u);
        t6 = g->edx;
        t7 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->eax = t7;
        g->edx = t6;
        t8 = rd32(t7);
        t9 = cow_thiscall(g, rd32(t8 + 0xc8u), t8, 3, t7, 0x18u, 0x60u);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    COW_AT(1003f499)
    if (rd8(sp0 + 0x18u) == 0u)
    {
    COW_AT(1003f4a1)
        t12 = rd32(arg1 + 0x148u);
        t13 = rd32(arg1 + 0x144u);
        t14 = rd32(arg1 + 0x140u);
        g->ebx = self;
        g->edx = t14;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10075700u), arg1, self + 0x40u, g->edx, 0, 4, 0u, t14, t13, t12);
        t15 = g->ecx;
        t16 = g->edx;
        ecx = t15;
        edx = t16;
    }
    COW_AT(1003f4c4)
    if (rd32(sp0 + 0x14u) != 0u)
    {
        edi = rd32(sp0 + 0x14u);
    }
    else
    {
    COW_AT(1003f4cc)
        t17 = rd32(sp0 + 0x10u);
        t18 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0x10u;
        t19 = cow_call_regs(g, COW_IMG(0x1003f8a0u), t17, self, edx, 0, 2, t18, t17);
        t20 = g->ecx;
        ecx = t20;
        edi = t19;
    }
    COW_AT(1003f4df)
    t21 = (ecx & 0xffff0000u) | rd16(self + 0x3cu);
    t22 = self + (uint16_t)t21 + 0x30u;
    wr32(sp0 + 0x14u, t22);
    if ((uint16_t)t21 >= rd16(self + 0x3eu))
    {
        eax = (t22 & 0xffff0000u) | rd16(self + 0x3eu);
    COW_AT(1003f503)
        eax = (uint16_t)eax + 0x10000u;
    }
    else
    {
        eax = (t22 & 0xffff0000u) | rd16(self + 0x3eu);
    COW_AT(1003f4fc)
        eax = (uint16_t)eax;
    }
    COW_AT(1003f50d)
    t23 = eax + self + 0x30u;
    t24 = rd16(self + 0x38u);
    t25 = rd8(self + 0x33u);
    wr32(sp0 + 0x10u, t23);
    t26 = rd16(self + 0x3au) * 3u;
    g->eax = t26;
    g->edx = rd16(self + 0x3au) * 3u;
    t27 = rd16(self + 0x3au);
    g->esp = sp0 - 0x14u;
    t28 = cow_stdcall(g, COW_IMG(0x10044010u), 1, t26);
    t29 = g->edx;
    g->edx = t29;
    t30 = rd32(COW_IMG(0x1047bbb0u));
    t31 = cow_thiscall(g, COW_IMG(0x10044130u), t30, 0);
    t32 = g->ecx;
    t33 = g->edx;
    t34 = rd8(sp0 + 0x18u);
    wr32(sp0 + 0x18u, 0u);
    if ((uint8_t)t34 == 0u)
    {
        eax = t31;
        ebp = self + t24 + ((uint32_t)(int8_t)t25 << 0x10u) + t27 * 6u + 0x30u;
        esi = self + t24 + ((uint32_t)(int8_t)t25 << 0x10u) + 0x30u;
    COW_AT(1003f60f)
        if ((int32_t)(rd16(self + 0x3au) * 3u) <= 0)
        {
            edx = rd16(self + 0x3au) * 3u;
        }
        else
        {
    COW_AT(1003f620)
L_1003f626: ;
    COW_AT(1003f626)
            t50 = rd16(esi);
            wr32(sp0 + 0xcu, ebp + 2u);
            t51 = rd32(edi + t50 * 0x24u);
            wr32(eax, t51);
            t52 = rd32(edi + t50 * 0x24u + 4u);
            wr32(eax + 4u, t52);
            t53 = rd32(edi + t50 * 0x24u + 8u);
            wr32(eax + 8u, t53);
            t54 = rd32(edi + rd16(ebp) * 0x24u + 0xcu);
            t55 = rd16(ebp);
            wr32(eax + 0xcu, t54);
            t56 = rd32(edi + t55 * 0x24u + 0x10u);
            wr32(eax + 0x10u, t56);
            t57 = rd32(edi + t55 * 0x24u + 0x14u);
            wr32(eax + 0x14u, t57);
            t58 = rd32(rd32(sp0 + 0x14u));
            if ((uint8_t)t58 * 2u <= 0xffu)
            {
                ecx = t58 >> 0x17u & 0x1feu;
                edx = (uint8_t)t58 * 2u;
                ebx = t58 >> 0xfu & 0x1feu;
                ebp = t58 >> 7u & 0x1feu;
                esi = esi + 2u;
            }
            else
            {
                ecx = t58 >> 0x17u & 0x1feu;
                ebx = t58 >> 0xfu & 0x1feu;
                ebp = t58 >> 7u & 0x1feu;
                esi = esi + 2u;
    COW_AT(1003f6a4)
                edx = 0xffu;
            }
    COW_AT(1003f6a9)
            if (ebp > 0xffu)
            {
    COW_AT(1003f6b1)
                ebp = 0xffu;
            }
    COW_AT(1003f6b6)
            if (ebx > 0xffu)
            {
    COW_AT(1003f6be)
                ebx = 0xffu;
            }
    COW_AT(1003f6c3)
            if (ecx > 0xffu)
            {
    COW_AT(1003f6cb)
                ecx = 0xffu;
            }
    COW_AT(1003f6d0)
            t59 = rd32(sp0 + 0x14u) + 4u;
            wr32(sp0 + 0x14u, t59);
            t60 = ((ecx << 8u | ebx) << 8u | ebp) << 8u | edx;
            wr32(eax + 0x18u, t60);
            t61 = rd32(rd32(sp0 + 0x10u));
            t62 = rd32(sp0 + 0x10u);
            wr32(eax + 0x1cu, t61);
            t63 = rd32(t62 + 4u);
            wr32(sp0 + 0x10u, t62 + 8u);
            wr32(eax + 0x20u, t63);
            t64 = rd32(sp0 + 0x18u) + 1u;
            t65 = rd32(sp0 + 0x18u);
            t66 = rd16(self + 0x3au);
            wr32(sp0 + 0x18u, t64);
            if ((int32_t)(t65 + 1u) < (int32_t)(t66 * 3u))
            {
                eax = eax + 0x24u;
                goto L_1003f622;
            }
            eax = eax + 0x24u;
            edx = t64;
        }
    }
    else
    {
        eax = t31;
        edx = t33;
        ebp = self + t24 + ((uint32_t)(int8_t)t25 << 0x10u) + t27 * 6u + 0x30u;
        esi = self + t24 + ((uint32_t)(int8_t)t25 << 0x10u) + 0x30u;
    COW_AT(1003f565)
        if ((int32_t)(rd16(self + 0x3au) * 3u) <= 0) goto L_1003f726;
L_1003f576: ;
    COW_AT(1003f576)
        t35 = rd32(edi + rd16(esi) * 0x24u);
        t36 = rd16(esi);
        wr32(eax, t35);
        t37 = rd32(edi + t36 * 0x24u + 4u);
        wr32(eax + 4u, t37);
        t38 = rd32(edi + t36 * 0x24u + 8u);
        wr32(eax + 8u, t38);
        t39 = rd32(edi + rd16(ebp) * 0x24u + 0xcu);
        t40 = rd16(ebp);
        wr32(eax + 0xcu, t39);
        t41 = rd32(edi + t40 * 0x24u + 0x10u);
        wr32(eax + 0x10u, t41);
        t42 = rd32(edi + t40 * 0x24u + 0x14u);
        wr32(eax + 0x14u, t42);
        t43 = rd32(sp0 + 0x14u) + 4u;
        t44 = rd32(rd32(sp0 + 0x14u));
        wr32(sp0 + 0x14u, t43);
        wr32(eax + 0x18u, t44);
        t45 = rd32(edi + rd16(esi) * 0x24u + 0x1cu);
        wr32(eax + 0x1cu, t45);
        t46 = rd32(edi + rd16(esi) * 0x24u + 0x20u);
        wr32(eax + 0x20u, t46);
        t47 = rd32(sp0 + 0x18u) + 1u;
        t48 = rd32(sp0 + 0x18u);
        t49 = rd16(self + 0x3au);
        wr32(sp0 + 0x18u, t47);
        if ((int32_t)(t48 + 1u) < (int32_t)(t49 * 3u))
        {
            eax = eax + 0x24u;
            ebp = ebp + 2u;
            esi = esi + 2u;
            goto L_1003f576;
        }
        eax = eax + 0x24u;
        edx = t47;
    COW_AT(1003f60a)
    }
L_1003f726: ;
    COW_AT(1003f726)
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047bbb0u));
    g->edx = edx;
    t67 = rd32(COW_IMG(0x1047bbb0u));
    g->esp = sp0 - 0x14u;
    t68 = cow_stdcall(g, COW_IMG(0x100441a0u), 0);
    t69 = g->ecx;
    t70 = g->edx;
    g->edx = t70;
    t71 = cow_cdecl(g, COW_IMG(0x10028700u), 1, edi);
    t72 = g->edx;
    if (rd8(COW_IMG(0x1047b9e4u)) & 1u)
    {
        eax = (t71 & 0xffffff00u) | rd8(COW_IMG(0x1047b9e4u));
        edx = t72;
    }
    else
    {
        eax = (t71 & 0xffffff00u) | rd8(COW_IMG(0x1047b9e4u));
        edx = t72;
    COW_AT(1003f744)
        wr8(COW_IMG(0x1047b9e4u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x10u;
        t73 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b9e8u), 0);
        t74 = g->ecx;
        t75 = g->edx;
        g->edx = t75;
        t76 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003f890u));
        t77 = g->edx;
        eax = t76;
        edx = t77;
    }
    COW_AT(1003f766)
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047b9e8u), edx, 1, COW_IMG(0x10352258u));
    t78 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t78;
    g->edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    t79 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    t80 = cow_thiscall(g, rd32(t79 + 0xc8u), rd32(arg2), 3, t78, 0x3cu, rd32(arg2));
    t81 = g->edx;
    if (arg1 == 0u)
    {
        eax = t80;
        edx = t81;
    }
    else
    {
        eax = t80;
        edx = t81;
    COW_AT(1003f79e)
        if ((rd8(arg1 + 0x17bu) & 3u) != 0u)
        {
    COW_AT(1003f7a7)
            t82 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t83 = rd32(COW_IMG(0x1047cf7cu));
            t84 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(t83 + 0xa90u, t82);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x100746a0u), t84, 0);
            t85 = g->ecx;
            d86 = (double)rdf32(arg1 + 0x120u);
            wrf32(t84 + 0x20u, (float)d86);
            d87 = (double)rdf32(arg1 + 0x124u);
            wrf32(t84 + 0x24u, (float)d87);
            t88 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            g->edx = rd32(t88);
            t89 = rd32(t88);
            cow_thiscall(g, rd32(t89 + 0xfcu), t85, 4, t88, 0u, 0x18u, 2u);
            t90 = g->edx;
            g->edx = t90;
            cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 0x10u, t84);
            t91 = g->edx;
            t92 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t93 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t93 + 0xa90u, t92);
            wr32(t92 * 4u + t93 + 0xa10u, t84);
            eax = t93;
            edx = t91;
        }
    }
    COW_AT(1003f81f)
    t94 = rd16(self + 0x3au);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bbb0u)), 5, 0u, t94, 4u, 0u, 0xffffffffu);
    if (arg1 != 0u)
    {
    COW_AT(1003f83d)
        if ((rd8(arg1 + 0x17bu) & 3u) != 0u)
        {
    COW_AT(1003f846)
            t95 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
            g->edx = t95;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 0x10u, t95);
            t96 = g->edx;
            t97 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            cow_thiscall(g, rd32(rd32(t97) + 0xfcu), rd32(t97), 4, t97, 0u, 0x18u, 0u);
        }
    }
    COW_AT(1003f87f)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1003f622: ;
    COW_AT(1003f622)
    ebp = rd32(sp0 + 0xcu);
    goto L_1003f626;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003f440(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003f451u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f499u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f4a1u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f4c4u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f4ccu:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f4dfu:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f4fcu:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f503u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f50du:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f565u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f576u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f60au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f60fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f620u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f622u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f626u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f6d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1003f726u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f744u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f766u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f79eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f7a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f81fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003f83du:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003f846u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1003f87fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003f440(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1003f440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
