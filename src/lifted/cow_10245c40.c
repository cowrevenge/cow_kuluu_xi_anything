/* f_0x10245c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10245c40(Guest* g)
{
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 8u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
        edi = rd32(COW_IMG(0x103290f8u));
L_10245c53: ;
        t1 = rd32(COW_IMG(0x106690b0u));
        g->esp = sp0 - 8u;
        t2 = cow_fastcall(g, COW_IMG(0x1024c040u), t1, edx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        g->edx = t4;
        cow_thiscall(g, edi, t3, 1, 0x10u);
        t5 = g->edx;
        if (rd32(arg1 + 8u) != 0u)
        {
            edx = t5;
            goto L_10245c53;
        }
        edx = t5;
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10245c40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
