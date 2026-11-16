/* f_0x101e0340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101e0340(Guest* g)
{
    double d31;
    double d37;
    double d52;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)(int16_t)arg2 == 5u) goto L_101e03e6;
    if ((uint32_t)(int16_t)arg2 == 6u) goto L_101e0395;
    if ((uint32_t)(int16_t)arg2 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 8u;
        edx = in_edx;
        goto L_101e0558;
    }
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(self + 0x10u);
        edx = in_edx;
        goto L_101e0558;
    }
    if ((int32_t)rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u) >= 0)
    {
        eax = rd32(COW_IMG(0x1066349cu));
        edx = in_edx;
        goto L_101e0558;
    }
    eax = rd32(COW_IMG(0x1066349cu));
    t1 = rd32(eax + 8u);
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10037e90u), t3, 0);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_101e0395: ;
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
        ecx = rd32(COW_IMG(0x1066349cu));
        goto L_101e03b5;
    }
    eax = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
    ecx = rd32(COW_IMG(0x1066349cu));
    if ((int32_t)eax >= 0) goto L_101e03bd;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x101df160u), ecx, 0);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_101e03b5: ;
    if ((int32_t)eax < 0)
    {
        edx = in_edx;
        goto L_101e0558;
    }
L_101e03bd: ;
    wr32(ecx + 0x50u, 0xffffffffu);
    t9 = rd32(rd32(COW_IMG(0x1066349cu)) + 8u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t9, 2, t9, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10037bf0u), t11, 0);
    t14 = g->edx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_101e03e6: ;
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = arg1;
        ecx = (uint32_t)(int16_t)arg3;
        edx = rd32(arg1 + 0x38u);
        goto L_101e0411;
    }
    edx = rd32(arg1 + 0x38u);
    if ((int16_t)arg3 >= (int16_t)rd16(arg1 + 0x20u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
        ecx = (uint32_t)(int16_t)arg3;
        goto L_101e0411;
    }
    if (edx + (uint32_t)(int16_t)arg3 * 0x54u != 0u)
    {
        esi = edx + (uint32_t)(int16_t)arg3 * 0x54u;
        goto L_101e041d;
    }
    eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
    ecx = (uint32_t)(int16_t)arg3 * 0x15u;
L_101e0411: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t50 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t51 = g->edx;
    d52 = cow_take_float(g);
    g->esi = in_esi;
    g->edx = t51;
    fpush(g, d52);
    return (t50 & 0xffffff00u) | 1u;
L_101e041d: ;
    if (rd32(esi + 0x48u) != 0xfffffffeu)
    {
        eax = rd32(esi + 0x48u);
        goto L_101e045f;
    }
    eax = rd32(esi + 0x48u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe4u);
    t16 = rd8(self + 0x1cu);
    g->edx = t16;
    t17 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10210e30u), t17, 7, COW_IMG(0x101e0560u), t16, t15, 0u, 0u, 1u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x10037b90u), t19, 0);
    t22 = g->edx;
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
L_101e045f: ;
    if (eax != 0xffffffffu) goto L_101e048f;
    wr32(rd32(COW_IMG(0x106634a8u)) + 0x14u, 0u);
    g->edx = edx;
    t23 = rd32(COW_IMG(0x106634a8u));
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f234u), 1u, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10037b90u), t25, 0);
    t28 = g->edx;
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
L_101e048f: ;
    if (eax != 0u) goto L_101e049f;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, COW_IMG(0x10037c50u), (uint32_t)(int16_t)arg3 * 0x15u, 0);
    t30 = g->edx;
    d31 = cow_take_float(g);
    g->edx = t30;
    fpush(g, d31);
    return (t29 & 0xffffff00u) | 1u;
L_101e049f: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall(g, COW_IMG(0x101f4b60u), esi, 1, 1u);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 != 0x80404040u) goto L_101e04bb;
    eax = t32;
    ecx = t33;
    edx = t34;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t35 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t36 = g->edx;
    d37 = cow_take_float(g);
    g->edx = t36;
    fpush(g, d37);
    return (t35 & 0xffffff00u) | 1u;
L_101e04bb: ;
    if ((int32_t)rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u) < 0)
    {
        edx = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
        goto L_101e0525;
    }
    eax = rd32(COW_IMG(0x1066349cu));
    edx = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
    if (rd32(eax + 0x38u) == 0u) goto L_101e04ee;
    ecx = rd32(eax + 0x38u);
    if ((int32_t)edx >= (int16_t)rd16(eax + 0x20u)) goto L_101e04ee;
    if (ecx + edx * 0x54u == 0u) goto L_101e04ee;
    eax = ecx + edx * 0x54u;
    eax = rd32(eax + 0x48u);
L_101e04f0: ;
    t38 = ((-((uint8_t)((uint8_t)eax - 1u) - (rd32(esi + 0x48u) - 1u)) & 0xffffff00u) | (uint8_t)-((uint8_t)((uint8_t)eax - 1u) != rd32(esi + 0x48u) - 1u)) & rd32(esi + 0x48u) - 1u;
    t39 = (rd32(esi + 0x48u) - 1u & 0xffffff00u) | rd8(self + 0x1cu);
    g->esi = esi;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fcf80u), 4, t39, 0x1000u, edx, t38);
    t40 = rd32(COW_IMG(0x1066349cu));
    wr32(t40 + 0x50u, 0xffffffffu);
    edx = t40;
L_101e053e: ;
    t43 = rd32(rd32(COW_IMG(0x1066349cu)) + 8u);
    g->eax = rd32(COW_IMG(0x1066349cu));
    t44 = rd32(COW_IMG(0x1066349cu));
    g->esp = sp0 - 8u;
    t45 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t43, 0u);
    t46 = g->ecx;
    t47 = g->edx;
    g->edx = t47;
    t48 = cow_thiscall(g, COW_IMG(0x10037b90u), t46, 0);
    t49 = g->edx;
    eax = t48;
    edx = t49;
L_101e0558: ;
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101e04ee: ;
    eax = 0u;
    goto L_101e04f0;
L_101e0525: ;
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(self + 0x10u);
        goto L_101e0558;
    }
    t41 = rd32(esi + 0x48u) - 1u;
    wr32(self + 0x10u, t41);
    t42 = rd32(COW_IMG(0x1066349cu));
    wr32(t42 + 0x54u, t41);
    edx = t42;
    goto L_101e053e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0340(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
