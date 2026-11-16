/* f_0x100fc0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100fc0f0(Guest* g)
{
    double d1;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100fc0fc;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    return eax & 0xffffff00u;
L_100fc0fc: ;
    d1 = (double)rdf32(sp0 + 8u);
    wr32(eax + 0x3c360u, arg1);
    wrf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c364u, (float)d1);
    t2 = rd32(COW_IMG(0x104dfd98u));
    d3 = (double)rdf32(sp0 + 0xcu);
    wrf32(t2 + 0x3c368u, (float)d3);
    d4 = (double)rdf32(sp0 + 0x10u);
    wrf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c36cu, (float)d4);
    return (t2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc0f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
