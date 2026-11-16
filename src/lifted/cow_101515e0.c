/* f_0x101515e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101515e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 7u)
    {
        ecx = self;
        edx = in_edx;
        goto L_10151802;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x10151844u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101515fau: goto L_101515fa;
    case 0x10151716u: goto L_10151716;
    case 0x10151727u: goto L_10151727;
    case 0x10151756u: goto L_10151756;
    case 0x101517e7u: goto L_101517e7;
    case 0x10151802u: ecx = self; edx = in_edx; goto L_10151802;
    default: rt_fatal(g, COW_IMG(0x101515f3u), "switch");
    }
    return 0;
L_101515fa: ;
    t25 = (uint32_t)(int16_t)rd16(sp0 + 8u);
    if (t25 == 9u)
    {
        eax = t25;
        goto L_101516fd;
    }
    eax = t25;
    ecx = t25 - 9u;
    if (ecx == 1u) goto L_101516e0;
    ecx = ecx - 1u;
    if (ecx == 1u) goto L_10151686;
    if (rd32(self + 0xc0u) != 3u)
    {
        ecx = rd32(self + 0xc0u);
        goto L_10151681;
    }
    t26 = rd32(COW_IMG(0x104dfd98u));
    wr8(sp0 + 8u, rd8(COW_IMG(0x10371d60u) + eax));
    if (rd8(t26 + (uint8_t)rd32(sp0 + 8u) * 8u + 0x194c6u) != 0u)
    {
        eax = (t26 + (uint8_t)rd32(sp0 + 8u) * 8u & 0xffff0000u) | rd16(t26 + (uint8_t)rd32(sp0 + 8u) * 8u + 0x194c4u);
        ecx = rd8(t26 + (uint8_t)rd32(sp0 + 8u) * 8u + 0x194c6u);
        edx = t26;
        goto L_10151671;
    }
    edx = t26;
    t27 = rd32(COW_IMG(0x10663740u));
    wr32(sp0 + 8u, 0u);
    t28 = rd32(t27 + 8u);
    wr32(sp0 + 4u, t28);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t27, COW_IMG(0x10621838u), edx);
L_10151671: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, COW_IMG(0x101511a0u), self, 3, ecx, eax, 0u);
    t30 = g->edx;
    g->edx = t30;
    return t29;
L_10151681: ;
    zf = ecx == 4u;
L_101516c9: ;
    if (!zf)
    {
        edx = in_edx;
        goto L_1015183e;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t36 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 9u, 1u);
    t37 = g->edx;
    g->edx = t37;
    return t36;
L_10151686: ;
    if (rd32(self + 0xc0u) != 3u)
    {
        eax = rd32(self + 0xc0u);
        goto L_101516c6;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = rd32(COW_IMG(0x1057824cu));
        goto L_101516ba;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = rd32(COW_IMG(0x1057824cu));
    t31 = rd32(eax + 0x194c0u);
    g->eax = eax;
    g->edx = t31;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall(g, COW_IMG(0x10140d90u), ecx, 4, t31, 0u, COW_IMG(0x101515c0u), 0u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_101516ba: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x10140d90u), ecx, 4, 0u, 0u, COW_IMG(0x101515c0u), 0u);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_101516c6: ;
    zf = eax == 4u;
    goto L_101516c9;
L_101516e0: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t38 = cow_thiscall(g, COW_IMG(0x10151340u), self, 1, 0u);
    t39 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        eax = t38;
        edx = t39;
        goto L_1015183e;
    }
    edx = t39;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t40 = cow_stdcall(g, COW_IMG(0x10151d90u), 0);
    t41 = g->edx;
    g->edx = t41;
    return t40;
L_101516fd: ;
    if (rd32(self + 0xc0u) == 4u)
    {
        edx = in_edx;
        goto L_1015183e;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t42 = cow_thiscall(g, COW_IMG(0x10151310u), self, 0);
    t43 = g->edx;
    g->edx = t43;
    return t42;
L_10151716: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 0xau, 1u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_10151727: ;
    if (rd32(self + 0xc0u) != 4u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if (rd16(sp0 + 8u) != 0xau)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            t17 = rd32(self + 8u);
            g->esp = sp0 - 8u;
            t18 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t17, g->edx, 0, 2, 9u, 1u);
            t19 = g->ecx;
            t20 = g->edx;
            g->edx = t20;
            cow_thiscall(g, COW_IMG(0x10037b30u), t19, 0);
            t21 = g->ecx;
            t22 = g->edx;
            ecx = t21;
            edx = t22;
        }
    }
L_10151802: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd16(eax + 0x4cu) != rd16(self + 0xbcu))
        {
            edi = (in_edi & 0xffff0000u) | rd16(eax + 0x4cu);
            if ((uint16_t)edi != 0xbu)
            {
                loc_14 = 0xbu;
            }
            else
            {
                loc_14 = 7u;
            }
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t44 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, loc_14);
            t45 = g->edx;
            g->edx = t45;
            g->esp = sp0 - 8u;
            t46 = cow_thiscall(g, COW_IMG(0x1011aaf0u), rd32(self + 8u), 3, t44, 0u, 1u);
            t47 = g->edx;
            wr16(self + 0xbcu, (uint16_t)edi);
            eax = t46;
            edx = t47;
        }
    }
L_1015183e: ;
    g->edx = edx;
    return eax;
L_10151756: ;
    if (rd32(self + 0xc0u) != 4u) goto L_10151781;
    if (rd16(sp0 + 8u) != 9u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        t4 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t5 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t4, g->edx, 0, 2, 0xau, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        g->edx = t7;
        cow_thiscall(g, COW_IMG(0x10037b30u), t6, 0);
        t8 = g->ecx;
        t9 = g->edx;
        ecx = t8;
        edx = t9;
    }
    goto L_10151802;
L_10151781: ;
    if (rd16(rd32(self + 8u) + 0x5au) != 1u)
    {
        ecx = self;
        edx = in_edx;
        goto L_10151802;
    }
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 5u > 3u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 5u;
        ecx = self;
        edx = in_edx;
        goto L_101517d4;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 5u;
    t10 = rd32(COW_IMG(0x10151864u) + eax * 4u);
    switch (t10 - RD)
    {
    case 0x1015179fu: goto L_1015179f;
    case 0x101517a5u: goto L_101517a5;
    case 0x101517b4u: goto L_101517b4;
    case 0x101517c2u: goto L_101517c2;
    default: rt_fatal(g, COW_IMG(0x10151798u), "switch");
    }
    return 0;
L_1015179f: ;
    loc_10 = 1u;
L_101517c6: ;
    ecx = rd32(rd32(COW_IMG(0x105781e8u)) + 8u);
    edx = in_edx;
L_101517cf: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, loc_10, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
L_101517d4: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037e90u), ecx, 0);
    t14 = rd32(rd32(COW_IMG(0x105781e8u)) + 8u);
    eax = t14;
    edx = rd32(COW_IMG(0x105781e8u));
    loc_10 = t14;
L_101517f8: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, loc_10, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    goto L_10151802;
L_101517a5: ;
    ecx = rd32(rd32(COW_IMG(0x105781e8u)) + 8u);
    edx = rd32(COW_IMG(0x105781e8u));
    loc_10 = 2u;
    goto L_101517cf;
L_101517b4: ;
    eax = rd32(COW_IMG(0x105781e8u));
    ecx = rd32(rd32(COW_IMG(0x105781e8u)) + 8u);
    edx = in_edx;
    loc_10 = 3u;
    goto L_101517cf;
L_101517c2: ;
    loc_10 = 4u;
    goto L_101517c6;
L_101517e7: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10037e90u), self, 0);
    t3 = rd32(rd32(COW_IMG(0x105781e8u)) + 8u);
    eax = t2;
    edx = t3;
    loc_10 = t3;
    goto L_101517f8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101515e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101515e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
