/* f_0x1020d250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020d250(Guest* g)
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

    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0u);
        t2 = g->edx;
        g->ecx = rd32(COW_IMG(0x1057847cu));
        g->edx = t2;
        t3 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10150cc0u), 2, t1, 2u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 != 0u)
    {
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = t6;
        edx = t8;
        g->edx = edx;
        t9 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t9, 2, 5u, 8u);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 1u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        ecx = t13;
        edx = t14;
    }
    else
    {
        eax = t12;
        edx = t14;
        g->edx = edx;
        t15 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t15, 2, 5u, 9u);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 2u);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = t18;
        edx = t20;
        g->edx = edx;
        t21 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t21, 2, 5u, 0xfu);
        t22 = g->ecx;
        t23 = g->edx;
        ecx = t22;
        edx = t23;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_stdcall(g, COW_IMG(0x100fc9a0u), 0);
    t25 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        eax = t24;
        edx = t25;
    }
    else
    {
        eax = t24;
        edx = t25;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xau);
        t27 = g->edx;
        eax = t26;
        edx = t27;
    }
    wr32(COW_IMG(0x106644d8u), 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020d250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020d250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
