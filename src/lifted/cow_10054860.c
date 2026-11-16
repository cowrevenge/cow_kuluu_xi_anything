/* f_0x10054860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10054860(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    ecx = self + 0x30u;
    edx = in_edx;
L_10054863: ;
    if (!((double)rdf32(ecx) < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        goto L_10054890;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    if (ecx + 8u == 0u)
    {
        edx = ecx + 8u;
        goto L_10054890;
    }
    edx = ecx + 8u;
    if (!((double)rdf32(ecx) < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        ecx = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        ecx = edx;
    }
    goto L_10054863;
L_10054890: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10054860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10054860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
