/* f_0x10258030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10258030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = arg1;
    t1 = cow_cdecl(g, COW_IMG(0x10258000u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edx = t3;
        goto L_1025804f;
    }
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10258010u), 1, edx);
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        goto L_1025804f;
    }
    eax = t4;
    edx = t5;
    g->edx = edx;
    return eax;
L_1025804f: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10258030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
