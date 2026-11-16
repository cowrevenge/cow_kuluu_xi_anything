/* f_0x101e4f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e4f90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = g->edx;
    t3 = rd32(rd32(t1) + 0x12cu);
    wr32(self + 0x54u, t3);
    wr32(self + 0x34u, t3);
    wr8(self + 0x49u, 1u);
    cow_call_regs(g, COW_IMG(0x101f6700u), t3, self, t2, 0, 1, 0xau);
    t4 = g->edx;
    wr32(self + 0x30u, COW_IMG(0x1037f30cu));
    wr16(self + 0x16u, 5u);
    wr16(self + 0x26u, 0x12u);
    wr8(self + 0x2cu, 3u);
    wr8(self + 0x2du, 5u);
    g->eax = 5u;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101e4570u), rd32(COW_IMG(0x10663520u)), 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f3bcu), 1u, 0u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f3e4u), 1u, 0u);
    t10 = g->edx;
    if (rd32(COW_IMG(0x1066352cu)) == 0u)
    {
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t9;
        ecx = rd32(COW_IMG(0x1066352cu));
        t11 = rd8(self + 0x894u);
        g->eax = eax;
        g->edx = t11;
        g->esp = sp0 - 4u;
        t12 = cow_thiscall(g, COW_IMG(0x101e5b80u), ecx, 2, 2u, t11);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4f90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
