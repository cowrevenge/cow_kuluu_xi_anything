/* f_0x1002ce20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1002ce20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_c;
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
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if (rd32(self + 0x34u) == 0u)
    {
        wr32(sp0 - 0x20u, 0u);
        loc_20 = 0u;
    }
    else
    {
        eax = rd32(self + 0x34u);
        wr32(sp0 - 0x20u, rd32(eax));
        loc_20 = rd32(eax);
    }
    t1 = rd32(self + 0x5cu);
    wr32(sp0 - 0x18u, t1);
    if (rd32(self + 0x40u) != 0u)
    {
        ecx = t1;
        loc_18 = t1;
        goto L_1002ce58;
    }
    eax = rd32(self + 0x40u);
L_1002ce4c: ;
    return (eax & 0xffffff00u) | 1u;
L_1002ce58: ;
    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        goto L_1002d2b2;
    }
    eax = rd32(self + 0x3cu);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1002ce4c;
    }
    t2 = rd32(COW_IMG(0x103290f8u));
    wr32(self + 0x8au, 0u);
    edi = t2;
L_1002ce72: ;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, sp0 - 4u);
    t3 = rd32(self + 0x58u) * 2u;
    wr32(sp0 - 0x3cu, t3);
    wr32(sp0 - 0x40u, 0u);
    t4 = rd32(self + 0x40u);
    wr32(sp0 - 0x44u, t4);
    g->eax = t4;
    g->edx = rd32(rd32(self + 0x40u));
    t5 = rd32(rd32(self + 0x40u));
    g->esp = sp0 - 0x30u;
    t6 = cow_thiscall(g, rd32(t5 + 0x2cu), t3, 5, t4, 0u, t3, sp0 - 4u, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u) goto L_1002ce91;
    eax = t6;
    ecx = t7;
    edx = t8;
    wr32(sp0 - 0x34u, 0u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, edi, ecx, 1, 0u);
    goto L_1002ce72;
L_1002ce91: ;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, sp0 - 8u);
    t9 = rd32(self + 0x58u) << 3u;
    wr32(sp0 - 0x3cu, t9);
    wr32(sp0 - 0x40u, 0u);
    t10 = rd32(self + 0x4cu);
    wr32(sp0 - 0x44u, t10);
    g->eax = t10;
    g->edx = rd32(rd32(self + 0x4cu));
    t11 = rd32(rd32(self + 0x4cu));
    g->esp = sp0 - 0x30u;
    t12 = cow_thiscall(g, rd32(t11 + 0x2cu), t9, 5, t10, 0u, t9, sp0 - 8u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u) goto L_1002ceb1;
    eax = t12;
    ecx = t13;
    edx = t14;
    wr32(sp0 - 0x34u, 0u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, edi, ecx, 1, 0u);
    goto L_1002ce91;
L_1002ceb1: ;
    t15 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t15);
    t16 = rd32(self + 0x82u) * 2u + rd32(sp0 - 4u);
    t17 = rd32(self + 0x82u);
    t18 = rd32(self + 0x7eu);
    wr32(sp0 + 4u, t16);
    if (rd16(t18) == 0xffffu)
    {
        ecx = t18;
        edx = t16;
        goto L_1002d251;
    }
    eax = (t17 & 0xffff0000u) | rd16(t18);
    ecx = t18;
    edx = t16;
    loc_1c = t15;
L_1002ceda: ;
    if ((int8_t)(eax >> 8u) >= 0)
    {
        t19 = (edx & 0xffff0000u) | rd16(ecx + 2u);
        wr32(sp0 - 0x10u, t19);
        if ((int32_t)(uint16_t)eax > 17235)
        {
            eax = (uint16_t)eax;
            edx = t19;
            loc_10 = t19;
            goto L_1002d05f;
        }
        edx = t19;
        zf = (uint16_t)eax == 0x4353u;
        eax = (uint16_t)eax;
        if (zf) goto L_1002d053;
        if (eax == 0x43u) goto L_1002d041;
        if (eax != 0x54u) goto L_1002d229;
        wr32(sp0 - 0x14u, ecx + 4u);
        wr32(sp0 - 0xcu, (uint32_t)(int16_t)edx);
        if ((int16_t)edx <= 0)
        {
            loc_c = (uint32_t)(int16_t)edx;
        }
        else
        {
            eax = (uint32_t)(int16_t)edx;
            ebp = ecx + 4u;
            loc_14 = ecx + 4u;
            loc_c = (uint32_t)(int16_t)edx;
            wr32(sp0 - 0x10u, eax);
            loc_10 = eax;
L_1002cf4f: ;
            ecx = ebp + 0xau;
            edx = 0u;
L_1002cf54: ;
            if (rd32(rd32(self + 0x7au) + rd16(ebp + edx * 2u) * 8u) != 0xffffffffu)
            {
                eax = rd16(ebp + edx * 2u);
                ebx = rd32(rd32(self + 0x7au) + rd16(ebp + edx * 2u) * 8u);
                edi = rd32(self + 0x7au) + rd16(ebp + edx * 2u) * 8u;
                goto L_1002cf6e;
            }
            eax = rd16(ebp + edx * 2u);
            ebx = rd32(rd32(self + 0x7au) + rd16(ebp + edx * 2u) * 8u);
            edi = rd32(self + 0x7au) + rd16(ebp + edx * 2u) * 8u;
            if (rd32(edi + 4u) == ebx) goto L_1002cfc7;
L_1002cf6e: ;
            if (ebx != rd32(ecx - 4u)) goto L_1002cf7c;
            if (rd32(edi + 4u) == rd32(ecx)) goto L_1002cfc7;
L_1002cf7c: ;
            if (rd32(self + 0x60u) < rd32(self + 0x58u))
            {
                edi = rd32(self + 0x60u);
                if (rd32(sp0 - 0x18u) != 0u)
                {
                    ebx = rd32(sp0 - 0x18u);
                    wr16(ebx + edi * 2u, (uint16_t)eax);
                    t20 = rd16(rd32(rd32(sp0 - 0x20u) + 0x42u));
                    t21 = rd32(self + 0x60u);
                    t22 = rd16(rd32(rd32(sp0 - 0x20u) + 0x42u) + 2u);
                    wr32(self + 0x60u, t21 + 1u);
                    eax = t20 + t21 + t22;
                    ebp = loc_14;
                }
            }
            else
            {
                wr32(self + 0x60u, 0u);
                eax = rd16(ebp + edx * 2u);
            }
L_1002cfc7: ;
            t23 = rd32(sp0 + 4u);
            wr16(t23, (uint16_t)eax);
            wr32(sp0 + 4u, t23 + 2u);
            t24 = rd32(self + 0x82u) + 1u;
            wr32(self + 0x82u, t24);
            t25 = rd32(ecx - 4u);
            wr32(eax * 8u + loc_1c, t25);
            wr32(eax * 8u + loc_1c + 4u, rd32(ecx));
            t26 = rd32(ecx - 4u);
            wr32(eax * 8u + rd32(self + 0x7au), t26);
            wr32(eax * 8u + rd32(self + 0x7au) + 4u, rd32(ecx));
            if ((int32_t)(edx + 1u) < 3)
            {
                ecx = ecx + 8u;
                edx = edx + 1u;
                goto L_1002cf54;
            }
            wr32(sp0 - 0x14u, ebp + 0x1eu);
            wr32(sp0 - 0x10u, loc_10 - 1u);
            if (loc_10 != 1u)
            {
                loc_10 = loc_10 - 1u;
                loc_14 = ebp + 0x1eu;
                ebp = ebp + 0x1eu;
                goto L_1002cf4f;
            }
        }
        eax = loc_c * 0x1eu + rd32(self + 0x7eu) + 4u;
        edx = loc_c * 0x1eu + 4u;
L_1002d220: ;
        edi = rd32(COW_IMG(0x103290f8u));
L_1002d226: ;
        wr32(self + 0x7eu, eax);
    }
    else
    {
        if ((eax >> 4u & 0xfu) == 0u)
        {
            wr32(self + 0x7eu, ecx + 0x12u);
        }
        else
        {
            eax = eax >> 4u & 0xfu;
            if (eax == 1u)
            {
                wr32(self + 0x7eu, ecx + 0x2eu);
            }
        }
    }
L_1002d229: ;
    t44 = rd32(self + 0x8au) + 1u;
    wr32(self + 0x8au, t44);
    if ((int32_t)t44 > 1000)
    {
        ecx = t44;
        goto L_1002d276;
    }
    eax = t44;
    if (rd16(rd32(self + 0x7eu)) != 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(self + 0x7eu));
        ecx = rd32(self + 0x7eu);
        goto L_1002ceda;
    }
    ecx = rd32(self + 0x7eu);
L_1002d251: ;
    if (rd32(self + 0x7au) != 0u)
    {
        eax = rd32(self + 0x7au);
        wr32(sp0 - 0x34u, eax);
        g->ecx = ecx;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t57 = g->ecx;
        wr32(self + 0x7au, 0u);
        ecx = t57;
    }
L_1002d264: ;
    t58 = rd32(self + 0x40u);
    wr32(sp0 - 0x34u, t58);
    g->eax = t58;
    g->edx = rd32(t58);
    t59 = rd32(t58);
    g->esp = sp0 - 0x30u;
    t60 = cow_thiscall(g, rd32(t59 + 0x30u), ecx, 1, t58);
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 == 0u)
    {
        edx = t62;
        goto L_1002d29c;
    }
    eax = t60;
    ecx = t61;
    edx = t62;
    wr32(sp0 - 0x34u, 0u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, edi, ecx, 1, 0u);
    t63 = g->ecx;
    ecx = t63;
    goto L_1002d264;
L_1002d041: ;
    t27 = ecx + (uint32_t)(int16_t)edx * 0xau + 4u;
    wr32(self + 0x7eu, t27);
    goto L_1002d229;
L_1002d053: ;
    eax = ecx + (uint32_t)(int16_t)edx * 2u + 0xcu;
    edx = (uint32_t)(int16_t)edx;
    goto L_1002d226;
L_1002d05f: ;
    if (eax != 0x5453u) goto L_1002d229;
    wr32(sp0 - 0xcu, ecx + 4u);
    edx = ecx + 0xeu;
    ebp = ecx + 4u;
    edi = 0u;
    loc_c = ecx + 4u;
L_1002d076: ;
    if (rd32(rd32(self + 0x7au) + rd16(ebp + edi * 2u) * 8u) != 0xffffffffu)
    {
        eax = rd16(ebp + edi * 2u);
        ecx = rd32(rd32(self + 0x7au) + rd16(ebp + edi * 2u) * 8u);
        ebx = rd32(self + 0x7au) + rd16(ebp + edi * 2u) * 8u;
        goto L_1002d090;
    }
    eax = rd16(ebp + edi * 2u);
    ecx = rd32(rd32(self + 0x7au) + rd16(ebp + edi * 2u) * 8u);
    ebx = rd32(self + 0x7au) + rd16(ebp + edi * 2u) * 8u;
    if (rd32(ebx + 4u) == ecx) goto L_1002d0e9;
L_1002d090: ;
    if (ecx != rd32(edx - 4u)) goto L_1002d09e;
    if (rd32(ebx + 4u) == rd32(edx)) goto L_1002d0e9;
L_1002d09e: ;
    if (rd32(self + 0x60u) < rd32(self + 0x58u))
    {
        ebx = rd32(self + 0x60u);
        if (rd32(sp0 - 0x18u) != 0u)
        {
            ecx = rd32(sp0 - 0x18u);
            wr16(ebx * 2u + ecx, (uint16_t)eax);
            t28 = rd16(rd32(rd32(sp0 - 0x20u) + 0x42u));
            t29 = rd32(self + 0x60u);
            t30 = rd16(rd32(rd32(sp0 - 0x20u) + 0x42u) + 2u);
            wr32(self + 0x60u, t29 + 1u);
            eax = t28 + t29 + t30;
            ebp = loc_c;
        }
    }
    else
    {
        wr32(self + 0x60u, 0u);
        eax = rd16(ebp + edi * 2u);
    }
L_1002d0e9: ;
    t31 = rd32(sp0 + 4u);
    wr16(t31, (uint16_t)eax);
    wr32(sp0 + 4u, t31 + 2u);
    t32 = rd32(self + 0x82u) + 1u;
    wr32(self + 0x82u, t32);
    t33 = rd32(edx - 4u);
    wr32(eax * 8u + loc_1c, t33);
    wr32(eax * 8u + loc_1c + 4u, rd32(edx));
    t34 = rd32(edx - 4u);
    wr32(eax * 8u + rd32(self + 0x7au), t34);
    wr32(eax * 8u + rd32(self + 0x7au) + 4u, rd32(edx));
    if ((int32_t)(edi + 1u) < 3)
    {
        edx = edx + 8u;
        edi = edi + 1u;
        goto L_1002d076;
    }
    edx = edx + 8u;
    if ((int16_t)loc_10 > 1)
    {
        eax = (uint32_t)(int16_t)loc_10;
        ecx = ebp + 0x1eu;
        wr32(sp0 - 0xcu, eax - 1u);
        ebx = rd32(sp0 + 4u);
        ebp = loc_1c;
        loc_c = eax - 1u;
L_1002d155: ;
        if (rd32(rd16(ecx) * 8u + rd32(self + 0x7au)) != 0xffffffffu)
        {
            eax = rd16(ecx);
            edx = rd16(ecx) * 8u + rd32(self + 0x7au);
            edi = rd32(rd16(ecx) * 8u + rd32(self + 0x7au));
            goto L_1002d16d;
        }
        eax = rd16(ecx);
        edx = rd16(ecx) * 8u + rd32(self + 0x7au);
        edi = rd32(rd16(ecx) * 8u + rd32(self + 0x7au));
        if (rd32(edx + 4u) == edi) goto L_1002d1c5;
L_1002d16d: ;
        if (edi != rd32(ecx + 2u)) goto L_1002d17c;
        if (rd32(edx + 4u) == rd32(ecx + 6u)) goto L_1002d1c5;
L_1002d17c: ;
        if (rd32(self + 0x60u) < rd32(self + 0x58u))
        {
            edx = rd32(self + 0x60u);
            if (rd32(sp0 - 0x18u) != 0u)
            {
                edi = rd32(sp0 - 0x18u);
                wr16(edi + edx * 2u, (uint16_t)eax);
                t35 = rd16(rd32(rd32(sp0 - 0x20u) + 0x42u));
                t36 = rd32(self + 0x60u);
                t37 = rd16(rd32(rd32(sp0 - 0x20u) + 0x42u) + 2u);
                wr32(self + 0x60u, t36 + 1u);
                eax = t35 + t36 + t37;
                ebp = loc_1c;
            }
        }
        else
        {
            wr32(self + 0x60u, 0u);
            eax = rd16(ecx);
        }
L_1002d1c5: ;
        wr16(ebx, (uint16_t)eax);
        t38 = rd32(self + 0x82u) + 1u;
        wr32(self + 0x82u, t38);
        t39 = rd32(ecx + 2u);
        wr32(eax * 8u + ebp, t39);
        t40 = rd32(ecx + 6u);
        wr32(eax * 8u + ebp + 4u, t40);
        t41 = rd32(ecx + 2u);
        wr32(eax * 8u + rd32(self + 0x7au), t41);
        t42 = rd32(ecx + 6u);
        t43 = rd32(self + 0x7au);
        wr32(eax * 8u + t43 + 4u, t42);
        wr32(sp0 - 0xcu, loc_c - 1u);
        if (loc_c != 1u)
        {
            ecx = ecx + 0xau;
            ebx = ebx + 2u;
            loc_c = loc_c - 1u;
            goto L_1002d155;
        }
        edx = t43;
        ebx = ebx + 2u;
        wr32(sp0 + 4u, ebx);
    }
    eax = (uint32_t)(int16_t)loc_10 * 0xau + rd32(self + 0x7eu) + 0x18u;
    goto L_1002d220;
L_1002d276: ;
    t45 = rd32(self + 0x40u);
    wr32(sp0 - 0x34u, t45);
    g->eax = t45;
    g->edx = rd32(t45);
    t46 = rd32(t45);
    g->esp = sp0 - 0x30u;
    t47 = cow_thiscall(g, rd32(t46 + 0x30u), ecx, 1, t45);
    t48 = g->ecx;
    t49 = g->edx;
    if (t47 == 0u)
    {
        edx = t49;
        goto L_1002d289;
    }
    eax = t47;
    ecx = t48;
    edx = t49;
    wr32(sp0 - 0x34u, 0u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, edi, ecx, 1, 0u);
    t50 = g->ecx;
    ecx = t50;
    goto L_1002d276;
L_1002d289: ;
    t51 = rd32(self + 0x4cu);
    wr32(sp0 - 0x34u, t51);
    g->eax = t51;
    g->edx = edx;
    t52 = rd32(t51);
    g->esp = sp0 - 0x30u;
    t53 = cow_thiscall(g, rd32(t52 + 0x30u), t52, 1, t51);
    t54 = g->ecx;
    t55 = g->edx;
    if (t53 == 0u)
    {
        eax = t53;
        goto L_1002d2f6;
    }
    eax = t53;
    ecx = t54;
    edx = t55;
    wr32(sp0 - 0x34u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, edi, ecx, 1, 0u);
    t56 = g->edx;
    edx = t56;
    goto L_1002d289;
L_1002d29c: ;
    t64 = rd32(self + 0x4cu);
    wr32(sp0 - 0x34u, t64);
    g->eax = t64;
    g->edx = edx;
    t65 = rd32(t64);
    g->esp = sp0 - 0x30u;
    t66 = cow_thiscall(g, rd32(t65 + 0x30u), t65, 1, t64);
    t67 = g->ecx;
    t68 = g->edx;
    if (t66 == 0u)
    {
        eax = t66;
        goto L_1002ce4c;
    }
    eax = t66;
    ecx = t67;
    edx = t68;
    wr32(sp0 - 0x34u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, edi, ecx, 1, 0u);
    t69 = g->edx;
    edx = t69;
    goto L_1002d29c;
L_1002d2b2: ;
    wr32(sp0 - 0x34u, 4u);
    t70 = rd32(self + 0x58u) << 3u;
    wr32(sp0 - 0x38u, t70);
    g->esp = sp0 - 0x30u;
    t71 = cow_call_regs(g, COW_IMG(0x10028640u), eax, ecx, t70, 1, 2, t70, 4u);
    t72 = rd32(self + 0x58u);
    wr32(self + 0x7au, t71);
    if (t72 * 2u == 0u) goto L_1002d2df;
    eax = 0u;
    ecx = t72 * 2u;
L_1002d2cf: ;
    wr32(eax * 4u + rd32(self + 0x7au), 0xffffffffu);
    if (eax + 1u < ecx)
    {
        eax = eax + 1u;
        goto L_1002d2cf;
    }
L_1002d2df: ;
    t73 = rd32(sp0 + 4u);
    wr32(self + 0x82u, 0u);
    wr32(self + 0x7eu, t73);
    t74 = rd32(self + 0x3cu);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x3cu, t74 + 1u);
    eax = t74 + 1u;
L_1002d2f6: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002ce20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002ce20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
