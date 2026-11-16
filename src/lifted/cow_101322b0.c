/* f_0x101322b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101322b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t pf;
    uint32_t sf;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 1u > 7u)
    {
        eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10132601;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 1u;
    ecx = rd32(sp0 + 4u);
    t1 = rd32(COW_IMG(0x10132608u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101322ceu: goto L_101322ce;
    case 0x10132486u: goto L_10132486;
    case 0x101324c6u: goto L_101324c6;
    case 0x101324f9u: goto L_101324f9;
    case 0x10132512u: goto L_10132512;
    case 0x10132601u: edx = in_edx; goto L_10132601;
    default: rt_fatal(g, COW_IMG(0x101322c7u), "switch");
    }
    return 0;
L_101322ce: ;
    if (rd32(self + 0x1cu) != 2u)
    {
        eax = rd32(self + 0x1cu);
        goto L_1013244a;
    }
    t32 = rd32(sp0 + 8u);
    g->eax = t32;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t32);
    t34 = g->edx;
    if ((int16_t)t33 < 0)
    {
        eax = t33;
        edx = t34;
        goto L_10132601;
    }
    eax = t33;
    edx = t34;
    edi = (uint32_t)(int16_t)t33;
    pf = PARITY((uint8_t)t33);
    zf = (uint32_t)(int16_t)t33 == 0u;
    sf = (int16_t)t33 < 0;
    g->eax = eax;
    g->ecx = edi;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_stdcall(g, COW_IMG(0x100fd350u), 0);
    t36 = g->ecx;
    t37 = g->edx;
    if ((1u << (edi & 0x1fu) & t35) == 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        esi = 1u << (edi & 0x1fu);
        goto L_1013230f;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t38 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t39 = g->edx;
    g->edi = in_edi;
    g->edx = t39;
    return t38;
L_1013230f: ;
    g->esp = sp0 - 0x10u;
    t40 = cow_call_regs(g, COW_IMG(0x10132270u), eax, g->ecx, edx, 1, 1, edi);
    t41 = g->edx;
    if (t40 > 0x10u)
    {
        edx = t41;
        goto L_1013236c;
    }
    eax = t40;
    edx = t41;
    t42 = rd32(COW_IMG(0x10132628u) + rd8(COW_IMG(0x10132650u) + eax) * 4u);
    switch (t42 - RD)
    {
    case 0x1013232cu: goto L_1013232c;
    case 0x10132334u: goto L_10132334;
    case 0x1013233cu: goto L_1013233c;
    case 0x10132344u: goto L_10132344;
    case 0x1013234cu: goto L_1013234c;
    case 0x10132354u: goto L_10132354;
    case 0x1013235cu: goto L_1013235c;
    case 0x10132364u: goto L_10132364;
    case 0x1013236cu: goto L_1013236c;
    case 0x1013236eu: goto L_1013236e;
    default: rt_fatal(g, COW_IMG(0x10132325u), "switch");
    }
    return 0;
L_1013232c: ;
    ecx = rd32(COW_IMG(0x10666e4cu));
L_10132374: ;
    if (ecx != 0u)
    {
        t43 = rd32(COW_IMG(0x10663740u));
        wr32(t43 + 0x60u, ecx);
        if (rd32(COW_IMG(0x105781b0u)) == 0u)
        {
            edx = t43;
        }
        else
        {
            ecx = rd32(COW_IMG(0x105781b0u));
            g->eax = eax;
            g->edx = rd32(ecx);
            t44 = rd32(ecx);
            g->esp = sp0 - 0x10u;
            t45 = cow_thiscall(g, rd32(t44 + 0x58u), ecx, 1, eax);
            t46 = g->edx;
            eax = t45;
            edx = t46;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t47 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e4cu)), 4, esi, 2u, 0x12u, 0u);
        t48 = g->edx;
        g->edx = t48;
        t49 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e50u)), 4, esi, 2u, 0x12u, 0u);
        t50 = g->edx;
        g->edx = t50;
        t51 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e54u)), 4, esi, 2u, 0x12u, 0u);
        t52 = g->edx;
        g->edx = t52;
        t53 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e58u)), 4, esi, 2u, 0x12u, 0u);
        t54 = g->edx;
        g->edx = t54;
        t55 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e5cu)), 4, esi, 2u, 0x12u, 0u);
        t56 = g->edx;
        g->edx = t56;
        t57 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e60u)), 4, esi, 2u, 0x12u, 0u);
        t58 = g->edx;
        g->edx = t58;
        t59 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e64u)), 4, esi, 2u, 0x12u, 0u);
        t60 = g->edx;
        g->edx = t60;
        t61 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e68u)), 4, esi, 2u, 0x12u, 0u);
        t62 = g->edx;
        g->edx = t62;
        t63 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e2cu)), 4, esi, 2u, 0x12u, 0u);
        t64 = g->edx;
        eax = t63;
        edx = t64;
    }
    t65 = rd32(COW_IMG(0x10663740u));
    wr16(t65 + 0x1eu, 0u);
    g->edi = edi;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101f66b0u), eax, t65, edx, 1, 0);
    t66 = g->edx;
    edx = t66;
L_10132496: ;
    t73 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    t74 = rd32(COW_IMG(0x10663740u));
    wr32(sp0 + 4u, t73);
    wr32(sp0 + 8u, 0u);
    g->esp = sp0;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t74, COW_IMG(0x10621838u), edx);
L_10132334: ;
    ecx = rd32(COW_IMG(0x10666e50u));
    goto L_10132374;
L_1013233c: ;
    ecx = rd32(COW_IMG(0x10666e54u));
    goto L_10132374;
L_10132344: ;
    ecx = rd32(COW_IMG(0x10666e58u));
    goto L_10132374;
L_1013234c: ;
    ecx = rd32(COW_IMG(0x10666e5cu));
    goto L_10132374;
L_10132354: ;
    ecx = rd32(COW_IMG(0x10666e60u));
    goto L_10132374;
L_1013235c: ;
    ecx = rd32(COW_IMG(0x10666e64u));
    goto L_10132374;
L_10132364: ;
    ecx = rd32(COW_IMG(0x10666e68u));
    goto L_10132374;
L_1013236c: ;
    eax = 0u;
L_1013236e: ;
    ecx = rd32(COW_IMG(0x10666e2cu));
    goto L_10132374;
L_1013244a: ;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_10132601;
    }
    if (rd8(rd32(COW_IMG(0x105781b0u)) + 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781b0u));
        eax = rd32(eax + 0xcu);
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t67 = cow_thiscall(g, COW_IMG(0x10132b90u), self, 1, eax);
    t68 = g->ecx;
    t69 = g->edx;
    if ((uint8_t)t67 != 0u)
    {
        eax = t67;
        edx = t69;
    }
    else
    {
        eax = t67;
        ecx = t68;
        edx = t69;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t70 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t71 = g->edx;
        eax = t70;
        edx = t71;
    }
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101316a0u), self, 3, 0u, 0u, 0u);
L_1013248c: ;
    t72 = rd32(COW_IMG(0x105781b0u));
    wr8(t72 + 4u, 0u);
    edx = t72;
    goto L_10132496;
L_10132486: ;
    if (rd32(self + 0x1cu) != 1u) goto L_101324b8;
    goto L_1013248c;
L_101324b8: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t30 = cow_thiscall(g, COW_IMG(0x101332d0u), self, 0);
    t31 = g->edx;
    g->edi = in_edi;
    g->edx = t31;
    return t30;
L_101324c6: ;
    if (rd32(self + 0x1cu) != 2u)
    {
        edx = in_edx;
        goto L_10132601;
    }
    wr32(self + 0x1cu, 1u);
    t23 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    g->eax = t23;
    t24 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 0x10u;
    t25 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t24, 2, t23, 0u);
    t26 = g->ecx;
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x10037e90u), t26, 0);
    t29 = g->edx;
    g->edi = in_edi;
    g->edx = t29;
    return t28;
L_101324f9: ;
    if (rd32(self + 0x1cu) != 2u)
    {
        edx = in_edx;
        goto L_10132601;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_stdcall(g, COW_IMG(0x10131840u), 1, ecx);
    t22 = g->edx;
    g->edi = in_edi;
    g->edx = t22;
    return t21;
L_10132512: ;
    if (rd32(self + 0x1cu) != 2u)
    {
        eax = rd32(self + 0x1cu);
        goto L_10132529;
    }
    eax = rd32(self + 0x1cu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_stdcall(g, COW_IMG(0x10131840u), 1, ecx);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10132529: ;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_10132601;
    }
    if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 0)
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = in_edx;
        ebp = 0u;
        edi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
        eax = (uint32_t)(int16_t)eax;
        ebp = 0u;
L_10132546: ;
        if (rd8(COW_IMG(0x1036f744u) + ebp) == eax)
        {
            edx = rd8(COW_IMG(0x1036f744u) + ebp);
            goto L_10132557;
        }
        edx = rd8(COW_IMG(0x1036f744u) + ebp);
        if ((int32_t)(ebp + 1u) <= (int32_t)edi)
        {
            ebp = ebp + 1u;
            goto L_10132546;
        }
        ebp = ebp + 1u;
    }
L_10132557: ;
    if ((uint16_t)ecx != 4u) goto L_101325a2;
    if ((int32_t)(ebp + edi - 1u) <= (int32_t)ebp) goto L_10132601;
    ebx = ebp + edi - 1u;
L_10132569: ;
    t4 = cow_divs(g, ebx, edi);
    t5 = cow_mods(g, ebx, edi);
    t6 = (t4 & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t5);
    g->eax = t6;
    g->ecx = self;
    g->edx = t5;
    g->esp = sp0 - 0x10u;
    t7 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int16_t)t7 < 0)
    {
        eax = t7;
        edx = t9;
        goto L_10132596;
    }
    eax = t7;
    ecx = t8;
    pf = PARITY((uint8_t)t7);
    zf = (uint16_t)t7 == 0u;
    sf = (int16_t)t7 < 0;
    if ((rd16(self + 0x20u) & 1u << (eax & 0x1fu)) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)eax;
        goto L_101325ea;
    }
    edx = 1u << (eax & 0x1fu);
    eax = rd16(self + 0x20u);
L_10132596: ;
    if ((int32_t)(ebx - 1u) > (int32_t)ebp)
    {
        ebx = ebx - 1u;
        goto L_10132569;
    }
    g->edx = edx;
    return eax;
L_101325a2: ;
    if ((uint16_t)ecx != 3u) goto L_10132601;
    if ((int32_t)(ebp + 1u) >= (int32_t)(ebp + edi)) goto L_10132601;
    ebx = ebp + 1u;
    ebp = ebp + edi;
L_101325b1: ;
    t10 = cow_divs(g, ebx, edi);
    t11 = cow_mods(g, ebx, edi);
    t12 = (t11 & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t11);
    g->eax = t10;
    g->ecx = self;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t12);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int16_t)t13 < 0)
    {
        eax = t13;
        edx = t15;
        goto L_101325de;
    }
    eax = t13;
    ecx = t14;
    pf = PARITY((uint8_t)t13);
    zf = (uint16_t)t13 == 0u;
    sf = (int16_t)t13 < 0;
    if ((rd16(self + 0x20u) & 1u << (eax & 0x1fu)) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)eax;
        goto L_101325ea;
    }
    edx = 1u << (eax & 0x1fu);
    eax = rd16(self + 0x20u);
L_101325de: ;
    if ((int32_t)(ebx + 1u) < (int32_t)ebp)
    {
        ebx = ebx + 1u;
        goto L_101325b1;
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101325ea: ;
    t16 = cow_divs(g, ebx, edi);
    t17 = cow_mods(g, ebx, edi);
    t18 = (ecx & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t17);
    g->edi = edi;
    g->eax = t16;
    g->edx = t17;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, t18, 1u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_10132601: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101322b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101322b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
