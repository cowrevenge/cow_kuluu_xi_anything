/* f_0x1001d8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1001d8e0(Guest* g)
{
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x2cu);
    wr32(arg1 + 8u, self);
    t2 = (t1 & 0xffff00ffu) | (t1 >> 8u & 0xfeu) << 8u;
    wr32(arg1 + 0x2cu, t2);
    if (rd32(rd32(rd32(self + 0x28u)) + 0x20u) != 0x65666665u)
    {
        edx = rd32(self + 0x28u);
    }
    else
    {
        ebx = rd32(rd32(self + 0x28u));
        esi = t2;
        if (rd32(rd32(rd32(ebx + 0x28u)) + 0x20u) != 0x74737973u)
        {
            edx = rd32(rd32(ebx + 0x28u));
        }
        else
        {
            edx = rd32(rd32(ebx + 0x28u));
            wr32(arg1 + 0x2cu, esi | 0x100u);
        }
    }
    t3 = rd8(self + 0x30u) >> 4u & 7u;
    t4 = (self & 0xffffff00u) | rd8(self + 0x30u) >> 7u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1001d940u), g->eax, g->ecx, t3, 1, 4, arg1, self + 0x31u, t4, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001d8e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
