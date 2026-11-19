/* f_0x1008d980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008d980(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008d98eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008d98e;
    case 0x1008d9a6u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008d9a6;
    case 0x1008d9afu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008d9af;
    case 0x1008d9c6u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008d9c6;
    case 0x1008d9dau: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008d9da;
    case 0x1008d9eeu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008d9ee;
    case 0x1008d9f4u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008d9f4;
    default: break;
    }
#endif

    COW_AT(1008d980)
    if ((rd32(self + 0x120u) >> 8u & 0x20u) != 0u)
    {
    COW_AT(1008d9a6)
        wr16(self + 0x1bau, 0u);
    }
    else
    {
        eax = rd32(self + 0x120u);
    COW_AT(1008d98e)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
        t2 = cow_divs(g, t1, 0x258u);
        t3 = cow_mods(g, t1, 0x258u);
        wr16(self + 0x1bau, (uint16_t)(t3 + 0x258u));
    }
    COW_AT(1008d9af)
    t4 = rd32(self + 0x1a8u);
    t5 = rd32(self + 0x120u);
    wr32(self + 0x1a4u, t4);
    if ((t5 >> 8u & 2u) == 0u)
    {
        eax = t5;
    }
    else
    {
        eax = t5;
        edx = t4;
    COW_AT(1008d9c6)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t6 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), edx, 1, COW_IMG(0x10330ebcu));
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
        }
        else
        {
    COW_AT(1008d9da)
            if (rd32(rd32(self + 0xa0u) + 0x7c8u) == rd32(self + 0x1a4u))
            {
                eax = rd32(self + 0xa0u);
            }
            else
            {
                eax = rd32(self + 0xa0u);
                esi = rd32(self + 0x1a4u);
    COW_AT(1008d9ee)
                wr32(eax + 0x7c8u, esi);
            }
        }
    }
    COW_AT(1008d9f4)
    g->esi = in_esi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1008d980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008d98eu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1008d9a6u:
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
    case 0x1008d9afu:
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
    case 0x1008d9c6u:
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
    case 0x1008d9dau:
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
    case 0x1008d9eeu:
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
    case 0x1008d9f4u:
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
void cow_adapter_1008d980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1008d980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
