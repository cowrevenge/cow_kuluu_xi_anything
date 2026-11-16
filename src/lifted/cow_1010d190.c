/* f_0x1010d190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010d190(Guest* g)
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

    wr32(self + 0xcu, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x10u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x1cu, self + 0xcu);
    wr32(self + 0x14u, self + 0x18u);
    wr32(self + 4u, COW_IMG(0x10332e88u));
    wr8(self + 8u, 1u);
    wr16(self + 0xau, 0u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x30u, 0u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x34u, self + 0x38u);
    wr32(self + 0x24u, COW_IMG(0x10332e8cu));
    wr8(self + 0x28u, 1u);
    wr32(self + 0x3cu, self + 0x2cu);
    wr16(self + 0x2au, 0u);
    wr16(self + 0x44u, 0u);
    wr16(self + 0x48u, 0u);
    wr16(self + 0x46u, 0u);
    wr32(self, rd32(arg1));
    g->edx = (in_edx & 0xffffff00u) | 1u;
    t1 = rd32(arg1);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1010d220u), arg1, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        t4 = rd32(eax + 4u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1010d3e0u), self, 2, t4, 0u);
        t5 = g->edx;
        edx = t5;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010d190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010d190(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
