/* f_0x100750b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100750b0(Guest* g)
{
    uint32_t eax;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100751b0u), self, 1, arg1);
    t1 = g->edx;
    if (rd32(self + 0xd4cu) != 0u)
    {
        eax = rd32(self + 0xd4cu);
        goto L_100750d7;
    }
    edx = t1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10074f80u), self, 2, arg1, 9u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_100750d7: ;
    t4 = rd32(eax + 0xcu);
    wr32(arg1 + 0xcu, t4);
    if (rd32(rd32(self + 0xd4cu) + 0xcu) != 0u)
    {
        eax = rd32(rd32(self + 0xd4cu) + 0xcu);
        wr32(eax + 8u, arg1);
    }
    t5 = rd32(self + 0xd4cu);
    wr32(arg1 + 8u, t5);
    wr32(rd32(self + 0xd4cu) + 0xcu, arg1);
    wr32(self + 0xd5cu, arg1);
    wr32(arg1 + 4u, COW_IMG(0x10075000u));
    wr8(arg1 + 0x20u, 1u);
    g->edx = t5;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100750b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100750b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
