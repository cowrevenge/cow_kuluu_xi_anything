/* f_0x10211370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10211370(Guest* g)
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

    if (rd32(self + 0x40u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x40u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_10211398;
    }
    t2 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    return;
L_10211398: ;
    if (rd16(rd32(self + 8u) + 0x4cu) != 1u)
    {
        t4 = rd32(self + 0x18u);
        ecx = t4;
    }
    else
    {
        ecx = rd32(self + 8u);
        t3 = rd32(self + 0x18u);
        edx = t3;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, eax, ecx, 0);
    t6 = g->edx;
    if (rd8(self + 0x3au) != 0u)
    {
        edx = t6;
        goto L_102113e4;
    }
    eax = (t5 & 0xffffff00u) | rd8(self + 0x3au);
    edx = t6;
    wr32(self + 0x14u, 0u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f618u));
    t8 = rd32(self + 8u);
    cow_call_regs(g, COW_IMG(0x1015e790u), t7, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    return;
L_102113e4: ;
    t9 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1015e790u), t9, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, self + 0x20u, 1u, 0u);
    t12 = g->edx;
    t13 = rd8(self + 0x3bu);
    wr8(self + 0x3au, 0u);
    if ((uint8_t)t13 == 0u)
    {
        eax = (t11 & 0xffffff00u) | t13;
        edx = t12;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10118e90u), eax, rd32(self + 8u), g->edx, 0, 1, 2u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10211370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
