/* f_0x10111e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10111e20(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10111e3bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111e3b;
    case 0x10111e42u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111e42;
    case 0x10111e4bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111e4b;
    case 0x10111e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111e53;
    case 0x10111e5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111e5f;
    case 0x10111e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111e65;
    case 0x10111e72u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111e72;
    case 0x10111e79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111e79;
    case 0x10111e88u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111e88;
    case 0x10111ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111ea1;
    case 0x10111ea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111ea7;
    case 0x10111eb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111eb4;
    case 0x10111ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111ec4;
    case 0x10111ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111ecb;
    case 0x10111ed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111ed1;
    case 0x10111edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111ede;
    case 0x10111eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111eee;
    case 0x10111ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111ef5;
    case 0x10111efeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111efe;
    default: break;
    }
#endif

    COW_AT(10111e20)
    t1 = rd32(self + 0x18u);
    wr32(self, COW_IMG(0x10332eb0u));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 4u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 4u);
    }
    else
    {
    COW_AT(10111e3b)
        if (rd32(self + 0x10u) == 0u)
        {
            eax = rd32(self + 0x10u);
            goto L_10111e4b;
        }
        eax = rd32(self + 0x10u);
L_10111e42: ;
    COW_AT(10111e42)
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_10111e42;
        }
        eax = rd32(eax + 8u);
    }
L_10111e4b: ;
    COW_AT(10111e4b)
    if (rd32(self + 0x10u) == 0u)
    {
        edx = in_edx;
        goto L_10111e88;
    }
    edx = in_edx;
    esi = rd32(self + 0x10u);
L_10111e53: ;
    COW_AT(10111e53)
    t2 = rd32(esi + 8u);
    wr32(esi + 8u, 0u);
    if (rd32(esi) == 0u)
    {
        edi = t2;
    }
    else
    {
        ecx = rd32(esi);
        edi = t2;
    COW_AT(10111e5f)
        g->eax = eax;
        g->edx = rd32(ecx);
        t3 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, rd32(t3), ecx, 1, 1u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    COW_AT(10111e65)
    t6 = rd32(esi + 8u);
    wr32(esi, 0xefefefefu);
    if (t6 == 0u)
    {
        ecx = t6;
    }
    else
    {
        ecx = t6;
    COW_AT(10111e72)
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x101121c0u), eax, ecx, edx, 0, 1, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    COW_AT(10111e79)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    t11 = g->edx;
    if (edi != 0u)
    {
        eax = t10;
        edx = t11;
        esi = edi;
        goto L_10111e53;
    }
    eax = t10;
    edx = t11;
L_10111e88: ;
    COW_AT(10111e88)
    wr32(self + 0x10u, self + 0x14u);
    wr32(self + 0x18u, self + 8u);
    wr16(self + 6u, 0u);
    wr32(self + 0x10u, 0u);
    if (rd32(self + 0x14u) != 0u)
    {
        ecx = rd32(self + 0x14u);
    COW_AT(10111ea1)
        g->eax = rd32(ecx);
        g->edx = edx;
        t12 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall(g, rd32(t12), ecx, 1, 1u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    COW_AT(10111ea7)
    wr32(self + 0x14u, 0xefefefefu);
    if (rd32(self + 0x1cu) != 0u)
    {
        esi = rd32(self + 0x1cu);
    COW_AT(10111eb4)
        g->ebx = 0u;
        g->edi = self + 8u;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t15 = cow_call_regs(g, COW_IMG(0x101120f0u), eax, esi, edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    COW_AT(10111ec4)
    if (rd32(self + 8u) == 0u)
    {
        ecx = rd32(self + 8u);
    }
    else
    {
        ecx = rd32(self + 8u);
    COW_AT(10111ecb)
        g->eax = eax;
        g->edx = rd32(ecx);
        t20 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t21 = cow_thiscall(g, rd32(t20), ecx, 1, 1u);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    COW_AT(10111ed1)
    wr32(self + 8u, 0xefefefefu);
    if (rd32(self + 0x10u) != 0u)
    {
        edi = rd32(self + 0x10u);
    COW_AT(10111ede)
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->esp = sp0 - 0xcu;
        t24 = cow_call_regs(g, COW_IMG(0x101120f0u), eax, edi, edx, 1, 0);
        t25 = g->ecx;
        t26 = g->edx;
        g->ecx = t25;
        g->edx = t26;
        t27 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
        t28 = g->ecx;
        t29 = g->edx;
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    COW_AT(10111eee)
    if (arg1 & 1u)
    {
    COW_AT(10111ef5)
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, self);
        t30 = g->edx;
        edx = t30;
    }
    COW_AT(10111efe)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10111e20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10111e3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111e88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111ea1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = self + 0x14u;
        g->edi = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10111ea7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = self + 0x14u;
        g->edi = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10111eb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->edi = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10111ec4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->edi = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10111ecbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10111ed1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 8u;
        (void)sp0;
        return 1;
    }
    case 0x10111edeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10111eeeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10111ef5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10111efeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10111e20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10111e20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
