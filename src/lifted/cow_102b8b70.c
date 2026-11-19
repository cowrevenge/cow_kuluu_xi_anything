/* f_0x102b8b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b8b70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
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
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b8b80u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b80;
    case 0x102b8b84u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b84;
    case 0x102b8b87u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b87;
    case 0x102b8b8bu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b8b;
    case 0x102b8b8fu: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b8f;
    case 0x102b8b96u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8b96;
    case 0x102b8ba0u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8ba0;
    case 0x102b8ba9u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8ba9;
    case 0x102b8bafu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8baf;
    case 0x102b8bb5u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8bb5;
    case 0x102b8bc9u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8bc9;
    case 0x102b8e73u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8e73;
    default: break;
    }
#endif

    COW_AT(102b8b70)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b8b84)
        esi = rd32(eax + 0x54u);
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b8b80)
        esi = 0u;
    }
    COW_AT(102b8b87)
    if (eax != 0u)
    {
    COW_AT(102b8b8f)
        ecx = rd32(eax + rd32(arg1 + 0x44u) * 4u + 0x54u);
    }
    else
    {
    COW_AT(102b8b8b)
        ecx = 0u;
    }
    COW_AT(102b8b96)
    wr32(sp0 - 8u, arg2);
    eax = 0u;
L_102b8ba0: ;
    COW_AT(102b8ba0)
    if (rd32(ecx + rd32(arg2 + eax * 4u) * 4u) == 4u) goto L_102b8bb5;
    COW_AT(102b8ba9)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        goto L_102b8ba0;
    }
    COW_AT(102b8baf)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102b8bb5: ;
    COW_AT(102b8bb5)
    if (rd32(ecx + rd32(arg2 + rd32(COW_IMG(0x103c7b60u) + eax * 4u) * 4u) * 4u) != 3u) goto L_102b8e73;
    COW_AT(102b8bc9)
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd8(COW_IMG(0x103c7b80u) + eax * 4u);
    wr8(sp0 - 4u, (uint8_t)t1);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t3, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t5 = g->edx;
    t6 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x30u, t6);
    wr32(sp0 - 0x34u, arg3);
    g->ecx = t6;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3, t6);
    t7 = g->ecx;
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t8 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x40u, t8);
    wr32(sp0 - 0x44u, arg3 + 0xcu);
    g->eax = arg3 + 0xcu;
    g->edx = t8;
    g->esp = sp0 - 0x3cu;
    t9 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xcu, t8);
    t10 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, t10, 1, 3, sp0 - 0x10u, arg3 + 0xcu, rd32(sp0 - 0x40u));
    t11 = g->ecx;
    wr32(sp0 - 0x4cu, sp0 + 4u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t12 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x54u, t12);
    wr32(sp0 - 0x58u, arg3 + 0x18u);
    g->eax = arg3 + 0x18u;
    g->esp = sp0 - 0x50u;
    t13 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x18u, t12);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t14 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x24u, t14);
    wr32(sp0 - 0x28u, arg3 + 0x24u);
    g->edx = arg3 + 0x24u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x24u, t14);
    t15 = g->edx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ecx = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x24u, rd32(sp0 - 0x24u));
    t16 = g->ecx;
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t17 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x3cu, t17);
    wr32(sp0 - 0x40u, arg3 + 0x30u);
    g->eax = arg3 + 0x30u;
    g->esp = sp0 - 0x38u;
    t18 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x30u, t17);
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t19 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x4cu, t19);
    wr32(sp0 - 0x50u, arg3 + 0x3cu);
    g->edx = arg3 + 0x3cu;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x3cu, t19);
    t20 = g->edx;
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    g->ecx = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x3cu, rd32(sp0 - 0x4cu));
    t21 = g->ecx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t22 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x24u, t22);
    wr32(sp0 - 0x28u, arg3 + 0x48u);
    g->eax = arg3 + 0x48u;
    g->esp = sp0 - 0x20u;
    t23 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x48u, t22);
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t24 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x34u, t24);
    wr32(sp0 - 0x38u, arg3 + 0x54u);
    g->ecx = t24;
    g->edx = arg3 + 0x54u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x54u, t24);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    t27 = cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t26, 1, 3, sp0 - 0x10u, arg3 + 0x54u, rd32(sp0 - 0x34u));
    t28 = g->edx;
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t28, 1, 3, sp0 - 0x10u, sp0 - 0x10u, arg3 + 0x54u);
    t29 = g->ecx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t30 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x4cu, t30);
    wr32(sp0 - 0x50u, arg3 + 0x60u);
    g->eax = arg3 + 0x60u;
    g->esp = sp0 - 0x48u;
    t31 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x60u, t30);
    wr32(sp0 - 0x54u, sp0 + 4u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t32 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x1cu, t32);
    wr32(sp0 - 0x20u, arg3 + 0x6cu);
    g->ecx = t32;
    g->edx = arg3 + 0x6cu;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x6cu, t32);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    t35 = cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, t34, 1, 3, sp0 - 0x10u, arg3 + 0x6cu, rd32(sp0 - 0x1cu));
    t36 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102bc500u), g->eax, g->ecx, t36, 1, 1, sp0 - 0x10u);
    t37 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t38 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x34u, t38);
    wr32(sp0 - 0x38u, arg3 + 0x78u);
    g->eax = arg3 + 0x78u;
    g->esp = sp0 - 0x30u;
    t39 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x78u, t38);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc520u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x78u, rd32(sp0 - 0x34u));
    t40 = g->ecx;
    t41 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x38u;
    t42 = cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, t41, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    wr32(sp0 - 0x48u, sp0 + 4u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t43 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x50u, t43);
    wr32(sp0 - 0x54u, arg3 + 0x84u);
    g->edx = arg3 + 0x84u;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x84u, t43);
    t44 = g->edx;
    wr32(sp0 - 0x58u, sp0 + 4u);
    wr32(sp0 - 0x5cu, sp0 - 0x10u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t45 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x1cu, t45);
    wr32(sp0 - 0x20u, arg3 + 0x90u);
    g->eax = t45;
    g->ecx = arg3 + 0x90u;
    g->esp = sp0 - 0x18u;
    t46 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x90u, t45);
    t47 = g->ecx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = t47;
    cow_call_regs(g, COW_IMG(0x102bc600u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, arg3 + 0x90u, rd32(sp0 - 0x1cu));
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t50 = cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, t49, 1, 1, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t51 = g->edx;
    t52 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x34u, t52);
    wr32(sp0 - 0x38u, arg3 + 0x9cu);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x9cu, t52);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102b8e73: ;
    COW_AT(102b8e73)
    wr8(sp0 - 4u, (uint8_t)eax);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    t53 = cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t54 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t54, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t55 = g->ecx;
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t56 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x30u, t56);
    wr32(sp0 - 0x34u, arg3);
    g->edx = t56;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3, t56);
    t57 = g->edx;
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t58 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x40u, t58);
    wr32(sp0 - 0x44u, arg3 + 0xcu);
    g->eax = t58;
    g->ecx = arg3 + 0xcu;
    g->esp = sp0 - 0x3cu;
    t59 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xcu, t58);
    t60 = g->ecx;
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, arg3 + 0xcu, rd32(sp0 - 0x40u));
    t61 = g->edx;
    wr32(sp0 - 0x4cu, sp0 + 4u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t62 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x54u, t62);
    wr32(sp0 - 0x58u, arg3 + 0x18u);
    g->ecx = arg3 + 0x18u;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x18u, t62);
    t63 = g->ecx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t64 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x24u, t64);
    wr32(sp0 - 0x28u, arg3 + 0x24u);
    g->eax = arg3 + 0x24u;
    g->esp = sp0 - 0x20u;
    t65 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x24u, t64);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->edx = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x24u, rd32(sp0 - 0x24u));
    t66 = g->edx;
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t67 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x3cu, t67);
    wr32(sp0 - 0x40u, arg3 + 0x30u);
    g->ecx = arg3 + 0x30u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x30u, t67);
    t68 = g->ecx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t69 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x4cu, t69);
    wr32(sp0 - 0x50u, arg3 + 0x3cu);
    g->eax = arg3 + 0x3cu;
    g->esp = sp0 - 0x48u;
    t70 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x3cu, t69);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    g->edx = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x3cu, rd32(sp0 - 0x4cu));
    t71 = g->edx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t72 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x24u, t72);
    wr32(sp0 - 0x28u, arg3 + 0x48u);
    g->ecx = arg3 + 0x48u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x48u, t72);
    t73 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t74 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x34u, t74);
    wr32(sp0 - 0x38u, arg3 + 0x54u);
    g->eax = arg3 + 0x54u;
    g->edx = t74;
    g->esp = sp0 - 0x30u;
    t75 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x54u, t74);
    t76 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    t77 = cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t76, 1, 3, sp0 - 0x10u, arg3 + 0x54u, rd32(sp0 - 0x34u));
    t78 = g->ecx;
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 0x10u, arg3 + 0x54u);
    t79 = g->edx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t80 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x4cu, t80);
    wr32(sp0 - 0x50u, arg3 + 0x60u);
    g->ecx = arg3 + 0x60u;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x60u, t80);
    t81 = g->ecx;
    wr32(sp0 - 0x54u, sp0 + 4u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t82 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x1cu, t82);
    wr32(sp0 - 0x20u, arg3 + 0x6cu);
    g->eax = arg3 + 0x6cu;
    g->edx = t82;
    g->esp = sp0 - 0x18u;
    t83 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x6cu, t82);
    t84 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    t85 = cow_call_regs(g, COW_IMG(0x102bc600u), g->eax, g->ecx, t84, 1, 3, sp0 - 0x10u, arg3 + 0x6cu, rd32(sp0 - 0x1cu));
    t86 = g->ecx;
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 1, sp0 - 0x10u);
    t87 = g->edx;
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t88 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x34u, t88);
    wr32(sp0 - 0x38u, arg3 + 0x78u);
    g->ecx = arg3 + 0x78u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x78u, t88);
    t89 = g->ecx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x38u;
    t90 = cow_cdecl(g, COW_IMG(0x102bc4a0u), 2, sp0 - 8u, sp0 - 0x10u);
    t91 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102bc7a0u), g->eax, g->ecx, t91, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t92 = g->ecx;
    wr32(sp0 - 0x48u, sp0 + 4u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t93 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x50u, t93);
    wr32(sp0 - 0x54u, arg3 + 0x84u);
    g->eax = arg3 + 0x84u;
    g->esp = sp0 - 0x4cu;
    t94 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x84u, t93);
    wr32(sp0 - 0x58u, sp0 + 4u);
    wr32(sp0 - 0x5cu, sp0 - 0x10u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t95 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x1cu, t95);
    wr32(sp0 - 0x20u, arg3 + 0x90u);
    g->edx = arg3 + 0x90u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x90u, t95);
    t96 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 0x10u;
    g->ecx = sp0 - 8u;
    t97 = cow_cdecl(g, COW_IMG(0x102bc670u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x90u, rd32(sp0 - 0x1cu));
    t98 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 1, sp0 - 0x10u);
    t99 = g->edx;
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t100 = g->ecx;
    t101 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x38u, t101);
    wr32(sp0 - 0x3cu, arg3 + 0x9cu);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x9cu, t101);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b8b70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b8b80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b8b84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b8b87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b8b8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8b8fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b8b96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8ba0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b8ba9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b8bafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8bb5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b8bc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8e73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b8b70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b8b70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
