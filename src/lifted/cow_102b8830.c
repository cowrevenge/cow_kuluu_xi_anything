/* f_0x102b8830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b8830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t6;
    uint32_t t7;
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
    case 0x102b8840u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8840;
    case 0x102b8844u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8844;
    case 0x102b8847u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8847;
    case 0x102b884bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b884b;
    case 0x102b884fu: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b884f;
    case 0x102b8856u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8856;
    case 0x102b8860u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8860;
    case 0x102b8869u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8869;
    case 0x102b886fu: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b886f;
    case 0x102b8871u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b8871;
    case 0x102b887cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b887c;
    default: break;
    }
#endif

    COW_AT(102b8830)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b8844)
        edi = rd32(eax + 0x54u);
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b8840)
        edi = 0u;
    }
    COW_AT(102b8847)
    if (eax != 0u)
    {
    COW_AT(102b884f)
        ecx = rd32(eax + rd32(arg1 + 0x44u) * 4u + 0x54u);
    }
    else
    {
    COW_AT(102b884b)
        ecx = 0u;
    }
    COW_AT(102b8856)
    wr32(sp0 - 8u, arg2);
    eax = 0u;
L_102b8860: ;
    COW_AT(102b8860)
    if (rd32(ecx + rd32(arg2 + eax * 4u) * 4u) == 4u) goto L_102b8871;
    COW_AT(102b8869)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        goto L_102b8860;
    }
    COW_AT(102b886f)
    edx = arg2;
L_102b887c: ;
    COW_AT(102b887c)
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t2 = g->ecx;
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t3 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x2cu, t3);
    wr32(sp0 - 0x30u, arg3);
    g->edx = t3;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3, t3);
    t4 = g->edx;
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t5 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x3cu, t5);
    wr32(sp0 - 0x40u, arg3 + 0xcu);
    g->ecx = arg3 + 0xcu;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xcu, t5);
    t6 = g->ecx;
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    wr32(sp0 - 0x48u, sp0 - 8u);
    g->eax = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0xcu, rd32(sp0 - 0x3cu));
    wr32(sp0 - 0x4cu, sp0 + 4u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t8 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x54u, t8);
    wr32(sp0 - 0x58u, arg3 + 0x18u);
    g->edx = arg3 + 0x18u;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x18u, t8);
    t9 = g->edx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t10 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x24u, t10);
    wr32(sp0 - 0x28u, arg3 + 0x24u);
    g->ecx = arg3 + 0x24u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x24u, t10);
    t11 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->eax = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x24u, rd32(sp0 - 0x24u));
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t13 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x3cu, t13);
    wr32(sp0 - 0x40u, arg3 + 0x30u);
    g->edx = arg3 + 0x30u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x30u, t13);
    t14 = g->edx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t15 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x4cu, t15);
    wr32(sp0 - 0x50u, arg3 + 0x3cu);
    g->ecx = arg3 + 0x3cu;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x3cu, t15);
    t16 = g->ecx;
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    t17 = cow_cdecl(g, COW_IMG(0x102bc5e0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x3cu, rd32(sp0 - 0x4cu));
    t18 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, t18, 1, 3, sp0 - 0x10u, in_edi, in_esi);
    t19 = g->ecx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t20 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x28u, t20);
    wr32(sp0 - 0x2cu, arg3 + 0x48u);
    g->eax = arg3 + 0x48u;
    g->esp = sp0 - 0x24u;
    t21 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x48u, t20);
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t22 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x38u, t22);
    wr32(sp0 - 0x3cu, arg3 + 0x54u);
    g->edx = arg3 + 0x54u;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x54u, t22);
    t23 = g->edx;
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    wr32(sp0 - 0x44u, sp0 - 8u);
    g->eax = sp0 - 0x10u;
    g->ecx = sp0 - 8u;
    t24 = cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x54u, rd32(sp0 - 0x38u));
    t25 = g->ecx;
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->ecx = t25;
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x40u;
    t28 = cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t27, 1, 3, sp0 - 0x10u, sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t29 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x58u, t29);
    wr32(sp0 - 0x5cu, arg3 + 0x60u);
    g->edx = arg3 + 0x60u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x60u, t29);
    t30 = g->edx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t31 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x24u, t31);
    wr32(sp0 - 0x28u, arg3 + 0x6cu);
    g->ecx = arg3 + 0x6cu;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x6cu, t31);
    t32 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    t33 = cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x6cu, rd32(sp0 - 0x24u));
    t34 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    t35 = cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t34, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t36 = g->ecx;
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 0x10u, sp0 - 8u);
    t37 = g->edx;
    wr32(sp0 - 0x3cu, sp0 + 4u);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t38 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x44u, t38);
    wr32(sp0 - 0x48u, arg3 + 0x78u);
    g->ecx = arg3 + 0x78u;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x78u, t38);
    t39 = g->ecx;
    wr32(sp0 - 0x4cu, sp0 + 4u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t40 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x54u, t40);
    wr32(sp0 - 0x58u, arg3 + 0x84u);
    g->eax = arg3 + 0x84u;
    g->esp = sp0 - 0x50u;
    t41 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x84u, t40);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102bc520u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t44 = cow_call_regs(g, COW_IMG(0x102bc6e0u), g->eax, g->ecx, t43, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t45 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x30u, t45);
    wr32(sp0 - 0x34u, arg3 + 0x90u);
    g->edx = arg3 + 0x90u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x90u, t45);
    t46 = g->edx;
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t47 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x40u, t47);
    wr32(sp0 - 0x44u, arg3 + 0x9cu);
    g->eax = t47;
    g->ecx = arg3 + 0x9cu;
    g->esp = sp0 - 0x3cu;
    t48 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x9cu, t47);
    t49 = g->ecx;
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->ecx = t49;
    cow_call_regs(g, COW_IMG(0x102bc600u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, arg3 + 0x9cu, rd32(sp0 - 0x40u));
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x48u;
    t52 = cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, t51, 1, 1, sp0 - 0x10u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t53 = g->edx;
    t54 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x58u, t54);
    wr32(sp0 - 0x5cu, arg3 + 0xa8u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xa8u, t54);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102b8871: ;
    COW_AT(102b8871)
    t1 = rd8(COW_IMG(0x103c7b80u) + eax * 4u);
    wr8(sp0 - 4u, (uint8_t)t1);
    edx = (arg2 & 0xffffff00u) | t1;
    goto L_102b887c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b8830(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b8840u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b8844u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b8847u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b884bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b884fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b8856u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b8860u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b8869u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b886fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b8871u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b887cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
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
void cow_adapter_102b8830(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b8830(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
