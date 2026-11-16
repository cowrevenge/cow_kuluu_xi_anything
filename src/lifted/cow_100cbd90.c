/* f_0x100cbd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100cbd90(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t edx;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100cbdd2;
    }
    if (rd16(arg1 + 0xb2u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100cbdd2;
    }
    d1 = (double)rdf32(arg1 + 0x8cu);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_100cbdbc;
    }
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x100cbde0u), eax, arg1, in_edx);
L_100cbdbc: ;
    t2 = rd8(arg1 + 0xb2u);
    wr8(arg1 + 0xb0u, 1u);
    wr8(arg1 + 0xb2u, (uint8_t)(t2 | 1u));
    eax = (eax & 0xffffff00u) | 1u;
    edx = (in_edx & 0xffffff00u) | t2 | 1u;
L_100cbdd2: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cbd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cbd90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
