/* f_0x1006af90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1006af90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006af98u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1006af98;
    case 0x1006af9eu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1006af9e;
    case 0x1006afb6u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1006afb6;
    case 0x1006afb9u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1006afb9;
    case 0x1006afe3u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1006afe3;
    case 0x1006b005u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1006b005;
    case 0x1006b007u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1006b007;
    default: break;
    }
#endif

    COW_AT(1006af90)
    if (rd32(self) == 0xffffffffu)
    {
    COW_AT(1006af98)
        edx = in_edx;
        esi = arg1;
L_1006af9e: ;
    COW_AT(1006af9e)
        t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(t1) + 0xd0u), rd32(t1), 1, t1);
        if (esi != 0u)
        {
    COW_AT(1006afb6)
            eax = rd32(esi + 4u);
L_1006afb9: ;
    COW_AT(1006afb9)
            t2 = rd32(esi + 8u);
            t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t3) + 0xfcu), t3, 4, t3, rd32(esi), eax, t2);
            if (rd32(esi + 0x10u) != 0x7fffffffu)
            {
                eax = rd32(esi + 0x10u);
                esi = esi + 0xcu;
                goto L_1006afb9;
            }
            esi = esi + 0xcu;
        }
    COW_AT(1006afe3)
        t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->eax = t4;
        g->edx = rd32(t4);
        t5 = rd32(t4);
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, rd32(t5 + 0xd4u), rd32(COW_IMG(0x1047bfa8u)), 2, t4, self);
        t7 = g->edx;
        g->edx = t7;
        cow_thiscall(g, COW_IMG(0x1006adf0u), self, 0);
        t8 = g->edx;
        if (rd32(self) == 0xffffffffu)
        {
            edx = t8;
            goto L_1006af9e;
        }
    COW_AT(1006b005)
    }
    COW_AT(1006b007)
    t9 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t9) + 0xd8u), rd32(t9), 2, t9, rd32(self));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006af90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006af98u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006af9eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006afb6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006afb9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006afe3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006b005u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006b007u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006af90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1006af90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
