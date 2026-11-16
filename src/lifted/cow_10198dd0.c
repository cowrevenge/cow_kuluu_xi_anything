/* f_0x10198dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10198dd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x14u) == 0u) goto L_10198deb;
    eax = rd32(self + 0x14u);
    zf = rd32(self + 0x14u) == 0u;
    sf = (int32_t)rd32(self + 0x14u) < 0;
    if (zf || sf)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)eax > 3)
        {
            edx = in_edx;
        }
        else
        {
            t1 = rd32(sp0 + 4u);
            g->eax = t1;
            g->edx = in_edx;
            g->esp = sp0;
            t2 = cow_thiscall(g, COW_IMG(0x10198fc0u), self, 1, t1);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    g->edx = edx;
    return eax;
L_10198deb: ;
    t4 = rd32(sp0 + 8u);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t4);
    wr32(sp0 + 4u, t5);
    edx = t4;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_10198f13;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10198f82;
    }
    eax = eax - 1u;
L_10198f01: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a780u));
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_10198f13: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_10198f82;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    t6 = rd32(COW_IMG(0x10198f88u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x10198f01u: goto L_10198f01;
    case 0x10198f25u: goto L_10198f25;
    case 0x10198f51u: goto L_10198f51;
    case 0x10198f5au: goto L_10198f5a;
    case 0x10198f63u: goto L_10198f63;
    default: rt_fatal(g, COW_IMG(0x10198f1eu), "switch");
    }
    return 0;
L_10198f25: ;
    t10 = rd32(self + 0x38u);
    t11 = rd32(rd32(self + 0x1cu) + rd32(self + 0x20u) * 0x10u + 0xcu);
    g->edx = rd32(self + 0x20u) << 4u;
    t12 = rd32(self + 0x1cu);
    t13 = rd32(self + 0x20u);
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10193830u), t12, g->ecx, g->edx, 1, 2, t11, t10);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a780u));
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_10198f51: ;
    wr32(self + 0x14u, 1u);
L_10198f6a: ;
    t7 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t8 = rd32(self + 8u);
    wr32(self + 0x34u, t7);
    wr8(t8 + 0x62u, 0u);
    t9 = rd32(self + 8u);
    wr8(t9 + 0x85u, 0u);
    eax = t9;
    edx = t7 & 0xffffff00u;
L_10198f82: ;
    g->edx = edx;
    return eax;
L_10198f5a: ;
    wr32(self + 0x14u, 2u);
    goto L_10198f6a;
L_10198f63: ;
    wr32(self + 0x14u, 3u);
    goto L_10198f6a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198dd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
