/* f_0x100db9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100db9e0(Guest* g)
{
    double d1;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100db9ec;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    return eax;
L_100db9ec: ;
    d1 = (double)rdf32(sp0 + 0xcu);
    wr32(eax + 0x3c338u, arg1);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x3c33cu, arg2);
    wrf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c340u, (float)d1);
    t2 = rd32(COW_IMG(0x104dfd98u));
    d3 = (double)rdf32(sp0 + 0x10u);
    wrf32(t2 + 0x3c344u, (float)d3);
    d4 = (double)rdf32(sp0 + 0x14u);
    wrf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c348u, (float)d4);
    d5 = (double)rdf32(sp0 + 0x18u);
    wrf32(rd32(COW_IMG(0x104dfd98u)) + 0x3c34cu, (float)d5);
    g->edx = t2;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100db9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100db9e0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
