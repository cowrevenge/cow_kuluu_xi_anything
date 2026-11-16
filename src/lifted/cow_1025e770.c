/* f_0x1025e770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025e770(Guest* g)
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

    if (rd32(rd32(self + 0x78u) + 0x18u) != 0u)
    {
        eax = rd32(self + 0x78u);
        ecx = rd32(rd32(self + 0x78u) + 0x18u);
        goto L_1025e78d;
    }
    eax = rd32(self + 0x78u);
    t1 = rd32(self + 0x5cu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), t1, 1, t1);
    t2 = g->edx;
    g->edx = t2;
    return 0u;
L_1025e78d: ;
    if (rd32(self + 0x70u) != 1u) goto L_1025e7a3;
    t3 = rd32(self + 0x5cu);
    g->edx = t3;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), ecx, 1, t3);
    t4 = g->edx;
    g->edx = t4;
    return 0u;
L_1025e7a3: ;
    g->eax = rd32(self);
    g->edx = in_edx;
    t5 = rd32(self);
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, rd32(t5 + 0xa0u), self, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 1u)
    {
        eax = t6;
        ecx = t7;
        goto L_1025e7ca;
    }
    ecx = t7;
    edx = t8;
    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_1025e7ca;
    }
    t9 = rd32(self + 0x5cu);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), t9, 1, t9);
    t10 = g->edx;
    g->edx = t10;
    return 0u;
L_1025e7ca: ;
    t11 = rd32(self + 0x5cu);
    g->edx = t11;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(COW_IMG(0x103291fcu)), ecx, 1, t11);
    t12 = g->edx;
    g->edx = t12;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025e770(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
