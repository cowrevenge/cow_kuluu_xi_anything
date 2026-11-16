/* f_0x101880c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101880c0(Guest* g)
{
    double d13;
    double d25;
    double d30;
    double d4;
    double d8;
    uint32_t edi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 4u);
    wr32(self + 0x18u, t1);
    if (t2 != 0u)
    {
        edi = t1;
    }
    else
    {
        wr32(self + 0x18u, COW_IMG(0x1065ca58u));
        edi = COW_IMG(0x1065ca58u);
    }
    wr32(self + 0x18u, edi);
    wr32(self + 0x1cu, edi + 0x4cu);
    t3 = rd8(edi + 0x3au);
    wr32(sp0 + 4u, t3);
    g->ecx = t3;
    d4 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d4);
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), edi + 0x4cu, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = rd8(edi + 0x39u);
    wr32(sp0 + 4u, t7);
    g->ecx = t6;
    g->edx = t7;
    d8 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d8);
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = rd8(edi + 0x38u);
    wr32(sp0 + 4u, t12);
    g->ecx = t10;
    g->edx = t11;
    d13 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d13);
    g->esp = sp0 - 0x10u;
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x10014e00u), 3, t14, t9, t5);
    t18 = rd32(rd32(self + 0x18u) + 0x3cu);
    g->edx = t18;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10014e80u), 1, t18);
    t19 = g->edx;
    t20 = rd32(rd32(self + 0x18u) + 0x40u);
    g->edx = t19;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10014e60u), 1, t20);
    t21 = g->edx;
    g->edx = t21;
    g->esp = sp0 - 8u;
    t22 = cow_thiscall(g, COW_IMG(0x10186ff0u), self, 0);
    t23 = g->ecx;
    t24 = g->edx;
    d25 = cow_take_float(g);
    g->edx = t24;
    cow_cdecl(g, COW_IMG(0x10014eb0u), 1, cow_f2bits((double)(float)d25));
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10186fe0u), self, 0);
    t28 = g->ecx;
    t29 = g->edx;
    d30 = cow_take_float(g);
    t31 = cow_cdecl(g, COW_IMG(0x10014ed0u), 1, cow_f2bits((double)(float)d30));
    t32 = rd32(self + 0x18u);
    t33 = cow_thiscall(g, COW_IMG(0x10188190u), self, 1, t32);
    return t33;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101880c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101880c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
