/* f_0x102b9120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b9120(Guest* g)
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
    uint32_t t4;
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
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b9130u: eax = g->eax; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9130;
    case 0x102b9134u: eax = g->eax; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9134;
    case 0x102b9137u: eax = g->eax; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9137;
    case 0x102b913bu: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b913b;
    case 0x102b913fu: eax = g->eax; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b913f;
    case 0x102b9146u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9146;
    case 0x102b9150u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9150;
    case 0x102b9159u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9159;
    case 0x102b915fu: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b915f;
    case 0x102b9161u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9161;
    case 0x102b9165u: eax = g->eax; ecx = g->ecx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b9165;
    default: break;
    }
#endif

    COW_AT(102b9120)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b9134)
        edi = rd32(eax + 0x54u);
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b9130)
        edi = 0u;
    }
    COW_AT(102b9137)
    if (eax != 0u)
    {
    COW_AT(102b913f)
        ecx = rd32(eax + rd32(arg1 + 0x44u) * 4u + 0x54u);
    }
    else
    {
    COW_AT(102b913b)
        ecx = 0u;
    }
    COW_AT(102b9146)
    wr32(sp0 - 8u, arg2);
    eax = 0u;
L_102b9150: ;
    COW_AT(102b9150)
    if (rd32(ecx + rd32(arg2 + eax * 4u) * 4u) == 5u) goto L_102b9161;
    COW_AT(102b9159)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        goto L_102b9150;
    }
    COW_AT(102b915f)
L_102b9165: ;
    COW_AT(102b9165)
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 8u, sp0 + 4u);
    t1 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x28u, arg3);
    g->edx = t1;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3, t1);
    t2 = g->edx;
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 8u, sp0 + 4u);
    t3 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x34u, t3);
    wr32(sp0 - 0x38u, arg3 + 0xcu);
    g->ecx = arg3 + 0xcu;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0xcu, t3);
    t4 = g->ecx;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, sp0 - 8u);
    g->eax = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0xcu, rd32(sp0 - 0x34u));
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t6 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x4cu, t6);
    wr32(sp0 - 0x50u, arg3 + 0x18u);
    g->edx = arg3 + 0x18u;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x18u, t6);
    t7 = g->edx;
    wr32(sp0 - 0x54u, sp0 + 4u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t8 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x1cu, t8);
    wr32(sp0 - 0x20u, arg3 + 0x24u);
    g->ecx = arg3 + 0x24u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x24u, t8);
    t9 = g->ecx;
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    t10 = cow_cdecl(g, COW_IMG(0x102bc4a0u), 2, sp0 - 8u, sp0 - 0x10u);
    t11 = g->edx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    t12 = cow_call_regs(g, COW_IMG(0x102bc5c0u), g->eax, g->ecx, t11, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t13 = g->ecx;
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102bc580u), g->eax, g->ecx, sp0 - 0x10u, 1, 3, sp0 - 0x10u, sp0 - 0x10u, sp0 - 8u);
    t14 = g->edx;
    wr32(sp0 - 0x34u, sp0 + 4u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t15 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x3cu, t15);
    wr32(sp0 - 0x40u, arg3 + 0x30u);
    g->ecx = arg3 + 0x30u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x30u, t15);
    t16 = g->ecx;
    wr32(sp0 - 0x44u, sp0 + 4u);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t17 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x4cu, t17);
    wr32(sp0 - 0x50u, arg3 + 0x3cu);
    g->eax = arg3 + 0x3cu;
    g->edx = t17;
    g->esp = sp0 - 0x48u;
    t18 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x3cu, t17);
    t19 = g->edx;
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    t20 = cow_call_regs(g, COW_IMG(0x102bc540u), g->eax, g->ecx, t19, 1, 3, sp0 - 0x10u, arg3 + 0x3cu, rd32(sp0 - 0x4cu));
    t21 = g->ecx;
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->esp = sp0 - 0x54u;
    cow_call_regs(g, COW_IMG(0x102bc500u), g->eax, g->ecx, sp0 - 0x10u, 1, 1, sp0 - 0x10u);
    t22 = g->edx;
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t23 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x24u, t23);
    wr32(sp0 - 0x28u, arg3 + 0x48u);
    g->ecx = arg3 + 0x48u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x48u, t23);
    t24 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    t25 = cow_cdecl(g, COW_IMG(0x102bc6c0u), 4, sp0 - 8u, sp0 - 0x10u, arg3 + 0x48u, rd32(sp0 - 0x24u));
    t26 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102bc7a0u), g->eax, g->ecx, t26, 1, 3, sp0 - 0x10u, sp0 - 8u, sp0 - 0x10u);
    t27 = g->ecx;
    wr32(sp0 - 0x38u, sp0 + 4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102bc7c0u), 2, sp0 - 0x10u, sp0 + 4u);
    t28 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x40u, t28);
    wr32(sp0 - 0x44u, arg3 + 0x54u);
    g->eax = arg3 + 0x54u;
    g->esp = sp0 - 0x3cu;
    t29 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x54u, t28);
    wr32(sp0 - 0x48u, sp0 + 4u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bc7e0u), 2, sp0 - 0x10u, sp0 + 4u);
    t30 = g->edx;
    t31 = arg1 * 0xcu + edi;
    wr32(sp0 - 0x50u, t31);
    wr32(sp0 - 0x54u, arg3 + 0x60u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg3 + 0x60u, t31);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102b9161: ;
    COW_AT(102b9161)
    wr8(sp0 - 4u, (uint8_t)eax);
    goto L_102b9165;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b9120(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b9130u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b9134u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b9137u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b913bu:
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
    case 0x102b913fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b9146u:
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
    case 0x102b9150u:
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
    case 0x102b9159u:
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
    case 0x102b915fu:
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
    case 0x102b9161u:
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
    case 0x102b9165u:
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
void cow_adapter_102b9120(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b9120(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
