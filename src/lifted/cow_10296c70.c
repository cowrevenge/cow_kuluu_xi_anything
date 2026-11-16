/* f_0x10296c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10296c70(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = arg1 + 8u;
    ecx = 3u;
L_10296c7c: ;
    d1 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(eax - 8u));
    wrf32(eax - 8u, (float)d1);
    d2 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax - 4u));
    wrf32(eax - 4u, (float)d2);
    d3 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax));
    wrf32(eax, (float)d3);
    if (ecx != 1u)
    {
        eax = eax + 0xcu;
        ecx = ecx - 1u;
        goto L_10296c7c;
    }
    eax = eax + 0xcu;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10296c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
