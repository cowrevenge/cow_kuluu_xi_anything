/* f_0x10210b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10210b70(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10210b83u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_10210b83;
    case 0x10210bbeu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_10210bbe;
    case 0x10210bc0u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_10210bc0;
    case 0x10210bc7u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_10210bc7;
    case 0x10210bcbu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_10210bcb;
    case 0x10210bd6u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_10210bd6;
    default: break;
    }
#endif

    COW_AT(10210b70)
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    t2 = g->edx;
    if ((uint16_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(10210b83)
        d3 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 4u) - (double)rdf32(self + 0x14u));
        d4 = fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xcu) - (double)rdf32(self + 0x1cu));
        d5 = fr(g, fr(g, d4 * d4) + fr(g, d3 * d3));
        if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u;
    COW_AT(10210bbe)
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
    COW_AT(10210bc0)
    if (rd8(self + 0x25u) != 0u) goto L_10210bcb;
    eax = (eax & 0xffffff00u) | rd8(self + 0x25u);
    COW_AT(10210bc7)
    if ((uint8_t)ebx == 0u) goto L_10210bd6;
L_10210bcb: ;
    COW_AT(10210bcb)
    g->eax = rd32(self);
    g->edx = edx;
    t6 = rd32(self);
    g->esp = sp0 - 0x18u;
    t7 = cow_thiscall(g, rd32(t6 + 0x18u), self, 2, 6u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_10210bd6: ;
    COW_AT(10210bd6)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10210b70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10210b83u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x10210bbeu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x10210bc0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10210bc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10210bcbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10210bd6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10210b70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10210b70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
