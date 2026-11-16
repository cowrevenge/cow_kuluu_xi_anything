/* f_0x1000ffb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000ffb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t18;
    uint32_t t19;
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
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, arg1 + 0x24u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329194u)), t2, 1, arg1 + 4u);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = rd32(arg1 + 4u);
    t8 = cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t5, 1, arg1 + 0x24u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t7 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        ebp = t7;
        goto L_10010006;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    ebp = t7;
    t11 = rd32(COW_IMG(0x103292f4u));
    wr32(arg1, COW_IMG(0x10329b78u));
    wr32(arg1 + 4u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, t11, ecx, 1, arg1 + 0x24u);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, t11, t13, 1, arg1 + 8u);
    t16 = g->ecx;
    t17 = g->edx;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t16, t17, 1, 1, arg1);
    t18 = g->edx;
    g->edx = t18;
    return ebp;
L_10010006: ;
    if (ebp == 1u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(COW_IMG(0x10329194u)), ecx, 1, COW_IMG(0x10456704u));
        t19 = g->edx;
        edx = t19;
    }
    g->edx = edx;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ffb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000ffb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
