/* f_0x1014c0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014c0f0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014c0fbu: eax = g->eax; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014c0fb;
    case 0x1014c128u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014c128;
    case 0x1014c12cu: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014c12c;
    case 0x1014c175u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014c175;
    default: break;
    }
#endif

    COW_AT(1014c0f0)
    if (rd8(COW_IMG(0x1057844du)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1057844du));
    COW_AT(1014c0fb)
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_fastcall(g, COW_IMG(0x10161760u), rd32(COW_IMG(0x10578448u)), in_edx, 1, arg1);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x10161720u), rd32(COW_IMG(0x10578448u)), 1, arg1);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_stdcall(g, COW_IMG(0x101617a0u), 0);
        t6 = g->edx;
        if (t5 != 0u)
        {
            eax = t5;
            edx = t6;
            edi = t3;
    COW_AT(1014c128)
            if (edi != 0u)
            {
    COW_AT(1014c12c)
                g->eax = eax;
                g->ecx = rd32(COW_IMG(0x10578448u));
                g->edx = edx;
                t7 = rd32(COW_IMG(0x10578448u));
                g->esp = sp0 - 8u;
                t8 = cow_stdcall(g, COW_IMG(0x101617b0u), 1, arg1);
                t9 = g->ecx;
                t10 = g->edx;
                g->eax = (uint16_t)t8;
                g->edx = t10;
                g->esp = sp0 - 0xcu;
                t11 = cow_cdecl(g, COW_IMG(0x10153180u), 6, COW_IMG(0x105782e0u), 0x100u, 0xau, 0x7bu, 1u, edi);
                t12 = g->edx;
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10578438u)), 7, COW_IMG(0x1014c180u), arg1, COW_IMG(0x105782e0u), 0u, 0u, 1u, 0u);
            }
        }
    }
    COW_AT(1014c175)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014c0f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014c0fbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014c128u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014c12cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014c175u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
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
void cow_adapter_1014c0f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1014c0f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
