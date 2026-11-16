/* f_0x101d2f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d2f00(Guest* g)
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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

    wr32(self, COW_IMG(0x103384a4u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101d3dc0u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    t3 = cow_fastcall(g, COW_IMG(0x101d30b0u), self, t2, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = rd32(COW_IMG(0x1057876cu));
    cow_thiscall(g, COW_IMG(0x101594d0u), t5, 1, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd32(COW_IMG(0x106631dcu)) == 0u)
    {
        ecx = t6;
        edx = t7;
    }
    else
    {
        eax = rd32(COW_IMG(0x106631dcu));
        edx = t7;
        t8 = rd32(eax + 8u);
        g->eax = t8;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x1015e8a0u), COW_IMG(0x10621838u), 1, t8);
        t10 = g->edx;
        if (rd32(COW_IMG(0x106631dcu)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106631dcu));
            edx = t10;
        }
        else
        {
            eax = t9;
            ecx = rd32(COW_IMG(0x106631dcu));
            g->edx = rd32(ecx);
            t11 = rd32(ecx);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t11), ecx, 1, 1u);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(COW_IMG(0x106631dcu), 0u);
            ecx = t12;
            edx = t13;
        }
    }
    if (rd32(COW_IMG(0x106631e0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106631e0u));
        t14 = rd32(eax + 8u);
        g->eax = t14;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t15 = cow_thiscall(g, COW_IMG(0x1015e8a0u), COW_IMG(0x10621838u), 1, t14);
        t16 = g->edx;
        if (rd32(COW_IMG(0x106631e0u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106631e0u));
            edx = t16;
        }
        else
        {
            eax = t15;
            ecx = rd32(COW_IMG(0x106631e0u));
            g->edx = rd32(ecx);
            t17 = rd32(ecx);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t17), ecx, 1, 1u);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(COW_IMG(0x106631e0u), 0u);
            ecx = t18;
            edx = t19;
        }
    }
    if (rd32(COW_IMG(0x106631e4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106631e4u));
        t20 = rd32(eax + 8u);
        g->eax = t20;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t21 = cow_thiscall(g, COW_IMG(0x1015e8a0u), COW_IMG(0x10621838u), 1, t20);
        t22 = g->edx;
        if (rd32(COW_IMG(0x106631e4u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106631e4u));
            edx = t22;
        }
        else
        {
            eax = t21;
            ecx = rd32(COW_IMG(0x106631e4u));
            g->edx = rd32(ecx);
            t23 = rd32(ecx);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t23), ecx, 1, 1u);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(COW_IMG(0x106631e4u), 0u);
            ecx = t24;
            edx = t25;
        }
    }
    t26 = rd32(self + 0x14u);
    g->eax = t26;
    g->esp = sp0 - 4u;
    t27 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t26);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x101d31b0u), self, 0);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 0u);
    t32 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d2f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d2f00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
