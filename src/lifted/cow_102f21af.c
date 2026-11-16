/* f_0x102f21af - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102f21af(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    t1 = (uint16_t)self >> 0xbu;
    t2 = self >> 5u & 0x3fu;
    d3 = fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x1034617cu)));
    d4 = (double)rdf32(COW_IMG(0x1034617cu));
    wrf32(in_eax, (float)d3);
    d5 = fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x10346178u)));
    wrf32(in_eax + 4u, (float)d5);
    wrf32(in_eax + 8u, (float)fr(g, (double)(int32_t)(self & 0x1fu) * d4));
    wrf32(in_eax + 0xcu, (float)1.0);
    g->edx = t2;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f21af(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f21af(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
