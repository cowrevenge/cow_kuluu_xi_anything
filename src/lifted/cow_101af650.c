/* f_0x101af650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101af650(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101af65bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101af65b;
    case 0x101af663u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101af663;
    case 0x101af66bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101af66b;
    case 0x101af671u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101af671;
    case 0x101af674u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_101af674;
    case 0x101af683u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101af683;
    case 0x101af696u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101af696;
    case 0x101af6a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101af6a5;
    case 0x101af6a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101af6a9;
    case 0x101af6beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101af6be;
    case 0x101af6d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101af6d0;
    case 0x101af6e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101af6e3;
    default: break;
    }
#endif

    COW_AT(101af650)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    g->edx = rd32(sp0 + 4u);
    t1 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x101af630u), self, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(101af65b)
    if (eax == 0u)
    {
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_101af6e3;
    }
    COW_AT(101af663)
    if (arg2 == 0u)
    {
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_101af6e3;
    }
    COW_AT(101af66b)
    if (rd32(eax + 8u) == 1u) goto L_101af6d0;
    ecx = rd32(eax + 8u) - 1u;
    COW_AT(101af671)
    if (ecx != 1u)
    {
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_101af6e3;
    }
    COW_AT(101af674)
    if (rd8(sp0 + 0xcu) == 0u)
    {
        esi = (in_esi & 0xffff0000u) | rd16(edx * 2u + rd32(eax) - 0x10u);
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_101af6be;
    }
    esi = (in_esi & 0xffff0000u) | rd16(edx * 2u + rd32(eax) - 0x10u);
    eax = (rd32(eax) & 0xffffff00u) | rd8(sp0 + 0xcu);
    COW_AT(101af683)
    wr32(sp0 - 0xcu, sp0 + 0xcu);
    wr32(sp0 - 0x10u, (uint16_t)esi);
    g->eax = eax;
    g->ecx = sp0 + 0xcu;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x101b4450u), 2, (uint16_t)esi, sp0 + 0xcu);
    t5 = g->ecx;
    eax = t4;
    ecx = t5;
    COW_AT(101af696)
    t6 = rd8(sp0 + 0xcu);
    wr8(sp0 + 4u, (uint8_t)eax);
    if ((uint8_t)t6 != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_101af6e3;
    }
    COW_AT(101af6a5)
    if ((uint8_t)eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_101af6be;
    }
    COW_AT(101af6a9)
    t7 = (uint8_t)rd32(sp0 + 4u);
    wr32(arg2, t7);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 1u;
L_101af6be: ;
    COW_AT(101af6be)
    wr32(arg2, (uint16_t)esi);
    g->esi = loc_4;
    g->edi = loc_8;
    return 2u;
L_101af6d0: ;
    COW_AT(101af6d0)
    t8 = (uint32_t)(int8_t)rd8(edx + rd32(eax) - 8u);
    wr32(arg2, t8);
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
L_101af6e3: ;
    COW_AT(101af6e3)
    g->esi = loc_4;
    g->edi = loc_8;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101af650(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101af65bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101af663u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101af66bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edi = arg2;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101af671u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edi = arg2;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101af674u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edi = arg2;
        wr32(sp0 - 4u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101af683u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101af696u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg2;
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101af6a5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg2;
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101af6a9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg2;
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101af6beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101af6d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101af6e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101af650(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101af650(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
