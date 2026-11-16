/* f_0x1022aaa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1022aaa0(Guest* g)
{
    double d36;
    double d37;
    double d38;
    double d39;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x88u) == 1u) goto L_1022ac34;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x88u);
    if ((uint8_t)eax == 2u) goto L_1022ac34;
    if (rd32(self + 0x90u) > 3u)
    {
        eax = rd32(self + 0x90u);
        edx = in_edx;
        goto L_1022ac45;
    }
    eax = rd32(self + 0x90u);
    t1 = rd32(COW_IMG(0x1022ac4cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1022aad0u: goto L_1022aad0;
    case 0x1022ab00u: goto L_1022ab00;
    case 0x1022ab53u: goto L_1022ab53;
    case 0x1022abfeu: goto L_1022abfe;
    default: rt_fatal(g, COW_IMG(0x1022aac9u), "switch");
    }
    return 0;
L_1022aad0: ;
    if ((uint16_t)arg1 != 6u)
    {
        edx = in_edx;
        goto L_1022ac45;
    }
    g->eax = rd32(COW_IMG(0x105781f8u));
    g->edx = in_edx;
    t40 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 8u;
    t41 = cow_thiscall(g, COW_IMG(0x10221300u), t40 + 0x20u, 1, 1u);
    t42 = g->edx;
    t43 = rd32(self + 8u);
    g->edx = t42;
    t44 = cow_call_regs(g, COW_IMG(0x1015e790u), t41, COW_IMG(0x10621838u), g->edx, 0, 2, t43, 1u);
    t45 = g->edx;
    g->edx = t45;
    return t44;
L_1022ab00: ;
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1022ab36;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_1022ab21;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t28 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_1022ab21: ;
    t30 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t31 = cow_call_regs(g, COW_IMG(0x1015e790u), t30, COW_IMG(0x10621838u), g->edx, 0, 2, t30, 1u);
    t32 = g->edx;
    g->edx = t32;
    return t31;
L_1022ab36: ;
    t33 = rd32(self + 0x30u);
    wr32(self + 0x74u, t33);
    g->esp = sp0 - 8u;
    t34 = cow_call_regs(g, COW_IMG(0x1022a360u), t33, self, in_edx, 0, 1, t33);
    t35 = g->edx;
    d36 = cow_take_float(g);
    d37 = cow_take_float(g);
    d38 = cow_take_float(g);
    d39 = cow_take_float(g);
    wr32(self + 0x90u, 2u);
    g->edx = t35;
    fpush(g, d36);
    fpush(g, d37);
    fpush(g, d38);
    fpush(g, d39);
    return t34;
L_1022ab53: ;
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1022ab95;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_1022ab74;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1022ab74: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1022a2d0u), (uint32_t)(int16_t)arg1 - 6u, self, in_edx, 1, 0);
    t8 = g->edx;
    t9 = rd32(self + 0x74u);
    g->eax = t9;
    g->edx = t8;
    t10 = cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, t9);
    t11 = g->edx;
    wr32(self + 0x90u, 1u);
    g->edx = t11;
    return t10;
L_1022ab95: ;
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        edx = in_edx;
        goto L_1022ac45;
    }
    eax = rd32(self + 0x40u);
    t12 = rd32(self + 0x30u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x1022a7d0u), self, 1, t12);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 < 0)
    {
        eax = t13;
        edx = t15;
        goto L_1022ac45;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    edi = t13;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x1022b010u), ecx, 1, edi);
    t17 = g->edx;
    if (t16 != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_1022abf4;
    }
    eax = t16;
    edx = t17;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10221c30u), self, 0);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10221c50u), self, 0);
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103868e8u), 1u, 0u);
    t23 = g->edx;
    t24 = cow_fastcall(g, COW_IMG(0x1022adb0u), rd32(COW_IMG(0x106671d8u)), t23, 1, edi);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_1022abf4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x1022a7b0u), self, 0);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_1022abfe: ;
    if (rd8(self + 0x89u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x89u);
        edx = in_edx;
        goto L_1022ac45;
    }
    if ((int16_t)arg1 < 5)
    {
        eax = (uint32_t)(int16_t)arg1;
        edx = in_edx;
        goto L_1022ac45;
    }
    if ((int16_t)arg1 > 6)
    {
        eax = (uint32_t)(int16_t)arg1;
        edx = in_edx;
        goto L_1022ac45;
    }
    g->eax = (uint32_t)(int16_t)arg1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10221c60u), self, 0);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x10221cb0u), self, t3, 0);
    t5 = g->edx;
    wr32(self + 0x90u, 2u);
    g->edx = t5;
    return t4;
L_1022ac34: ;
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t46 = cow_thiscall(g, COW_IMG(0x1022aa40u), self, 2, arg1, arg2);
    t47 = g->edx;
    eax = t46;
    edx = t47;
L_1022ac45: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022aaa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022aaa0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
