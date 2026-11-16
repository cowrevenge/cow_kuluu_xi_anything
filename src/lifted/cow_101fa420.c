/* f_0x101fa420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101fa420(Guest* g)
{
    double d11;
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 4u);
    }
    else
    {
        t1 = rd32(self + 8u);
        wr16(self + 0x104u, 8u);
        if (t1 == 0u)
        {
            eax = t1;
        }
        else
        {
            eax = t1;
            wr32(eax + 0x7cu, 0u);
        }
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x101f9370u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 0xfcu) == 0xffffffffu)
    {
        ecx = t3;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        if (rd8(self + 0xa44u) != 0u)
        {
            t5 = (uint32_t)(int16_t)rd16(self + 0x102u);
            t6 = (uint32_t)(int16_t)rd16(self + 0x100u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x101f82b0u), self, 2, t6, t5);
            t7 = g->ecx;
            wr8(self + 0xa44u, 0u);
            ecx = t7;
        }
        wr32(self + 0xfcu, 0xffffffffu);
    }
    if (rd32(self + 0x6c4u) != 0u)
    {
        t8 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        t9 = rd32(COW_IMG(0x106218b8u));
        t10 = rd32(COW_IMG(0x106218b4u));
        d11 = fr(g, (double)rdf32(self + 0x58u) * (double)rdf32(COW_IMG(0x10329cd8u)));
        wr32(sp0 + 4u, t8);
        g->ecx = ecx;
        g->edx = t9 - t10;
        d12 = fr(g, d11 / fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ac88u))));
        fpush(g, d12);
        g->esp = sp0 - 4u;
        t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
        t14 = g->ecx;
        t15 = g->edx;
        g->edx = t15;
        t16 = cow_call_regs(g, COW_IMG(0x10193830u), t13, g->ecx, g->edx, 1, 2, 0x8au, t13);
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038502cu));
        t19 = g->edx;
        g->edx = t19;
        t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10384ff4u));
        t21 = g->edx;
        g->edx = t21;
        t22 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385068u));
        t23 = g->edx;
        g->edx = t23;
        t24 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385054u));
        t25 = g->edx;
        t26 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385040u));
        cow_thiscall(g, rd32(rd32(self) + 0x50u), self, 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fa420(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
