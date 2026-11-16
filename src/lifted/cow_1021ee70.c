/* f_0x1021ee70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1021ee70(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10666e84u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10666e84u));
        d1 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u)));
        wr32(eax + 0x34u, arg1);
        wrf32(eax + 0x38u, (float)d1);
        d2 = (double)rdf32(sp0 + 8u);
        wrf32(rd32(COW_IMG(0x10666e84u)) + 0x30u, (float)d2);
        wr8(rd32(COW_IMG(0x10666e84u)) + 0x2fu, (uint8_t)arg3);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ee70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021ee70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
