/* f_0x100ef6f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ef6f0(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x100f10f0u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
        t3 = rd32(arg1) + 1u;
        wr32(arg1, t3);
        g->ecx = t3;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x100f1280u), 3, 3u, COW_IMG(0x100f1870u), COW_IMG(0x100f1900u));
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x100f1340u), 4, t4, 0xffffffffu, 0u, 0u);
        t7 = g->edx;
        edx = t7;
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef6f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef6f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
