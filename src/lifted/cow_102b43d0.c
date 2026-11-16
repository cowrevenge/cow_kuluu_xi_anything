/* f_0x102b43d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102b43d0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    double loc_4_f;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)(float)-(double)rdf32(sp0 + 0xcu);
    d2 = fr(g, (double)rdf32(arg1) - (double)rdf32(arg2));
    d3 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d2, d3, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d2, d3, 1u) & 0x4100u;
        loc_4_f = d1;
        x0 = d2;
        goto L_102b43fc;
    }
    eax = cow_fsw(g, d2, d3, 1u) & 0x4100u;
    loc_4_f = d1;
    x0 = d2;
    return eax & 0xffffff00u;
L_102b43fc: ;
    if (!(x0 < loc_4_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 0u);
        goto L_102b440b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 0u);
    return eax & 0xffffff00u;
L_102b440b: ;
    d4 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg2 + 4u));
    d5 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d4, d5, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, d5, 1u) & 0x4100u;
        x0 = d4;
        goto L_102b4426;
    }
    eax = cow_fsw(g, d4, d5, 1u) & 0x4100u;
    x0 = d4;
    return eax & 0xffffff00u;
L_102b4426: ;
    if (!(x0 < loc_4_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 0u);
        goto L_102b4435;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 0u);
    return eax & 0xffffff00u;
L_102b4435: ;
    d6 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg2 + 8u));
    d7 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d6, d7, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, d7, 1u) & 0x4100u;
        x0 = d6;
        goto L_102b4450;
    }
    eax = cow_fsw(g, d6, d7, 1u) & 0x4100u;
    x0 = d6;
    return eax & 0xffffff00u;
L_102b4450: ;
    if (!(x0 < loc_4_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 0u);
        goto L_102b445f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 0u);
    return eax & 0xffffff00u;
L_102b445f: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b43d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b43d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
