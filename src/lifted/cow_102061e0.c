/* f_0x102061e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102061e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x102053d0u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x10205470u), self, 1, 7u);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x10205440u), self, 1, 6u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x10205440u), self, 1, 7u);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10205470u), self, 1, 6u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_stdcall(g, COW_IMG(0x102053a0u), 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t12;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, COW_IMG(0x10205440u), self, 1, 4u);
        t18 = g->edx;
        g->edx = t18;
        t19 = cow_thiscall(g, COW_IMG(0x10205440u), self, 1, 5u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t11;
        edx = t12;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t13 = cow_thiscall(g, COW_IMG(0x10205470u), self, 1, 4u);
        t14 = g->edx;
        g->edx = t14;
        t15 = cow_thiscall(g, COW_IMG(0x10205470u), self, 1, 5u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_stdcall(g, COW_IMG(0x10205420u), 0);
    t22 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        edx = t22;
        loc_8 = 0xffffffffu;
        loc_c = 0xffffffffu;
    }
    else
    {
        eax = t21;
        edx = t22;
        loc_8 = 0x2a3u;
        loc_c = 0x265u;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x102054a0u), self, 3, 8u, loc_c, loc_8);
    t23 = g->edx;
    g->eax = arg1;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x102056c0u), self, 1, arg1);
    t25 = g->edx;
    g->edx = t25;
    return t24;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102061e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102061e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
