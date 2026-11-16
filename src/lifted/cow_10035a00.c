/* f_0x10035a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10035a00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10074740u), in_eax, self, in_edx, 1, 0);
    t1 = g->edx;
    wr32(self, COW_IMG(0x1032a904u));
    wr32(self + 0x34u, arg3);
    if (arg3 - 1u > 7u) goto L_10035aa3;
    edx = t1;
    t2 = rd32(COW_IMG(0x10035abcu) + arg3 * 4u - 4u);
    switch (t2 - RD)
    {
    case 0x10035a26u: goto L_10035a26;
    case 0x10035a48u: goto L_10035a48;
    case 0x10035a66u: goto L_10035a66;
    case 0x10035a84u: goto L_10035a84;
    case 0x10035aa3u: goto L_10035aa3;
    default: rt_fatal(g, COW_IMG(0x10035a1fu), "switch");
    }
    return 0;
L_10035a26: ;
    if (rd32(COW_IMG(0x1046392cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1046392cu));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
    }
    t6 = rd32(COW_IMG(0x10351700u));
    wr32(COW_IMG(0x1046392cu), self);
    wr32(self + 0x40u, t6);
L_10035aa3: ;
    wr32(self + 0x44u, arg1);
    wrf32(self + 0x38u, (float)(double)(int32_t)arg2);
    wrf32(self + 0x3cu, (float)(double)(int32_t)arg2);
    return self;
L_10035a48: ;
    if (rd32(COW_IMG(0x10463928u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10463928u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
    }
    t5 = rd32(COW_IMG(0x10351704u));
    wr32(COW_IMG(0x10463928u), self);
    eax = t5;
L_10035aa0: ;
    wr32(self + 0x40u, eax);
    goto L_10035aa3;
L_10035a66: ;
    if (rd32(COW_IMG(0x10463930u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10463930u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
    }
    t4 = rd32(COW_IMG(0x10351708u));
    wr32(COW_IMG(0x10463930u), self);
    eax = t4;
    goto L_10035aa0;
L_10035a84: ;
    if (rd32(COW_IMG(0x10463934u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10463934u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
    }
    t3 = rd32(COW_IMG(0x1035170cu));
    wr32(COW_IMG(0x10463934u), self);
    eax = t3;
    goto L_10035aa0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10035a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10035a00(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
