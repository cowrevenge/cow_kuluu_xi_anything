/* f_0x1011c720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1011c720(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011c733u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c733;
    case 0x1011c748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c748;
    case 0x1011c754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c754;
    case 0x1011c756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c756;
    case 0x1011c762u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c762;
    case 0x1011c764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c764;
    case 0x1011c790u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c790;
    case 0x1011c7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1011c7a3;
    case 0x1011c7b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1011c7b1;
    case 0x1011c7c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1011c7c1;
    case 0x1011c7c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1011c7c3;
    case 0x1011c7c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1011c7c6;
    case 0x1011c7ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c7ce;
    case 0x1011c7d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c7d5;
    case 0x1011c7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c7f1;
    case 0x1011c7feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); goto E_1011c7fe;
    default: break;
    }
#endif

    COW_AT(1011c720)
    if (rd32(COW_IMG(0x10456aa0u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456aa0u));
        edx = in_edx;
        goto L_1011c7f1;
    }
    eax = rd32(COW_IMG(0x10456aa0u));
    COW_AT(1011c733)
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x931u) != 0u)
    {
        eax = eax - 1u;
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x931u);
        goto L_1011c7f1;
    }
    eax = eax - 1u;
    ecx = rd32(COW_IMG(0x1045666cu));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x931u);
    COW_AT(1011c748)
    if (rd32(ecx + 0x934u) < 0x800u)
    {
    COW_AT(1011c754)
        eax = 0u;
    }
    COW_AT(1011c756)
    if (rd32(ecx + 0x938u) < 0x1000u)
    {
    COW_AT(1011c762)
        eax = 0u;
    }
    COW_AT(1011c764)
    t1 = rd32(COW_IMG(0x10333000u) + eax * 0xcu);
    g->ebx = rd32(COW_IMG(0x10333004u) + eax * 0xcu);
    g->eax = eax * 0xcu;
    g->edx = edx;
    t2 = rd32(COW_IMG(0x10333004u) + eax * 0xcu);
    t3 = rd32(COW_IMG(0x10333008u) + eax * 0xcu);
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), rd32(COW_IMG(0x10662dccu)), 1, t1);
    t5 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        edx = t5;
        goto L_1011c7f1;
    }
    eax = t4;
    edx = t5;
    ebx = t2;
    ebp = t3;
    loc_4 = t1;
    COW_AT(1011c790)
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_stdcall(g, COW_IMG(0x1011c5d0u), 3, self + 0x7cu, ebx, ebp);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd32(self + 0x7cu) == 0u)
    {
        edx = t8;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(1011c7a3)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t9 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x7cu);
        t10 = g->edx;
        if (t9 == 0u)
        {
            edx = t10;
    COW_AT(1011c7c1)
            eax = 0u;
        }
        else
        {
            eax = t9;
            edx = t10;
    COW_AT(1011c7b1)
            t11 = rd32(self + 0x7cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t12 = cow_thiscall(g, COW_IMG(0x10026890u), eax, 3, 0xffffffffu, t11, 0u);
            t13 = g->edx;
            eax = t12;
            edx = t13;
        }
    COW_AT(1011c7c3)
        wr32(self + 0x78u, eax);
    }
    COW_AT(1011c7c6)
    if (rd32(self + 0x78u) == 0u)
    {
        eax = rd32(self + 0x78u);
        goto L_1011c7f1;
    }
    eax = rd32(self + 0x78u);
    COW_AT(1011c7ce)
    if (rd32(eax + 8u) == 0u) goto L_1011c7f1;
    ecx = rd32(eax + 8u);
    COW_AT(1011c7d5)
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10039a30u), ecx, 0);
    t14 = rd32(rd32(self + 0x78u) + 8u);
    g->ebx = ebx;
    g->edx = loc_4;
    t15 = rd32(self + 0x78u);
    t16 = cow_call_regs(g, COW_IMG(0x1011c670u), t15, g->ecx, g->edx, 0, 2, t14, loc_4);
    t17 = g->edx;
    if ((uint8_t)t16 == 1u)
    {
        edx = t17;
        goto L_1011c7fe;
    }
    eax = t16;
    edx = t17;
L_1011c7f1: ;
    COW_AT(1011c7f1)
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011c810u), eax, self, edx);
    return;
L_1011c7fe: ;
    COW_AT(1011c7fe)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011c720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011c733u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c754u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c756u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c762u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c764u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c790u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c7a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1011c7b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1011c7c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011c7c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011c7c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011c7ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c7d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c7f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1011c7feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1011c720(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
