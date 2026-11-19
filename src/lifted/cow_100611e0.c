/* f_0x100611e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100611e0(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100611fcu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100611fc;
    case 0x1006121eu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1006121e;
    case 0x1006122eu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1006122e;
    default: break;
    }
#endif

    COW_AT(100611e0)
    wr32(self, COW_IMG(0x1032bce8u));
    wr32(self + 0x34u, COW_IMG(0x1032bcccu));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(100611fc)
        g->eax = eax;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
        t4 = rd32(self + 0x7cu);
        g->edx = rd32(t3);
        t5 = rd32(t3);
        t6 = cow_thiscall(g, rd32(t5 + 0x5cu), t3, 1, t4);
        t7 = g->edx;
        d8 = (double)rdf32(self + 0x7cu);
        if (d8 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            edx = t7;
        }
        else
        {
            eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            edx = t7;
    COW_AT(1006121e)
            g->eax = eax;
            g->esp = sp0 - 8u;
            t9 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
            g->edx = rd32(t9);
            t10 = rd32(t9);
            t11 = cow_thiscall(g, rd32(t10 + 0x50u), t9, 1, 2u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
    COW_AT(1006122e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t14 = g->edx;
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t14;
    cow_tailcall(g, COW_IMG(0x100747c0u), t13, self, t14);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100611e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100611fcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1006121eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1006122eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100611e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100611e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
