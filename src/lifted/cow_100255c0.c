/* f_0x100255c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100255c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100255c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100255c7;
    case 0x100255ccu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100255cc;
    case 0x100255d8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100255d8;
    case 0x100255f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100255f3;
    case 0x10025609u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10025609;
    case 0x10025613u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10025613;
    case 0x1002562eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1002562e;
    case 0x10025644u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10025644;
    case 0x10025721u: ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10025721;
    case 0x10025726u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10025726;
    case 0x100257a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_100257a2;
    case 0x1002581bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1002581b;
    default: break;
    }
#endif

    COW_AT(100255c0)
    if (rd32(self + 4u) != 0u) goto L_100255cc;
    eax = rd32(self + 4u);
    COW_AT(100255c7)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100255cc: ;
    COW_AT(100255cc)
    if (rd32(COW_IMG(0x10456e58u)) == 0u)
    {
    COW_AT(100255f3)
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t8);
        t9 = rd32(t8);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t9 + 0xf4u), rd32(COW_IMG(0x1045666cu)), 3, t8, 0u, 0u);
        t10 = g->edx;
        edx = t10;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456e58u));
    COW_AT(100255d8)
        g->eax = rd32(COW_IMG(0x1045666cu));
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x1045666cu));
        t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t3 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10025860u), ecx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        cow_thiscall(g, rd32(t3 + 0xf4u), t5, 3, t2, 0u, t4);
        t7 = g->edx;
        edx = t7;
    }
    COW_AT(10025609)
    if (rd32(COW_IMG(0x10456e5cu)) == 0u)
    {
    COW_AT(1002562e)
        t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t18);
        t19 = rd32(t18);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t19 + 0xf4u), rd32(COW_IMG(0x1045666cu)), 3, t18, 1u, 0u);
        t20 = g->edx;
        edx = t20;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456e5cu));
    COW_AT(10025613)
        g->eax = rd32(COW_IMG(0x1045666cu));
        g->edx = edx;
        t11 = rd32(COW_IMG(0x1045666cu));
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t13 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 8u;
        t14 = cow_thiscall(g, COW_IMG(0x10025860u), ecx, 0);
        t15 = g->ecx;
        t16 = g->edx;
        g->edx = t16;
        cow_thiscall(g, rd32(t13 + 0xf4u), t15, 3, t12, 1u, t14);
        t17 = g->edx;
        edx = t17;
    }
    COW_AT(10025644)
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t21) + 0xc8u), rd32(t21), 3, t21, 9u, 2u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t22) + 0xc8u), rd32(t22), 3, t22, 0x1bu, 0u);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t23) + 0xc8u), rd32(t23), 3, t23, 0x19u, 5u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t24) + 0xc8u), rd32(t24), 3, t24, 0xeu, 1u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 0xdu, 3u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 0u, 0xeu, 3u);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 0u, 0x18u, 0u);
    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 0u, 0xbu, 0u);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t30 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 4, t29, 0u, 1u, 5u);
    t31 = g->edx;
    if ((int32_t)arg1 <= 0)
    {
        edx = t31;
        goto L_100257a2;
    }
    edx = t31;
    COW_AT(10025721)
    if ((int32_t)arg1 > 2) goto L_100257a2;
    COW_AT(10025726)
    t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t32) + 0xfcu), rd32(t32), 4, t32, 1u, 1u, 0x12u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t33) + 0xfcu), rd32(t33), 4, t33, 1u, 4u, 7u);
    t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t34) + 0xfcu), rd32(t34), 4, t34, 1u, 2u, 1u);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t35) + 0xfcu), rd32(t35), 4, t35, 1u, 3u, 2u);
    t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t36) + 0xfcu), rd32(t36), 4, t36, 1u, 5u, 1u);
    loc_4 = 2u;
L_1002581b: ;
    COW_AT(1002581b)
    t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t42) + 0xfcu), rd32(t42), 3, t42, 1u, 6u);
    t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t43;
    g->esp = sp0;
    t44 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t43, 0x3cu, rd32(COW_IMG(0x10456e68u)), loc_4);
    g->esi = in_esi;
    g->edi = in_edi;
    return (t44 & 0xffffff00u) | 1u;
L_100257a2: ;
    COW_AT(100257a2)
    t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t37) + 0xfcu), rd32(t37), 4, t37, 1u, 1u, 5u);
    t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t38) + 0xfcu), rd32(t38), 4, t38, 1u, 2u, 1u);
    t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t39) + 0xfcu), rd32(t39), 4, t39, 1u, 3u, 3u);
    t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t40) + 0xfcu), rd32(t40), 4, t40, 1u, 4u, 6u);
    t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t41) + 0xfcu), rd32(t41), 4, t41, 1u, 5u, 1u);
    loc_4 = 3u;
    goto L_1002581b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100255c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100255c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100255ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100255d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100255f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10025609u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10025613u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1002562eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10025644u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10025721u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10025726u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100257a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1002581bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100255c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100255c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
