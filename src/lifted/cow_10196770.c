/* f_0x10196770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10196770(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1019689f;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 0xcu)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1019689f;
    }
    t1 = rd32(COW_IMG(0x101968a4u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10196792u: goto L_10196792;
    case 0x101967a8u: goto L_101967a8;
    case 0x101967beu: goto L_101967be;
    case 0x101967d4u: goto L_101967d4;
    case 0x101967eau: goto L_101967ea;
    case 0x10196800u: goto L_10196800;
    case 0x10196816u: goto L_10196816;
    case 0x1019682cu: goto L_1019682c;
    case 0x10196842u: goto L_10196842;
    case 0x10196858u: goto L_10196858;
    case 0x1019686eu: goto L_1019686e;
    case 0x10196884u: goto L_10196884;
    case 0x1019689au: goto L_1019689a;
    default: rt_fatal(g, COW_IMG(0x1019678bu), "switch");
    }
    return 0;
L_10196792: ;
    g->edx = in_edx;
    g->esp = sp0;
    t26 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a6f4u), 1u, 0u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_101967a8: ;
    g->edx = in_edx;
    g->esp = sp0;
    t24 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a6e0u), 1u, 0u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_101967be: ;
    g->edx = in_edx;
    g->esp = sp0;
    t22 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a6ccu), 1u, 0u);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_101967d4: ;
    g->edx = in_edx;
    g->esp = sp0;
    t20 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a6b8u), 1u, 0u);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_101967ea: ;
    g->edx = in_edx;
    g->esp = sp0;
    t18 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a6a4u), 1u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_10196800: ;
    g->edx = in_edx;
    g->esp = sp0;
    t16 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a690u), 1u, 0u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_10196816: ;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a67cu), 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1019682c: ;
    g->edx = in_edx;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a668u), 1u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10196842: ;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a654u), 1u, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10196858: ;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a640u), 1u, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1019686e: ;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a62cu), 1u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10196884: ;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a618u), 1u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1019689a: ;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x101bcb60u), g->eax, g->ecx, in_edx, 1, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1019689f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10196770(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
