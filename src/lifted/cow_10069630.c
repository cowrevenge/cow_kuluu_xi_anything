/* f_0x10069630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10069630(Guest* g)
{
    double d13;
    double d14;
    double d18;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 8u, rd32(self));
    if (rd32(self + 4u) > 3u)
    {
        eax = rd32(self + 4u);
        goto L_10069712;
    }
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10069734u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1006964du: goto L_1006964d;
    case 0x1006967du: goto L_1006967d;
    case 0x100696a5u: goto L_100696a5;
    case 0x100696ddu: goto L_100696dd;
    default: rt_fatal(g, COW_IMG(0x10069646u), "switch");
    }
    return 0;
L_1006964d: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t17 = g->edx;
    wr32(sp0 - 8u, t16);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    d18 = fr(g, (double)(int32_t)t16 - (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d18);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t17, 2, sp0 + 8u, 2u);
    t19 = g->edx;
    g->edx = t19;
    return arg1;
L_1006967d: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t12 = g->edx;
    d13 = cow_take_float(g);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    d14 = fr(g, d13 - (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d14);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t12, 2, sp0 + 8u, 2u);
    t15 = g->edx;
    g->edx = t15;
    return arg1;
L_100696a5: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t8 = g->edx;
    wr32(sp0 - 8u, t7);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    d9 = fr(g, (double)(int64_t)cow_i64(t7, 0u) - (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d9);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t8, 2, sp0 + 8u, 2u);
    t10 = g->edx;
    g->edx = t10;
    return arg1;
L_100696dd: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = (double)rdf32(sp0 + 8u);
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 8u, t2 - t6);
    eax = 3u;
L_100696f8: ;
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, sp0 - 8u, 2, sp0 - 8u, eax);
    t21 = g->edx;
    g->edx = t21;
    return arg1;
L_10069712: ;
    if (eax != 2u) goto L_100696f8;
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, in_edx, 2, sp0 + 8u, eax);
    t20 = g->edx;
    g->edx = t20;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10069630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10069630(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
