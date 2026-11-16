/* f_0x10181300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10181300(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    d1 = (double)rdf32(sp0 + 8u);
    wrf32(arg4, (float)d1);
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0x14u, self);
    d2 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1037731cu)) + (double)rdf32(self + 0x170u));
    wrf32(sp0 - 0x14u, (float)d2);
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, self);
    d3 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(self + 0x170u));
    wrf32(sp0 - 0x1cu, (float)d3);
    wr32(sp0 - 0x20u, arg1);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10181210u), self, 5, arg1, cow_f2bits(d3), arg3, cow_f2bits(d2), arg4);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x10u, arg4);
        wr32(sp0 - 0x14u, 0xc1700000u);
        wr32(sp0 - 0x18u, arg3);
        wr32(sp0 - 0x1cu, ecx);
        d7 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(self + 0x170u));
        wrf32(sp0 - 0x1cu, (float)d7);
        wr32(sp0 - 0x20u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, COW_IMG(0x10181210u), self, 5, arg1, cow_f2bits(d7), arg3, 0xc1700000u, arg4);
        eax = t8;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10181300(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
