/* f_0x10261a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10261a50(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 0x40u) == 0u) goto L_10261aa8;
    eax = rd32(self + 0x40u);
    wr32(sp0 - 0xcu, sp0 - 4u);
    wr32(sp0 - 0x10u, COW_IMG(0x1033e768u));
    wr32(sp0 - 0x14u, eax);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(rd32(eax)), rd32(eax), 3, eax, COW_IMG(0x1033e768u), sp0 - 4u);
    if ((int32_t)t1 < 0) goto L_10261a95;
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, arg1);
    t2 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t2);
    g->eax = t2;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(rd32(rd32(sp0 - 4u)) + 0x4cu), rd32(rd32(sp0 - 4u)), 3, t2, arg1, arg2);
    t4 = g->edx;
    t5 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t5);
    g->edx = t4;
    cow_thiscall(g, rd32(rd32(t5) + 8u), rd32(t5), 1, t5);
    t6 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edx = t6;
    return t3;
L_10261a95: ;
    wr32(sp0 - 0xcu, arg1);
    t7 = rd32(self + 0x40u);
    wr32(sp0 - 0x10u, t7);
    g->eax = t7;
    g->edx = rd32(t7);
    t8 = rd32(t7);
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, rd32(t8 + 0x20u), arg1, 2, t7, arg1);
    t10 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edx = t10;
    return t9;
L_10261aa8: ;
    return 0x80004002u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261a50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
