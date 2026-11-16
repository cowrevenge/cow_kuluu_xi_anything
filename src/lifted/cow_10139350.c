/* f_0x10139350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10139350(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
        t4 = rd32(rd32(eax) + 0x20u);
        t5 = rd32(eax);
        wr32(self + 0x14u, t4);
        eax = t5;
        ecx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        t8 = rd32(rd32(eax) + 0x184u);
        t9 = rd32(eax);
        wr32(self + 0x18u, t8);
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, self + 0x1cu);
    t11 = g->edx;
    wr16(self + 0x2cu, 0u);
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
