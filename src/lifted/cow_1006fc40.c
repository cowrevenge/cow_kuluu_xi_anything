/* f_0x1006fc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1006fc40(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t10;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006fcd0u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006fcd0;
    case 0x1006fcd7u: eax = g->eax; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006fcd7;
    default: break;
    }
#endif

    COW_AT(1006fc40)
    d1 = fr(g, sin((double)rdf32(sp0 + 8u)));
    wrf32(self + 0x868u, (float)d1);
    wrf32(self + 0x874u, (float)-d1);
    d2 = fr(g, cos((double)rdf32(sp0 + 8u)));
    wrf32(self + 0x878u, (float)d2);
    wrf32(self + 0x864u, (float)d2);
    d3 = fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wrf32(self + 0x8b8u, (float)d3);
    wrf32(self + 0x890u, (float)d3);
    d4 = fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wrf32(self + 0x8b0u, (float)d4);
    wrf32(self + 0x898u, (float)-d4);
    d5 = fr(g, cos((double)rdf32(sp0 + 0x10u)));
    wrf32(self + 0x8e4u, (float)d5);
    wrf32(self + 0x8d0u, (float)d5);
    d6 = fr(g, sin((double)rdf32(sp0 + 0x10u)));
    wrf32(self + 0x8d4u, (float)d6);
    wrf32(self + 0x8e0u, (float)-d6);
    g->eax = self + 0x850u;
    g->edx = in_edx;
    t7 = rd32(self);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1006fcd0u);
    t8 = cow_thiscall(g, rd32(t7 + 0x24u), self, 3, arg1, self + 0x850u, self + 0x890u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    edi = t7;
    COW_AT(1006fcd0)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x1006fcd7u);
    cow_thiscall(g, rd32(edi + 0x24u), self, 3, arg1, eax, self + 0x8d0u);
    t10 = g->edx;
    edx = t10;
    COW_AT(1006fcd7)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006fc40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006fcd0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        wr32(sp0 - 0x10u, self + 0x8d0u);
        (void)sp0;
        return 1;
    }
    case 0x1006fcd7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006fc40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006fc40(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
