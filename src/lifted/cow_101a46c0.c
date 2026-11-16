/* f_0x101a46c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101a46c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x10333360u));
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self + 0x14u, COW_IMG(0x10337368u));
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t1, t2, 1, 1, 8u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
        eax = 0u;
    }
    else
    {
        eax = t3;
        edx = t4;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, COW_IMG(0x101b9650u), eax, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    wr32(self + 0x18u, eax);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101b9690u), eax, 0);
    wr32(self + 0x1cu, COW_IMG(0x10337364u));
    wr32(self + 0x20u, arg1);
    wr32(self, COW_IMG(0x103373c8u));
    wr32(self + 0x14u, COW_IMG(0x103373c4u));
    wr32(self + 0x1cu, COW_IMG(0x103373c0u));
    wr32(self + 0x24u, arg2);
    wr8(self + 0x48u, 0u);
    wr8(self + 0x28u, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a46c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a46c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
