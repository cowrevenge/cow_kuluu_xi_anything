/* f_0x101fa900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fa900(Guest* g)
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
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(self + 0x104u) != 7u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10087070u), in_eax, g->ecx, g->edx, 1, 1, 0u);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            edx = t3;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x101fa420u), eax, self, g->edx, 0, 1, 0u);
            t4 = g->edx;
            if (rd32(self + 8u) == 0u)
            {
                edx = t4;
            }
            else
            {
                eax = rd32(self + 8u);
                edx = t4;
                wr32(eax + 0x7cu, 0u);
            }
            t5 = rd32(self);
            wr8(self + 0x10du, 0u);
            g->eax = t5;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t6 = cow_thiscall(g, rd32(t5 + 0x54u), self, 0);
            t7 = g->ecx;
            t8 = g->edx;
            eax = t6;
            ecx = t7;
            edx = t8;
        }
    }
    if (rd8(self + 0x10du) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10du);
        goto L_101fa95e;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x10du);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x101fa420u), eax, self, g->edx, 0, 1, 0u);
    t10 = g->edx;
    wr8(self + 0x10du, 0u);
    g->edx = t10;
    return t9;
L_101fa95e: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x8bu, 5u, 0xffffffffu);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        edx = t12;
    }
    else
    {
        eax = t11;
        g->edx = rd32(self);
        t13 = rd32(self);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t13 + 0x18u), self, 2, 5u, 0u);
        t14 = g->edx;
        edx = t14;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x101ef0a0u), arg1, self, g->edx, 0, 1, arg1);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101f9420u), self, 0);
    t18 = g->edx;
    g->edx = t18;
    return t17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fa900(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
