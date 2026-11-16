/* f_0x10130e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10130e40(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10130ef8;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10130eb5;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_10130f54;
    }
    if (rd8(self + 4u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 8u & 0xffffff00u) | rd8(self + 4u);
        edx = in_edx;
        goto L_10130f54;
    }
    if (rd32(rd32(COW_IMG(0x105781b8u)) + 0x1cu) != 1u)
    {
        eax = rd32(COW_IMG(0x105781b8u));
        edx = in_edx;
        goto L_10130f54;
    }
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e34u)), 4, 0xffffu, 2u, 0x12u, 0u);
    wr32(rd32(COW_IMG(0x105781b8u)) + 0x1cu, 2u);
    t1 = rd32(rd32(COW_IMG(0x105781b8u)) + 8u);
    g->eax = t1;
    t2 = rd32(COW_IMG(0x105781b8u));
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t2, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10130eb5: ;
    if (rd32(rd32(COW_IMG(0x105781b8u)) + 0x1cu) != 1u) goto L_10130ec9;
    ecx = rd32(COW_IMG(0x105781b8u));
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10134760u), ecx, 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10130ec9: ;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e34u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t11 = rd32(rd32(COW_IMG(0x105781b8u)) + 8u);
    t12 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t11, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10130ef8: ;
    if (rd32(rd32(COW_IMG(0x105781b8u)) + 0x1cu) != 1u)
    {
        edx = rd32(COW_IMG(0x105781b8u));
        goto L_10130f57;
    }
    edx = rd32(COW_IMG(0x105781b8u));
    wr8(self + 4u, 1u);
    t14 = rd8(arg4 + 2u);
    wr32(self + 0x10u, arg4);
    wr8(self + 5u, (uint8_t)t14);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, rd16(arg4));
    t16 = g->edx;
    g->edx = t16;
    t17 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x101316a0u), t17, 3, arg4, t15, 2u);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
L_10130f39: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t26 = g->edx;
    edx = t26;
L_10130f3e: ;
    t27 = rd32(rd32(COW_IMG(0x105781b8u)) + 8u);
    g->eax = rd32(COW_IMG(0x105781b8u));
    t28 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 4u;
    t29 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t27, 0u);
    t30 = g->edx;
    eax = t29;
    edx = t30;
L_10130f54: ;
    g->edx = edx;
    return eax;
L_10130f57: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e34u)), 4, 0xffffu, 2u, 0x12u, 0u);
    g->edx = arg4;
    t21 = rd32(COW_IMG(0x105781b8u));
    t22 = cow_thiscall(g, COW_IMG(0x10133410u), t21, 1, arg4);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_10130f39;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t25 = g->edx;
    edx = t25;
    goto L_10130f3e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130e40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10130e40(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
