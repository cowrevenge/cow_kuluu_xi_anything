/* f_0x10183370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10183370(Guest* g)
{
    double d10;
    double d11;
    double d2;
    double d3;
    double d4;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t5;
    uint32_t t6;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u);
    d2 = (double)rdf32(rd32(sp0 + 8u) + 0x38u);
    d3 = (double)rdf32(rd32(sp0 + 8u) + 0x34u);
    d4 = (double)rdf32(rd32(sp0 + 8u) + 0x30u);
    wr32(sp0 + 8u, 4u);
    esi = arg1;
    edi = t1;
    x2 = d2;
    x1 = d3;
    x0 = d4;
L_10183391: ;
    eax = edi;
    ecx = esi;
    edx = 3u;
L_1018339a: ;
    wr32(ecx, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_1018339a;
    }
    t5 = rd32(sp0 + 8u) - 1u;
    t6 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t5);
    if (t6 != 1u)
    {
        esi = esi + 0x10u;
        edi = edi + 4u;
        goto L_10183391;
    }
    d7 = fr(g, x1 * (double)rdf32(arg1 + 0x10u));
    d8 = fr(g, x2 * (double)rdf32(arg1 + 0x20u));
    wr32(arg1 + 0x2cu, 0u);
    d9 = fr(g, x0 * (double)rdf32(arg1));
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x3cu, 0x3f800000u);
    wrf32(arg1 + 0x30u, (float)-fr(g, fr(g, d8 + d7) + d9));
    d10 = fr(g, fr(g, fr(g, x2 * (double)rdf32(arg1 + 0x24u)) + fr(g, x1 * (double)rdf32(arg1 + 0x14u))) + fr(g, x0 * (double)rdf32(arg1 + 4u)));
    wrf32(arg1 + 0x34u, (float)-d10);
    d11 = fr(g, fr(g, fr(g, x2 * (double)rdf32(arg1 + 0x28u)) + fr(g, x1 * (double)rdf32(arg1 + 0x18u))) + fr(g, x0 * (double)rdf32(arg1 + 8u)));
    wrf32(arg1 + 0x38u, (float)-d11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10183370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10183370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
