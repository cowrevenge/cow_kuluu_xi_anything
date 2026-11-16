/* f_0x10265d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10265d60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0x18u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x14u) != 0u)
    {
        edx = t2;
        goto L_10265d86;
    }
    eax = rd32(self + 0x14u);
    ecx = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x18u);
    t3 = g->edx;
    g->edx = t3;
    return 0x80004005u;
L_10265d86: ;
    t4 = rd32(self + 4u);
    wr32(self + 0xcu, arg1);
    g->eax = arg1;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), t4, 1, t4);
    t6 = g->ecx;
    t7 = rd32(self + 8u);
    g->edx = t7;
    t8 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), t6, 2, t7, 0xffffffffu);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = rd32(self + 0x10u);
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t9, 1, self + 0x18u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265d60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
