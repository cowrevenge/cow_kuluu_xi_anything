/* f_0x102e60ef - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102e60ef(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    double x0;
    const uint32_t self = g->ecx;

    if (rd32(self + 4u) == 0x32545844u) goto L_102e6111;
    eax = rd32(self + 4u);
    if (eax == 0x33545844u) goto L_102e6111;
    x0 = (double)rdf32(COW_IMG(0x10329a20u));
L_102e6117: ;
    wrf32(self + 0x106cu, (float)x0);
    d1 = fr(g, 1.0 / (double)rdf32(self + 0x106cu));
    wrf32(self + 0x1070u, (float)d1);
    d2 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x1cu) * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    d3 = fr(g, (double)(int32_t)(uint32_t)fist32(g, d2) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(self + 0x1cu, (float)d3);
    d4 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x20u) * (double)rdf32(COW_IMG(0x10346160u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    d5 = fr(g, (double)(int32_t)(uint32_t)fist32(g, d4) * (double)rdf32(COW_IMG(0x10346178u)));
    wrf32(self + 0x20u, (float)d5);
    d6 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x24u) * (double)rdf32(COW_IMG(0x10346164u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    d7 = fr(g, (double)(int32_t)(uint32_t)fist32(g, d6) * (double)rdf32(COW_IMG(0x1034617cu)));
    wrf32(self + 0x24u, (float)d7);
    d8 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x106cu) * (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u)));
    d9 = fr(g, (double)(int32_t)(uint32_t)fist32(g, d8) * (double)rdf32(self + 0x1070u));
    wrf32(self + 0x28u, (float)d9);
    return self;
L_102e6111: ;
    x0 = (double)rdf32(COW_IMG(0x1033678cu));
    goto L_102e6117;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e60ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e60ef(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
