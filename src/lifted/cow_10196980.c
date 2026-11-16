/* f_0x10196980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10196980(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x10336a38u));
    g->ecx = t1;
    g->edx = t2;
    t3 = cow_cdecl(g, COW_IMG(0x101addc0u), 2, 0x646e6977u, 0x183u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(self + 0x14u, t3);
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x101addc0u), 2, 0x646e6977u, 0x19cu);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(self + 0x18u, t6);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x101addc0u), 2, 0x646e6977u, 0x180u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(self + 0x1cu, t9);
    if (rd32(self + 0x14u) == 0u)
    {
        ecx = t10;
        edx = t11;
        g->esp = sp0 - 4u;
        t12 = cow_stdcall(g, COW_IMG(0x10196be0u), 0);
        wr32(self + 0x14u, t12);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10196980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
