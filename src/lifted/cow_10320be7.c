/* f_0x10320be7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10320be7(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10320bf5u: eax = g->eax; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bf5;
    case 0x10320c16u: eax = g->eax; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c16;
    case 0x10320c1bu: eax = g->eax; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c1b;
    case 0x10320c24u: eax = g->eax; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c24;
    case 0x10320c2au: in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c2a;
    case 0x10320c2du: in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c2d;
    case 0x10320c30u: in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c30;
    case 0x10320c35u: in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c35;
    case 0x10320c3au: in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c3a;
    case 0x10320c3du: ecx = g->ecx; in_edx = g->edx; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c3d;
    case 0x10320c43u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c43;
    case 0x10320c4du: eax = g->eax; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c4d;
    case 0x10320c63u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320c63;
    default: break;
    }
#endif

    COW_AT(10320be7)
    if (arg1 >= rd32(COW_IMG(0x109f83e0u)))
    {
        eax = in_eax;
        goto L_10320c4d;
    }
    COW_AT(10320bf5)
    if (!(rd8((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u) + 4u) & 1u))
    {
        eax = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        goto L_10320c4d;
    }
    eax = (arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    COW_AT(10320c16)
    if (rd32(eax) == 0xffffffffu) goto L_10320c4d;
    COW_AT(10320c1b)
    if (rd32(COW_IMG(0x109b2718u)) != 1u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(10320c24)
        if (arg1 == 0u) goto L_10320c3a;
    COW_AT(10320c2a)
        if (arg1 == 1u) goto L_10320c35;
    COW_AT(10320c2d)
        if (arg1 != 2u)
        {
            edx = in_edx;
            goto L_10320c43;
        }
    COW_AT(10320c30)
        ecx = arg1 - 2u;
        loc_10 = 0xfffffff4u;
L_10320c3d: ;
    COW_AT(10320c3d)
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, rd32(COW_IMG(0x103292d0u)), 2, loc_10, 0u);   /* kernel32.dll!SetStdHandle */
        t1 = g->edx;
        edx = t1;
    }
L_10320c43: ;
    COW_AT(10320c43)
    wr32((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u), 0xffffffffu);
    eax = 0u;
L_10320c63: ;
    COW_AT(10320c63)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10320c35: ;
    COW_AT(10320c35)
    ecx = arg1 - 1u;
    loc_10 = 0xfffffff5u;
    goto L_10320c3d;
L_10320c3a: ;
    COW_AT(10320c3a)
    ecx = arg1;
    loc_10 = 0xfffffff6u;
    goto L_10320c3d;
L_10320c4d: ;
    COW_AT(10320c4d)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x10319c89u), arg1, in_edx, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(t2, 9u);
    t5 = cow_fastcall(g, COW_IMG(0x10319c92u), t3, t4, 0);
    t6 = g->edx;
    wr32(t5, 0u);
    eax = 0xffffffffu;
    edx = t6;
    goto L_10320c63;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10320be7(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10320bf5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10320c16u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c24u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c2au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = 0u;
        g->ecx = arg1;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = 0u;
        g->ecx = arg1 - 1u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = 0u;
        g->ecx = arg1 - 2u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = 0u;
        g->ecx = arg1 - 1u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = 0u;
        g->ecx = arg1;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c3du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        ecx = g->ecx;
        in_edx = g->edx;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = 0u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10320c43u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320c4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10320c63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10320be7(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10320be7(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
