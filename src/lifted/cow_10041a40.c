/* f_0x10041a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_10041a40(Guest* g)
{
    double d3;
    double d7;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10041a56u: eax = g->eax; self = g->ecx; in_esi = rd32(sp0 - 0x14u); x0 = ST(0); g->esi = rd32(sp0 - 0x14u); goto E_10041a56;
    case 0x10041a62u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_10041a62;
    case 0x10041a6au: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_10041a6a;
    case 0x10041a74u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_10041a74;
    case 0x10041a78u: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_10041a78;
    case 0x10041a7au: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_10041a7a;
    case 0x10041a8eu: eax = g->eax; self = g->esi; in_esi = rd32(sp0 - 0x14u); x0 = ST(0); g->esi = rd32(sp0 - 0x14u); goto E_10041a8e;
    default: break;
    }
#endif

    COW_AT(10041a40)
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 0x104u) == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(self + 0x104u);
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    COW_AT(10041a56)
        if (rd8(self + 0x179u) == 0u)
        {
    COW_AT(10041a6a)
            if (rd32(self + 0x104u) == 0u)
            {
    COW_AT(10041a78)
                eax = 0u;
            }
            else
            {
                eax = rd32(self + 0x104u);
    COW_AT(10041a74)
                eax = rd32(eax);
            }
    COW_AT(10041a7a)
            g->esp = sp0 - 0x14u;
            t1 = cow_call_regs(g, COW_IMG(0x1003fcd0u), eax, eax, g->edx, 1, 0);
            wr32(sp0 - 0x10u, (uint16_t)t1);
            x0 = (double)(int32_t)(uint16_t)t1;
        }
        else
        {
    COW_AT(10041a62)
            x0 = (double)rdf32(eax + 0xd4u);
        }
    }
    COW_AT(10041a8e)
    wrf32(sp0 - 0xcu, (float)(double)(float)x0);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, self + 0x60u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, self + 0x60u, sp0 - 0xcu);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, sp0 - 0xcu);
    t2 = g->edx;
    d3 = cow_take_float(g);
    wrf32(sp0 - 0x10u, (float)(double)(float)d3);
    wr32(sp0 - 0x18u, self + 0x188u);
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->edx = t2;
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t5 = cow_thiscall(g, rd32(t4 + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, self + 0x188u);
    t6 = g->edx;
    d7 = cow_take_float(g);
    g->esi = in_esi;
    g->edx = t6;
    fpush(g, fr(g, d7 + (double)rdf32(sp0 - 0x10u)));
    return t5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10041a40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10041a56u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_esi = rd32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10041a62u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10041a6au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10041a74u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10041a78u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10041a7au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10041a8eu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10041a40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10041a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
