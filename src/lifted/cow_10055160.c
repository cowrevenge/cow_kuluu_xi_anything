/* f_0x10055160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10055160(Guest* g)
{
    double d1;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1005516au: self = g->ecx; in_esi = g->esi; goto E_1005516a;
    case 0x100551a0u: self = g->ecx; in_esi = g->esi; goto E_100551a0;
    case 0x100551cbu: in_esi = g->esi; x1 = ST(0); x0 = ST(1); goto E_100551cb;
    default: break;
    }
#endif

    COW_AT(10055160)
    if (rd8(self + 0x10u) == 0u)
    {
    COW_AT(100551a0)
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        t2 = rd32(self + 8u);
        wr32(sp0 - 0x38u, t2);
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x10055a60u), rd32(self + 0x14u), 4, t2, sp0 - 0x24u, sp0 - 0x18u, sp0 - 0xcu);
        x1 = fr(g, (double)rdf32(sp0 - 0x18u) - (double)rdf32(sp0 - 0x24u));
        x0 = fr(g, (double)rdf32(sp0 - 0x10u) - (double)rdf32(sp0 - 0x1cu));
    }
    else
    {
    COW_AT(1005516a)
        d1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 8u));
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        wr32(sp0 - 0x38u, self);
        wrf32(sp0 - 0x38u, (float)(double)(float)d1);
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x10055a60u), rd32(self + 0x14u), 4, cow_f2bits((double)(float)d1), sp0 - 0x24u, sp0 - 0x18u, sp0 - 0xcu);
        x1 = fr(g, (double)rdf32(sp0 - 0x24u) - (double)rdf32(sp0 - 0x18u));
        x0 = fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(sp0 - 0x10u));
    }
    COW_AT(100551cb)
    wr32(sp0 - 0x2cu, in_esi);
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t3);
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032addcu)) - fr(g, atan2(x0, x1)));
    wrf32(sp0 - 0x28u, (float)(double)(float)d5);
    wr32(sp0 - 0x30u, cow_f2bits((double)(float)d5));
    wr32(sp0 - 0x34u, t4);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, t4, cow_f2bits((double)(float)d5));
    d6 = (double)rdf32(sp0 - 0x24u);
    d7 = (double)rdf32(sp0 - 0x20u);
    d8 = (double)rdf32(sp0 - 0x1cu);
    wrf32(t4 + 0x30u, (float)d6);
    wr32(t4 + 0x3cu, 0x3f800000u);
    wrf32(t4 + 0x34u, (float)d7);
    wrf32(t4 + 0x38u, (float)d8);
    t9 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t10 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t10 + 0xa90u, t9);
    wr32(t10 + t9 * 4u + 0xa10u, t4);
    g->esi = in_esi;
    return t4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10055160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1005516au:
    {
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = g->esi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100551a0u:
    {
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = g->esi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100551cbu:
    {
        uint32_t in_esi;
        double x0;
        double x1;
        in_esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10055160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10055160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
