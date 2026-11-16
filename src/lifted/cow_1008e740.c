/* f_0x1008e740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008e740(Guest* g)
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

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_1008e7b5;
    eax = rd32(self + 0x120u);
    if ((rd8(self + 0x12cu) & 0x10u) == 0u) goto L_1008e7b5;
    if ((eax >> 8u & 4u) == 0u) goto L_1008e7b5;
    if ((rd32(self + 0x1d0u) >> 8u & 2u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x1d0u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        t1 = g->edx;
        edx = t1;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100d65b0u), rd32(self + 0xa0u), 1, 1u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_1008e867;
    edx = t3;
    t4 = rd32(self + 0xa4u);
    g->eax = rd32(t4);
    t5 = rd32(t4);
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, rd32(t5 + 0x298u), t4, 3, 0x726f6863u, t4, 0u);
    t7 = rd32(self + 0xa0u);
    cow_thiscall(g, rd32(rd32(t7) + 0x298u), t7, 3, 0x726f6863u, t7, 0u);
L_1008e7b5: ;
    t8 = rd32(self + 0x12cu) & 0xffffffefu;
    wr32(self + 0x12cu, t8);
    if ((t8 & 0x20u) == 0u) goto L_1008e867;
    eax = t8;
    edx = t8;
    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        ecx = rd32(self + 0x120u);
        goto L_1008e83e;
    }
    ecx = rd32(self + 0x120u);
    if ((rd32(self + 0x1d0u) >> 8u & 2u) == 0u) goto L_1008e85f;
    edx = rd32(self + 0x1d0u);
    if ((ecx >> 8u & 4u) == 0u) goto L_1008e867;
    t9 = rd32(self + 0xa4u);
    g->eax = rd32(t9);
    g->edx = edx;
    t10 = rd32(t9);
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, rd32(t10 + 0x2a0u), t9, 2, 0x726f6863u, t9);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u) goto L_1008e867;
    ecx = t12;
    edx = t13;
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x10088270u), 2, 0u, 0x11u);
    if ((uint8_t)t14 == 0u) goto L_1008e867;
    wr32(rd32(self + 0xa0u) + 0x7d8u, 0x20202020u);
    wr32(rd32(self + 0xa4u) + 0x7d8u, 0x20202020u);
    t15 = (rd32(self + 0x12cu) & 0xffffff00u) | (rd32(self + 0x12cu) & 0xdfu);
    wr32(self + 0x12cu, t15);
    return;
L_1008e83e: ;
    if ((rd32(self + 0x1d0u) >> 8u & 2u) == 0u) goto L_1008e867;
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x10088270u), 2, 0u, 0x11u);
    if ((uint8_t)t16 == 0u) goto L_1008e867;
    eax = rd32(self + 0x12cu);
L_1008e85f: ;
    t17 = (eax & 0xffffff00u) | (eax & 0xdfu);
    wr32(self + 0x12cu, t17);
L_1008e867: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008e740(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
