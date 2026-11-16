/* f_0x1001b590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001b590(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    double x0;
    const uint32_t self = g->ecx;

    if (rd8(self + 8u) == 0u)
    {
        eax = rd8(self + 8u);
        goto L_1001b59e;
    }
    eax = rd8(self + 8u);
    if (eax != 1u) goto L_1001b5ce;
    eax = eax - 1u;
L_1001b59e: ;
    d1 = (double)rdf32(self + 0x20u);
    d2 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x14u, (float)d1);
    wrf32(self + 0xcu, (float)d1);
    if (!(d1 <= d2))
    {
        x0 = d1;
        goto L_1001b5be;
    }
    x0 = d1;
    wr32(self + 0x18u, 0u);
    wr8(self + 8u, 3u);
    return;
L_1001b5be: ;
    d3 = fr(g, (double)rdf32(self + 0x10u) / x0);
    wr8(self + 8u, 3u);
    wrf32(self + 0x18u, (float)-d3);
L_1001b5ce: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b590(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
