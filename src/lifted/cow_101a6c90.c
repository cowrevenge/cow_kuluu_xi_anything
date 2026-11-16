/* f_0x101a6c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a6c90(Guest* g)
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
    uint32_t t2;
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
    cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(self + 0x18u);
    wr32(self + 0x20u, 0u);
    if (t3 != 0u)
    {
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 8u);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
            eax = 0u;
        }
        else
        {
            eax = t4;
            edx = t5;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t6 = cow_thiscall(g, COW_IMG(0x101b9650u), eax, 0);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
        wr32(self + 0x18u, eax);
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x101b9690u), rd32(self + 0x18u), 0);
    t9 = g->edx;
    t10 = (t8 & 0xffffff00u) | rd8(self + 0x24u);
    t11 = rd32(self + 0x14u);
    wr8(self + 0x25u, 0u);
    g->edx = t9;
    t12 = cow_call_regs(g, COW_IMG(0x101a8820u), t10, t11, g->edx, 0, 1, t10);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        edx = t14;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        t15 = (ecx & 0xffffff00u) | rd8(self + 0x24u);
        g->esp = sp0 - 4u;
        t16 = cow_call_regs(g, COW_IMG(0x101a87a0u), eax, rd32(self + 0x14u), edx, 0, 1, t15);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6c90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
