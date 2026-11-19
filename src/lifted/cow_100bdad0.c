/* f_0x100bdad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100bdad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100bdae7u: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdae7;
    case 0x100bdaf0u: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdaf0;
    case 0x100bdafbu: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdafb;
    case 0x100bdb02u: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb02;
    case 0x100bdb06u: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb06;
    case 0x100bdb0bu: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb0b;
    case 0x100bdb0fu: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb0f;
    case 0x100bdb14u: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb14;
    case 0x100bdb15u: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb15;
    case 0x100bdb1cu: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb1c;
    case 0x100bdb22u: ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb22;
    case 0x100bdb29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb29;
    case 0x100bdb2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb2e;
    case 0x100bdb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb32;
    case 0x100bdb36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb36;
    case 0x100bdb3du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb3d;
    case 0x100bdb47u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb47;
    case 0x100bdb4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb4e;
    case 0x100bdb52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb52;
    case 0x100bdb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb54;
    case 0x100bdb59u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb59;
    case 0x100bdb5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb5a;
    case 0x100bdb61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb61;
    case 0x100bdb62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100bdb62;
    default: break;
    }
#endif

    COW_AT(100bdad0)
    if (rd8(arg2) == 0x5bu)
    {
        ecx = arg2;
        edx = (in_edx & 0xffffff00u) | rd8(arg2);
        goto L_100bdaf0;
    }
    ecx = arg2;
    edx = (in_edx & 0xffffff00u) | rd8(arg2);
L_100bdae7: ;
    COW_AT(100bdae7)
    if (rd8(ecx + 1u) != 0x5bu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_100bdae7;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
L_100bdaf0: ;
    COW_AT(100bdaf0)
    if ((int32_t)arg4 <= 0)
    {
        ecx = ecx + 1u;
        goto L_100bdb22;
    }
    ecx = ecx + 1u;
    esi = 0u;
L_100bdafb: ;
    COW_AT(100bdafb)
    if (rd8(ecx) == 0x2fu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb1c;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb02: ;
    COW_AT(100bdb02)
    if ((uint8_t)edx == 0u)
    {
        eax = arg1;
        goto L_100bdb62;
    }
    COW_AT(100bdb06)
    if ((uint8_t)edx == 0x5du)
    {
        eax = arg1;
        goto L_100bdb61;
    }
    COW_AT(100bdb0b)
    if ((int8_t)edx >= 0)
    {
    COW_AT(100bdb14)
        ecx = ecx + 1u;
    }
    else
    {
    COW_AT(100bdb0f)
        ecx = ecx + 2u;
    }
    COW_AT(100bdb15)
    if (rd8(ecx) != 0x2fu)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb02;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb1c: ;
    COW_AT(100bdb1c)
    if ((int32_t)(esi + 1u) < (int32_t)arg4)
    {
        ecx = ecx + 1u;
        esi = esi + 1u;
        goto L_100bdafb;
    }
    ecx = ecx + 1u;
L_100bdb22: ;
    COW_AT(100bdb22)
    if (rd8(ecx) == 0x2fu)
    {
        eax = arg1;
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb47;
    }
    eax = arg1;
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb29: ;
    COW_AT(100bdb29)
    if ((uint8_t)edx == 0x5du) goto L_100bdb61;
    COW_AT(100bdb2e)
    if ((uint8_t)edx == 0u) goto L_100bdb62;
    sf = (int8_t)edx < 0;
    COW_AT(100bdb32)
    wr8(eax, (uint8_t)edx);
    if (sf)
    {
    COW_AT(100bdb36)
        t1 = rd8(ecx + 1u);
        wr8(eax + 1u, (uint8_t)t1);
        eax = eax + 1u;
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t1;
    }
    COW_AT(100bdb3d)
    if (rd8(ecx + 1u) != 0x2fu)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_100bdb29;
    }
    eax = eax + 1u;
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
L_100bdb47: ;
    COW_AT(100bdb47)
    if (rd8(ecx) == 0x5du) goto L_100bdb61;
    edx = (edx & 0xffffff00u) | rd8(ecx);
L_100bdb4e: ;
    COW_AT(100bdb4e)
    if ((uint8_t)edx == 0u) goto L_100bdb62;
    sf = (int8_t)edx < 0;
    COW_AT(100bdb52)
    if (!sf)
    {
    COW_AT(100bdb59)
        ecx = ecx + 1u;
    }
    else
    {
    COW_AT(100bdb54)
        ecx = ecx + 2u;
    }
    COW_AT(100bdb5a)
    if (rd8(ecx) != 0x5du)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        goto L_100bdb4e;
    }
L_100bdb61: ;
    COW_AT(100bdb61)
    ecx = ecx + 1u;
L_100bdb62: ;
    COW_AT(100bdb62)
    wr32(arg3, ecx - arg2);
    return eax - arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100bdad0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100bdae7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdaf0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdafbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb02u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb06u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb0bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb0fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb14u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb15u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb1cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100bdb22u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb3du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb54u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100bdb62u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100bdad0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100bdad0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
