/* f_0x102bc2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bc2d0(Guest* g)
{
    double d1;
    double d2;
    double d4;
    double d5;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t t3;
    uint32_t t6;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    d1 = (double)rdf32(sp0 + 4u);
    if (d1 == (double)rdf32(COW_IMG(0x1032961cu)))
    {
        d2 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10340be8u)));
        wrf32(sp0 + 4u, (float)d2);
    }
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t3 = rd32(sp0 + 8u);
    d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 4u));
    wr32(t3, 0x3f800000u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 - 0x1cu, t3 + 4u);
    ebx = t3;
    ebp = 0u;
    edi = 0u;
    loc_1c = t3 + 4u;
    x0 = d4;
L_102bc319: ;
    d5 = fr(g, (double)rdf32(sp0 + 4u) + (double)(int32_t)rd32(sp0 + 8u));
    t6 = rd32(sp0 + 8u);
    wrf32(edi + sp0 - 0xcu, (float)d5);
    wrf32(edi + sp0 - 0x18u, (float)fr(g, x0 + (double)(int32_t)t6));
    if ((int32_t)edi < 0)
    {
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        ecx = edi + sp0 - 0xcu;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        eax = ebx;
        edx = sp0 - 0x18u - ebx;
        esi = ebp + 1u;
L_102bc348: ;
        d7 = fr(g, (double)rdf32(eax) / fr(g, (double)rdf32(ecx) + (double)rdf32(eax + edx)));
        wrf32(sp0 + 8u, (float)d7);
        d8 = fr(g, fr(g, d7 * (double)rdf32(eax + edx)) + x1);
        wrf32(eax, (float)d8);
        if (esi != 1u)
        {
            eax = eax + 4u;
            esi = esi - 1u;
            x1 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx));
            ecx = ecx - 4u;
            goto L_102bc348;
        }
        x1 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx));
    }
    wrf32(loc_1c, (float)x1);
    wr32(sp0 + 8u, ebp + 1u);
    wr32(sp0 - 0x1cu, loc_1c + 4u);
    if ((int32_t)(edi + 4u) < 12)
    {
        ebp = ebp + 1u;
        edi = edi + 4u;
        loc_1c = loc_1c + 4u;
        goto L_102bc319;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bc2d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
