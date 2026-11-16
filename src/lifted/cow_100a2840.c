/* f_0x100a2840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a2840(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
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
    uint32_t t20;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    d5 = fr(g, d4 + (double)(int32_t)rd32(self + 0x34u));
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    t8 = rd32(self + 0x3cu);
    wr32(self + 0x34u, t6);
    if ((int32_t)t8 >= (int32_t)t6)
    {
        edx = t7;
        goto L_100a287a;
    }
    edx = t7;
    if ((int32_t)rd32(self + 0x38u) <= 0)
    {
        eax = rd32(self + 0x38u);
        goto L_100a2871;
    }
    if (rd32(self + 0x48u) == 0u)
    {
        eax = rd32(self + 0x48u);
        goto L_100a2871;
    }
    eax = rd32(self + 0x48u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t9 = cow_fastcall(g, COW_IMG(0x100a28e0u), self, edx, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_100a28a2: ;
    if (rd8(self + 0x58u) != 0xeu) goto L_100a28b5;
    g->eax = eax;
    g->edx = rd32(self);
    t18 = rd32(self);
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, rd32(t18 + 0x18u), self, 1, 1u);
    t20 = g->edx;
    g->edx = t20;
    return (t19 & 0xffffff00u) | 1u;
L_100a2871: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t11 = cow_fastcall(g, COW_IMG(0x100a29f0u), self, edx, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_100a28a2;
L_100a287a: ;
    if (rd8(self + 0x58u) - 1u > 0xcu)
    {
        eax = rd8(self + 0x58u) - 1u;
        goto L_100a28a2;
    }
    eax = rd8(self + 0x58u) - 1u;
    t13 = rd32(COW_IMG(0x100a28bcu) + rd8(COW_IMG(0x100a28c8u) + eax) * 4u);
    switch (t13 - RD)
    {
    case 0x100a2894u: goto L_100a2894;
    case 0x100a289bu: goto L_100a289b;
    case 0x100a28a2u: goto L_100a28a2;
    default: rt_fatal(g, COW_IMG(0x100a288du), "switch");
    }
    return 0;
L_100a2894: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x100a2b20u), self, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_100a289b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x100a2a20u), self, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    goto L_100a28a2;
L_100a28b5: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2840(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
