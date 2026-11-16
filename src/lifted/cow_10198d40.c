/* f_0x10198d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10198d40(Guest* g)
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

    t1 = rd32(self + 0x18u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x101986f0u), 1, t1);
    t3 = g->edx;
    t4 = rd32(self + 8u);
    wr32(self + 0x1cu, t2);
    if (t4 == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = t2;
        ecx = t4;
        g->edx = self + 0x40u;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10118f70u), eax, ecx, g->edx, 0, 1, self + 0x40u);
        t5 = g->edx;
        edx = t5;
    }
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
    }
    else
    {
        eax = rd32(self + 0x1cu);
        t6 = rd32(eax + rd32(self + 0x20u) * 0x10u + 8u);
        t7 = rd32(self + 0x20u);
        wr32(self + 0x38u, t6);
        t8 = rd8(self + 0x3au);
        t9 = rd8(self + 0x39u);
        wr8(self + 0x3cu, (uint8_t)t8);
        wr8(self + 0x3eu, rd8(self + 0x38u));
        wr8(self + 0x3du, (uint8_t)t9);
        g->eax = self + 0x3cu;
        g->edx = (t6 & 0xffffff00u) | t9;
        g->esp = sp0 - 4u;
        t10 = cow_stdcall(g, COW_IMG(0x10199090u), 1, self + 0x3cu);
        t11 = g->edx;
        wr32(self + 0x38u, t10);
        eax = t10;
        edx = t11;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198d40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
