/* f_0x1006d300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1006d300(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, 4u);
    edx = sp0 - 0x40u;
    ebp = t1 - (sp0 - 0x40u);
L_1006d31d: ;
    eax = arg3;
    ebx = 4u;
    edi = ebp + edx;
L_1006d329: ;
    d2 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(edx, 0u);
    ecx = edi;
    esi = 4u;
    x0 = d2;
L_1006d33c: ;
    if (esi != 1u)
    {
        esi = esi - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_1006d33c;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(eax) * (double)rdf32(ecx)));
    eax = eax + 4u;
    wrf32(edx, (float)x0);
    if (ebx != 1u)
    {
        edx = edx + 4u;
        ebx = ebx - 1u;
        goto L_1006d329;
    }
    edx = edx + 4u;
    t3 = rd32(sp0 + 8u) - 1u;
    t4 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t3);
    if (t4 != 1u) goto L_1006d31d;
    esi = sp0 - 0x40u;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006d300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006d300(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
