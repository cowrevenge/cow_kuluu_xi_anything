/* f_0x10107370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10107370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = arg3 + 4u;
    ecx = self;
L_10107385: ;
    t1 = rd8(eax);
    wr8(arg1 + eax - arg3 - 4u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10107385;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t1;
    if (rd8(arg1) == 0u)
    {
        esi = arg1;
        goto L_1010739d;
    }
    esi = arg1;
L_10107395: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10107395;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_1010739d: ;
    wr8(esi, 0x20u);
    wr8(esi + 1u, 0x20u);
    if ((rd8(arg3) & 4u) == 0u)
    {
        esi = esi + 2u;
        goto L_1010746b;
    }
    esi = esi + 2u;
    if ((rd32(arg3 + 0x30u) >> 8u & 0x40u) != 0u) goto L_1010746b;
    eax = rd32(arg3 + 0x30u);
    wr8(esi, 0x5bu);
    t2 = (eax & 0xffff0000u) | rd8(arg3 + 0x20u);
    g->eax = t2;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10107300u), 2, arg2, t2);
    t4 = g->ecx;
    eax = t3;
    ecx = t4;
    edx = esi + 1u;
    esi = esi + 1u;
L_101073d4: ;
    t5 = rd8(eax);
    wr8(edx, (uint8_t)t5);
    if ((uint8_t)t5 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t5;
        edx = edx + 1u;
        goto L_101073d4;
    }
    eax = eax + 1u;
    edx = edx + 1u;
    if (rd8(esi) == 0u) goto L_101073eb;
L_101073e3: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_101073e3;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_101073eb: ;
    t6 = rd8(arg3 + 0x22u);
    g->eax = eax;
    g->ecx = t6;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x1036be90u), t6, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (rd8(esi) == 0u)
    {
        eax = (t7 & 0xffffff00u) | rd8(esi);
        ecx = t8;
        edx = t9;
        goto L_1010740d;
    }
    eax = (t7 & 0xffffff00u) | rd8(esi);
    ecx = t8;
    edx = t9;
L_10107405: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10107405;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_1010740d: ;
    wr8(esi, 0x28u);
    t10 = (edx & 0xffff0000u) | rd8(arg3 + 0x1du);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10107320u), 2, arg2, t10);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    edx = esi + 1u;
    esi = esi + 1u;
L_10107422: ;
    t13 = rd8(eax);
    wr8(edx, (uint8_t)t13);
    if ((uint8_t)t13 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t13;
        edx = edx + 1u;
        goto L_10107422;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t13;
    edx = edx + 1u;
    if (rd8(esi) == 0u) goto L_10107439;
L_10107431: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10107431;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_10107439: ;
    wr8(esi, 0x2fu);
    t14 = (eax & 0xffff0000u) | rd8(arg3 + 0x1cu);
    g->eax = t14;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x101072b0u), 2, arg2, t14);
    t16 = g->ecx;
    eax = t15;
    ecx = t16;
    edx = esi + 1u;
    esi = esi + 1u;
L_1010744e: ;
    t17 = rd8(eax);
    wr8(edx, (uint8_t)t17);
    if ((uint8_t)t17 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t17;
        edx = edx + 1u;
        goto L_1010744e;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t17;
    edx = edx + 1u;
    if (rd8(esi) == 0u) goto L_10107465;
L_1010745d: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_1010745d;
    }
    esi = esi + 1u;
L_10107465: ;
    wr8(esi, 0x29u);
    esi = esi + 1u;
L_10107494: ;
    if ((rd32(arg3 + 0x30u) & 0xffffbfffu) != 0u)
    {
        wr8(esi, 0x3cu);
        if (!(rd32(arg3 + 0x30u) >> 8u & 1u))
        {
            esi = esi + 1u;
        }
        else
        {
            esi = esi + 1u;
            wr8(esi, 0x5au);
            esi = esi + 1u;
        }
        if ((rd32(arg3 + 0x30u) >> 8u & 2u) != 0u)
        {
            wr8(esi, 0x52u);
            esi = esi + 1u;
        }
        if ((rd32(arg3 + 0x30u) >> 8u & 4u) != 0u)
        {
            wr8(esi, 0x4fu);
            esi = esi + 1u;
        }
        if ((rd32(arg3 + 0x30u) >> 8u & 8u) != 0u)
        {
            wr8(esi, 0x44u);
            esi = esi + 1u;
        }
        if ((rd32(arg3 + 0x30u) >> 8u & 0x10u) != 0u)
        {
            wr8(esi, 0x45u);
            esi = esi + 1u;
        }
        if ((rd32(arg3 + 0x30u) >> 8u & 0x20u) != 0u)
        {
            wr8(esi, 0x50u);
            esi = esi + 1u;
        }
        if ((int8_t)(rd32(arg3 + 0x30u) >> 8u) < 0)
        {
            wr8(esi, 0x4du);
            esi = esi + 1u;
        }
        if ((rd8(arg3 + 0x30u) & 0x10u) != 0u)
        {
            wr8(esi, 0x55u);
            esi = esi + 1u;
        }
        if (rd8(arg3 + 0x30u) & 1u)
        {
            wr8(esi, 0x48u);
            esi = esi + 1u;
        }
        if ((rd32(arg3 + 0x30u) & 0x10000000u) != 0u)
        {
            wr8(esi, 0x59u);
            esi = esi + 1u;
        }
        if ((rd32(arg3 + 0x30u) & 0x20000000u) != 0u)
        {
            wr8(esi, 0x4cu);
            esi = esi + 1u;
        }
        wr8(esi, 0x3eu);
        esi = esi + 1u;
    }
    if ((rd32(arg3) >> 8u & 0x20u) != 0u)
    {
        t20 = rd8(arg3 + 0x38u);
        g->eax = t20;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t21 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x1036be7cu), t20, in_edi, in_esi);
        t22 = g->edx;
        if (rd8(esi) == 0u)
        {
            eax = (t21 & 0xffffff00u) | rd8(esi);
            edx = t22;
            goto L_10107553;
        }
        eax = (t21 & 0xffffff00u) | rd8(esi);
        edx = t22;
L_1010754b: ;
        if (rd8(esi + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
            goto L_1010754b;
        }
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
L_10107553: ;
        t23 = rd8(arg3 + 0x39u);
        g->eax = eax;
        g->ecx = t23;
        g->esp = sp0 - 8u;
        t24 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x1036be74u), t23, in_edi, in_esi);
        t25 = g->ecx;
        if (rd8(esi) == 0u)
        {
            eax = (t24 & 0xffffff00u) | rd8(esi);
            ecx = t25;
            goto L_10107575;
        }
        eax = (t24 & 0xffffff00u) | rd8(esi);
        ecx = t25;
L_1010756d: ;
        if (rd8(esi + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
            goto L_1010756d;
        }
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
L_10107575: ;
        t26 = rd8(arg3 + 0x3au);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t26;
        g->esp = sp0 - 8u;
        t27 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x1036be6cu), t26, in_edi, in_esi);
        t28 = g->ecx;
        t29 = g->edx;
        if (rd8(esi) == 0u)
        {
            ecx = t28;
            edx = t29;
            goto L_10107597;
        }
        eax = (t27 & 0xffffff00u) | rd8(esi);
        ecx = t28;
        edx = t29;
L_1010758f: ;
        if (rd8(esi + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
            goto L_1010758f;
        }
        esi = esi + 1u;
    }
L_10107597: ;
    if (rd32(arg3 + 0x18u) == 0u)
    {
        eax = rd32(arg3 + 0x18u);
    }
    else
    {
        eax = rd32(arg3 + 0x18u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t30 = cow_cdecl(g, COW_IMG(0x10312031u), 5, esi, COW_IMG(0x1036be64u), eax, in_edi, in_esi);
        t31 = g->ecx;
        t32 = g->edx;
        if (rd8(esi) == 0u)
        {
            eax = (t30 & 0xffffff00u) | rd8(esi);
            ecx = t31;
            edx = t32;
            goto L_101075bb;
        }
        eax = (t30 & 0xffffff00u) | rd8(esi);
        ecx = t31;
        edx = t32;
L_101075b3: ;
        if (rd8(esi + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
            goto L_101075b3;
        }
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
    }
L_101075bb: ;
    wr8(esi, 0x20u);
    wr8(esi + 1u, 0x3au);
    t33 = (arg3 & 0xffff0000u) | rd16(arg3 + 0x28u);
    g->edi = t33;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t34 = cow_cdecl(g, COW_IMG(0x10107120u), 3, 0u, 0u, t33);
    t35 = g->ecx;
    t36 = g->edx;
    if (t34 == 0u)
    {
        eax = t34;
        ecx = t35;
        edx = t36;
        esi = esi + 2u;
        edi = t33;
        goto L_101075eb;
    }
    eax = t34;
    ecx = t35;
    esi = esi + 2u;
    esi = esi - eax;
L_101075da: ;
    t37 = rd8(eax);
    wr8(eax + esi, (uint8_t)t37);
    if ((uint8_t)t37 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t37;
        goto L_101075da;
    }
    g->edi = in_edi;
    return arg1;
L_1010746b: ;
    wr32(esi, rd32(COW_IMG(0x1036be84u)));
    t18 = rd32(COW_IMG(0x1036be88u));
    wr32(esi + 4u, t18);
    t19 = rd32(COW_IMG(0x1036be8cu));
    wr32(esi + 8u, t19);
    if (rd8(esi) == 0u)
    {
        ecx = esi;
        edx = t19;
        goto L_10107494;
    }
    eax = (t18 & 0xffffff00u) | rd8(esi);
    ecx = esi;
    edx = t19;
L_1010748c: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_1010748c;
    }
    esi = esi + 1u;
    goto L_10107494;
L_101075eb: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t38 = cow_cdecl(g, COW_IMG(0x10107340u), 2, arg2, edi);
    t39 = g->ecx;
    eax = t38;
    ecx = t39;
L_101075f5: ;
    t40 = rd8(eax);
    wr8(esi, (uint8_t)t40);
    if ((uint8_t)t40 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t40;
        esi = esi + 1u;
        goto L_101075f5;
    }
    g->edi = in_edi;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10107370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
