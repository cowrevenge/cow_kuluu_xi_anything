/* f_0x102230d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102230d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_144;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 368u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102230dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102230df;
    case 0x102230e8u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102230e8;
    case 0x10223109u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_10223109;
    case 0x10223115u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); loc_144 = rd32(sp0 - 0x144u); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->edi = rd32(sp0 - 0x154u); goto E_10223115;
    case 0x1022313fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); loc_144 = rd32(sp0 - 0x144u); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->edi = rd32(sp0 - 0x154u); goto E_1022313f;
    case 0x102231d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); loc_144 = rd32(sp0 - 0x144u); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->edi = rd32(sp0 - 0x154u); goto E_102231d0;
    case 0x102231e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); loc_144 = rd32(sp0 - 0x144u); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->edi = rd32(sp0 - 0x154u); goto E_102231e2;
    case 0x102231e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_144 = rd32(sp0 - 0x144u); goto E_102231e5;
    default: break;
    }
#endif

    COW_AT(102230d0)
    if (rd32(COW_IMG(0x1066714cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066714cu));
        goto L_102230e8;
    }
    COW_AT(102230df)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_102230e8: ;
    COW_AT(102230e8)
    wr32(sp0 - 0x148u, in_esi);
    g->esp = sp0 - 0x148u;
    cow_thiscall(g, COW_IMG(0x10223c90u), rd32(COW_IMG(0x10667150u)), 0);
    if ((int32_t)rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u) <= 0)
    {
        esi = 0u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u);
    COW_AT(10223109)
        wr32(sp0 - 0x14cu, in_ebx);
        wr32(sp0 - 0x150u, in_ebp);
        wr32(sp0 - 0x154u, in_edi);
        wr32(sp0 - 0x144u, eax);
        ebx = in_ebx;
        ebp = 0x160u;
        esi = 0u;
        loc_144 = eax;
L_10223115: ;
    COW_AT(10223115)
        if (rd8(rd32(COW_IMG(0x1066714cu)) + rd16(ebp + rd32(COW_IMG(0x10667150u))) * 0x30u + 2u) == (uint8_t)arg1)
        {
            edx = rd32(COW_IMG(0x1066714cu)) + rd16(ebp + rd32(COW_IMG(0x10667150u))) * 0x30u;
    COW_AT(1022313f)
            t1 = rd8(COW_IMG(0x103d3c84u));
            wr8(sp0 - 0x100u, (uint8_t)t1);
            wr8(sp0 - 0x140u, (uint8_t)t1);
            edi = sp0 - 0xffu;
            eax = 0u;
            ecx = 0x3fu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
            wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
            edi = sp0 - 0x13fu;
            eax = 0u;
            ecx = 0xfu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t2 = rd16(edx + 6u);
            wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
            wr32(sp0 - 0x158u, t2);
            wr32(sp0 - 0x15cu, 0x135u);
            wr32(sp0 - 0x160u, 9u);
            wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
            g->eax = eax;
            g->ecx = t2;
            g->esp = sp0 - 0x158u;
            t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x135u);
            t4 = g->ecx;
            wr32(sp0 - 0x15cu, t3);
            wr32(sp0 - 0x160u, sp0 - 0x140u);
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->edx = sp0 - 0x140u;
            g->esp = sp0 - 0x14cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, t3, rd32(sp0 - 0x158u), in_edi, in_ebp);
            t5 = g->edx;
            wr32(sp0 - 0x158u, sp0 - 0x140u);
            t6 = rd16(ebp + rd32(COW_IMG(0x10667150u)));
            wr32(sp0 - 0x15cu, t6);
            g->esp = sp0 - 0x154u;
            t7 = cow_call_regs(g, COW_IMG(0x10223930u), t6, sp0 - 0x140u, t5, 1, 2, t6, sp0 - 0x140u);
            t8 = g->edx;
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->ecx = t7;
            g->esp = sp0 - 0x158u;
            t9 = cow_stdcall(g, COW_IMG(0x10223b10u), 1, rd32(sp0 - 0x15cu));
            t10 = g->ecx;
            wr32(sp0 - 0x15cu, t9);
            wr32(sp0 - 0x160u, esi + 1u);
            wr32(sp0 - 0x164u, COW_IMG(0x103861e4u));
            wr32(sp0 - 0x168u, sp0 - 0x100u);
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->ecx = t10;
            g->edx = sp0 - 0x100u;
            g->esp = sp0 - 0x154u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103861e4u), esi + 1u, t9, sp0 - 0x140u);
            t11 = g->ecx;
            t12 = g->edx;
            wr32(sp0 - 0x16cu, sp0 - 0x100u);
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->esp = sp0 - 0x164u;
            cow_cdecl(g, COW_IMG(0x10077e30u), 2, sp0 - 0x100u, sp0 - 0x100u);
            ebx = (ebx & 0xffffff00u) | t1;
            esi = esi + 1u;
            loc_144 = rd32(sp0 - 0x144u);
        }
    COW_AT(102231d0)
        wr32(sp0 - 0x144u, loc_144 - 1u);
        if (loc_144 != 1u)
        {
            ebp = ebp + 2u;
            loc_144 = loc_144 - 1u;
            goto L_10223115;
        }
    COW_AT(102231e2)
    }
    COW_AT(102231e5)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x148u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102230d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102230dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x144u;
        (void)sp0;
        return 1;
    }
    case 0x102230e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x144u;
        (void)sp0;
        return 1;
    }
    case 0x10223109u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0x148u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10223115u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_144;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x1022313fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_144;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x102231d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_144;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x102231e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_144;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x102231e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_144;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_144 = rd32(sp0 - 0x144u);
        g->esp = sp0 - 0x148u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102230d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102230d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
