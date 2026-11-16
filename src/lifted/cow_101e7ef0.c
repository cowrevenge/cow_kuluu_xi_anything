/* f_0x101e7ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e7ef0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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

    wr8(self + 0x15u, rd8(self + 0x15u) & 0xfeu);
    t1 = rd32(COW_IMG(0x104e1d4cu));
    wr8(t1 + 0x88u, 1u);
    wr32(self + 0x84u, 0u);
    wr16(self + 0x74u, 0u);
    wr32(self + 0x8cu, 0u);
    wr16(self + 0x78u, 0u);
    wr32(self + 0x94u, 0u);
    wr16(self + 0x7au, 0u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f34u));
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381e94u));
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f20u));
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f0cu));
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ef8u));
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381e80u));
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ee4u));
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ed0u));
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ebcu));
    t19 = g->edx;
    g->edx = t19;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381e6cu));
    t20 = g->edx;
    if (rd32(self + 0x158u) == 0u)
    {
        edx = t20;
    }
    else
    {
        eax = rd32(self + 0x158u);
        edx = t20;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t22 = g->edx;
        g->edx = t22;
        cow_thiscall(g, COW_IMG(0x10071050u), self + 0x158u, 0);
        t23 = g->edx;
        wr32(self + 0x158u, 0u);
        edx = t23;
    }
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t24 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 2u);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101ee520u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e7ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e7ef0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
