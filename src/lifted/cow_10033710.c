/* f_0x10033710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10033710(Guest* g)
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

    wr32(self, COW_IMG(0x1032a844u));
    if (rd32(COW_IMG(0x1045b818u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1045b818u));
        edx = in_edx;
        goto L_1003374a;
    }
    eax = rd32(COW_IMG(0x1045b818u));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t6, 5, t4, t1, COW_IMG(0x1045b81cu), 1u, eax);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(COW_IMG(0x1045b818u), t7);
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10033755;
    }
    eax = t7;
    edx = t9;
L_1003374a: ;
    g->edx = edx;
    t10 = rd32(eax);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t10 + 4u), t10, 1, eax);
    t11 = g->ecx;
    t12 = g->edx;
    eax = rd32(COW_IMG(0x1045b818u));
    ecx = t11;
    edx = t12;
L_10033755: ;
    wr32(self + 8u, eax);
    if (rd32(COW_IMG(0x1045b81cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1045b81cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1045b81cu));
        g->edx = rd32(eax);
        t13 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t13 + 4u), ecx, 1, eax);
        t14 = g->ecx;
        t15 = g->edx;
        eax = rd32(COW_IMG(0x1045b81cu));
        ecx = t14;
        edx = t15;
    }
    wr32(self + 0xcu, eax);
    g->eax = self + 0x14u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x10026e00u), 1, self + 0x14u);
    t17 = g->edx;
    g->edx = t17;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10026e00u), 1, self + 0x20u);
    t18 = g->edx;
    wr32(COW_IMG(0x1045b810u), 0x3f800000u);
    wr8(self + 4u, 0u);
    g->edx = t18;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10033710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10033710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
