/* f_0x10320b6b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10320b6b(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10320b79u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320b79;
    case 0x10320b98u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320b98;
    case 0x10320ba6u: eax = g->eax; in_edx = g->edx; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320ba6;
    case 0x10320babu: eax = g->eax; in_edx = g->edx; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bab;
    case 0x10320baeu: eax = g->eax; in_edx = g->edx; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bae;
    case 0x10320bb1u: eax = g->eax; in_edx = g->edx; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bb1;
    case 0x10320bb6u: eax = g->eax; in_edx = g->edx; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bb6;
    case 0x10320bbbu: eax = g->eax; in_edx = g->edx; in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bbb;
    case 0x10320bbeu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; loc_14 = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bbe;
    case 0x10320bc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bc4;
    case 0x10320bceu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320bce;
    case 0x10320be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10320be4;
    default: break;
    }
#endif

    COW_AT(10320b6b)
    if (arg1 >= rd32(COW_IMG(0x109f83e0u)))
    {
        eax = in_eax;
        goto L_10320bce;
    }
    COW_AT(10320b79)
    if (rd32((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u)) != 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
        goto L_10320bce;
    }
    eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u);
    COW_AT(10320b98)
    if (rd32(COW_IMG(0x109b2718u)) != 1u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(10320ba6)
        if (arg1 == 0u) goto L_10320bbb;
    COW_AT(10320bab)
        if (arg1 == 1u) goto L_10320bb6;
    COW_AT(10320bae)
        if (arg1 != 2u)
        {
            edx = in_edx;
            goto L_10320bc4;
        }
    COW_AT(10320bb1)
        ecx = arg1 - 2u;
        loc_14 = 0xfffffff4u;
L_10320bbe: ;
    COW_AT(10320bbe)
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_stdcall(g, rd32(COW_IMG(0x103292d0u)), 2, loc_14, arg2);   /* kernel32.dll!SetStdHandle */
        t1 = g->edx;
        edx = t1;
    }
L_10320bc4: ;
    COW_AT(10320bc4)
    wr32((arg1 & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u), arg2);
    eax = 0u;
L_10320be4: ;
    COW_AT(10320be4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10320bb6: ;
    COW_AT(10320bb6)
    ecx = arg1 - 1u;
    loc_14 = 0xfffffff5u;
    goto L_10320bbe;
L_10320bbb: ;
    COW_AT(10320bbb)
    ecx = arg1;
    loc_14 = 0xfffffff6u;
    goto L_10320bbe;
L_10320bce: ;
    COW_AT(10320bce)
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
    goto L_10320be4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10320b6b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10320b79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10320b98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320ba6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg1;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320babu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg1;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320baeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg1 - 1u;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320bb1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg1 - 2u;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320bb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg1 - 1u;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320bbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg1;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320bbeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        wr32(sp0 - 0x10u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x10320bc4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = (arg1 & 0x1fu) * 0x24u;
        g->edi = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)arg1 >> 5u) * 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320bceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10320be4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_14 = rd32(sp0 - 0x14u);
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
void cow_adapter_10320b6b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10320b6b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
