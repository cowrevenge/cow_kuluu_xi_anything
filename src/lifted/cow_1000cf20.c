/* f_0x1000cf20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1000cf20(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000cf43u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x44u); goto E_1000cf43;
    case 0x1000cf46u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x44u); goto E_1000cf46;
    case 0x1000cf51u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x44u); goto E_1000cf51;
    case 0x1000cf5du: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x44u); goto E_1000cf5d;
    default: break;
    }
#endif

    COW_AT(1000cf20)
    wr32(sp0 - 0x44u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t3 = g->edx;
    if (rd32(self + 0x810u) == 0u)
    {
        eax = rd32(self + 0x810u);
        edx = t3;
    COW_AT(1000cf51)
        d4 = (double)(float)-(double)rdf32(COW_IMG(0x1034ffa0u));
        wrf32(sp0 - 0x10u, (float)d4);
    }
    else
    {
        eax = rd32(self + 0x810u);
        edx = t3;
    COW_AT(1000cf43)
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
    COW_AT(1000cf46)
            wr32(sp0 - 0x10u, rd32(COW_IMG(0x1034ffa0u)));
            eax = rd32(COW_IMG(0x1034ffa0u));
        }
    }
    COW_AT(1000cf5d)
    wr32(sp0 - 0x48u, self + 0x9bcu);
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10027e90u), sp0 - 0x40u, 1, self + 0x9bcu);
    t5 = g->ecx;
    wr32(sp0 - 0x48u, sp0 - 0x40u);
    wr32(sp0 - 0x4cu, 3u);
    t6 = rd32(self + 0xcu);
    wr32(sp0 - 0x50u, t6);
    g->eax = sp0 - 0x40u;
    g->edx = rd32(rd32(self + 0xcu));
    t7 = rd32(rd32(self + 0xcu));
    t8 = cow_thiscall(g, rd32(t7 + 0x94u), t5, 3, t6, 3u, sp0 - 0x40u);
    t9 = g->edx;
    g->edx = t9;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000cf20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000cf43u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1000cf46u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1000cf51u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1000cf5du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000cf20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1000cf20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
