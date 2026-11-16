/* f_0x1006e020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1006e020(Guest* g)
{
    double d2;
    double d3;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x1047cc30u)) & 1u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047cc30u));
        wr32(COW_IMG(0x1047cd50u), 0x3f800000u);
        wr8(COW_IMG(0x1047cc30u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047cd54u), 0u);
        wr32(COW_IMG(0x1047cd58u), 0u);
        wr32(COW_IMG(0x1047cd5cu), 0u);
        wr32(COW_IMG(0x1047cd60u), 0u);
        wr32(COW_IMG(0x1047cd64u), 0x3f800000u);
        wr32(COW_IMG(0x1047cd68u), 0u);
        wr32(COW_IMG(0x1047cd6cu), 0u);
        wr32(COW_IMG(0x1047cd70u), 0u);
        wr32(COW_IMG(0x1047cd74u), 0u);
        wr32(COW_IMG(0x1047cd78u), 0x3f800000u);
        wr32(COW_IMG(0x1047cd7cu), 0u);
        wr32(COW_IMG(0x1047cd80u), 0u);
        wr32(COW_IMG(0x1047cd84u), 0u);
        wr32(COW_IMG(0x1047cd88u), 0u);
        wr32(COW_IMG(0x1047cd8cu), 0x3f800000u);
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006e130u));
        t1 = g->edx;
        edx = t1;
    }
    d2 = fr(g, sin((double)rdf32(sp0 + 8u)));
    wrf32(COW_IMG(0x1047cd68u), (float)d2);
    wrf32(COW_IMG(0x1047cd74u), (float)-d2);
    d3 = fr(g, cos((double)rdf32(sp0 + 8u)));
    wrf32(COW_IMG(0x1047cd78u), (float)d3);
    wrf32(COW_IMG(0x1047cd64u), (float)d3);
    esi = COW_IMG(0x1047cd50u);
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006e020(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
