/* f_0x100556e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100556e0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_1005574f;
    }
    eax = rd32(self + 4u);
    if (arg2 - 0x22u > 3u) goto L_1005574f;
    t1 = rd32(COW_IMG(0x10055764u) + arg2 * 4u - 0x88u);
    switch (t1 - RD)
    {
    case 0x100556fbu: goto L_100556fb;
    case 0x10055710u: goto L_10055710;
    case 0x10055725u: goto L_10055725;
    case 0x1005573au: goto L_1005573a;
    default: rt_fatal(g, COW_IMG(0x100556f4u), "switch");
    }
    return 0;
L_100556fb: ;
    t8 = rd32(eax + 0xcu);
    g->edx = t8;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t8);
    t9 = g->edx;
    g->edx = t9;
    return arg1;
L_10055710: ;
    t6 = rd32(eax + 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t6);
    t7 = g->edx;
    g->edx = t7;
    return arg1;
L_10055725: ;
    t4 = rd32(eax + 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t4);
    t5 = g->edx;
    g->edx = t5;
    return arg1;
L_1005573a: ;
    t2 = rd32(eax + 0x18u);
    g->edx = t2;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t2);
    t3 = g->edx;
    g->edx = t3;
    return arg1;
L_1005574f: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10068300u), arg1, 1, 0u);
    t10 = g->edx;
    g->edx = t10;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100556e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100556e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
