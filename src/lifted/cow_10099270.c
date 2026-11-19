/* f_0x10099270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10099270(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10099289u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10099289;
    case 0x10099290u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10099290;
    case 0x100992b4u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100992b4;
    case 0x100992c9u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100992c9;
    case 0x100992e5u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100992e5;
    case 0x10099315u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10099315;
    case 0x1009931au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1009931a;
    case 0x1009932au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1009932a;
    case 0x10099330u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10099330;
    case 0x10099351u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10099351;
    case 0x10099388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10099388;
    case 0x1009939cu: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1009939c;
    case 0x100993bdu: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100993bd;
    case 0x100993d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100993d3;
    default: break;
    }
#endif

    COW_AT(10099270)
    if (rd16(arg3 + 4u) - 2u > 8u)
    {
        eax = arg3;
        edx = in_edx;
        goto L_100993d3;
    }
    ecx = rd16(arg3 + 4u) - 2u;
    COW_AT(10099289)
    t1 = rd32(COW_IMG(0x100993dcu) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x10099290u: goto L_10099290;
    case 0x100992b4u: goto L_100992b4;
    case 0x100992c9u: goto L_100992c9;
    case 0x100992e5u: goto L_100992e5;
    case 0x10099330u: goto L_10099330;
    case 0x10099351u: goto L_10099351;
    case 0x1009939cu: goto L_1009939c;
    case 0x100993bdu: goto L_100993bd;
    case 0x100993d3u: eax = arg3; edx = in_edx; goto L_100993d3;
    default: rt_fatal(g, COW_IMG(0x10099289u), "switch");
    }
    return 0;
L_10099290: ;
    COW_AT(10099290)
    t10 = rd32(arg3 + 8u);
    wr32(COW_IMG(0x10485826u), t10);
    t11 = rd32(arg3 + 0xcu);
    t12 = rd8(COW_IMG(0x10485824u));
    wr32(COW_IMG(0x1048582au), t11);
    wr8(COW_IMG(0x10485824u), (uint8_t)(t12 | 2u));
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t11;
    return ((arg3 | t12) & 0xffffff00u) | 1u;
L_100992b4: ;
    COW_AT(100992b4)
    esi = arg3 + 8u;
    edi = COW_IMG(0x10482f98u);
    ecx = 0x35u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (arg3 & 0xffffff00u) | 1u;
L_100992c9: ;
    COW_AT(100992c9)
    esi = arg3 + 8u;
    edi = COW_IMG(0x1048306cu);
    ecx = 0x2bu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x104804ceu), 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (arg3 & 0xffffff00u) | 1u;
L_100992e5: ;
    COW_AT(100992e5)
    esi = arg3 + 8u;
    edi = COW_IMG(0x10485830u);
    ecx = 0x25u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t6 = rd8(COW_IMG(0x10485824u));
    wr8(COW_IMG(0x10485824u), (uint8_t)(t6 | 4u));
    if (rd32(arg1 + 0x2d610u) == 0u)
    {
        eax = rd32(arg1 + 0x2d610u);
        edx = in_edx;
        goto L_100993d3;
    }
    eax = rd32(arg1 + 0x2d610u);
    ecx = (ecx & 0xffffff00u) | t6 | 4u;
    COW_AT(10099315)
    edx = in_edx;
    esi = 1u;
L_1009931a: ;
    COW_AT(1009931a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall_cdecl(g, rd32(arg1 + 0x2d610u), ecx, 1, esi);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)(esi + 1u) <= 22)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        esi = esi + 1u;
        goto L_1009931a;
    }
    eax = t7;
    edx = t9;
    COW_AT(1009932a)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10099330: ;
    COW_AT(10099330)
    esi = arg3 + 8u;
    edi = COW_IMG(0x104858c4u);
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t5 = rd8(COW_IMG(0x10485824u));
    wr8(COW_IMG(0x10485824u), (uint8_t)(t5 | 8u));
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return ((arg3 | t5) & 0xffffff00u) | 1u;
L_10099351: ;
    COW_AT(10099351)
    t3 = rd8(arg3 + 8u) != 0u;
    t4 = rd8(arg3 + 9u);
    esi = arg3 + 0xcu;
    edi = COW_IMG(0x10483164u) + (t3 << 0xau) * 4u + rd8(arg3 + 9u) * 0x80u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)((t4 << 5u) + 0x20u) < 1024)
    {
        eax = (t3 << 0xau) + t4 * 0x20u;
        edx = (t4 << 5u) + 0x20u;
        goto L_100993d3;
    }
    eax = (t3 << 0xau) + t4 * 0x20u;
    edx = (t4 << 5u) + 0x20u;
    ebp = t3;
    COW_AT(10099388)
    wr8(COW_IMG(0x10483160u) + ebp, 1u);
    wr8(COW_IMG(0x10483162u) + ebp, 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009939c: ;
    COW_AT(1009939c)
    esi = arg3 + 8u;
    edi = COW_IMG(0x10485904u);
    ecx = 0x30u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t2 = rd8(COW_IMG(0x10485824u));
    wr8(COW_IMG(0x10485824u), (uint8_t)(t2 | 0x10u));
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return ((arg3 | t2) & 0xffffff00u) | 1u;
L_100993bd: ;
    COW_AT(100993bd)
    esi = arg3 + 8u;
    edi = COW_IMG(0x104859c4u);
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x10485824u), rd8(COW_IMG(0x10485824u)) | 0x20u);
    eax = arg3;
    edx = in_edx;
L_100993d3: ;
    COW_AT(100993d3)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10099270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10099289u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10099290u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100992b4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100992c9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100992e5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10099315u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009931au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009932au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10099330u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10099351u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10099388u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1009939cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100993bdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100993d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10099270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10099270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
