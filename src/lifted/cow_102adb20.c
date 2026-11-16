/* f_0x102adb20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102adb20(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x34u, in_edi);
    wr32(arg1, 0x3f800000u);
    wr32(sp0 - 0x20u, arg1 + 4u);
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x1cu, 0xffffffffu - t1);
    ecx = t1;
    edx = 0xffffffffu - t1;
    ebx = 0u;
    ebp = 1u;
    edi = t1 + 1u;
    loc_20 = arg1 + 4u;
    loc_24 = t1;
    loc_1c = 0xffffffffu - t1;
L_102adb5b: ;
    if ((int32_t)ecx > 0)
    {
        wr32(sp0 + 0xcu, arg4);
        if ((int32_t)ecx < (int32_t)arg4)
        {
            wr32(sp0 + 0xcu, ecx);
        }
    }
    else
    {
        wr32(sp0 + 0xcu, 0u);
    }
    d2 = fr(g, (double)rdf32(sp0 + 8u) - (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(ebx + sp0 - 0xcu, (float)d2);
    if ((int32_t)edi > 0)
    {
        ecx = ebx + sp0 - 0xcu;
        wr32(sp0 + 0xcu, arg4);
        if ((int32_t)edi < (int32_t)arg4)
        {
            wr32(sp0 + 0xcu, edi);
        }
    }
    else
    {
        ecx = ebx + sp0 - 0xcu;
        wr32(sp0 + 0xcu, 0u);
    }
    d3 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) - (double)rdf32(sp0 + 8u));
    wrf32(ebx + sp0 - 0x18u, (float)d3);
    if ((int32_t)(edi + edx) < 0)
    {
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        eax = arg1;
        esi = ebp;
L_102adbc4: ;
        d4 = fr(g, (double)rdf32(eax) / fr(g, (double)rdf32(eax + sp0 - arg1 - 0x18u) + (double)rdf32(ecx)));
        wrf32(sp0 + 0xcu, (float)d4);
        d5 = fr(g, fr(g, d4 * (double)rdf32(eax + sp0 - arg1 - 0x18u)) + x0);
        wrf32(eax, (float)d5);
        if (esi != 1u)
        {
            eax = eax + 4u;
            esi = esi - 1u;
            x0 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(ecx));
            ecx = ecx - 4u;
            goto L_102adbc4;
        }
        x0 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(ecx));
        edx = loc_1c;
    }
    wrf32(loc_20, (float)x0);
    wr32(sp0 - 0x24u, loc_24 - 1u);
    wr32(sp0 - 0x20u, loc_20 + 4u);
    if ((int32_t)(edi + edx + 1u) < 3)
    {
        ebx = ebx + 4u;
        ebp = ebp + 1u;
        edi = edi + 1u;
        loc_20 = loc_20 + 4u;
        loc_24 = loc_24 - 1u;
        goto L_102adb57;
    }
    eax = loc_20 + 4u;
    g->edx = edx;
    return eax;
L_102adb57: ;
    ecx = loc_24;
    goto L_102adb5b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102adb20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102adb20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
