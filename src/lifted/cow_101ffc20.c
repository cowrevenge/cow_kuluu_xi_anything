/* f_0x101ffc20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101ffc20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 372u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ffc32u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x144u); g->ebx = rd32(sp0 - 0x144u); goto E_101ffc32;
    case 0x101ffc49u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x144u); g->ebx = rd32(sp0 - 0x144u); goto E_101ffc49;
    case 0x101ffc5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_101ffc5d;
    case 0x101ffcb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101ffcb2;
    case 0x101ffcd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101ffcd4;
    case 0x101ffcf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101ffcf3;
    case 0x101ffd80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101ffd80;
    case 0x101ffd89u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101ffd89;
    case 0x101ffd93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_101ffd93;
    case 0x101ffda5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101ffda5;
    default: break;
    }
#endif

    COW_AT(101ffc20)
    wr32(sp0 - 0x144u, in_ebx);
    if (rd8(COW_IMG(0x10663ac8u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
        goto L_101ffc49;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10663ac8u));
    COW_AT(101ffc32)
    wr32(sp0 - 0x148u, 0x7au);
    g->ebx = self;
    g->esp = sp0 - 0x144u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101ffc49: ;
    COW_AT(101ffc49)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x144u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    t2 = g->edx;
    if (t1 - rd32(self + 0x20cu) < 0x1eu)
    {
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        edx = t2;
    COW_AT(101ffc5d)
        wr32(sp0 - 0x148u, in_esi);
        wr32(sp0 - 0x14cu, in_edi);
        wr32(sp0 - 0x150u, arg3);
        wr32(sp0 - 0x154u, arg2);
        g->edx = edx;
        g->esp = sp0 - 0x14cu;
        cow_thiscall(g, COW_IMG(0x101fef20u), self, 2, arg2, arg3);
        t3 = g->edx;
        wr16(self + 0x14u, 3u);
        esi = arg1;
        edi = self + 0x184u;
        ecx = 0x12u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t4 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
        wr32(sp0 - 0x150u, t4);
        g->eax = t4;
        g->edx = t3;
        t5 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t4);
        t6 = g->edx;
        wr32(sp0 - 0x150u, t5);
        t7 = rd32(COW_IMG(0x103601bcu));
        t8 = cow_thiscall(g, COW_IMG(0x100db7b0u), t7, 1, t5);
        t9 = g->ecx;
        if (t8 == 0u)
        {
            eax = t8;
    COW_AT(101ffcd4)
            t13 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
            wr32(sp0 - 0x150u, t13);
            wr32(sp0 - 0x154u, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0x158u, sp0 - 0x140u);
            g->ebx = self;
            g->ecx = t13;
            g->edx = sp0 - 0x140u;
            g->esp = sp0 - 0x144u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x1034f7e0u), t13, rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u));
            t14 = g->ecx;
            t15 = g->edx;
            ecx = t14;
            edx = t15;
        }
        else
        {
            eax = t8;
            ecx = t9;
    COW_AT(101ffcb2)
            wr32(sp0 - 0x150u, eax);
            t10 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
            wr32(sp0 - 0x154u, t10);
            wr32(sp0 - 0x158u, COW_IMG(0x10385224u));
            wr32(sp0 - 0x15cu, sp0 - 0x140u);
            g->ebx = self;
            g->ecx = ecx;
            g->edx = t10;
            g->esp = sp0 - 0x148u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x10385224u), t10, eax, rd32(sp0 - 0x14cu));
            t11 = g->ecx;
            t12 = g->edx;
            ecx = t11;
            edx = t12;
        }
    COW_AT(101ffcf3)
        t16 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
        wr32(sp0 - 0x150u, t16);
        wr32(sp0 - 0x154u, 0x21u);
        wr32(sp0 - 0x158u, 0xau);
        g->eax = t16;
        g->edx = edx;
        g->esp = sp0 - 0x150u;
        t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x21u);
        t18 = g->edx;
        wr32(sp0 - 0x154u, t17);
        wr32(sp0 - 0x158u, sp0 - 0x100u);
        g->ebx = self;
        g->esp = sp0 - 0x144u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t17, rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u));
        wr32(sp0 - 0x150u, 0x13u);
        wr32(sp0 - 0x154u, COW_IMG(0x101ff8a0u));
        t19 = rd32(self + 0x204u);
        wr32(sp0 - 0x158u, t19);
        t20 = rd32(self + 0x200u);
        wr32(sp0 - 0x15cu, t20);
        wr32(sp0 - 0x160u, sp0 - 0x100u);
        wr32(sp0 - 0x164u, sp0 - 0x140u);
        wr32(sp0 - 0x168u, 0u);
        t21 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
        wr32(sp0 - 0x16cu, t21);
        g->eax = t21;
        t22 = rd32(self + 0x19cu);
        g->esp = sp0 - 0x168u;
        t23 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t21);
        t24 = ((uint32_t)(uint8_t)t23 << 8u | (t22 & 0xf0000u)) << 8u | (uint16_t)t22;
        wr32(sp0 - 0x16cu, t24);
        t25 = rd32(self + 0x198u);
        wr32(sp0 - 0x170u, t25);
        g->eax = t25;
        g->ecx = t24;
        g->edx = t22 & 0xf0000u;
        g->esp = sp0 - 0x14cu;
        t26 = cow_cdecl(g, COW_IMG(0x100f70e0u), 9, t25, t24, 0u, sp0 - 0x140u, sp0 - 0x100u, rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), COW_IMG(0x101ff8a0u), 0x13u);
        t27 = g->ecx;
        t28 = g->edx;
        if (t26 != 0u)
        {
            esi = rd32(sp0 - 0x148u);
            edi = rd32(sp0 - 0x14cu);
        }
        else
        {
            ecx = t27;
            edx = t28;
            esi = rd32(sp0 - 0x148u);
            edi = rd32(sp0 - 0x14cu);
    COW_AT(101ffd80)
            if (rd32(COW_IMG(0x105781f8u)) == 0u)
            {
                eax = rd32(COW_IMG(0x105781f8u));
            }
            else
            {
                eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(101ffd89)
                wr32(sp0 - 0x148u, 0x10u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x144u;
                t29 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
                t30 = g->ecx;
                t31 = g->edx;
                eax = t29;
                ecx = t30;
                edx = t31;
            }
    COW_AT(101ffd93)
            wr8(COW_IMG(0x10663ac8u), 1u);
            g->eax = eax;
            g->esp = sp0 - 0x144u;
            t32 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
            wr32(self + 0x20cu, t32);
        }
    }
    COW_AT(101ffda5)
    g->ebx = rd32(sp0 - 0x144u);
    g->esi = esi;
    g->edi = edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ffc20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ffc32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x144u;
        (void)sp0;
        return 1;
    }
    case 0x101ffc49u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x144u;
        g->ebx = self;
        (void)sp0;
        return 1;
    }
    case 0x101ffc5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x144u;
        (void)sp0;
        return 1;
    }
    case 0x101ffcb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14cu;
        (void)sp0;
        return 1;
    }
    case 0x101ffcd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14cu;
        (void)sp0;
        return 1;
    }
    case 0x101ffcf3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14cu;
        (void)sp0;
        return 1;
    }
    case 0x101ffd80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x144u;
        wr32(sp0 - 0x164u, sp0 - 0x140u);
        wr32(sp0 - 0x160u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ffd89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x144u;
        wr32(sp0 - 0x164u, sp0 - 0x140u);
        wr32(sp0 - 0x160u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ffd93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x144u;
        wr32(sp0 - 0x164u, sp0 - 0x140u);
        wr32(sp0 - 0x160u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101ffda5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x144u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ffc20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101ffc20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
