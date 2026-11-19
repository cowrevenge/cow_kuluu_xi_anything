/* f_0x1018c500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1018c500(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018c508u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; goto E_1018c508;
    case 0x1018c510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1018c510;
    case 0x1018c538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1018c538;
    case 0x1018c545u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1018c545;
    case 0x1018c54au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1018c54a;
    case 0x1018c54cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; goto E_1018c54c;
    default: break;
    }
#endif

    COW_AT(1018c500)
    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
    COW_AT(1018c508)
        edx = in_edx;
        ebx = arg1;
        esi = arg2;
L_1018c510: ;
    COW_AT(1018c510)
        t1 = rd32(COW_IMG(0x10662688u));
        t2 = rd8(rd32(COW_IMG(0x10662684u)));
        wr8(rd32(COW_IMG(0x10662684u)), (uint8_t)(t2 | ((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u)));
        t3 = rd32(COW_IMG(0x10662688u)) + 1u;
        t4 = rd32(COW_IMG(0x10662688u));
        wr32(COW_IMG(0x10662688u), t3);
        if (t4 + 1u != 8u)
        {
            eax = t3;
            edx = (edx & 0xffffff00u) | (uint8_t)((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u);
        }
        else
        {
            eax = t3;
            ecx = (t1 & 0xffffff00u) | (uint8_t)(t2 | ((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u));
            edx = (edx & 0xffffff00u) | (uint8_t)((t1 & 0x1fu) != 0u ? (uint8_t)((ebx & 1u) << (t1 & 0x1fu)) : ebx & 1u);
    COW_AT(1018c538)
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_stdcall(g, COW_IMG(0x1018c550u), 0);
            t5 = g->edx;
            t6 = rd32(COW_IMG(0x10662684u));
            wr8(t6, 0u);
            eax = t6;
            edx = t5;
        }
    COW_AT(1018c545)
        if (esi != 1u)
        {
            ebx = ebx >> 1u;
            esi = esi - 1u;
            goto L_1018c510;
        }
    COW_AT(1018c54a)
    }
    COW_AT(1018c54c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018c500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018c508u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1018c510u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1018c538u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1018c545u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1018c54au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1018c54cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018c500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
