/* f_0x101fa550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fa550(Guest* g)
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
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101f9010u), self, 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x101fad40u), t2, t3, 1, 1u);
    t5 = g->edx;
    wr32(self + 0x84u, 0u);
    wr16(self + 0x74u, 0u);
    wr32(self + 0x8cu, 0u);
    wr16(self + 0x78u, 0u);
    wr32(self + 0x94u, 0u);
    wr16(self + 0x7au, 0u);
    wr32(self + 0x90u, 0u);
    wr16(self + 0x7cu, 0u);
    wr16(self + 0x7eu, 0u);
    wr16(self + 0x80u, 0u);
    wr16(self + 0x82u, 0u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038502cu));
    t7 = g->edx;
    if (rd32(COW_IMG(0x1066389cu)) == 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1066389cu));
        edx = t7;
        g->eax = rd32(ecx);
        g->edx = edx;
        t8 = rd32(ecx);
        g->esp = sp0 - 8u;
        t9 = cow_thiscall(g, rd32(t8 + 0x74u), ecx, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10384ff4u));
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385068u));
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385054u));
    t16 = g->edx;
    g->edx = t16;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385040u));
    t17 = g->edx;
    if (rd32(self + 0x6c4u) == 0u)
    {
        edx = t17;
    }
    else
    {
        eax = rd32(self + 0x6c4u);
        edx = t17;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t18 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t19 = g->edx;
        g->edx = t19;
        cow_thiscall(g, COW_IMG(0x10071050u), self + 0x6c4u, 0);
        t20 = g->edx;
        wr32(self + 0x6c4u, 0u);
        edx = t20;
    }
    if (rd32(self + 0x6c8u) != 0u)
    {
        eax = rd32(self + 0x6c8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t22 = g->edx;
        g->edx = t22;
        cow_thiscall(g, COW_IMG(0x10071050u), self + 0x6c8u, 0);
        t23 = g->edx;
        wr32(self + 0x6c8u, 0u);
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
        g->esp = sp0 - 8u;
        t24 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 4u);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x101ee520u), self, 0);
    t27 = g->edx;
    wr8(COW_IMG(0x106218e5u), 0u);
    g->ebx = in_ebx;
    g->edx = t27;
    return t26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fa550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
