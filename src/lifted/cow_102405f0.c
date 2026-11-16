/* f_0x102405f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102405f0(Guest* g)
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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

    if (rd32(self + 0x1cu) == 1u)
    {
        eax = rd32(self + 0x1cu);
        edx = 1u;
        goto L_102406ac;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = 1u;
        goto L_102406ac;
    }
    t1 = rd32(COW_IMG(0x102406b0u) + rd8(COW_IMG(0x102406c0u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1024061fu: goto L_1024061f;
    case 0x10240636u: goto L_10240636;
    case 0x10240676u: goto L_10240676;
    case 0x102406acu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = 1u; goto L_102406ac;
    default: rt_fatal(g, COW_IMG(0x10240618u), "switch");
    }
    return 0;
L_1024061f: ;
    t22 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x18u, t22);
    g->eax = t22;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x1023ffd0u), self, 0);
    t24 = g->ecx;
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x10037b30u), t24, 0);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_10240636: ;
    if (rd32(self + rd32(self + 0x18u) * 4u + 0x20u) != 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_1024064e;
    }
    eax = rd32(self + 0x18u);
    if (eax == 1u) goto L_1024064e;
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1024064e: ;
    if (!(rd8(COW_IMG(0x10456a4cu)) & 1u)) goto L_10240664;
    if (eax != 2u) goto L_10240664;
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_10240664: ;
    wr32(self + 0x1cu, 1u);
    t19 = rd32(self + 8u);
    wr8(t19 + 0x5du, 1u);
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), t19, 0);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_10240676: ;
    wr32(self + 0x18u, 3u);
    g->edx = 1u;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1023ffd0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(t2 + 8u);
    t5 = rd16(t2 + 0x18u);
    wr16(t4 + 0x4cu, (uint16_t)(t5 + 1u));
    t6 = (t3 & 0xffff0000u) | rd16(rd32(t2 + 8u) + 0x4cu);
    g->eax = t4;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10118170u), rd32(t2 + 8u), 1, t6);
    t8 = g->edx;
    g->edx = t8;
    t9 = rd32(COW_IMG(0x104e1d4cu));
    t10 = cow_thiscall(g, COW_IMG(0x10124b70u), t9, 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10037b30u), t11, 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_102406ac: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102405f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102405f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
