/* f_0x10057d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10057d60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t loc_4;
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

    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x100573b0u), t1, 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1003b640u), t1 + 0x34u, 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t7 = g->edx;
    wr32(sp0 + 4u, t6);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
    t9 = g->edx;
    t10 = rd32(sp0 + 4u);
    g->eax = t10;
    g->edx = t9;
    t11 = cow_thiscall(g, COW_IMG(0x1003b7b0u), t1 + 0x34u, 1, t10);
    t12 = g->edx;
    t13 = cow_thiscall(g, COW_IMG(0x1003b830u), t1 + 0x34u, 1, t8);
    g->edx = rd32(t1 + 0x80u);
    t14 = rd32(t1 + 0x80u);
    t15 = cow_call_regs(g, COW_IMG(0x10071e90u), t13, rd32(t14), g->edx, 1, 0);
    t16 = g->edx;
    wr32(t1 + 0x18u, 0u);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t18 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        edx = t18;
        loc_4 = t8;
    }
    else
    {
        eax = t17;
        edx = t18;
        loc_4 = t8;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t19 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        g->edx = rd32(t19);
        t20 = rd32(t19);
        t21 = cow_thiscall(g, rd32(t20 + 0x168u), t19, 0);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        edx = t24;
    }
    else
    {
        eax = t23;
        edx = t24;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t25 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
        g->edx = rd32(t25);
        t26 = rd32(t25);
        t27 = cow_thiscall(g, rd32(t26 + 0x168u), t25, 0);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    if (rd32(self + 0x90u) != 0u)
    {
        ebp = rd32(self + 0x90u);
        wr16(ebp, (uint16_t)(rd16(ebp) + 1u));
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10057d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10057d60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
