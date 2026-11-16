/* f_0x10027f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10027f60(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    edx = arg1 + 0x10u;
    esi = 0u;
L_10027f71: ;
    d1 = fr(g, fr(g, fr(g, (double)rdf32(edx - 0x10u) * (double)rdf32(self)) + fr(g, (double)rdf32(edx + 0x10u) * (double)rdf32(self + 8u))) + fr(g, (double)rdf32(edx) * (double)rdf32(self + 4u)));
    wrf32(esi * 4u + sp0 - 0x40u, (float)d1);
    if ((int32_t)(esi + 1u) < 3)
    {
        edx = edx + 4u;
        esi = esi + 1u;
        goto L_10027f71;
    }
    edx = arg1 + 0x10u;
    edi = 3u;
L_10027fa0: ;
    d2 = fr(g, fr(g, fr(g, (double)rdf32(edx - 0x10u) * (double)rdf32(self + 0x10u)) + fr(g, (double)rdf32(edx + 0x10u) * (double)rdf32(self + 0x18u))) + fr(g, (double)rdf32(edx) * (double)rdf32(self + 0x14u)));
    wrf32(edx + sp0 - arg1 - 0x40u, (float)d2);
    if (edi != 1u)
    {
        edx = edx + 4u;
        edi = edi - 1u;
        goto L_10027fa0;
    }
    edx = arg1 + 0x10u;
    edi = 3u;
L_10027fcd: ;
    d3 = fr(g, fr(g, fr(g, (double)rdf32(edx + 0x10u) * (double)rdf32(self + 0x28u)) + fr(g, (double)rdf32(edx - 0x10u) * (double)rdf32(self + 0x20u))) + fr(g, (double)rdf32(edx) * (double)rdf32(self + 0x24u)));
    wrf32(edx + sp0 - arg1 - 0x30u, (float)d3);
    if (edi != 1u)
    {
        edx = edx + 4u;
        edi = edi - 1u;
        goto L_10027fcd;
    }
    eax = arg1 + 0x10u;
    esi = 3u;
L_10027ff8: ;
    d4 = fr(g, fr(g, fr(g, (double)rdf32(eax - 0x10u) * (double)rdf32(self + 0x30u)) + fr(g, (double)rdf32(eax + 0x10u) * (double)rdf32(self + 0x38u))) + fr(g, (double)rdf32(self + 0x34u) * (double)rdf32(eax)));
    wrf32(eax + sp0 - arg1 - 0x20u, (float)d4);
    if (esi != 1u)
    {
        eax = eax + 4u;
        esi = esi - 1u;
        goto L_10027ff8;
    }
    eax = sp0 - 0x40u;
    edx = 3u;
L_10028027: ;
    wr32(eax + self - sp0 + 0x40u, rd32(eax));
    t5 = rd32(eax + 4u);
    wr32(eax + self - sp0 + 0x44u, t5);
    t6 = rd32(eax + 8u);
    wr32(eax + self - sp0 + 0x48u, t6);
    if (edx != 1u)
    {
        eax = eax + 0x10u;
        edx = edx - 1u;
        goto L_10028027;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10027f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10027f60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
