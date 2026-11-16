/* f_0x10123060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_10123060(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        edx = in_edx;
        goto L_10123095;
    }
    eax = rd32(COW_IMG(0x10663888u));
    if (rd32(eax + 8u) == 0u)
    {
        edx = rd32(eax + 8u);
        eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
        goto L_10123095;
    }
    edx = rd32(eax + 8u);
    if (rd32(COW_IMG(0x1066388cu)) == 0u) goto L_1012308a;
    eax = rd32(COW_IMG(0x1066388cu));
    if (rd32(eax + 8u) != 0u)
    {
        edx = rd32(eax + 8u);
        eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
        goto L_10123095;
    }
    edx = rd32(eax + 8u);
L_1012308a: ;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10122e30u), 1, 3u);
    t2 = g->edx;
    d3 = cow_take_float(g);
    g->edx = t2;
    fpush(g, d3);
    return t1;
L_10123095: ;
    g->edx = edx;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10123060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
