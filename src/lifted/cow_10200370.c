/* f_0x10200370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10200370(Guest* g)
{
    uint32_t eax;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10200379u: in_eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10200379;
    case 0x10200391u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10200391;
    case 0x102003adu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102003ad;
    case 0x102003b9u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102003b9;
    case 0x102003c8u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102003c8;
    case 0x102003d7u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102003d7;
    case 0x102003e3u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102003e3;
    case 0x102003f1u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102003f1;
    case 0x10200445u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10200445;
    case 0x1020048bu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020048b;
    default: break;
    }
#endif

    COW_AT(10200370)
    if ((rd8(self + 0x63u) & 2u) != 0u)
    {
    COW_AT(10200379)
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
        t2 = g->edx;
        cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
    }
    COW_AT(10200391)
    t3 = rd8(self + 0x5cu);
    t4 = rd32(self + 0x24u);
    t5 = rd32(self + 0x20u);
    g->eax = t3;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x100e68a0u), 4, 1u, t5, t4, t3);
    t7 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
    COW_AT(102003ad)
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
        t8 = g->edx;
        edx = t8;
    }
    COW_AT(102003b9)
    if (rd32(self + 0x14u) - 2u > 0xau)
    {
        eax = rd32(self + 0x14u) - 2u;
        goto L_1020048b;
    }
    eax = rd32(self + 0x14u) - 2u;
    COW_AT(102003c8)
    t9 = rd32(COW_IMG(0x10200490u) + rd8(COW_IMG(0x102004a0u) + eax) * 4u);
    switch (t9 - RD)
    {
    case 0x102003d7u: goto L_102003d7;
    case 0x102003e3u: goto L_102003e3;
    case 0x102003f1u: goto L_102003f1;
    case 0x10200445u: goto L_10200445;
    default: rt_fatal(g, COW_IMG(0x102003d0u), "switch");
    }
    return 0;
L_102003d7: ;
    COW_AT(102003d7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t44 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
    t45 = g->edx;
    eax = t44;
    edx = t45;
L_102003e3: ;
    COW_AT(102003e3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t46 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
    t47 = g->edx;
    g->esi = in_esi;
    g->edx = t47;
    return t46;
L_102003f1: ;
    COW_AT(102003f1)
    g->eax = eax;
    g->edx = edx;
    t26 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, COW_IMG(0x10118b60u), t26, 2, 5u, 2u);
    t28 = g->ecx;
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x73u);
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 2u, t30);
    t33 = g->edx;
    g->edx = t33;
    t34 = rd32(self + 8u);
    t35 = cow_thiscall(g, COW_IMG(0x10118b60u), t34, 2, 5u, 1u);
    t36 = g->ecx;
    t37 = g->edx;
    g->edx = t37;
    t38 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x73u);
    t39 = g->edx;
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 1u, t38);
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 4u);
    t43 = g->edx;
    g->esi = in_esi;
    g->edx = t43;
    return t42;
L_10200445: ;
    COW_AT(10200445)
    g->eax = eax;
    g->edx = edx;
    t10 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10118b60u), t10, 2, 5u, 2u);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x73u);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 2u, t14);
    t17 = g->edx;
    g->edx = t17;
    t18 = rd32(self + 8u);
    t19 = cow_thiscall(g, COW_IMG(0x10118b60u), t18, 2, 5u, 1u);
    t20 = g->ecx;
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x73u);
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 1u, t22);
    t25 = g->edx;
    eax = t24;
    edx = t25;
L_1020048b: ;
    COW_AT(1020048b)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10200370(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10200379u:
    {
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10200391u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102003adu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102003b9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102003c8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102003d7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102003e3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102003f1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10200445u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020048bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10200370(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10200370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
