/* f_0x1028db60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
uint32_t cow_fn_1028db60(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
    double x0;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)fr(g, (double)rdf32(arg1 + 0xcu) - (double)rdf32(arg1));
    d2 = (double)(float)fr(g, (double)rdf32(arg1 + 0x10u) - (double)rdf32(arg1 + 4u));
    d3 = (double)(float)fr(g, (double)rdf32(arg1 + 0x14u) - (double)rdf32(arg1 + 8u));
    if (!((double)rdf32(COW_IMG(0x103295d8u)) < d1))
    {
        eax = (arg1 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103295d8u)), d1, 1u);
        loc_8_f = d2;
        loc_4_f = d3;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = (arg1 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103295d8u)), d1, 1u);
        loc_c_f = d1;
        loc_8_f = d2;
        loc_4_f = d3;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        x0 = loc_c_f;
    }
    if (!(x0 < loc_8_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_8_f, 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_8_f, 1u);
        x0 = loc_8_f;
    }
    if (!(x0 < loc_4_f))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, loc_4_f, 1u);
        x0 = loc_4_f;
    }
    fpush(g, x0);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028db60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028db60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
