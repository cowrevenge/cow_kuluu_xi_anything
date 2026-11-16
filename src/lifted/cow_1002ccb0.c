/* f_0x1002ccb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1002ccb0(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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

    if (rd32(self + 0x58u) == 0u)
    {
        eax = rd32(self + 0x58u);
        goto L_1002cdf4;
    }
    eax = rd32(self + 0x58u);
    if (rd32(self + 0x3cu) > 6u) goto L_1002cdf4;
    ecx = rd32(self + 0x3cu);
    t1 = rd32(COW_IMG(0x1002cdfcu) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x1002ccd5u: goto L_1002ccd5;
    case 0x1002cd17u: goto L_1002cd17;
    case 0x1002cd34u: goto L_1002cd34;
    case 0x1002cd43u: goto L_1002cd43;
    case 0x1002cd52u: goto L_1002cd52;
    case 0x1002cd84u: goto L_1002cd84;
    case 0x1002cde5u: goto L_1002cde5;
    default: rt_fatal(g, COW_IMG(0x1002ccceu), "switch");
    }
    return 0;
L_1002ccd5: ;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10028640u), eax * 2u, ecx, in_edx, 1, 2, eax * 2u, 4u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(self + 0x5cu, t12);
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
        goto L_1002cd93;
    }
    if (rd32(self + 0x58u) == 0u) goto L_1002cd75;
    eax = 0u;
L_1002ccf6: ;
    wr16(eax * 2u + rd32(self + 0x5cu), 0xffffu);
    if (eax + 1u < rd32(self + 0x58u))
    {
        eax = eax + 1u;
        goto L_1002ccf6;
    }
    t15 = rd32(self + 0x3cu) + 1u;
    wr32(self + 0x3cu, t15);
    return t15 & 0xffffff00u;
L_1002cd17: ;
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = eax * 2u;
    g->edx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    t8 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, rd32(t8 + 0x60u), t7, 6, t7, eax * 2u, 8u, 0x65u, 0u, self + 0x40u);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
L_1002cd71: ;
    if ((int32_t)eax < 0) goto L_1002cd93;
L_1002cd75: ;
    t16 = rd32(self + 0x3cu) + 1u;
    wr32(self + 0x3cu, t16);
    return t16 & 0xffffff00u;
L_1002cd34: ;
    wr32(self + 0x3cu, 3u);
    return eax & 0xffffff00u;
L_1002cd43: ;
    wr32(self + 0x3cu, 4u);
    return eax & 0xffffff00u;
L_1002cd52: ;
    t2 = eax * 8u + 4u;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x1047b974u));
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x1003b210u), t3, 6, t2, 0x208u, 0u, 0u, self + 0x4cu, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    goto L_1002cd71;
L_1002cd84: ;
    wr32(self + 0x3cu, 6u);
    return eax & 0xffffff00u;
L_1002cd93: ;
    if (rd32(self + 0x5cu) != 0u)
    {
        eax = rd32(self + 0x5cu);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t17 = g->edx;
        wr32(self + 0x5cu, 0u);
        edx = t17;
    }
    t18 = rd32(self + 0x40u);
    wr32(self + 0x60u, 0u);
    if (t18 != 0u)
    {
        eax = t18;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t19 = g->edx;
        wr32(self + 0x40u, 0u);
        edx = t19;
    }
    if (rd32(self + 0x4cu) == 0u)
    {
        eax = rd32(self + 0x4cu);
    }
    else
    {
        g->esp = sp0 - 0xcu;
        t20 = cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, self + 0x4cu);
        wr32(self + 0x4cu, 0u);
        eax = t20;
    }
    wr32(self + 0x44u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x50u, 0u);
    wr32(self + 0x54u, 0u);
    return eax & 0xffffff00u;
L_1002cde5: ;
    wr32(self + 0x3cu, 7u);
    return eax & 0xffffff00u;
L_1002cdf4: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002ccb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002ccb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
