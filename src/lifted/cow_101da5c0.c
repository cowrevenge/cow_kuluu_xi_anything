/* f_0x101da5c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101da5c0(Guest* g)
{
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101da5d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101da5d0;
    case 0x101da60bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101da60b;
    case 0x101da61bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101da61b;
    default: break;
    }
#endif

    COW_AT(101da5c0)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(101da5d0)
        d4 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 4u) - (double)rdf32(self + 0x14u));
        d5 = fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xcu) - (double)rdf32(self + 0x1cu));
        d6 = fr(g, fr(g, d5 * d5) + fr(g, d4 * d4));
        if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u;
        }
        else
        {
    COW_AT(101da60b)
            t7 = rd32(self + 8u);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t8 = cow_call_regs(g, COW_IMG(0x1015e790u), t7, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
            t9 = g->ecx;
            t10 = g->edx;
            eax = t8;
            ecx = t9;
            edx = t10;
        }
    }
    COW_AT(101da61b)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_call_regs(g, COW_IMG(0x101d7ac0u), eax, g->ecx, g->edx, 1, 1, 0u);
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return t11;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101da5c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101da5d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101da60bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101da61bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101da5c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101da5c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
