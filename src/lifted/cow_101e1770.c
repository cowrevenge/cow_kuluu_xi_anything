/* f_0x101e1770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e1770(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t in_ebx = g->ebx;

    wr8(rd32(self + 8u) + 0x69u, 0u);
    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578204u));
        edx = in_edx;
        goto L_101e17f1;
    }
    eax = rd32(COW_IMG(0x10578204u));
    if (rd32(eax + 8u) != 0u)
    {
        edx = in_edx;
        goto L_101e17f1;
    }
    if (rd8(self + 0x1cu) == 0u) goto L_101e1795;
    eax = (eax & 0xffffff00u) | rd8(self + 0x1cu);
    if ((uint8_t)eax != 0xcu)
    {
        edx = in_edx;
        goto L_101e17f1;
    }
L_101e1795: ;
    g->ebx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 8u, 0u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101e17f1;
    }
    eax = t1;
    edx = t2;
    if (rd32(rd32(COW_IMG(0x106644c0u)) + 8u) != 0u) goto L_101e17f1;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, rd32(COW_IMG(0x10578204u)), edx, 0, 4, 0u, 1u, 0u, 0u);
    t4 = g->edx;
    t5 = cow_fastcall(g, COW_IMG(0x1013e4f0u), rd32(COW_IMG(0x10578204u)), t4, 0);
    t6 = g->edx;
    t7 = (t6 & 0xffff0000u) | rd16(self + 0x20u);
    g->edx = t7;
    t8 = cow_call_regs(g, COW_IMG(0x1013e260u), t5, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, t7, 0u, 0u, 0u);
    t9 = g->edx;
    wr8(self + 0x4eu, 1u);
    wr16(self + 0x16u, 0u);
    wr16(self + 0x14u, 0x12cu);
    g->ebx = in_ebx;
    g->edx = t9;
    return t8;
L_101e17f1: ;
    wr8(self + 0x4eu, 0u);
    wr16(self + 0x16u, 0u);
    wr16(self + 0x14u, 0x12cu);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
