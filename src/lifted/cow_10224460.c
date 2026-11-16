/* f_0x10224460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10224460(Guest* g)
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x68u) != 0u)
    {
        eax = rd32(self + 0x68u);
        goto L_1022454c;
    }
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        ecx = rd32(self + 0x40u);
        goto L_1022452b;
    }
    ecx = rd32(self + 0x40u);
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_102244e2;
    if ((uint32_t)(int16_t)arg1 - 6u == 2u) goto L_1022449e;
    g->eax = arg2;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1022449e: ;
    if ((int32_t)ecx <= 0)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = arg1;
        goto L_102245e7;
    }
    if (rd8(self + 0xd1u) != 1u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = arg1;
        goto L_102245e7;
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102211b0u), rd32(COW_IMG(0x105781f8u)) + 0x20u, 1, 2u);
    t3 = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
    g->eax = t3;
    t4 = rd32(COW_IMG(0x10667144u));
    t5 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t4, 2, t3, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037e90u), t6, 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_102244e2: ;
    t10 = rd32(self + 8u);
    g->edx = arg1;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 6u, COW_IMG(0x10621838u), g->edx, 0, 2, t10, 1u);
    t11 = g->edx;
    if (rd8(COW_IMG(0x10386159u) + rd32(self + 0x64u) * 3u) == 0u)
    {
        eax = rd32(self + 0x64u);
        edx = t11;
        goto L_102245e7;
    }
    eax = rd32(self + 0x64u);
    ecx = rd8(COW_IMG(0x10386159u) + rd32(self + 0x64u) * 3u);
    edx = t11;
    if (eax == 0x14u) goto L_102245e7;
    t12 = (edx & 0xffffff00u) | rd8(self + 0xd2u);
    t13 = (eax & 0xffffff00u) | rd8(self + 0xd1u);
    g->eax = t13;
    g->edx = t12;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, ecx, t13, t12);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1022452b: ;
    if ((int32_t)ecx <= 0)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
        edx = arg1;
        goto L_102245e7;
    }
    g->ebx = 0u;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x102241a0u), self, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_102245e2;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t20 = g->edx;
    g->ebx = in_ebx;
    g->edx = t20;
    return t19;
L_1022454c: ;
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_102245ac;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10224569;
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t22 = g->edx;
    g->ebx = in_ebx;
    g->edx = t22;
    return t21;
L_10224569: ;
    if (eax != 2u) goto L_10224580;
    wr32(self + 0x68u, 1u);
    wr8(self + 0xd0u, 0u);
    g->ebx = in_ebx;
    g->edx = arg1;
    return eax;
L_10224580: ;
    g->edx = rd32(COW_IMG(0x105781f8u));
    t23 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102211b0u), t23 + 0x20u, 1, 2u);
    t24 = g->edx;
    t25 = rd32(rd32(COW_IMG(0x10667144u)) + 8u);
    g->eax = rd32(COW_IMG(0x10667144u));
    t26 = rd32(COW_IMG(0x10667144u));
    t27 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t24, 2, t25, 0u);
    t28 = g->edx;
    wr32(self + 0x68u, 0u);
    g->ebx = in_ebx;
    g->edx = t28;
    return t27;
L_102245ac: ;
    if (eax != 1u) goto L_102245ce;
    t29 = rd32(self + 0x30u);
    wr32(self + 0x68u, 2u);
    wr32(self + 0x6cu, t29);
    wr8(self + 0xd0u, 0u);
    g->eax = eax;
    g->edx = t29;
    g->esp = sp0 - 8u;
    t30 = cow_thiscall(g, COW_IMG(0x10037b90u), (uint32_t)(int16_t)arg1 - 5u, 0);
    t31 = g->edx;
    g->ebx = in_ebx;
    g->edx = t31;
    return t30;
L_102245ce: ;
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall(g, COW_IMG(0x10224320u), self, 0);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(self + 0x68u, 1u);
    wr8(self + 0xd0u, 0u);
    eax = t32;
    ecx = t33;
    edx = t34;
L_102245e2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t35 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t36 = g->edx;
    eax = t35;
    edx = t36;
L_102245e7: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10224460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10224460(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
