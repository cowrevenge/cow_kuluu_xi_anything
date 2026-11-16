/* f_0x102b79b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b79b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10274660u), 1, sp0 - 0xcu);
    t1 = g->ecx;
    t2 = g->edx;
    if ((int32_t)arg3 <= 0)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        wr32(sp0 - 0x18u, in_ebx);
        eax = 0u;
        ecx = arg1 + 4u;
        x2 = (double)rdf32(sp0 - 4u);
        x1 = (double)rdf32(sp0 - 8u);
        x0 = (double)rdf32(sp0 - 0xcu);
L_102b79e0: ;
        t3 = cow_divs(g, eax + 1u, arg3);
        t4 = cow_mods(g, eax + 1u, arg3);
        if ((int32_t)(eax + 1u) < (int32_t)arg3)
        {
            eax = eax + 1u;
            x2 = fr(g, x2 + fr(g, fr(g, (double)rdf32(ecx - 4u) - (double)rdf32(arg1 + t4 * 0xcu)) * fr(g, (double)rdf32(arg1 + t4 * 0xcu + 4u) + (double)rdf32(ecx))));
            x1 = fr(g, x1 + fr(g, fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(arg1 + t4 * 0xcu + 8u)) * fr(g, (double)rdf32(ecx - 4u) + (double)rdf32(arg1 + t4 * 0xcu))));
            x0 = fr(g, x0 + fr(g, fr(g, (double)rdf32(arg1 + t4 * 0xcu + 8u) + (double)rdf32(ecx + 4u)) * fr(g, (double)rdf32(ecx) - (double)rdf32(arg1 + t4 * 0xcu + 4u))));
            ecx = ecx + 0xcu;
            goto L_102b79e0;
        }
        edx = t4 * 3u;
        x2 = fr(g, x2 + fr(g, fr(g, (double)rdf32(ecx - 4u) - (double)rdf32(arg1 + t4 * 0xcu)) * fr(g, (double)rdf32(arg1 + t4 * 0xcu + 4u) + (double)rdf32(ecx))));
        x1 = fr(g, x1 + fr(g, fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(arg1 + t4 * 0xcu + 8u)) * fr(g, (double)rdf32(ecx - 4u) + (double)rdf32(arg1 + t4 * 0xcu))));
        x0 = fr(g, x0 + fr(g, fr(g, (double)rdf32(arg1 + t4 * 0xcu + 8u) + (double)rdf32(ecx + 4u)) * fr(g, (double)rdf32(ecx) - (double)rdf32(arg1 + t4 * 0xcu + 4u))));
        ecx = ecx + 0xcu;
        wrf32(sp0 - 4u, (float)(double)(float)x2);
        wrf32(sp0 - 8u, (float)(double)(float)x1);
        wrf32(sp0 - 0xcu, (float)(double)(float)x0);
    }
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xcu);
    t6 = g->edx;
    if ((int32_t)arg3 > 0)
    {
        eax = t5;
        edx = t6;
        esi = arg2;
        edi = arg3;
L_102b7a4a: ;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t7 = cow_cdecl(g, COW_IMG(0x10274670u), 2, esi, sp0 - 0xcu);
        t8 = g->edx;
        if (edi != 1u)
        {
            eax = t7;
            edx = t8;
            esi = esi + 0xcu;
            edi = edi - 1u;
            goto L_102b7a4a;
        }
    }
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->top = (g->top + 1u) & 7u;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b79b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b79b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
