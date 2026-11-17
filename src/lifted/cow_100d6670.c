/* f_0x100d6670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d6670(Guest* g)
{
    double d16;
    double d20;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1 + 0xbcu), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0x80u)
    {
        eax = t2;
        edx = t3;
        goto L_100d66b0;
    }
    eax = t2;
    edx = t3;
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->eax = eax;
    g->edx = edx;
    t4 = rd32(self);
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, rd32(t4 + 0xbcu), self, 1, sp0 - 0x10u);
    t6 = g->edx;
    wr32(sp0 - 0x1cu, (uint8_t)t5);
    g->eax = (uint8_t)t5;
    t7 = cow_thiscall(g, rd32(t4 + 0x1c8u), self, 1, (uint8_t)t5);
    t8 = rd32(sp0 - 0xcu);
    wr32(COW_IMG(0x10456da8u), t8);
    g->edx = t8;
    return t7;
L_100d66b0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t10 = g->edx;
    if (t9 > 8u)
    {
        eax = t9;
        edx = t10;
        goto L_100d673a;
    }
    eax = t9;
    edx = t10;
    t11 = rd32(COW_IMG(0x100d6740u) + rd8(COW_IMG(0x100d674cu) + eax) * 4u);
    switch (t11 - RD)
    {
    case 0x100d66cbu: goto L_100d66cb;
    case 0x100d66ebu: goto L_100d66eb;
    case 0x100d673au: goto L_100d673a;
    default: rt_fatal(g, COW_IMG(0x100d66c4u), "switch");
    }
    return 0;
L_100d66cb: ;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, 7u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t21 = rd32(self);
    g->esp = sp0 - 0x14u;
    t22 = cow_thiscall(g, rd32(t21 + 0x1c8u), self, 2, 7u, sp0 - 0x10u);
    t23 = g->edx;
    t24 = rd32(sp0 - 0xcu);
    t25 = rd32(sp0 - 0x14u);
    wr32(COW_IMG(0x10456da8u), t24);
    g->esi = t25;
    g->edx = t23;
    return t22;
L_100d66eb: ;
    if (rd8(self + 0x878u) == 2u) goto L_100d6719;
    eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
    if ((uint8_t)eax == 1u) goto L_100d6719;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, 7u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t12 = rd32(self);
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, rd32(t12 + 0x1c8u), self, 2, 7u, sp0 - 0x10u);
    t14 = g->edx;
    t15 = rd32(sp0 - 0x14u);
    d16 = (double)rdf32(sp0 - 0xcu);
    wrf32(COW_IMG(0x10456da8u), (float)d16);
    g->esi = t15;
    g->edx = t14;
    return t13;
L_100d6719: ;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, 5u);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t17 = rd32(self);
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, rd32(t17 + 0x1c8u), self, 2, 5u, sp0 - 0x10u);
    t19 = g->edx;
    d20 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x10329a34u)));
    wrf32(COW_IMG(0x10456da8u), (float)d20);
    eax = t18;
    edx = t19;
L_100d673a: ;
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d6670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
