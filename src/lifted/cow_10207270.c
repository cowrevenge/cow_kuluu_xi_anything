/* f_0x10207270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10207270(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10207316;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10207353;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2d8u));
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2c4u));
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2b0u));
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e288u));
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e274u));
    t12 = g->edx;
    g->edx = t12;
    cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t13 = g->edx;
    g->eax = rd32(COW_IMG(0x10664420u));
    t14 = rd32(COW_IMG(0x10664420u));
    t15 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t14);
    t16 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    t17 = cow_call_regs(g, COW_IMG(0x101f7080u), t15, rd32(COW_IMG(0x10663740u)), t16, 0, 2, t16, 0u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_10207316: ;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = in_edx;
    t19 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0;
    t20 = cow_thiscall(g, COW_IMG(0x101f2600u), t19, 0);
    t21 = g->ecx;
    t22 = g->edx;
    g->edx = t22;
    g->esp = sp0 - 0x10u;
    t23 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x32u);
    t24 = g->edx;
    g->eax = arg4;
    g->edx = t24;
    t25 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0;
    t26 = cow_thiscall(g, COW_IMG(0x10210e30u), t25, 7, COW_IMG(0x102071e0u), arg4, t23, 0u, 0u, 1u, 0u);
    t27 = g->ecx;
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x54u);
    t30 = g->edx;
    eax = t29;
    edx = t30;
L_10207353: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207270(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
