/* f_0x101771b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101771b0(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 544u);

    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x204u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, 0u);
    wr32(sp0 - 0x21cu, COW_IMG(0x10376ca4u));
    g->eax = sp0 - 0x204u;
    g->edx = in_edx;
    g->esp = sp0 - 0x208u;
    t1 = cow_stdcall(g, COW_IMG(0x102da7bbu), 5, COW_IMG(0x10376ca4u), 0u, 0u, sp0 - 0x204u, 0u);
    t2 = g->edx;
    wr32(sp0 - 0x20cu, 0x200u);
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    wr32(sp0 - 0x214u, t1);
    g->edx = t2;
    cow_stdcall(g, COW_IMG(0x102daa91u), 3, t1, sp0 - 0x200u, 0x200u);
    t3 = g->edx;
    if ((int32_t)t1 < 0)
    {
        edx = t3;
        esi = t1;
    }
    else
    {
        wr32(sp0 - 0x20cu, in_edi);
        wr32(sp0 - 0x210u, 0u);
        wr32(sp0 - 0x214u, arg2);
        t4 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x218u, t4);
        g->eax = t4;
        t5 = rd32(t4);
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t7 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 0x20cu;
        t8 = cow_thiscall(g, rd32(t5 + 0xcu), t5, 3, t4, arg2, 0u);
        t9 = g->ecx;
        wr32(sp0 - 0x210u, t8);
        wr32(sp0 - 0x214u, arg3);
        wr32(sp0 - 0x218u, t6);
        g->edx = arg3;
        t10 = cow_thiscall(g, rd32(t7 + 0x12cu), t9, 3, t6, arg3, t8);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x210u, 0x200u);
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x218u, t10);
        g->edx = t12;
        cow_stdcall(g, COW_IMG(0x102daa91u), 3, t10, sp0 - 0x200u, 0x200u);
        t13 = g->edx;
        t14 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x210u, t14);
        g->edx = t13;
        cow_thiscall(g, rd32(rd32(t14) + 8u), rd32(t14), 1, t14);
        t15 = g->edx;
        edx = t15;
        esi = t10;
    }
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101771b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101771b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
