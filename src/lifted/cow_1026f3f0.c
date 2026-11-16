/* f_0x1026f3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1026f3f0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        eax = 0u;
        ecx = rd32(COW_IMG(0x1099aedcu));
        edx = 0u;
        esi = 0u;
L_1026f408: ;
        if ((rd8(ecx + edx) & 0x20u) != 0u)
        {
            d1 = fr(g, (double)rdf32(ecx + edx + 0xa0u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
            wrf32(ecx + edx + 0xa0u, (float)d1);
            eax = eax + 1u;
            ecx = rd32(COW_IMG(0x1099aedcu));
        }
        if ((int32_t)(esi + 1u) < (int32_t)rd32(COW_IMG(0x1099aed8u)))
        {
            edx = edx + 0xc0u;
            esi = esi + 1u;
            goto L_1026f408;
        }
        edx = edx + 0xc0u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026f3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026f3f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
