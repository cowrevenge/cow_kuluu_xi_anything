/* f_0x10245230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10245230(Guest* g)
{
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
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) == 1u)
    {
        eax = rd32(self + 0x18u);
        edx = 1u;
        goto L_102452e1;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = 1u;
        goto L_102452e1;
    }
    t1 = rd32(COW_IMG(0x102452e8u) + rd8(COW_IMG(0x102452f8u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1024525fu: goto L_1024525f;
    case 0x1024527du: goto L_1024527d;
    case 0x102452a3u: goto L_102452a3;
    case 0x102452e1u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = 1u; goto L_102452e1;
    default: rt_fatal(g, COW_IMG(0x10245258u), "switch");
    }
    return 0;
L_1024525f: ;
    t18 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x14u, t18);
    t19 = rd32(COW_IMG(0x10669078u));
    wr32(t19 + 0x2cu, t18 + 7u);
    g->eax = t18 + 7u;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t20 = cow_thiscall(g, COW_IMG(0x10037b30u), t19, 0);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_1024527d: ;
    if (rd32(self + rd32(self + 0x14u) * 4u + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_1024529a;
    }
    eax = rd32(self + 0x14u);
    wr32(self + 0x18u, 1u);
    t13 = rd32(self + 8u);
    wr8(t13 + 0x5du, 1u);
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10037b90u), t13, 0);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1024529a: ;
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_102452a3: ;
    wr32(self + 0x14u, 2u);
    wr32(rd32(COW_IMG(0x10669078u)) + 0x2cu, 9u);
    t2 = rd16(self + 0x14u);
    t3 = rd32(self + 8u);
    wr16(t3 + 0x4cu, (uint16_t)(t2 + 1u));
    t4 = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    g->eax = t4;
    g->edx = t3;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10118170u), rd32(self + 8u), 1, t4);
    t6 = g->edx;
    g->edx = t6;
    t7 = rd32(COW_IMG(0x104e1d4cu));
    t8 = cow_thiscall(g, COW_IMG(0x10124b70u), t7, 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10037b30u), t9, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_102452e1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10245230(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
