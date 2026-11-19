/* f_0x102a2b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102a2b30(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a2b9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a2b9f;
    case 0x102a2ba6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a2ba6;
    case 0x102a2bb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a2bb3;
    default: break;
    }
#endif

    COW_AT(102a2b30)
    t1 = rd32(rd32(sp0 + 8u) + 0x18u);
    g->eax = t1;
    t2 = rd32(sp0 + 8u);
    t3 = cow_cdecl(g, COW_IMG(0x102a1ee0u), 3, t1, in_edi, in_esi);
    t4 = rd32(t2 + 0x18u);
    t5 = rd32(t3 + 0x20u);
    wr32(sp0 + 8u, t5);
    g->ecx = t5;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x102a1ee0u), 3, t4, t1, in_edi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(t6 + 0x20u, 0u);
    t9 = rd32(t2 + 4u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10283e20u), 1, t9);
    t10 = rd32(arg3 * 0x30u + rd32(arg1 + 0x40u));
    g->eax = t10;
    g->ecx = arg3 * 0x30u;
    g->edx = rd32(arg1 + 0x40u);
    t11 = rd32(arg1 + 0x40u);
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x1028f610u), 3, arg1, t10, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    g->ecx = t13;
    g->esp = sp0 - 0x20u;
    t15 = cow_call_regs(g, COW_IMG(0x10297ee0u), g->eax, g->ecx, t14, 1, 1, 1u);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x24u;
    t18 = cow_cdecl(g, COW_IMG(0x10297310u), 1, 2u);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    g->esp = sp0 - 0x28u;
    t21 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 0xau);
    t22 = g->edx;
    if (rd32(rd32(t2 + 0x18u)) != 0xf0005u)
    {
        eax = t21;
        ecx = rd32(t2 + 0x18u);
        edx = t22;
        esi = t2;
    COW_AT(102a2ba6)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t26 = cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, edx, 1, 1, 0x3f800000u);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    else
    {
        eax = t21;
        ecx = rd32(t2 + 0x18u);
        edx = t22;
        esi = t2;
    COW_AT(102a2b9f)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t23 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, edx, 1, 0);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    }
    COW_AT(102a2bb3)
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10281d40u), 3, 0u, 0u, 0u);
    t29 = rd32(arg1 + 0x18u) + rd32(arg1 + 0x1cu) * 0xcu;
    t30 = rd32(esi + 0x18u);
    g->eax = rd32(arg1 + 0x18u);
    g->ecx = t29;
    g->edx = t30;
    t31 = rd32(arg1 + 0x18u);
    g->esp = sp0 - 0x1cu;
    t32 = cow_cdecl(g, COW_IMG(0x102a1f40u), 1, t30);
    t33 = g->ecx;
    t34 = g->edx;
    g->ecx = t33;
    g->edx = t34;
    g->esp = sp0 - 0x20u;
    t35 = cow_cdecl(g, COW_IMG(0x10281d40u), 3, 0x80u, 0x80u, 1u);
    t36 = g->ecx;
    t37 = g->edx;
    g->ecx = t36;
    g->esp = sp0 - 0x2cu;
    t38 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t37, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    g->ecx = t39;
    g->edx = t40;
    t41 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 0xfffffff6u);
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->edx = t43;
    g->esp = sp0 - 0x30u;
    t44 = cow_cdecl(g, COW_IMG(0x10297310u), 1, 0xffffffffu);
    t45 = g->ecx;
    t46 = g->edx;
    g->ecx = t45;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x10297ee0u), g->eax, g->ecx, t46, 1, 1, 0u);
    t47 = g->ecx;
    t48 = g->edx;
    t49 = rd32(esi + 0x18u);
    g->eax = t49;
    g->edx = t48;
    g->esp = sp0 - 0x30u;
    t50 = cow_cdecl(g, COW_IMG(0x102a1ee0u), 3, t49, 0u, 0xffffffffu);
    t51 = g->edx;
    t52 = rd32(sp0 + 8u);
    wr32(t50 + 0x20u, t52);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t51;
    return t50;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a2b30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a2b9fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a2ba6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a2bb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a2b30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a2b30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
