/* f_0x101358c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101358c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101358c8u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101358c8;
    case 0x101358cfu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101358cf;
    case 0x101358d3u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101358d3;
    default: break;
    }
#endif

    COW_AT(101358c0)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    COW_RET(0x101358c8u);
    t1 = cow_thiscall(g, COW_IMG(0x101315c0u), self, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101358c8)
    if (rd32(self + 8u) != 0u)
    {
        esi = rd32(self + 8u);
    COW_AT(101358cf)
        wr8(esi + 0x61u, 0u);
    }
    COW_AT(101358d3)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101358c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101358c8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101358cfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101358d3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101358c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101358c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
