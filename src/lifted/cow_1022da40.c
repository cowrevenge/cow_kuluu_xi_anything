/* f_0x1022da40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022da40(Guest* g)
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
        g->edx = edx;
        t4 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t4, 2, 5u, 2u);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        ecx = t8;
        edx = t9;
    }
    else
    {
        eax = t7;
        edx = t9;
        g->edx = edx;
        t10 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t10, 2, 5u, 3u);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, 3u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        ecx = t14;
        edx = t15;
    }
    else
    {
        eax = t13;
        edx = t15;
        g->edx = edx;
        t16 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t16, 2, 5u, 4u);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, 4u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        ecx = t20;
        edx = t21;
    }
    else
    {
        eax = t19;
        edx = t21;
        g->edx = edx;
        t22 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t22, 2, 5u, 5u);
        t23 = g->ecx;
        t24 = g->edx;
        ecx = t23;
        edx = t24;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, 0xbu);
    t26 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        eax = t25;
        edx = t26;
    }
    else
    {
        eax = t25;
        edx = t26;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t27 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 7u);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022da40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022da40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
