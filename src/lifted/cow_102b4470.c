/* f_0x102b4470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102b4470(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    d1 = (double)rdf32(sp0 + 4u);
    if (!(d1 < (double)rdf32(COW_IMG(0x10329a08u))))
    {
        ecx = 0u;
        x0 = d1;
        goto L_102b4495;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
    ecx = 0u;
    x0 = d1;
L_102b4483: ;
    d2 = fr(g, x0 + x0);
    if (d2 < (double)rdf32(COW_IMG(0x10329a08u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
        ecx = ecx + 1u;
        x0 = d2;
        goto L_102b4483;
    }
    ecx = ecx + 1u;
    x0 = d2;
L_102b4495: ;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b4470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b4470(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
