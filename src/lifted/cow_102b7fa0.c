/* f_0x102b7fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b7fa0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t8;
    uint32_t t9;
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
    case 0x102b7fb0u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b7fb0;
    case 0x102b7fb4u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b7fb4;
    case 0x102b7fb7u: eax = g->eax; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b7fb7;
    default: break;
    }
#endif

    COW_AT(102b7fa0)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b7fb4)
        esi = rd32(eax + 0x54u);
    }
    else
    {
    COW_AT(102b7fb0)
        esi = 0u;
    }
    COW_AT(102b7fb7)
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 8u, arg2);
    wr8(sp0 - 4u, 3u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t2 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t2, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t3 = g->ecx;
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t4 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x30u, t4);
    wr32(sp0 - 0x34u, arg3);
    g->edx = t4;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3, t4);
    t5 = g->edx;
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t6 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x40u, t6);
    wr32(sp0 - 0x44u, arg3 + 0x30u);
    g->eax = t6;
    g->ecx = arg3 + 0x30u;
    g->esp = sp0 - 0x3cu;
    t7 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x30u, t6);
    t8 = g->ecx;
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->ecx = t8;
    cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, arg3 + 0x30u, rd32(sp0 - 0x40u));
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x48u;
    t11 = cow_call_regs(g, COW_IMG(0x102bc500u), g->eax, g->ecx, t10, 1, 1, sp0 - 0x10u);
    t12 = g->edx;
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x44u;
    t13 = cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, t12, 1, 3, sp0 - 0x10u, sp0 - 0x10u, sp0 - 0x10u);
    t14 = g->ecx;
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102bc500u), g->eax, g->ecx, sp0 - 0x10u, 1, 1, sp0 - 0x10u);
    t15 = g->edx;
    wr32(sp0 - 0x58u, sp0 + 4u);
    wr32(sp0 - 0x5cu, sp0 - 0x10u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t16 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x1cu, t16);
    wr32(sp0 - 0x20u, arg3 + 0x60u);
    g->ecx = arg3 + 0x60u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x60u, t16);
    t17 = g->ecx;
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t18 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x2cu, t18);
    wr32(sp0 - 0x30u, arg3 + 0x90u);
    g->eax = arg3 + 0x90u;
    g->esp = sp0 - 0x28u;
    t19 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x90u, t18);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, sp0 - 8u);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x90u, rd32(sp0 - 0x2cu));
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x30u;
    t22 = cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t21, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    wr32(sp0 - 0x40u, sp0 + 4u);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t23 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x48u, t23);
    wr32(sp0 - 0x4cu, arg3 + 0xcu);
    g->edx = arg3 + 0xcu;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xcu, t23);
    t24 = g->edx;
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t25 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x58u, t25);
    wr32(sp0 - 0x5cu, arg3 + 0x3cu);
    g->ecx = arg3 + 0x3cu;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x3cu, t25);
    t26 = g->ecx;
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    t27 = cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t28 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t28, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t29 = g->ecx;
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t30 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x30u, t30);
    wr32(sp0 - 0x34u, arg3 + 0x6cu);
    g->eax = arg3 + 0x6cu;
    g->esp = sp0 - 0x2cu;
    t31 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x6cu, t30);
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t32 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x40u, t32);
    wr32(sp0 - 0x44u, arg3 + 0x9cu);
    g->edx = arg3 + 0x9cu;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x9cu, t32);
    t33 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, sp0 - 8u);
    g->eax = sp0 - 0x10u;
    g->ecx = sp0 - 8u;
    t34 = cow_cdecl(g, COW_IMG(0x102bc5e0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x9cu, rd32(sp0 - 0x40u));
    t35 = g->ecx;
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->esp = sp0 - 0x44u;
    cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t36 = g->edx;
    wr32(sp0 - 0x54u, sp0 + 4u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t37 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x1cu, t37);
    wr32(sp0 - 0x20u, arg3 + 0x18u);
    g->ecx = arg3 + 0x18u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x18u, t37);
    t38 = g->ecx;
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t39 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x2cu, t39);
    wr32(sp0 - 0x30u, arg3 + 0x48u);
    g->eax = arg3 + 0x48u;
    g->edx = t39;
    g->esp = sp0 - 0x28u;
    t40 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x48u, t39);
    t41 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    t42 = cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, t41, 1, 3, sp0 - 0x10u, arg3 + 0x48u, rd32(sp0 - 0x2cu));
    t43 = g->ecx;
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->ecx = t43;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 0x10u, arg3 + 0x48u);
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x30u;
    t46 = cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t45, 1, 3, sp0 - 0x10u, sp0 - 0x10u, sp0 - 0x10u);
    t47 = g->edx;
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t47, 1, 3, sp0 - 0x10u, sp0 - 0x10u, sp0 - 0x10u);
    t48 = g->ecx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t49 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x4cu, t49);
    wr32(sp0 - 0x50u, arg3 + 0x78u);
    g->eax = arg3 + 0x78u;
    g->esp = sp0 - 0x48u;
    t50 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x78u, t49);
    wr32(sp0 - 0x54u, sp0 + 4u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t51 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x1cu, t51);
    wr32(sp0 - 0x20u, arg3 + 0xa8u);
    g->edx = arg3 + 0xa8u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xa8u, t51);
    t52 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 0x10u;
    g->ecx = sp0 - 8u;
    t53 = cow_cdecl(g, COW_IMG(0x102bc5e0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0xa8u, rd32(sp0 - 0x1cu));
    t54 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->ecx = t54;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t55 = g->ecx;
    t56 = g->edx;
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t57 = cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, t56, 1, 3, sp0 - 0x10u, sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t58 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x3cu, t58);
    wr32(sp0 - 0x40u, arg3 + 0x24u);
    g->edx = arg3 + 0x24u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x24u, t58);
    t59 = g->edx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t60 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x4cu, t60);
    wr32(sp0 - 0x50u, arg3 + 0x54u);
    g->eax = t60;
    g->ecx = arg3 + 0x54u;
    g->esp = sp0 - 0x48u;
    t61 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x54u, t60);
    t62 = g->ecx;
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->ecx = t62;
    cow_call_regs(g, COW_IMG(0x102bc600u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, arg3 + 0x54u, rd32(sp0 - 0x4cu));
    t63 = g->ecx;
    t64 = g->edx;
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x4cu;
    t65 = cow_call_regs(g, COW_IMG(0x102bc720u), g->eax, g->ecx, t64, 1, 3, sp0 - 0x10u, sp0 - 0x10u, arg3 + 0x54u);
    t66 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, t66, 1, 1, sp0 - 0x10u);
    t67 = g->ecx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t68 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x28u, t68);
    wr32(sp0 - 0x2cu, arg3 + 0x84u);
    g->eax = arg3 + 0x84u;
    g->esp = sp0 - 0x24u;
    t69 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x84u, t68);
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t70 = g->edx;
    t71 = arg1 * 0xcu + esi;
    wr32(sp0 - 0x38u, t71);
    wr32(sp0 - 0x3cu, arg3 + 0xb4u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xb4u, t71);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b7fa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b7fb0u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b7fb4u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b7fb7u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
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
void cow_adapter_102b7fa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b7fa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
