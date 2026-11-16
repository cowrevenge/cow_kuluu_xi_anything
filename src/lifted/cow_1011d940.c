/* f_0x1011d940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011d940(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 1u)
    {
        ecx = t2;
        edx = t3;
        goto L_1011d95b;
    }
    edx = t3;
    g->edx = edx;
    return (uint32_t)(int8_t)rd8(arg1) - 0x20u;
L_1011d95b: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x1011c940u), 1, arg1);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
