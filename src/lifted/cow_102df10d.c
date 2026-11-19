/* f_0x102df10d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102df10d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102df134u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102df134;
    case 0x102df146u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102df146;
    case 0x102df158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102df158;
    case 0x102df171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df171;
    case 0x102df184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df184;
    case 0x102df188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df188;
    case 0x102df193u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df193;
    case 0x102df19eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df19e;
    case 0x102df1a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df1a4;
    case 0x102df1aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df1aa;
    case 0x102df1d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df1d1;
    case 0x102df1ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102df1dd;
    case 0x102df1eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102df1ea;
    case 0x102df1efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102df1ef;
    default: break;
    }
#endif

    COW_AT(102df10d)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103281b7u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102df117u));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(rd32(self + 4u) + 0x1058u) != rd32(rd32(self) + 0x1058u))
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_10 = t1;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_102df1ea;
    }
    eax = rd32(self + 4u);
    ecx = rd32(self);
    edi = rd32(rd32(self + 4u) + 0x1058u);
    loc_10 = t1;
    COW_AT(102df134)
    if (rd32(eax + 0x105cu) != rd32(ecx + 0x105cu))
    {
        edx = rd32(eax + 0x105cu);
        loc_4 = in_ebp;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_102df1ea;
    }
    edx = rd32(eax + 0x105cu);
    COW_AT(102df146)
    if (rd32(eax + 0x1060u) != rd32(ecx + 0x1060u))
    {
        loc_4 = in_ebp;
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_102df1ea;
    }
    COW_AT(102df158)
    wr32(sp0 - 0x24u, edi << 4u);
    g->eax = edi << 4u;
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi << 4u, in_edi, in_esi);
    t3 = g->edx;
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 8u, 0u);
    if (t2 == 0u)
    {
        ecx = rd32(sp0 - 0x24u);
        edx = t3;
        loc_14 = t2;
    COW_AT(102df184)
        wr32(sp0 - 0x14u, 0u);
        loc_14 = 0u;
    }
    else
    {
        eax = t2;
        ecx = rd32(sp0 - 0x24u);
        edx = t3;
        ebx = t2;
    COW_AT(102df171)
        wr32(sp0 - 0x24u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, 0x10u);
        wr32(sp0 - 0x30u, ebx);
        g->ecx = ecx;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, ebx, 0x10u, edi, COW_IMG(0x102d2a17u));
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0x14u, ebx);
        ecx = t4;
        edx = t5;
        loc_14 = ebx;
    }
    COW_AT(102df188)
    wr32(sp0 - 8u, 0xffffffffu);
    if (loc_14 == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102df1ea;
    }
    COW_AT(102df193)
    if (rd32(rd32(self + 4u) + 0x1060u) == 0u)
    {
        eax = rd32(self + 4u);
    }
    else
    {
        eax = rd32(self + 4u);
    COW_AT(102df19e)
        eax = rd32(eax + 0x105cu);
        ebx = 0u;
L_102df1a4: ;
    COW_AT(102df1a4)
        if (eax == 0u) goto L_102df1d1;
        edi = 0u;
L_102df1aa: ;
    COW_AT(102df1aa)
        wr32(sp0 - 0x24u, loc_14);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, edi, ebx, loc_14);
        t6 = g->edx;
        t7 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x24u, t7);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, edi);
        g->edx = t6;
        cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 8u), rd32(self + 4u), 3, edi, ebx, t7);
        t8 = g->edx;
        if (edi + 1u < rd32(rd32(self + 4u) + 0x105cu))
        {
            edx = t8;
            edi = edi + 1u;
            loc_14 = rd32(sp0 - 0x14u);
            goto L_102df1aa;
        }
        eax = rd32(rd32(self + 4u) + 0x105cu);
        edx = t8;
        loc_14 = rd32(sp0 - 0x14u);
L_102df1d1: ;
    COW_AT(102df1d1)
        if (ebx + 1u < rd32(rd32(self + 4u) + 0x1060u))
        {
            ebx = ebx + 1u;
            goto L_102df1a4;
        }
        ecx = rd32(self + 4u);
    }
    COW_AT(102df1dd)
    wr32(sp0 - 0x24u, loc_14);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_14);
    t9 = g->edx;
    eax = 0u;
    edx = t9;
    loc_4 = rd32(sp0 - 4u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
L_102df1ef: ;
    COW_AT(102df1ef)
    wr32(g->fs_base, loc_10);
    g->ebx = loc_18;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102df1ea: ;
    COW_AT(102df1ea)
    eax = 0x80004005u;
    goto L_102df1ef;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102df10d(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102df134u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df146u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df158u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df171u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df184u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df188u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df193u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df19eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df1a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df1aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df1d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df1ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df1eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df1efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102df10d(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102df10d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
