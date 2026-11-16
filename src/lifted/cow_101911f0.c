/* f_0x101911f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101911f0(Guest* g)
{
    double d50;
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
    uint32_t t37;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x18u) == 0u) goto L_1019140c;
    ecx = rd32(self + 0x18u);
    if (arg1 - 1u > 0xcu) goto L_101913ff;
    t1 = rd32(COW_IMG(0x10191414u) + arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10191216u: goto L_10191216;
    case 0x10191256u: goto L_10191256;
    case 0x10191280u: goto L_10191280;
    case 0x101912afu: eax = arg1 - 1u; edx = in_edx; goto L_101912af;
    case 0x101912b9u: goto L_101912b9;
    case 0x101912ceu: goto L_101912ce;
    case 0x101912f1u: goto L_101912f1;
    case 0x10191300u: goto L_10191300;
    case 0x1019132au: goto L_1019132a;
    case 0x10191339u: goto L_10191339;
    case 0x1019134du: goto L_1019134d;
    case 0x10191379u: goto L_10191379;
    case 0x1019139au: goto L_1019139a;
    default: rt_fatal(g, COW_IMG(0x1019120fu), "switch");
    }
    return;
L_10191216: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = arg1 - 1u;
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = in_edx;
        goto L_101912af;
    }
    if (rd32(COW_IMG(0x10662788u)) == 0u)
    {
        eax = arg1 - 1u;
        ecx = rd32(COW_IMG(0x10662788u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662788u));
        if (rd32(ecx + 8u) == 0u)
        {
            eax = rd32(ecx + 8u);
        }
        else
        {
            eax = rd32(ecx + 8u);
            t49 = rd32(eax + 0x34u) & 0xfffffffeu;
            wr32(eax + 0x34u, t49);
            ecx = rd32(COW_IMG(0x10662788u));
        }
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015dbb0u), COW_IMG(0x10621838u), 2, ecx, 0u);
    return;
L_10191256: ;
    t40 = rd32(ecx + 0xf10cu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t41 = cow_thiscall(g, COW_IMG(0x101918c0u), self, 2, 0xeu, t40);
    t42 = g->ecx;
    t43 = g->edx;
    if ((int32_t)t41 < 0)
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        goto L_101912af;
    }
    eax = t41;
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x18u));
    t44 = rd32(self + 0x18u);
    t45 = rd32(rd32(self + 0x18u));
    g->esp = sp0 - 8u;
    t46 = cow_thiscall(g, rd32(t45 + 4u), t44, 3, 2u, 0u, 0u);
    t47 = g->ecx;
    t48 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t47, 0);
    return;
L_10191280: ;
    g->eax = rd32(ecx);
    g->edx = in_edx;
    t32 = rd32(ecx);
    g->esp = sp0 - 8u;
    t33 = cow_thiscall(g, rd32(t32 + 0x20u), ecx, 0);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        goto L_101912af;
    }
    eax = t33;
    edx = t35;
    if (rd32(rd32(self + 0x18u) + 0xf10cu) != 0u)
    {
        ecx = rd32(self + 0x18u);
        goto L_101912af;
    }
    ecx = rd32(self + 0x18u);
    wr32(self + 8u, 2u);
    g->eax = eax;
    g->edx = rd32(ecx);
    t36 = rd32(ecx);
    g->esp = sp0 - 8u;
    t37 = cow_thiscall(g, rd32(t36 + 4u), ecx, 3, 3u, 0x79u, 0u);
    t38 = g->ecx;
    t39 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t38, 0);
    return;
L_101912af: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    d50 = cow_take_float(g);
    fpush(g, d50);
    return;
L_101912b9: ;
    t23 = rd32(ecx + 0xf10cu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, COW_IMG(0x101918c0u), self, 2, 0xfu, t23);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
L_1019135b: ;
    if ((int32_t)eax < 0) goto L_101912af;
    g->eax = rd32(rd32(self + 0x18u));
    g->edx = edx;
    t27 = rd32(rd32(self + 0x18u));
    t28 = rd32(self + 0x18u);
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, rd32(t27 + 4u), t28, 3, 2u, 0u, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t30, 0);
    return;
L_101912ce: ;
    if (rd32(ecx + 0xf10cu) != 0u)
    {
        eax = arg1 - 1u;
        edx = in_edx;
        goto L_101912af;
    }
    wr32(self + 8u, 3u);
    g->eax = arg1 - 1u;
    g->edx = rd32(ecx);
    t19 = rd32(ecx);
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, rd32(t19 + 4u), ecx, 3, 3u, 0xfu, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t21, 0);
    return;
L_101912f1: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 1u, 0u);
    return;
L_10191300: ;
    t10 = rd32(ecx + 0xf10cu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x101918c0u), self, 2, 0x10u, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_101912af;
    }
    eax = t11;
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x18u));
    t14 = rd32(self + 0x18u);
    t15 = rd32(rd32(self + 0x18u));
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, rd32(t15 + 4u), t14, 3, 2u, 0u, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t17, 0);
    return;
L_1019132a: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 0xeu, 0u);
    return;
L_10191339: ;
    wr32(self + 8u, 0u);
    wr32(self + 0x20u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 8u, 0u, 0u);
    return;
L_1019134d: ;
    t6 = rd32(ecx + 0xf10cu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x10191930u), self, 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    goto L_1019135b;
L_10191379: ;
    g->eax = arg1 - 1u;
    g->edx = rd32(ecx);
    t3 = rd32(ecx);
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, rd32(t3 + 0x20u), ecx, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        wr32(self + 8u, 0u);
        wr32(self + 0x20u, 0u);
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x18u)) + 4u), rd32(self + 0x18u), 3, 3u, 0x1cu, 0u);
    return;
L_1019139a: ;
    if (rd32(self + 0x24u) != 3u)
    {
        eax = rd32(self + 0x24u);
        if (eax != 6u)
        {
            if (eax != 9u)
            {
                if (eax == 0xcu)
                {
                    wr32(self + 0x14u, 0xau);
                }
            }
            else
            {
                wr32(self + 0x14u, 7u);
            }
        }
        else
        {
            wr32(self + 0x14u, 4u);
        }
    }
    else
    {
        eax = rd32(self + 0x24u);
        wr32(self + 0x14u, 1u);
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10379908u));
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798f4u), 1u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0x20u, 0u);
    return;
L_101913ff: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x101908d0u), 0);
L_1019140c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101911f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101911f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
