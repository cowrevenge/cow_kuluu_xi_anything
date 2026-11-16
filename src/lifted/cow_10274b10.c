/* f_0x10274b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10274b10(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)rdf32(sp0 + 0xcu);
    if (!(d1 < rdf64(COW_IMG(0x10340b18u)))) goto L_10274b5a;
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x10340b18u)), 0u);
    if ((double)rdf32(arg1) == (double)rdf32(arg2))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(arg2), 0u);
        goto L_10274b37;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(arg2), 0u);
    g->edx = arg2;
    return eax & 0xffffff00u;
L_10274b37: ;
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (d2 == d3)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
        goto L_10274b47;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, d3, 0u);
    g->edx = arg2;
    return eax & 0xffffff00u;
L_10274b47: ;
    d4 = (double)rdf32(arg1 + 8u);
    d5 = (double)rdf32(arg2 + 8u);
    if (d4 == d5)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
        goto L_10274b57;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
    g->edx = arg2;
    return eax & 0xffffff00u;
L_10274b57: ;
    g->edx = arg2;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_10274b5a: ;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x10274b80u), 2, arg1, arg2);
    t7 = g->edx;
    d8 = cow_take_float(g);
    d9 = (double)rdf32(sp0 + 0xcu);
    if (!(d8 < d9))
    {
        edx = t7;
        goto L_10274b79;
    }
    edx = t7;
    g->edx = edx;
    return 1u;
L_10274b79: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
