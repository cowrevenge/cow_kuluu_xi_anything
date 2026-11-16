/* f_0x1011b910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1011b910(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 4u);
    wr32(self, t1);
    t2 = rd32(arg1 + 8u);
    wr32(self + 4u, t2);
    t3 = rd32(arg1 + 0xcu);
    wr32(self + 8u, t3);
    t4 = rd32(arg1 + 0x10u);
    wr32(self + 0xcu, t4);
    g->ecx = self;
    g->edx = t3;
    t5 = cow_cdecl(g, COW_IMG(0x10312980u), 5, self, COW_IMG(0x1036c1e4u), 0xeu, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        g->esp = sp0 - 8u;
        t8 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, eax);
        wr32(self, rd32(t8));
        t9 = rd32(t8 + 4u);
        wr32(self + 4u, t9);
        t10 = rd32(t8 + 8u);
        wr32(self + 8u, t10);
        t11 = rd32(t8 + 0xcu);
        wr32(self + 0xcu, t11);
        ecx = self;
        edx = t10;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_cdecl(g, COW_IMG(0x10312980u), 5, self, COW_IMG(0x1036c1d4u), 0xeu, in_edi, in_esi);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        ecx = t13;
        edx = t14;
    }
    else
    {
        ecx = t13;
        edx = t14;
        g->esp = sp0 - 8u;
        t15 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 1u);
        wr32(self, rd32(t15));
        t16 = rd32(t15 + 4u);
        wr32(self + 4u, t16);
        t17 = rd32(t15 + 8u);
        wr32(self + 8u, t17);
        t18 = rd32(t15 + 0xcu);
        wr32(self + 0xcu, t18);
        ecx = self;
        edx = t17;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t19 = cow_cdecl(g, COW_IMG(0x10312980u), 5, self, COW_IMG(0x1036c1c4u), 0xfu, in_edi, in_esi);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 != 0u)
    {
        ecx = t20;
        edx = t21;
    }
    else
    {
        ecx = t20;
        edx = t21;
        g->esp = sp0 - 8u;
        t22 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 5u);
        wr32(self, rd32(t22));
        t23 = rd32(t22 + 4u);
        wr32(self + 4u, t23);
        t24 = rd32(t22 + 8u);
        wr32(self + 8u, t24);
        t25 = rd32(t22 + 0xcu);
        wr32(self + 0xcu, t25);
        ecx = self;
        edx = t24;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t26 = cow_cdecl(g, COW_IMG(0x10312980u), 5, self, COW_IMG(0x1036c1b0u), 0x10u, in_edi, in_esi);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    else
    {
        wr32(self, rd32(COW_IMG(0x1036c19cu)));
        wr32(self + 4u, rd32(COW_IMG(0x1036c1a0u)));
        t29 = rd32(COW_IMG(0x1036c1a4u));
        wr32(self + 8u, t29);
        t30 = rd32(COW_IMG(0x1036c1a8u));
        wr32(self + 0xcu, t30);
        eax = t30;
        ecx = self;
        edx = t29;
    }
    wr8(self + 0x10u, 0u);
    wr16(self + 0x20u, rd16(arg1 + 2u));
    wr16(self + 0x24u, (uint16_t)arg2);
    wr16(self + 0x22u, (uint16_t)arg3);
    return (eax & 0xffff0000u) | (uint16_t)arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011b910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011b910(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
