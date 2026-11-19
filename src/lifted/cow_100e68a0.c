/* f_0x100e68a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100e68a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c0;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 204u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e68b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb4u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_100e68b8;
    case 0x100e68c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 0xb8u); in_ebx = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xb8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_100e68c1;
    case 0x100e68d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0xc0u); in_esi = rd32(sp0 - 0xbcu); in_ebx = rd32(sp0 - 0xb4u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xc0u); g->esi = rd32(sp0 - 0xbcu); goto E_100e68d1;
    case 0x100e68e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100e68e8;
    case 0x100e68fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e68fa;
    case 0x100e690au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e690a;
    case 0x100e690eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e690e;
    case 0x100e691du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e691d;
    case 0x100e692cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e692c;
    case 0x100e6942u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; goto E_100e6942;
    case 0x100e694au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e694a;
    case 0x100e6953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e6953;
    case 0x100e6960u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_100e6960;
    case 0x100e6972u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e6972;
    case 0x100e6982u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e6982;
    case 0x100e6986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e6986;
    case 0x100e6995u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e6995;
    case 0x100e69a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e69a4;
    case 0x100e69bau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; goto E_100e69ba;
    case 0x100e69beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e69be;
    case 0x100e69c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e69c4;
    case 0x100e69d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_100e69d1;
    default: break;
    }
#endif

    COW_AT(100e68a0)
    wr32(sp0 - 0xb4u, in_ebx);
    wr32(sp0 - 0xb8u, in_ebp);
    wr32(sp0 - 0xbcu, in_esi);
    wr32(sp0 - 0xc0u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xc0u;
    t1 = cow_stdcall(g, COW_IMG(0x100f1a50u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != arg2)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100e68d1;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(100e68b8)
    if (edx != arg3) goto L_100e68d1;
    COW_AT(100e68c1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xfffffffdu;
L_100e68d1: ;
    COW_AT(100e68d1)
    if ((uint8_t)arg1 != 0u)
    {
        ebx = 0u;
        ebp = 0xffffffffu;
        loc_b4 = in_ebx;
        loc_b8 = in_ebp;
        loc_bc = in_esi;
        loc_c0 = in_edi;
        goto L_100e6960;
    }
    ebx = 0u;
    ebp = 0xffffffffu;
    loc_b4 = in_ebx;
    loc_b8 = in_ebp;
    loc_bc = in_esi;
    loc_c0 = in_edi;
L_100e68e8: ;
    COW_AT(100e68e8)
    wr32(sp0 - 0xc4u, sp0 - 0xb0u);
    wr32(sp0 - 0xc8u, ebx);
    g->eax = sp0 - 0xb0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t4 = cow_cdecl(g, COW_IMG(0x100f1770u), 2, ebx, sp0 - 0xb0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 < 0)
    {
        ecx = t5;
        edx = t6;
        goto L_100e694a;
    }
    edx = t6;
    COW_AT(100e68fa)
    if (rd32(sp0 - 0x18u) & 1u) goto L_100e690e;
    COW_AT(100e690a)
    ecx = 0u;
    ebp = 0u;
L_100e694a: ;
    COW_AT(100e694a)
    if ((int32_t)(ebx + 1u) < 200)
    {
        ebx = ebx + 1u;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_100e68e8;
    }
    COW_AT(100e6953)
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xbcu);
    g->edi = rd32(sp0 - 0xc0u);
    g->ebp = rd32(sp0 - 0xb8u);
    return ebp;
L_100e690e: ;
    COW_AT(100e690e)
    if (rd32(sp0 - 0xb0u) != arg2)
    {
        ecx = rd32(sp0 - 0xb0u);
        goto L_100e694a;
    }
    ecx = rd32(sp0 - 0xb0u);
    COW_AT(100e691d)
    if (rd32(sp0 - 0xacu) != arg3)
    {
        edx = rd32(sp0 - 0xacu);
        goto L_100e694a;
    }
    COW_AT(100e692c)
    if ((rd32(sp0 - 0x14u) >> 0xdu & 0x3fu) != arg4)
    {
        ecx = rd32(sp0 - 0x14u) >> 0xdu & 0x3fu;
        edx = (uint32_t)((int32_t)arg4 >> 0x1fu);
        goto L_100e694a;
    }
    ecx = rd32(sp0 - 0x14u) >> 0xdu & 0x3fu;
    COW_AT(100e6942)
    if (0u == (uint32_t)((int32_t)arg4 >> 0x1fu)) goto L_100e69d1;
    edx = (uint32_t)((int32_t)arg4 >> 0x1fu);
    goto L_100e694a;
L_100e6960: ;
    COW_AT(100e6960)
    wr32(sp0 - 0xc4u, sp0 - 0xb0u);
    wr32(sp0 - 0xc8u, ebx);
    g->eax = sp0 - 0xb0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t7 = cow_cdecl(g, COW_IMG(0x100f1780u), 2, ebx, sp0 - 0xb0u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        ecx = t8;
        edx = t9;
        goto L_100e69be;
    }
    edx = t9;
    COW_AT(100e6972)
    if (rd32(sp0 - 0x18u) & 1u) goto L_100e6986;
    COW_AT(100e6982)
    ecx = 0u;
    ebp = 0u;
L_100e69be: ;
    COW_AT(100e69be)
    if ((int32_t)(ebx + 1u) < 100)
    {
        ebx = ebx + 1u;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_100e6960;
    }
    COW_AT(100e69c4)
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xbcu);
    g->edi = rd32(sp0 - 0xc0u);
    g->ebp = rd32(sp0 - 0xb8u);
    return ebp;
L_100e6986: ;
    COW_AT(100e6986)
    if (rd32(sp0 - 0xb0u) != arg2)
    {
        ecx = rd32(sp0 - 0xb0u);
        goto L_100e69be;
    }
    ecx = rd32(sp0 - 0xb0u);
    COW_AT(100e6995)
    if (rd32(sp0 - 0xacu) != arg3)
    {
        edx = rd32(sp0 - 0xacu);
        goto L_100e69be;
    }
    COW_AT(100e69a4)
    if ((rd32(sp0 - 0x14u) >> 0xdu & 0x3fu) != arg4)
    {
        ecx = rd32(sp0 - 0x14u) >> 0xdu & 0x3fu;
        edx = (uint32_t)((int32_t)arg4 >> 0x1fu);
        goto L_100e69be;
    }
    ecx = rd32(sp0 - 0x14u) >> 0xdu & 0x3fu;
    COW_AT(100e69ba)
    if (0u == (uint32_t)((int32_t)arg4 >> 0x1fu)) goto L_100e69d1;
    edx = (uint32_t)((int32_t)arg4 >> 0x1fu);
    goto L_100e69be;
L_100e69d1: ;
    COW_AT(100e69d1)
    g->ebx = rd32(sp0 - 0xb4u);
    g->esi = rd32(sp0 - 0xbcu);
    g->edi = rd32(sp0 - 0xc0u);
    g->ebp = rd32(sp0 - 0xb8u);
    return 0xfffffffeu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e68a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e68b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0xc0u);
        in_esi = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xb8u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100e68c1u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0xc0u);
        in_esi = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 0xb8u);
        in_ebx = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        (void)sp0;
        return 1;
    }
    case 0x100e68d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0xc0u);
        in_esi = rd32(sp0 - 0xbcu);
        in_ebx = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xb8u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100e68e8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100e68fau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e690au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->ecx = 0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e690eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e691du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e692cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e6942u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edx = (uint32_t)((int32_t)arg4 >> 0x1fu);
        g->esi = 0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e694au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e6953u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e6960u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100e6972u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e6982u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->ecx = 0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e6986u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e6995u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e69a4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e69bau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edx = (uint32_t)((int32_t)arg4 >> 0x1fu);
        g->esi = 0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e69beu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        g->edi = arg4;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e69c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x100e69d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc4u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e68a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e68a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
