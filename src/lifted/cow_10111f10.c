/* f_0x10111f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10111f10(Guest* g)
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
    case 0x10111f2bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111f2b;
    case 0x10111f32u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111f32;
    case 0x10111f3bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111f3b;
    case 0x10111f43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f43;
    case 0x10111f4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f4f;
    case 0x10111f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f55;
    case 0x10111f62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f62;
    case 0x10111f69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f69;
    case 0x10111f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f78;
    case 0x10111f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f91;
    case 0x10111f97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111f97;
    case 0x10111fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111fa4;
    case 0x10111fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10111fb4;
    case 0x10111fbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111fbb;
    case 0x10111fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111fc1;
    case 0x10111fceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111fce;
    case 0x10111fdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111fde;
    case 0x10111fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111fe5;
    case 0x10111feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_10111fee;
    default: break;
    }
#endif

    COW_AT(10111f10)
    t1 = rd32(self + 0x18u);
    wr32(self, COW_IMG(0x10332ed4u));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 4u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 4u);
    }
    else
    {
    COW_AT(10111f2b)
        if (rd32(self + 0x10u) == 0u)
        {
            eax = rd32(self + 0x10u);
            goto L_10111f3b;
        }
        eax = rd32(self + 0x10u);
L_10111f32: ;
    COW_AT(10111f32)
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_10111f32;
        }
        eax = rd32(eax + 8u);
    }
L_10111f3b: ;
    COW_AT(10111f3b)
    if (rd32(self + 0x10u) == 0u)
    {
        edx = in_edx;
        goto L_10111f78;
    }
    edx = in_edx;
    esi = rd32(self + 0x10u);
L_10111f43: ;
    COW_AT(10111f43)
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
    COW_AT(10111f4f)
        g->eax = eax;
        g->edx = rd32(ecx);
        t3 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, rd32(t3), ecx, 1, 1u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    COW_AT(10111f55)
    t6 = rd32(esi + 8u);
    wr32(esi, 0xefefefefu);
    if (t6 == 0u)
    {
        ecx = t6;
    }
    else
    {
        ecx = t6;
    COW_AT(10111f62)
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x10112200u), eax, ecx, edx, 0, 1, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    COW_AT(10111f69)
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
        goto L_10111f43;
    }
    eax = t10;
    edx = t11;
L_10111f78: ;
    COW_AT(10111f78)
    wr32(self + 0x10u, self + 0x14u);
    wr32(self + 0x18u, self + 8u);
    wr16(self + 6u, 0u);
    wr32(self + 0x10u, 0u);
    if (rd32(self + 0x14u) != 0u)
    {
        ecx = rd32(self + 0x14u);
    COW_AT(10111f91)
        g->eax = rd32(ecx);
        g->edx = edx;
        t12 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall(g, rd32(t12), ecx, 1, 1u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    COW_AT(10111f97)
    wr32(self + 0x14u, 0xefefefefu);
    if (rd32(self + 0x1cu) != 0u)
    {
        esi = rd32(self + 0x1cu);
    COW_AT(10111fa4)
        g->ebx = 0u;
        g->edi = self + 8u;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t15 = cow_call_regs(g, COW_IMG(0x10112120u), eax, esi, edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    COW_AT(10111fb4)
    if (rd32(self + 8u) == 0u)
    {
        ecx = rd32(self + 8u);
    }
    else
    {
        ecx = rd32(self + 8u);
    COW_AT(10111fbb)
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
    COW_AT(10111fc1)
    wr32(self + 8u, 0xefefefefu);
    if (rd32(self + 0x10u) != 0u)
    {
        edi = rd32(self + 0x10u);
    COW_AT(10111fce)
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->esp = sp0 - 0xcu;
        t24 = cow_call_regs(g, COW_IMG(0x10112120u), eax, edi, edx, 1, 0);
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
    COW_AT(10111fde)
    if (arg1 & 1u)
    {
    COW_AT(10111fe5)
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, self);
        t30 = g->edx;
        edx = t30;
    }
    COW_AT(10111fee)
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
int cow_entry_fix_10111f10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10111f2bu:
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
    case 0x10111f32u:
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
    case 0x10111f3bu:
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
    case 0x10111f43u:
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
    case 0x10111f4fu:
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
    case 0x10111f55u:
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
    case 0x10111f62u:
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
    case 0x10111f69u:
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
    case 0x10111f78u:
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
    case 0x10111f91u:
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
    case 0x10111f97u:
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
    case 0x10111fa4u:
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
    case 0x10111fb4u:
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
    case 0x10111fbbu:
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
    case 0x10111fc1u:
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
    case 0x10111fceu:
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
    case 0x10111fdeu:
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
    case 0x10111fe5u:
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
    case 0x10111feeu:
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
void cow_adapter_10111f10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10111f10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
