/* f_0x102f2163 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102f2163(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_102f216d;
    return 0u;
L_102f216d: ;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x102f75e8u), 1, 2u);
    if (t1 == 0u)
    {
        edx = t1;
    }
    else
    {
        edx = t1;
        edi = edx;
        eax = 0u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    g->edx = edx;
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f2163(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f2163(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
