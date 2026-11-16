/* f_0x102b42e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b42e0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t4;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebx);
    d1 = (double)(float)(double)rdf32(COW_IMG(0x103295d8u));
    wrf32(sp0 - 0xcu, (float)d1);
    wr32(sp0 - 0x14u, in_ebp);
    d2 = (double)(float)(double)rdf32(COW_IMG(0x103295d8u));
    wrf32(sp0 - 8u, (float)d2);
    wr32(sp0 - 0x18u, in_esi);
    d3 = (double)(float)(double)rdf32(COW_IMG(0x103295d8u));
    wrf32(sp0 - 4u, (float)d3);
    if ((int32_t)arg3 <= 0)
    {
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        ecx = self;
        edx = arg2;
    }
    else
    {
        x2 = (double)rdf32(COW_IMG(0x103295d8u));
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(sp0 - 0x1cu, in_edi);
        edx = arg2;
        esi = 0u;
L_102b4318: ;
        if (esi != arg3 - 1u)
        {
            eax = edx + 0xcu;
            ecx = edx;
            edx = edx + 0xcu;
        }
        else
        {
            ecx = edx;
            edx = edx + 0xcu;
            eax = arg2;
        }
        if ((int32_t)(esi + 1u) < (int32_t)arg3)
        {
            esi = esi + 1u;
            x2 = fr(g, x2 - fr(g, fr(g, (double)rdf32(eax) - (double)rdf32(ecx)) * fr(g, (double)rdf32(ecx + 4u) + (double)rdf32(eax + 4u))));
            x1 = fr(g, x1 - fr(g, fr(g, (double)rdf32(eax) + (double)rdf32(ecx)) * fr(g, (double)rdf32(eax + 8u) - (double)rdf32(ecx + 8u))));
            x0 = fr(g, x0 - fr(g, fr(g, (double)rdf32(eax + 4u) - (double)rdf32(ecx + 4u)) * fr(g, (double)rdf32(ecx + 8u) + (double)rdf32(eax + 8u))));
            goto L_102b4318;
        }
        x2 = fr(g, x2 - fr(g, fr(g, (double)rdf32(eax) - (double)rdf32(ecx)) * fr(g, (double)rdf32(ecx + 4u) + (double)rdf32(eax + 4u))));
        x1 = fr(g, x1 - fr(g, fr(g, (double)rdf32(eax) + (double)rdf32(ecx)) * fr(g, (double)rdf32(eax + 8u) - (double)rdf32(ecx + 8u))));
        x0 = fr(g, x0 - fr(g, fr(g, (double)rdf32(eax + 4u) - (double)rdf32(ecx + 4u)) * fr(g, (double)rdf32(ecx + 8u) + (double)rdf32(eax + 8u))));
        wrf32(sp0 - 4u, (float)(double)(float)x2);
        wrf32(sp0 - 8u, (float)(double)(float)x1);
        wrf32(sp0 - 0xcu, (float)(double)(float)x0);
    }
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg1, sp0 - 0xcu);
    g->top = (g->top + 1u) & 7u;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b42e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b42e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
