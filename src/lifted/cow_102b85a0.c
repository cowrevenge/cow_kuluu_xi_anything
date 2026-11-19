/* f_0x102b85a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b85a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t5;
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
    case 0x102b85b0u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85b0;
    case 0x102b85b4u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85b4;
    case 0x102b85b7u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85b7;
    case 0x102b85c4u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85c4;
    case 0x102b85c9u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85c9;
    case 0x102b85d2u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85d2;
    case 0x102b85d4u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85d4;
    case 0x102b85dfu: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b85df;
    default: break;
    }
#endif

    COW_AT(102b85a0)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b85b4)
        edi = rd32(eax + 0x54u);
    }
    else
    {
    COW_AT(102b85b0)
        edi = 0u;
    }
    COW_AT(102b85b7)
    wr32(sp0 - 8u, arg2);
    eax = 0u;
    ecx = arg2 + 0x10u;
L_102b85c4: ;
    COW_AT(102b85c4)
    if (rd32(ecx) == 0u) goto L_102b85d4;
    COW_AT(102b85c9)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_102b85c4;
    }
    ecx = ecx + 4u;
    COW_AT(102b85d2)
L_102b85df: ;
    COW_AT(102b85df)
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x102bc5a0u), 4, sp0 - 8u, sp0 - 0x10u, in_edi, in_esi);
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t3 = g->edx;
    t4 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x2cu, t4);
    wr32(sp0 - 0x30u, arg3);
    g->ecx = t4;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3, t4);
    t5 = g->ecx;
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t6 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x3cu, t6);
    wr32(sp0 - 0x40u, arg3 + 0xcu);
    g->eax = arg3 + 0xcu;
    g->esp = sp0 - 0x38u;
    t7 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xcu, t6);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    wr32(sp0 - 0x48u, sp0 - 8u);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0xcu, rd32(sp0 - 0x3cu));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x40u;
    t10 = cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, t9, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t11 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x58u, t11);
    wr32(sp0 - 0x5cu, arg3 + 0x18u);
    g->edx = arg3 + 0x18u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x18u, t11);
    t12 = g->edx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t13 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x24u, t13);
    wr32(sp0 - 0x28u, arg3 + 0x24u);
    g->ecx = arg3 + 0x24u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x24u, t13);
    t14 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->eax = sp0 - 8u;
    t15 = cow_cdecl(g, COW_IMG(0x102bc560u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x24u, rd32(sp0 - 0x24u));
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t16 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x3cu, t16);
    wr32(sp0 - 0x40u, arg3 + 0x30u);
    g->edx = arg3 + 0x30u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x30u, t16);
    t17 = g->edx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t18 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x4cu, t18);
    wr32(sp0 - 0x50u, arg3 + 0x3cu);
    g->ecx = arg3 + 0x3cu;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x3cu, t18);
    t19 = g->ecx;
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x3cu, rd32(sp0 - 0x4cu));
    t21 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t21, 1, 3, sp0 - 0x10u, in_edi, in_esi);
    t22 = g->ecx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t23 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x28u, t23);
    wr32(sp0 - 0x2cu, arg3 + 0x48u);
    g->eax = arg3 + 0x48u;
    g->esp = sp0 - 0x24u;
    t24 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x48u, t23);
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t25 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x38u, t25);
    wr32(sp0 - 0x3cu, arg3 + 0x54u);
    g->ecx = t25;
    g->edx = arg3 + 0x54u;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x54u, t25);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->eax = sp0 - 8u;
    t28 = cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, t27, 1, 3, sp0 - 8u, arg3 + 0x54u, rd32(sp0 - 0x38u));
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    wr32(sp0 - 0x48u, sp0 - 8u);
    g->ecx = sp0 - 0x10u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102bc520u), 4, sp0 - 8u, sp0 - 0x10u, sp0 - 8u, arg3 + 0x54u);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x48u;
    t31 = cow_call_regs(g, COW_IMG(0x102bc4c0u), g->eax, g->ecx, t30, 1, 1, sp0 - 0x10u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t32 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x58u, t32);
    wr32(sp0 - 0x5cu, arg3 + 0x60u);
    g->edx = arg3 + 0x60u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x60u, t32);
    t33 = g->edx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t34 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x24u, t34);
    wr32(sp0 - 0x28u, arg3 + 0x6cu);
    g->ecx = arg3 + 0x6cu;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x6cu, t34);
    t35 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    t36 = cow_cdecl(g, COW_IMG(0x102bc5e0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x6cu, rd32(sp0 - 0x24u));
    t37 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x102bc500u), g->eax, g->ecx, t37, 1, 1, sp0 - 0x10u);
    t38 = g->ecx;
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t39 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x40u, t39);
    wr32(sp0 - 0x44u, arg3 + 0x78u);
    g->eax = arg3 + 0x78u;
    g->esp = sp0 - 0x3cu;
    t40 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x78u, t39);
    wr32(sp0 - 0x48u, sp0 + 4u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t41 = g->edx;
    t42 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x50u, t42);
    wr32(sp0 - 0x54u, arg3 + 0x84u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x84u, t42);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102b85d4: ;
    COW_AT(102b85d4)
    t1 = rd8(COW_IMG(0x103c7b80u) + eax * 4u);
    wr8(sp0 - 4u, (uint8_t)t1);
    ecx = (ecx & 0xffffff00u) | t1;
    goto L_102b85df;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b85a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b85b0u:
    {
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
        (void)sp0;
        return 1;
    }
    case 0x102b85b4u:
    {
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
        (void)sp0;
        return 1;
    }
    case 0x102b85b7u:
    {
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
        (void)sp0;
        return 1;
    }
    case 0x102b85c4u:
    {
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
        (void)sp0;
        return 1;
    }
    case 0x102b85c9u:
    {
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
        (void)sp0;
        return 1;
    }
    case 0x102b85d2u:
    {
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
        (void)sp0;
        return 1;
    }
    case 0x102b85d4u:
    {
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
        (void)sp0;
        return 1;
    }
    case 0x102b85dfu:
    {
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
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b85a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b85a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
