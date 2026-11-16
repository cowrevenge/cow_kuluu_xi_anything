/* f_0x10150870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10150870(Guest* g)
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

    if (rd32(self + 0x5cu) != 0u)
    {
        eax = rd32(self + 0x5cu);
    }
    else
    {
        eax = rd32(self + 0x5cu);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
        t2 = rd32(rd32(t1) + 0x350u);
        t3 = rd32(t1);
        wr32(self + 0x5cu, t2);
        eax = t3;
    }
    t4 = rd32(self + 8u);
    g->edx = t4;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015f760u), COW_IMG(0x10621838u), 2, 2u, t4);
    t5 = g->edx;
    t6 = rd32(self + 8u);
    wr8(self + 0xbbu, 0u);
    g->edx = t5;
    t7 = cow_call_regs(g, COW_IMG(0x10118f70u), self + 0x4cu, t6, g->edx, 0, 1, self + 0x4cu);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_call_regs(g, COW_IMG(0x10118f70u), t7, rd32(self + 8u), g->edx, 0, 1, self + 0x54u);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10150a70u), self, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd8(self + 0x65u) != 0u)
    {
        eax = rd32(self + 8u);
        ecx = (t12 & 0xffffff00u) | rd8(rd32(self + 8u) + 0x30u);
        edx = t13;
        goto L_101508de;
    }
    eax = rd32(self + 8u);
    ecx = (t12 & 0xffffff00u) | rd8(rd32(self + 8u) + 0x30u);
    edx = t13;
    wr8(eax + 0x30u, (uint8_t)(ecx | 4u));
    wr8(self + 0x6cu, 0u);
    g->edx = edx;
    return eax;
L_101508de: ;
    wr8(eax + 0x30u, ecx & 0xfbu);
    wr8(self + 0x6cu, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
