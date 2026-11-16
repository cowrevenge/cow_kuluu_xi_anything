/* f_0x10082b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10082b40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    wr32(self, COW_IMG(0x1032cfe0u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100aa870u), 1, self);
    t2 = g->edx;
    cow_fastcall(g, COW_IMG(0x10082b10u), self, t2, 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
    t5 = g->edx;
    if (t4 != self)
    {
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f74u), 1, 0u);
        t6 = g->edx;
        edx = t6;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t8 = g->edx;
    if (t7 != self)
    {
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, 0u);
        t9 = g->edx;
        edx = t9;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
    t11 = g->edx;
    if (t10 != self)
    {
        eax = t10;
        edx = t11;
    }
    else
    {
        eax = t10;
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t12 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f58u), 1, 0u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->edx = edx;
        g->esp = sp0 - 8u;
        t14 = cow_call_regs(g, COW_IMG(0x10157b10u), eax, ecx, g->edx, 0, 1, self);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10081b60u), self, 0);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x5cu, 1, 0u);
    t19 = g->edx;
    wr32(self + 0x70u, 0u);
    wr32(self + 0xb4u, 0u);
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x100814e0u), self + 0x5cu, 0);
    t21 = g->edx;
    g->esp = sp0;
    g->edx = t21;
    cow_tailcall(g, COW_IMG(0x100747c0u), t20, self, t21);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10082b40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
