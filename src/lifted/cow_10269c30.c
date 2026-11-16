/* f_0x10269c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10269c30(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10269c3f;
    return arg1;
L_10269c3f: ;
    if (rd32(arg1) != 0u)
    {
        ecx = rd32(arg1);
        t2 = rd32(arg1 + 4u);
        wr32(ecx + 4u, t2);
    }
    else
    {
        t1 = rd32(arg1 + 4u);
        wr32(self, t1);
    }
    if (rd32(arg1 + 4u) != 0u)
    {
        ecx = rd32(arg1 + 4u);
        wr32(ecx, rd32(arg1));
    }
    else
    {
        wr32(self + 4u, rd32(arg1));
    }
    if ((int32_t)rd32(self + 0x10u) >= (int32_t)rd32(self + 0xcu))
    {
        ecx = rd32(self + 0x10u);
        edx = rd32(self + 0xcu);
        edi = rd32(arg1 + 8u);
        goto L_10269c90;
    }
    edi = rd32(arg1 + 8u);
    t3 = rd32(self + 0x14u);
    wr32(arg1 + 4u, t3);
    wr32(self + 0x14u, arg1);
    t4 = rd32(self + 0x10u) + 1u;
    wr32(self + 0x10u, t4);
    t5 = rd32(self + 8u) - 1u;
    wr32(self + 8u, t5);
    return edi;
L_10269c90: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg1);
    t6 = rd32(self + 8u) - 1u;
    wr32(self + 8u, t6);
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
