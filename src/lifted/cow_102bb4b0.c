/* f_0x102bb4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bb4b0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    eax = sp0 - 0x1cu;
    ebx = 0u;
L_102bb4c6: ;
    wr32(ebx + sp0 - 0x24u, 0u);
    wr32(ebx + sp0 - 0x20u, 0u);
    wr32(ebx + sp0 - 0x1cu, 0u);
    ecx = COW_IMG(0x103c7b00u) + ebx;
    edx = arg1 + 8u;
    esi = 3u;
L_102bb4df: ;
    d1 = fr(g, fr(g, (double)rdf32(edx - 8u) * (double)rdf32(ecx)) + (double)rdf32(eax - 8u));
    wrf32(eax - 8u, (float)d1);
    d2 = fr(g, fr(g, (double)rdf32(edx - 4u) * (double)rdf32(ecx)) + (double)rdf32(eax - 4u));
    wrf32(eax - 4u, (float)d2);
    d3 = fr(g, fr(g, (double)rdf32(edx) * (double)rdf32(ecx)) + (double)rdf32(eax));
    wrf32(eax, (float)d3);
    if (esi != 1u)
    {
        ecx = ecx + 4u;
        edx = edx + 0xcu;
        esi = esi - 1u;
        goto L_102bb4df;
    }
    if ((int32_t)(ebx + 0xcu) < 36)
    {
        eax = eax + 0xcu;
        ebx = ebx + 0xcu;
        goto L_102bb4c6;
    }
    esi = sp0 - 0x24u;
    edi = arg1;
    ecx = 9u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bb4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bb4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
