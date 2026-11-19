/* f_0x101542b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101542b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101542c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101542c5;
    case 0x101542cau: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101542ca;
    case 0x101542cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101542cf;
    case 0x101542d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101542d6;
    case 0x101542d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101542d9;
    case 0x101542dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101542df;
    case 0x101542e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101542e6;
    case 0x1015433cu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_1015433c;
    case 0x1015438du: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_1015438d;
    case 0x101543e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_101543e2;
    case 0x10154438u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_10154438;
    default: break;
    }
#endif

    COW_AT(101542b0)
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_101542d6;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(101542c5)
    if (eax == 2u) goto L_101542cf;
    COW_AT(101542ca)
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_101542d9;
    }
L_101542cf: ;
    COW_AT(101542cf)
    eax = 1u;
L_101542df: ;
    COW_AT(101542df)
    t1 = rd32(COW_IMG(0x10154448u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101542e6u: goto L_101542e6;
    case 0x1015433cu: goto L_1015433c;
    case 0x1015438du: goto L_1015438d;
    case 0x101543e2u: goto L_101543e2;
    default: rt_fatal(g, COW_IMG(0x101542dfu), "switch");
    }
    return 0;
L_101542d6: ;
    COW_AT(101542d6)
    cf = eax < 3u;
    zf = eax == 3u;
L_101542d9: ;
    COW_AT(101542d9)
    if (!cf && !zf) goto L_10154438;
    goto L_101542df;
L_101542e6: ;
    COW_AT(101542e6)
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t37 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t38 = g->edx;
    g->edx = t38;
    cow_thiscall(g, COW_IMG(0x10155550u), sp0 - 0x40u, 0);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    t41 = cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, t40, 1, 2, sp0 - 0x40u, arg2);
    t42 = g->edx;
    t43 = cow_thiscall(g, COW_IMG(0x10155600u), sp0 - 0x40u, 0);
    g->edx = rd32(t43);
    t44 = rd32(t43);
    t45 = cow_thiscall(g, rd32(t44 + 4u), t43, 0);
    t46 = g->edx;
    wr32(sp0 - 0x4cu, t45);
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t45);
    t48 = g->edx;
    t49 = cow_thiscall(g, COW_IMG(0x10155500u), sp0 - 0x40u, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return (t49 & 0xffff0000u) | (uint16_t)t37;
L_1015433c: ;
    COW_AT(1015433c)
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t26 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t27 = g->edx;
    g->edx = t27;
    cow_thiscall(g, COW_IMG(0x10155160u), sp0 - 0x30u, 0);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    t30 = cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, t29, 1, 2, sp0 - 0x30u, arg2);
    t31 = g->edx;
    t32 = cow_thiscall(g, COW_IMG(0x101552d0u), sp0 - 0x30u, 0);
    wr32(sp0 - 0x4cu, arg1);
    g->edx = rd32(t32);
    t33 = rd32(t32);
    t34 = cow_thiscall(g, rd32(t33 + 4u), t32, 1, arg1);
    t35 = g->edx;
    t36 = cow_thiscall(g, COW_IMG(0x10155100u), sp0 - 0x30u, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return (t36 & 0xffff0000u) | (uint16_t)t26;
L_1015438d: ;
    COW_AT(1015438d)
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t15 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t16 = g->edx;
    t17 = cow_thiscall(g, COW_IMG(0x10154dc0u), sp0 - 0x30u, 0);
    t18 = g->ecx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x30u);
    t19 = cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, sp0 - 0x30u, 1, 2, sp0 - 0x30u, arg2);
    t20 = g->edx;
    t21 = cow_thiscall(g, COW_IMG(0x10154f00u), sp0 - 0x30u, 0);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0xffffffffu);
    wr32(sp0 - 0x54u, arg1);
    g->edx = rd32(t21);
    t22 = rd32(t21);
    t23 = cow_thiscall(g, rd32(t22 + 0x20u), t21, 3, arg1, 0xffffffffu, 0u);
    t24 = g->edx;
    t25 = cow_thiscall(g, COW_IMG(0x10154d70u), sp0 - 0x30u, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return (t25 & 0xffff0000u) | (uint16_t)t15;
L_101543e2: ;
    COW_AT(101543e2)
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, arg2);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t2 = cow_cdecl(g, COW_IMG(0x10257820u), 2, arg2, 0u);
    t3 = g->edx;
    t4 = cow_thiscall(g, COW_IMG(0x10155370u), sp0 - 0x30u, 0);
    t5 = g->ecx;
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, sp0 - 0x30u);
    t6 = cow_call_regs(g, COW_IMG(0x101540a0u), g->eax, g->ecx, sp0 - 0x30u, 1, 2, sp0 - 0x30u, arg2);
    t7 = g->edx;
    t8 = cow_thiscall(g, COW_IMG(0x101554e0u), sp0 - 0x30u, 0);
    g->edx = rd32(t8);
    t9 = rd32(t8);
    t10 = cow_thiscall(g, rd32(t9 + 0x1cu), t8, 0);
    t11 = g->edx;
    wr32(sp0 - 0x4cu, t10);
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t10);
    t13 = g->edx;
    t14 = cow_thiscall(g, COW_IMG(0x10155320u), sp0 - 0x30u, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return (t14 & 0xffff0000u) | (uint16_t)t2;
L_10154438: ;
    COW_AT(10154438)
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffff0000u) | (uint16_t)arg2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101542b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101542c5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101542cau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101542cfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101542d6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101542d9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101542dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101542e6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1015433cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1015438du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101543e2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10154438u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101542b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101542b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
