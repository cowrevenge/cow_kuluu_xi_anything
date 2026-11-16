/* f_0x1026a070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026a070(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = arg1;
        edi = 0u;
L_1026a07e: ;
        if (rd32(eax + 4u) != 0u)
        {
            eax = rd32(eax + 4u);
            edi = edi + 1u;
            goto L_1026a07e;
        }
        edi = edi + 1u;
        if (rd32(arg2) != 0u)
        {
            edx = rd32(arg2);
            t1 = rd32(self + 4u);
            wr32(edx, t1);
        }
        if (rd32(self + 4u) != 0u)
        {
            edx = rd32(self + 4u);
            wr32(edx + 4u, rd32(arg2));
        }
        if (rd32(arg2 + 4u) == 0u)
        {
            t2 = rd32(self + 4u);
            wr32(arg2 + 4u, t2);
        }
        t3 = rd32(arg1);
        wr32(self + 4u, t3);
        if (t3 == 0u)
        {
            edx = t3;
            wr32(self, edx);
        }
        wr32(arg2, arg1);
        if (rd32(self + 4u) != 0u)
        {
            edx = rd32(self + 4u);
            wr32(edx + 4u, 0u);
        }
        wr32(arg1, 0u);
        t4 = rd32(self + 8u) - edi;
        wr32(self + 8u, t4);
        t5 = edi + rd32(arg2 + 8u);
        wr32(arg2 + 8u, t5);
        edx = t4;
    }
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026a070(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
