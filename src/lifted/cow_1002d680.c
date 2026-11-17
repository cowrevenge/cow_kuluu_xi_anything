/* f_0x1002d680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1002d680(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10074740u), in_eax, self, in_edx, 1, 0);
    t1 = g->edx;
    wr32(self, COW_IMG(0x1032a7b0u));
    wr32(self + 0x38u, 0u);
    wr32(self + 0x34u, arg1);
    if (arg1 == 0u)
    {
        edx = t1;
        ecx = 0u;
    }
    else
    {
        edx = t1;
        ecx = rd32(arg1);
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10071f50u), ecx, 0);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x4cu, 0u);
    wr32(self + 0x50u, 0u);
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x12cu), self + 0x64u, 5, t2, COW_IMG(0x10351628u), 0u, self + 0x64u, 0u);
    wr8(self + 0x68u, 0u);
    wr8(self + 0x69u, 0u);
    wr32(self + 0x6au, 0u);
    wr32(self + 0x6eu, 0u);
    wr32(self + 0x72u, 0u);
    wr32(self + 0x76u, 0u);
    wr32(self + 0x7au, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002d680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002d680(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
