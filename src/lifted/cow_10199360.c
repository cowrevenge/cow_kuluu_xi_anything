/* f_0x10199360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10199360(Guest* g)
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(sp0 + 4u) != 5u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_10199489;
    }
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 0xfu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        edx = in_edx;
        goto L_10199390;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    t1 = rd32(COW_IMG(0x101994acu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10199381u: goto L_10199381;
    case 0x10199393u: goto L_10199393;
    case 0x101993a5u: goto L_101993a5;
    case 0x101993b7u: goto L_101993b7;
    case 0x101993c9u: goto L_101993c9;
    case 0x101993dbu: goto L_101993db;
    case 0x101993edu: goto L_101993ed;
    case 0x101993fcu: goto L_101993fc;
    case 0x1019940bu: goto L_1019940b;
    case 0x1019941au: goto L_1019941a;
    case 0x10199429u: goto L_10199429;
    case 0x10199438u: goto L_10199438;
    case 0x10199447u: goto L_10199447;
    case 0x10199456u: goto L_10199456;
    case 0x10199465u: goto L_10199465;
    case 0x10199477u: goto L_10199477;
    default: rt_fatal(g, COW_IMG(0x1019937au), "switch");
    }
    return 0;
L_10199381: ;
    g->edx = in_edx;
    g->esp = sp0;
    t32 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xb4u, 1u);
    t33 = g->edx;
    eax = t32;
    edx = t33;
L_10199390: ;
    g->edx = edx;
    return eax;
L_10199393: ;
    g->edx = in_edx;
    g->esp = sp0;
    t30 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xb4u, 2u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_101993a5: ;
    g->edx = in_edx;
    g->esp = sp0;
    t28 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xb4u, 0u);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_101993b7: ;
    g->edx = in_edx;
    g->esp = sp0;
    t26 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xb5u, 2u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_101993c9: ;
    g->edx = in_edx;
    g->esp = sp0;
    t24 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xb5u, 1u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_101993db: ;
    g->edx = in_edx;
    g->esp = sp0;
    t22 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xb5u, 0u);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_101993ed: ;
    g->edx = in_edx;
    g->esp = sp0;
    t20 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 0u);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_101993fc: ;
    g->edx = in_edx;
    g->esp = sp0;
    t18 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 1u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_1019940b: ;
    g->edx = in_edx;
    g->esp = sp0;
    t16 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 2u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_1019941a: ;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 3u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10199429: ;
    g->edx = in_edx;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 4u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10199438: ;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 5u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10199447: ;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 6u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10199456: ;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x12u, 7u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10199465: ;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xa4u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10199477: ;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xa4u, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10199489: ;
    if ((uint16_t)eax != 6u)
    {
        edx = in_edx;
        goto L_10199390;
    }
    t34 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t34);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t34, COW_IMG(0x10621838u), in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10199360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10199360(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
