/* f_0x100dd9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100dd9d0(Guest* g)
{
    uint32_t eax;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    eax = in_eax;
    x0 = (double)rdf32(sp0 + 4u);
L_100dd9d4: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10331818u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10331818u)), 1u) & 0x4100u;
        goto L_100dd9eb;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10331818u)), 1u) & 0x4100u;
    x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10331818u)));
    goto L_100dd9d4;
L_100dd9eb: ;
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100dda00;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10331818u)));
    goto L_100dd9d4;
L_100dda00: ;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dd9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100dd9d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
