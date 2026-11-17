/* f_0x10177240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10177240(Guest* g)
{
    uint32_t esi;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 548u);

    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x204u);
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, 0u);
    g->eax = sp0 - 0x204u;
    g->edx = in_edx;
    g->esp = sp0 - 0x218u;
    t1 = cow_thiscall(g, COW_IMG(0x10177350u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 0x21cu, t1);
    g->edx = t2;
    g->esp = sp0 - 0x21cu;
    t3 = cow_thiscall(g, COW_IMG(0x10177340u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x220u, t3);
    g->edx = t5;
    g->esp = sp0 - 0x208u;
    t6 = cow_stdcall(g, COW_IMG(0x102daa2du), 6, t3, rd32(sp0 - 0x21cu), 0u, 0u, sp0 - 0x204u, 0u);
    t7 = g->edx;
    wr32(sp0 - 0x20cu, 0x200u);
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    wr32(sp0 - 0x214u, t6);
    cow_stdcall(g, COW_IMG(0x102daa91u), 3, t6, sp0 - 0x200u, 0x200u);
    if ((int32_t)t6 < 0)
    {
        esi = t6;
    }
    else
    {
        wr32(sp0 - 0x20cu, in_edi);
        wr32(sp0 - 0x210u, 0u);
        wr32(sp0 - 0x214u, arg2);
        t8 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x218u, t8);
        g->eax = t8;
        t9 = rd32(t8);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t11 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 0x20cu;
        t12 = cow_thiscall(g, rd32(t9 + 0xcu), t9, 3, t8, arg2, 0u);
        t13 = g->ecx;
        wr32(sp0 - 0x210u, t12);
        wr32(sp0 - 0x214u, arg3);
        wr32(sp0 - 0x218u, t10);
        g->edx = arg3;
        t14 = cow_thiscall(g, rd32(t11 + 0x12cu), t13, 3, t10, arg3, t12);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x210u, 0x200u);
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x218u, t14);
        g->edx = t16;
        cow_stdcall(g, COW_IMG(0x102daa91u), 3, t14, sp0 - 0x200u, 0x200u);
        t17 = g->edx;
        t18 = rd32(sp0 - 0x204u);
        wr32(sp0 - 0x210u, t18);
        cow_thiscall(g, rd32(rd32(t18) + 8u), rd32(t18), 1, t18);
        esi = t14;
    }
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10177240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10177240(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
