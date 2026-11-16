/* f_0x10274e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10274e60(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x0;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = arg1;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10274db0u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    if (d4 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        edx = t3;
        x0 = d4;
    }
    else
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t2;
        edx = t3;
        x0 = d4;
        d5 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
        d6 = fr(g, d5 * (double)rdf32(ecx));
        wrf32(ecx, (float)d6);
        d7 = fr(g, d5 * (double)rdf32(ecx + 4u));
        wrf32(ecx + 4u, (float)d7);
        d8 = fr(g, d5 * (double)rdf32(ecx + 8u));
        wrf32(ecx + 8u, (float)d8);
        d9 = fr(g, d5 * (double)rdf32(ecx + 0xcu));
        wrf32(ecx + 0xcu, (float)d9);
    }
    g->edx = edx;
    fpush(g, x0);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274e60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
