/* f_0x101d3120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d3120(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, 0x809au);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, 0x809au);
    t2 = g->edx;
    t3 = rd32(t1);
    wr32(self + 8u, t3);
    if (t3 == 0u) goto L_101d3194;
    eax = t3;
    edx = t2;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0x59u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->edx = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(self + 8u)), 3, sp0 - 4u, 0x59u, 0u);
    t6 = g->edx;
    wr32(sp0 - 0xcu, rd32(t5));
    g->eax = rd32(t5);
    t7 = rd32(t5);
    t8 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t7);
    wr32(sp0 - 0xcu, 0u);
    t9 = rd32(self + 8u);
    wr32(self + 0xcu, t8);
    wr32(sp0 - 0x10u, 0x5bu);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->edx = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(t9), 3, sp0 - 4u, 0x5bu, 0u);
    t11 = g->edx;
    wr32(sp0 - 0xcu, rd32(t10));
    g->eax = rd32(t10);
    t12 = rd32(t10);
    t13 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t12);
    wr32(self + 0x10u, t13);
    return;
L_101d3194: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x10u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3120(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
