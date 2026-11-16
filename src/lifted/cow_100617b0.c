/* f_0x100617b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100617b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x100610c0u), self, arg1, 3, arg1, arg2, arg4);
    t1 = g->edx;
    wr32(self, COW_IMG(0x1032bdc0u));
    wr32(self + 0x34u, COW_IMG(0x1032bda4u));
    wr32(self + 0x78u, arg3);
    g->eax = arg3;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10061720u), self, 0);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, COW_IMG(0x10061720u), self, 0);
        t5 = rd32(self + 0x78u);
        g->edx = rd32(t4);
        t6 = rd32(t4);
        t7 = cow_thiscall(g, rd32(t6 + 0x64u), t4, 1, t5);
        t8 = g->edx;
        t9 = cow_thiscall(g, COW_IMG(0x10061720u), self, 0);
        g->edx = rd32(t9);
        t10 = rd32(t9);
        t11 = cow_thiscall(g, rd32(t10 + 0x7cu), t9, 1, arg5);
        t12 = g->edx;
        t13 = cow_thiscall(g, COW_IMG(0x10061720u), self, 0);
        cow_thiscall(g, rd32(rd32(t13) + 0x4cu), t13, 1, 1u);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100617b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100617b0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
