/* f_0x10007e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10007e20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self + 0x88u);
    wr32(sp0 - 0x24u, COW_IMG(0x10341dacu));
    t1 = rd32(self + 0x84u);
    wr32(sp0 - 0x28u, t1);
    g->eax = rd32(rd32(self + 0x84u));
    t2 = rd32(rd32(self + 0x84u));
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, rd32(t2 + 0xcu), t1, 4, t1, COW_IMG(0x10341dacu), self + 0x88u, 0u);
    if ((int32_t)t3 >= 0) goto L_10007e4f;
    eax = t3;
    wr32(self + 0x88u, 0u);
    return eax & 0xffffff00u;
L_10007e4f: ;
    wr32(sp0 - 0x14u, 0x14u);
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x140u);
    wr32(sp0 - 0x1cu, sp0 - 0x14u);
    wr32(sp0 - 0x20u, 1u);
    t4 = rd32(self + 0x88u);
    wr32(sp0 - 0x24u, t4);
    g->eax = t4;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, rd32(rd32(rd32(self + 0x88u)) + 0x18u), rd32(rd32(self + 0x88u)), 3, t4, 1u, sp0 - 0x14u);
    t6 = g->edx;
    if ((int32_t)t5 >= 0)
    {
        edx = t6;
        goto L_10007e91;
    }
    eax = t5;
    g->esi = rd32(sp0 - 0x18u);
    return eax & 0xffffff00u;
L_10007e91: ;
    wr32(sp0 - 0x1cu, COW_IMG(0x10349cecu));
    t7 = rd32(self + 0x88u);
    wr32(sp0 - 0x20u, t7);
    g->eax = t7;
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall(g, rd32(rd32(t7) + 0x2cu), rd32(t7), 2, t7, COW_IMG(0x10349cecu));
    if ((int32_t)t8 >= 0) goto L_10007ea9;
    eax = t8;
    g->esi = rd32(sp0 - 0x18u);
    return eax & 0xffffff00u;
L_10007ea9: ;
    t9 = ((-(rd32(COW_IMG(0x10456a7cu)) != 0u) & 0xffffff00u) | (-(rd32(COW_IMG(0x10456a7cu)) != 0u) & 0xf0u)) + 0x16u;
    wr32(sp0 - 0x1cu, t9);
    t10 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x20u, t10);
    t11 = rd32(self + 0x88u);
    wr32(sp0 - 0x24u, t11);
    g->eax = t10;
    g->edx = rd32(rd32(self + 0x88u));
    t12 = rd32(rd32(self + 0x88u));
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, rd32(t12 + 0x34u), t11, 3, t11, t10, t9);
    t14 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        eax = t13;
        edx = t14;
        goto L_10007ed4;
    }
    eax = t13;
    g->esi = rd32(sp0 - 0x18u);
    return eax & 0xffffff00u;
L_10007ed4: ;
    t15 = rd32(self + 0x88u);
    wr32(sp0 - 0x1cu, t15);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t16 = cow_thiscall(g, rd32(rd32(t15) + 0x1cu), rd32(t15), 1, t15);
    g->esi = rd32(sp0 - 0x18u);
    return (t16 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10007e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10007e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
