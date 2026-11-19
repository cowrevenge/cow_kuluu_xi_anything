/* f_0x10033a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10033a70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10033a81u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033a81;
    case 0x10033b04u: ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033b04;
    case 0x10033b09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033b09;
    case 0x10033b85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033b85;
    case 0x10033bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033bfe;
    case 0x10033c46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033c46;
    case 0x10033c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033c4d;
    case 0x10033c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033c53;
    case 0x10033d0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d0b;
    case 0x10033d15u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d15;
    case 0x10033d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d1c;
    case 0x10033d20u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d20;
    case 0x10033d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d23;
    case 0x10033d3au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d3a;
    case 0x10033d4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d4f;
    case 0x10033d59u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d59;
    case 0x10033d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d60;
    case 0x10033d64u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d64;
    case 0x10033d67u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d67;
    case 0x10033d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10033d82;
    default: break;
    }
#endif

    COW_AT(10033a70)
    if (rd16(COW_IMG(0x1045b77au)) != 1u)
    {
        eax = in_eax;
        goto L_10033c4d;
    }
    COW_AT(10033a81)
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t1) + 0xfcu), rd32(t1), 4, t1, 0u, 1u, 5u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t2) + 0xfcu), rd32(t2), 4, t2, 0u, 2u, 2u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t3) + 0xfcu), rd32(t3), 4, t3, 0u, 4u, 5u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, 0u, 5u, 2u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t6 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 3u, 1u);
    t7 = g->edx;
    if ((int32_t)arg1 <= 0)
    {
        edx = t7;
        goto L_10033b85;
    }
    edx = t7;
    COW_AT(10033b04)
    if ((int32_t)arg1 > 2) goto L_10033b85;
    COW_AT(10033b09)
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 1u, 1u, 0x12u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 1u, 4u, 7u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 1u, 2u, 1u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 1u, 3u, 2u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 1u, 5u, 1u);
    loc_8 = 2u;
L_10033bfe: ;
    COW_AT(10033bfe)
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 3, t18, 1u, 6u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t19;
    g->edx = rd32(COW_IMG(0x1045b808u));
    t20 = rd32(COW_IMG(0x1045b808u));
    g->esp = sp0 - 4u;
    t21 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t19, 0x3cu, t20, loc_8);
    t22 = g->edx;
    if (!((double)rdf32(COW_IMG(0x1045b80cu)) < (double)rdf32(COW_IMG(0x1032a3a0u))))
    {
        edx = t22;
        goto L_10033d0b;
    }
    edx = t22;
    COW_AT(10033c46)
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        goto L_10033c53;
    }
    eax = rd32(self + 8u);
L_10033c4d: ;
    COW_AT(10033c4d)
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_10033b85: ;
    COW_AT(10033b85)
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 1u, 1u, 5u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 1u, 2u, 1u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 1u, 3u, 3u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, 1u, 4u, 6u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 1u, 5u, 1u);
    loc_8 = 3u;
    goto L_10033bfe;
L_10033c53: ;
    COW_AT(10033c53)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t23 = cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), edx, 2, 0u, 0u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 3u, COW_IMG(0x10457468u));
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, COW_IMG(0x10457270u));
    t28 = g->edx;
    g->edx = t28;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, COW_IMG(0x10457228u));
    t29 = g->edx;
    t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t30) + 0xc8u), rd32(t30), 3, t30, 7u, 1u);
    t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t31) + 0xc8u), rd32(t31), 3, t31, 0xeu, 1u);
    t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t32) + 0xc8u), rd32(t32), 3, t32, 9u, 2u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t33) + 0xc8u), rd32(t33), 3, t33, 0x1cu, 1u);
    t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t35 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(t34) + 0xc8u), rd32(t34), 3, t34, 0x89u, 1u);
    t36 = g->edx;
    edx = t36;
L_10033d0b: ;
    COW_AT(10033d0b)
    if (rd32(COW_IMG(0x1045b800u)) == 0u)
    {
    COW_AT(10033d3a)
        t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(t40) + 0xf4u), rd32(t40), 3, t40, 0u, 0u);
        t41 = g->edx;
        edx = t41;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1045b800u));
    COW_AT(10033d15)
        if (rd32(ecx + 0x40u) == 0u)
        {
    COW_AT(10033d20)
            ecx = rd32(ecx + 0x44u);
        }
        else
        {
            eax = rd32(ecx + 0x40u);
    COW_AT(10033d1c)
            ecx = eax;
        }
    COW_AT(10033d23)
        t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t37);
        t38 = rd32(t37);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t38 + 0xf4u), ecx, 3, t37, 0u, ecx);
        t39 = g->edx;
        edx = t39;
    }
    COW_AT(10033d4f)
    if (rd32(COW_IMG(0x1045b804u)) == 0u) goto L_10033d82;
    ecx = rd32(COW_IMG(0x1045b804u));
    COW_AT(10033d59)
    if (rd32(ecx + 0x40u) == 0u)
    {
    COW_AT(10033d64)
        ecx = rd32(ecx + 0x44u);
    }
    else
    {
        eax = rd32(ecx + 0x40u);
    COW_AT(10033d60)
        ecx = eax;
    }
    COW_AT(10033d67)
    t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t42;
    g->esp = sp0 - 4u;
    t43 = cow_thiscall(g, rd32(rd32(t42) + 0xf4u), ecx, 3, t42, 1u, ecx);
    g->esi = in_esi;
    return (t43 & 0xffffff00u) | 1u;
L_10033d82: ;
    COW_AT(10033d82)
    t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t44;
    g->esp = sp0 - 4u;
    t45 = cow_thiscall(g, rd32(rd32(t44) + 0xf4u), rd32(t44), 3, t44, 1u, 0u);
    g->esi = in_esi;
    return (t45 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10033a70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10033a81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033b04u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10033b09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033b85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033bfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10033c46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033c4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033c53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10033d82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
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
void cow_adapter_10033a70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10033a70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
