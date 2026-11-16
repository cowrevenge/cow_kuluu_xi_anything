/* f_0x102b9460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_102b9460(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(rd32(sp0 + 4u) + 0x34u) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = rd32(sp0 + 0x18u);
        edx = rd32(eax + ecx * 4u + 0x54u);
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = rd32(sp0 + 0x18u);
        edx = 0u;
    }
    t1 = rd32(arg2);
    t2 = rd32(eax + ecx * 4u + 0x18u);
    t3 = rd32(arg2 + 4u);
    d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 + 0x18u, (float)d4);
    d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 + 4u, (float)d5);
    if ((int32_t)t2 > 0)
    {
        eax = edx + t1 * t2 * 4u;
        ecx = t2;
        ebx = edx + t3 * t2 * 4u;
        edi = edx + rd32(arg2 + 8u) * t2 * 4u;
        edx = edx + rd32(arg2 + 0xcu) * t2 * 4u;
        edx = edx - eax;
        esi = ebx - eax;
        ebx = arg5 - eax;
        edi = edi - eax;
L_102b94d3: ;
        d6 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(eax + esi)) * (double)rdf32(sp0 + 0xcu)) + fr(g, fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(eax + edx)) * (double)rdf32(sp0 + 0x10u))) + fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + edi)) * (double)rdf32(sp0 + 0x10u)));
        d7 = fr(g, d6 + fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(eax)) * (double)rdf32(sp0 + 0x18u)));
        wrf32(eax + ebx, (float)d7);
        if (ecx != 1u)
        {
            eax = eax + 4u;
            ecx = ecx - 1u;
            goto L_102b94d3;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b9460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b9460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
