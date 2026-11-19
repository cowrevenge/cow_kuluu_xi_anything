/* f_0x1021be50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021be50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_119c;
    uint32_t loc_11a0;
    uint32_t loc_11a4;
    uint32_t loc_11a8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 4540u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021be6cu: ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x119cu); g->ebx = rd32(sp0 - 0x119cu); goto E_1021be6c;
    case 0x1021be75u: ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x119cu); g->ebx = rd32(sp0 - 0x119cu); goto E_1021be75;
    case 0x1021beaau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_11a8 = rd32(sp0 - 0x11a8u); loc_11a4 = rd32(sp0 - 0x11a4u); loc_11a0 = rd32(sp0 - 0x11a0u); goto E_1021beaa;
    case 0x1021bebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x11a8u); in_esi = rd32(sp0 - 0x11a4u); in_ebp = rd32(sp0 - 0x11a0u); g->ebp = rd32(sp0 - 0x11a0u); g->edi = rd32(sp0 - 0x11a8u); g->esi = rd32(sp0 - 0x11a4u); goto E_1021bebc;
    case 0x1021beccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x11a8u); in_esi = rd32(sp0 - 0x11a4u); in_ebp = rd32(sp0 - 0x11a0u); g->ebp = rd32(sp0 - 0x11a0u); g->edi = rd32(sp0 - 0x11a8u); g->esi = rd32(sp0 - 0x11a4u); goto E_1021becc;
    case 0x1021bed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x11a8u); in_esi = rd32(sp0 - 0x11a4u); in_ebp = rd32(sp0 - 0x11a0u); g->ebp = rd32(sp0 - 0x11a0u); g->edi = rd32(sp0 - 0x11a8u); g->esi = rd32(sp0 - 0x11a4u); goto E_1021bed1;
    case 0x1021beeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x11a8u); in_esi = rd32(sp0 - 0x11a4u); in_ebp = rd32(sp0 - 0x11a0u); g->ebp = rd32(sp0 - 0x11a0u); g->edi = rd32(sp0 - 0x11a8u); g->esi = rd32(sp0 - 0x11a4u); goto E_1021beee;
    case 0x1021befau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_11a8 = rd32(sp0 - 0x11a8u); loc_11a4 = rd32(sp0 - 0x11a4u); loc_11a0 = rd32(sp0 - 0x11a0u); goto E_1021befa;
    case 0x1021bf08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_11a8 = rd32(sp0 - 0x11a8u); loc_11a4 = rd32(sp0 - 0x11a4u); loc_11a0 = rd32(sp0 - 0x11a0u); goto E_1021bf08;
    case 0x1021bf15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_11a8 = rd32(sp0 - 0x11a8u); loc_11a4 = rd32(sp0 - 0x11a4u); loc_11a0 = rd32(sp0 - 0x11a0u); goto E_1021bf15;
    case 0x1021bf1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021bf1a;
    case 0x1021bf27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021bf27;
    case 0x1021bf3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_11a8 = rd32(sp0 - 0x11a8u); loc_11a4 = rd32(sp0 - 0x11a4u); loc_11a0 = rd32(sp0 - 0x11a0u); goto E_1021bf3f;
    case 0x1021bf48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_119c = rd32(sp0 - 0x119cu); goto E_1021bf48;
    default: break;
    }
#endif

    COW_AT(1021be50)
    wr32(sp0 - 0x119cu, in_ebx);
    if (arg1 == 0u)
    {
        eax = arg1;
        loc_119c = in_ebx;
        goto L_1021bf48;
    }
    COW_AT(1021be6c)
    if (rd8(arg1) == 0u)
    {
        eax = arg1;
        loc_119c = in_ebx;
        goto L_1021bf48;
    }
    COW_AT(1021be75)
    wr32(sp0 - 0x11a0u, 1u);
    wr32(sp0 - 0x11a4u, 0u);
    wr32(sp0 - 0x11a8u, 0u);
    wr32(sp0 - 0x11acu, 0x1078u);
    wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
    wr32(sp0 - 0x11b4u, arg1);
    wr32(sp0 - 0x11b8u, 0x10780208u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x119cu;
    t1 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x1198u, 7, 0x10780208u, arg1, sp0 - 0x1078u, 0x1078u, 0u, 0u, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x11a0u, 0u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101b9bc0u), sp0 - 0x1198u, 1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_1021bf3f;
    }
    ecx = t4;
    COW_AT(1021beaa)
    wr32(sp0 - 0x11a0u, in_ebp);
    wr32(sp0 - 0x11a4u, in_esi);
    wr32(sp0 - 0x11a8u, in_edi);
    eax = 0u;
    edx = sp0 - 0x1074u;
    ebp = self + 0x804u;
L_1021bebc: ;
    COW_AT(1021bebc)
    t6 = rd8(eax + sp0 - 0x1078u);
    wr8(eax + self + 0x18u, (uint8_t)t6);
    if ((uint8_t)t6 > 0x51u)
    {
    COW_AT(1021becc)
        wr8(eax + self + 0x18u, 0u);
    }
    COW_AT(1021bed1)
    esi = edx;
    edi = ebp;
    ecx = 0xa2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        edx = edx + 0x288u;
        ebp = ebp + 0x288u;
        goto L_1021bebc;
    }
    eax = eax + 1u;
    edx = edx + 0x288u;
    COW_AT(1021beee)
    ebx = self + 0x6cu;
    esi = 0u;
    edi = sp0 - 0x644u;
    loc_11a0 = in_ebp;
    loc_11a4 = in_esi;
    loc_11a8 = in_edi;
L_1021befa: ;
    COW_AT(1021befa)
    if ((uint16_t)esi != rd8(edi))
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        ecx = ebx;
        edx = (edx & 0xffff0000u) | rd8(edi);
    COW_AT(1021bf15)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x11a8u;
        t10 = cow_thiscall(g, COW_IMG(0x1021d270u), ecx, 0);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        ecx = ebx;
        edx = (edx & 0xffff0000u) | rd8(edi);
    COW_AT(1021bf08)
        wr32(sp0 - 0x11acu, eax);
        t7 = (eax & 0xffff0000u) | rd16(edi + 2u);
        wr32(sp0 - 0x11b0u, t7);
        g->eax = t7;
        g->edx = edx;
        g->esp = sp0 - 0x11a8u;
        t8 = cow_thiscall(g, COW_IMG(0x1021d2d0u), ecx, 2, t7, eax);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    COW_AT(1021bf1a)
    if ((uint16_t)(esi + 1u) < 0x51u)
    {
        ebx = ebx + 0x18u;
        esi = esi + 1u;
        edi = edi + 0x14u;
        loc_11a0 = rd32(sp0 - 0x11a0u);
        loc_11a4 = rd32(sp0 - 0x11a4u);
        loc_11a8 = rd32(sp0 - 0x11a8u);
        goto L_1021befa;
    }
    COW_AT(1021bf27)
    g->eax = eax;
    g->esp = sp0 - 0x11a8u;
    t12 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x1198u, 0);
    g->ebx = rd32(sp0 - 0x119cu);
    g->esi = rd32(sp0 - 0x11a4u);
    g->edi = rd32(sp0 - 0x11a8u);
    g->ebp = rd32(sp0 - 0x11a0u);
    return (t12 & 0xffffff00u) | 1u;
L_1021bf3f: ;
    COW_AT(1021bf3f)
    g->eax = eax;
    g->esp = sp0 - 0x119cu;
    t13 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x1198u, 0);
    eax = t13;
    loc_119c = rd32(sp0 - 0x119cu);
L_1021bf48: ;
    COW_AT(1021bf48)
    g->ebx = loc_119c;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021be50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021be6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x119cu);
        g->esp = sp0 - 0x119cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021be75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x119cu);
        g->esp = sp0 - 0x119cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1021beaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11a0;
        uint32_t loc_11a4;
        uint32_t loc_11a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_11a8 = rd32(sp0 - 0x11a8u);
        loc_11a4 = rd32(sp0 - 0x11a4u);
        loc_11a0 = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x119cu;
        wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
        (void)sp0;
        return 1;
    }
    case 0x1021bebcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x11a8u);
        in_esi = rd32(sp0 - 0x11a4u);
        in_ebp = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x11a8u;
        wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
        (void)sp0;
        return 1;
    }
    case 0x1021beccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x11a8u);
        in_esi = rd32(sp0 - 0x11a4u);
        in_ebp = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x11a8u;
        wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
        (void)sp0;
        return 1;
    }
    case 0x1021bed1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x11a8u);
        in_esi = rd32(sp0 - 0x11a4u);
        in_ebp = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x11a8u;
        wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
        (void)sp0;
        return 1;
    }
    case 0x1021beeeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x11a8u);
        in_esi = rd32(sp0 - 0x11a4u);
        in_ebp = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x11a8u;
        wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
        (void)sp0;
        return 1;
    }
    case 0x1021befau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11a0;
        uint32_t loc_11a4;
        uint32_t loc_11a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_11a8 = rd32(sp0 - 0x11a8u);
        loc_11a4 = rd32(sp0 - 0x11a4u);
        loc_11a0 = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x11a8u;
        (void)sp0;
        return 1;
    }
    case 0x1021bf08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11a0;
        uint32_t loc_11a4;
        uint32_t loc_11a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_11a8 = rd32(sp0 - 0x11a8u);
        loc_11a4 = rd32(sp0 - 0x11a4u);
        loc_11a0 = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x11a8u;
        (void)sp0;
        return 1;
    }
    case 0x1021bf15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11a0;
        uint32_t loc_11a4;
        uint32_t loc_11a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_11a8 = rd32(sp0 - 0x11a8u);
        loc_11a4 = rd32(sp0 - 0x11a4u);
        loc_11a0 = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x11a8u;
        (void)sp0;
        return 1;
    }
    case 0x1021bf1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11a8u;
        (void)sp0;
        return 1;
    }
    case 0x1021bf27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11a8u;
        (void)sp0;
        return 1;
    }
    case 0x1021bf3fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_11a0;
        uint32_t loc_11a4;
        uint32_t loc_11a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_11a8 = rd32(sp0 - 0x11a8u);
        loc_11a4 = rd32(sp0 - 0x11a4u);
        loc_11a0 = rd32(sp0 - 0x11a0u);
        g->esp = sp0 - 0x119cu;
        wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
        (void)sp0;
        return 1;
    }
    case 0x1021bf48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_119c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_119c = rd32(sp0 - 0x119cu);
        g->esp = sp0 - 0x119cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021be50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021be50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
