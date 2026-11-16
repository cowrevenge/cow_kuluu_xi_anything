/* f_0x10005720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10005720(Guest* g)
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

    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10008e70u), in_eax, self, in_edx, 1, 0);
    t1 = g->edx;
    if (rd32(self + 0x90u) == 0u)
    {
        edx = t1;
    }
    else
    {
        eax = rd32(self + 0x90u);
        edx = t1;
        t2 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t2 + 0x20u), t2, 1, eax);
        t3 = g->ecx;
        if (rd32(COW_IMG(0x10455c28u)) == 0u)
        {
            ecx = t3;
        }
        else
        {
            eax = rd32(COW_IMG(0x10455c28u));
            ecx = t3;
            g->edx = rd32(eax);
            t4 = rd32(eax);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(t4 + 0x2cu), ecx, 1, eax);
            t5 = g->edx;
            t6 = rd32(rd32(COW_IMG(0x10455c28u)));
            cow_thiscall(g, rd32(t6 + 8u), t6, 1, rd32(COW_IMG(0x10455c28u)));
            t7 = g->ecx;
            wr32(COW_IMG(0x10455c28u), 0u);
            ecx = t7;
        }
        t8 = rd32(self + 0x90u);
        g->edx = rd32(t8);
        t9 = rd32(t8);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t9 + 8u), ecx, 1, t8);
        t10 = g->edx;
        wr32(self + 0x90u, 0u);
        edx = t10;
    }
    if (rd32(self + 0x8cu) != 0u)
    {
        eax = rd32(self + 0x8cu);
        t11 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t11 + 0x20u), t11, 1, eax);
        t12 = g->ecx;
        t13 = rd32(self + 0x8cu);
        g->edx = rd32(t13);
        t14 = rd32(t13);
        cow_thiscall(g, rd32(t14 + 8u), t12, 1, t13);
        t15 = g->edx;
        wr32(self + 0x8cu, 0u);
        edx = t15;
    }
    if (rd32(self + 0x88u) != 0u)
    {
        eax = rd32(self + 0x88u);
        t16 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t16 + 0x20u), t16, 1, eax);
        t17 = g->ecx;
        t18 = rd32(self + 0x88u);
        g->edx = rd32(t18);
        t19 = rd32(t18);
        cow_thiscall(g, rd32(t19 + 8u), t17, 1, t18);
        t20 = g->edx;
        wr32(self + 0x88u, 0u);
        edx = t20;
    }
    if (rd32(self + 0x84u) != 0u)
    {
        eax = rd32(self + 0x84u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        wr32(self + 0x84u, 0u);
    }
    wr32(COW_IMG(0x10455c20u), 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10005720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10005720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
