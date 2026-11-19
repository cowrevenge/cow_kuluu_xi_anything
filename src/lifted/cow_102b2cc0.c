/* f_0x102b2cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b2cc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b2cd4u: eax = g->eax; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b2cd4;
    case 0x102b2ce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102b2ce8;
    case 0x102b2d80u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b2d80;
    case 0x102b2d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b2d99;
    case 0x102b2da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b2da5;
    case 0x102b2defu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102b2def;
    default: break;
    }
#endif

    COW_AT(102b2cc0)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x4cu) == 0u) goto L_102b2ce8;
    COW_AT(102b2cd4)
    wr32(sp0 - 0x1cu, rd32(arg2));
    g->eax = rd32(arg2);
    t1 = rd32(arg2);
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x102a1fc0u), 1, t1);
    if (t2 == 2u) goto L_102b2def;
L_102b2ce8: ;
    COW_AT(102b2ce8)
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 0xcu, 0x3f800000u);
    wr32(sp0 - 8u, 0x3f800000u);
    wr32(sp0 - 4u, 0x3f800000u);
    t3 = rd32(arg1 + 0x54u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0xa48u, t3);
    t4 = rd32(arg1 + 0x3cu);
    wr32(rd32(rd32(COW_IMG(0x1099d200u)) + 0xa48u) + 0x1044u, t4);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    t5 = rd32(arg1 + 0x40u);
    t6 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa48u);
    wr32(t6 + 0x103cu, t5);
    g->eax = sp0 - 0x10u;
    g->edx = t5;
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x10283350u), 1, sp0 - 0x10u);
    t8 = g->edx;
    t9 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x20u, t9);
    g->ecx = t9;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x102833a0u), 1, t9);
    t11 = g->ecx;
    t12 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0x24u, t12);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x20u;
    t13 = cow_cdecl(g, COW_IMG(0x102833c0u), 1, t12);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x24u;
    t16 = cow_cdecl(g, COW_IMG(0x102833e0u), 3, 0u, 0u, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x38u, arg1 + 0x14u);
    g->eax = arg1 + 0x14u;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x34u;
    t21 = cow_cdecl(g, COW_IMG(0x102a34f0u), 1, arg1 + 0x14u);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd32(arg1 + 0x50u) == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(102b2d99)
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t32 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 2u, 0u);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    else
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        esi = rd32(arg1 + 0x50u);
    COW_AT(102b2d80)
        wr32(sp0 - 0x1cu, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t24 = cow_cdecl(g, COW_IMG(0x10298c70u), 3, esi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t25 = g->ecx;
        t26 = g->edx;
        g->ecx = t25;
        g->esp = sp0 - 0x1cu;
        t27 = cow_call_regs(g, COW_IMG(0x10281dd0u), g->eax, g->ecx, t26, 1, 0);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 6u);
        g->edx = t29;
        t30 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 6u, 0u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    COW_AT(102b2da5)
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, rd32(arg2));
    g->eax = eax;
    g->ecx = rd32(arg2);
    g->edx = edx;
    t34 = rd32(arg2);
    g->esp = sp0 - 0x1cu;
    t35 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t34);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x24u, 0x3f800000u);
    g->ecx = t36;
    g->esp = sp0 - 0x20u;
    t38 = cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, t37, 1, 1, 0x3f800000u);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x28u, 0x7d0u);
    g->ecx = t39;
    g->edx = t40;
    g->esp = sp0 - 0x24u;
    t41 = cow_cdecl(g, COW_IMG(0x10283fe0u), 1, 0x7d0u);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x2000000u);
    g->ecx = t42;
    g->esp = sp0 - 0x28u;
    t44 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0x2000000u, 0u);
    t45 = g->ecx;
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, rd32(arg2));
    g->ecx = t45;
    g->edx = rd32(arg2);
    t46 = rd32(arg2);
    g->esp = sp0 - 0x34u;
    t47 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t46);
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    g->ecx = t48;
    g->edx = t49;
    g->esp = sp0 - 0x38u;
    t50 = cow_cdecl(g, COW_IMG(0x10283fe0u), 1, 0u);
    t51 = g->ecx;
    t52 = g->edx;
    g->ecx = t51;
    g->esp = sp0 - 0x3cu;
    t53 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t52, 1, 0);
    t54 = g->ecx;
    t55 = g->edx;
    wr32(sp0 - 0x40u, 0u);
    cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
L_102b2def: ;
    COW_AT(102b2def)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b2cc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b2cd4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2ce8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2d80u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b2d99u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b2da5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2defu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2cc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b2cc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
