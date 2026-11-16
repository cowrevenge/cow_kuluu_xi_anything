/* f_0x10069750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10069750(Guest* g)
{
    double d10;
    double d14;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
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
        goto L_10069825;
    }
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10069844u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1006976du: goto L_1006976d;
    case 0x1006979du: goto L_1006979d;
    case 0x100697c5u: goto L_100697c5;
    case 0x100697fdu: goto L_100697fd;
    default: rt_fatal(g, COW_IMG(0x10069766u), "switch");
    }
    return 0;
L_1006976d: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t13 = g->edx;
    wr32(sp0 - 8u, t12);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    d14 = fr(g, (double)(int32_t)t12 * (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d14);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t13, 2, sp0 + 8u, 2u);
    t15 = g->edx;
    g->edx = t15;
    return arg1;
L_1006979d: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t8 = g->edx;
    d9 = cow_take_float(g);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    d10 = fr(g, d9 * (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d10);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t8, 2, sp0 + 8u, 2u);
    t11 = g->edx;
    g->edx = t11;
    return arg1;
L_100697c5: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t4 = g->edx;
    wr32(sp0 - 8u, t3);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    d5 = fr(g, (double)(int64_t)cow_i64(t3, 0u) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d5);
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, t4, 2, sp0 + 8u, 2u);
    t6 = g->edx;
    g->edx = t6;
    return arg1;
L_100697fd: ;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    wr32(sp0 - 8u, t2);
    eax = 3u;
L_1006980b: ;
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, sp0 - 8u, 2, sp0 - 8u, eax);
    t17 = g->edx;
    g->edx = t17;
    return arg1;
L_10069825: ;
    if (eax != 2u) goto L_1006980b;
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, in_edx, 2, sp0 + 8u, eax);
    t16 = g->edx;
    g->edx = t16;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10069750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10069750(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
