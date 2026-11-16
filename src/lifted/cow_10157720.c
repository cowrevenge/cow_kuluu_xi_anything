/* f_0x10157720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10157720(Guest* g)
{
    double d2;
    double d3;
    double d5;
    double d6;
    uint32_t t1;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u));
    d2 = fr(g, fr(g, (double)(int32_t)arg1 - fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10329a08u)))) / fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10329a08u))));
    d3 = fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x8cu, (float)d2);
    t4 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218bau));
    wr8(self + 0x55u, 1u);
    d5 = fr(g, fr(g, (double)(int32_t)arg2 - fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x10329a08u)))) / fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x10329a08u))));
    d6 = fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x90u, (float)d5);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10157720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
