/* f_0x10072ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10072ed0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10072fd0u), self, 2, sp0 + 4u, arg1);
    t2 = g->edx;
    t3 = rd32(t1);
    wr32(self + 0x40008u, t3);
    if (t3 == 0u)
    {
        eax = t3;
        edx = t2;
    }
    else
    {
        eax = t3;
        g->edx = eax;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        t4 = g->edx;
        g->eax = rd32(self + 0x40008u);
        g->edx = t4;
        t5 = rd32(self + 0x40008u);
        t6 = cow_thiscall(g, COW_IMG(0x10071e50u), rd32(t5), 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    wr32(sp0 - 8u, 0x1bu);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x100731b0u), self, 2, sp0 + 4u, 0x1bu);
    t9 = g->edx;
    t10 = rd32(t8);
    wr32(COW_IMG(0x1047d118u), t10);
    if (t10 == 0u)
    {
        edx = t9;
    }
    else
    {
        eax = t10;
        edx = t9;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        wr32(sp0 - 8u, 0x766d6164u);
        wr32(sp0 - 0xcu, 7u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->eax = sp0 + 4u;
        t11 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(COW_IMG(0x1047d118u))), 3, sp0 + 4u, 7u, 0x766d6164u);
        wr32(sp0 - 8u, 0x7673696du);
        t12 = rd32(t11);
        t13 = rd32(COW_IMG(0x1047d118u));
        wr32(COW_IMG(0x1047d108u), t12);
        wr32(sp0 - 0xcu, 7u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->eax = t12;
        t14 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(t13), 3, sp0 + 4u, 7u, 0x7673696du);
        wr32(sp0 - 8u, 0x76727563u);
        wr32(COW_IMG(0x1047d120u), rd32(t14));
        wr32(sp0 - 0xcu, 7u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->eax = rd32(COW_IMG(0x1047d118u));
        g->edx = sp0 + 4u;
        t15 = rd32(COW_IMG(0x1047d118u));
        t16 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(t15), 3, sp0 + 4u, 7u, 0x76727563u);
        t17 = g->edx;
        wr32(COW_IMG(0x1047d11cu), rd32(t16));
        edx = t17;
    }
    wr32(sp0 - 8u, 0xce07u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x100731b0u), self, 2, sp0 + 4u, 0xce07u);
    t19 = g->edx;
    t20 = rd32(t18);
    t21 = rd32(sp0 - 4u);
    wr32(COW_IMG(0x1047d104u), t20);
    if (t20 == 0u)
    {
        eax = t20;
        esi = t21;
    }
    else
    {
        eax = t20;
        edx = t19;
        esi = t21;
        g->esp = sp0;
        t22 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        eax = t22;
    }
    g->esi = esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10072ed0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
