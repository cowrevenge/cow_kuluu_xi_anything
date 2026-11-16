/* f_0x1018b8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_1018b8f0(Guest* g)
{
    double d3;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 4u, 0x42c80000u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101892b0u), self, 1, t1);
    t2 = g->edx;
    d3 = cow_take_float(g);
    t4 = rd32(self + 0x1cu);
    wrf32(sp0 + 4u, (float)d3);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t2;
    }
    else
    {
        eax = t4;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x10187020u), self, 0);
        t6 = g->edx;
        d7 = cow_take_float(g);
        wrf32(sp0 - 4u, (float)(double)(float)d7);
        eax = t5;
        edx = t6;
    }
    d8 = (double)rdf32(self + 0x1d0u);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        x0 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(sp0 - 4u));
        goto L_1018b953;
    }
    eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    x0 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(sp0 - 4u));
    d9 = (double)rdf32(self + 0x1d0u);
    if (!(x0 < d9)) goto L_1018b959;
    g->edx = edx;
    fpush(g, (double)rdf32(self + 0x1d0u));
    return;
L_1018b953: ;
    x0 = (double)rdf32(sp0 - 4u);
L_1018b959: ;
    g->edx = edx;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b8f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018b8f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
