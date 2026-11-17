/* f_0x10247250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10247250(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x18u) != 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x18u);
        ebp = rd32(sp0 + 4u);
        if (eax != 3u)
        {
            esi = arg4;
        }
        else
        {
            t3 = cow_divu(g, arg4 >> 1u, rd8(ebp + 0x36u));
            t4 = cow_modu(g, arg4 >> 1u, rd8(ebp + 0x36u));
            esi = ((t3 >> 0xau) + 4u) * rd32(ebp + 0xacu);
        }
    }
    else
    {
        ebp = rd32(sp0 + 4u);
        t1 = cow_divu(g, arg4 >> 1u, rd8(ebp + 0x38u));
        t2 = cow_modu(g, arg4 >> 1u, rd8(ebp + 0x38u));
        esi = t1 * ((rd8(ebp + 0x38u) >> 1u) + 1u);
    }
    t5 = rd32(sp0 + 8u);
    edi = t5;
    eax = 0u;
    ecx = esi >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x14u, esi);
    ecx = esi & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (rd32(ebp + 8u) == 0u)
    {
        ebx = arg4;
        loc_14 = esi;
        loc_10 = rd32(sp0 - 0x10u);
    }
    else
    {
        loc_14 = esi;
        if (rd32(ebp + 0x18u) != 0u)
        {
            eax = rd32(ebp + 0x18u);
            goto L_102472d6;
        }
        eax = rd32(ebp + 0x18u);
        eax = (((eax & 0xffffff00u) | rd8(ebp + 0x38u)) >> 1u) + 1u;
L_1024732c: ;
        edx = rd32(ebp + 0x30u) + rd32(ebp + 0xf0u) * eax * rd8(ebp + 0x36u);
        ebx = rd32(ebp + 0x30u) + rd32(ebp + 0x20u) * eax * rd8(ebp + 0x36u);
L_1024734a: ;
        if ((int32_t)rd32(ebp + 0x24u) >= 0) goto L_10247359;
        if ((int32_t)edx >= (int32_t)ebx)
        {
            loc_10 = rd32(sp0 - 0x10u);
            goto L_1024740a;
        }
L_10247359: ;
        wr32(sp0 - 0x10u, esi);
        t9 = rd32(sp0 + 8u);
        wr32(sp0 + 4u, t9);
        loc_10 = esi;
L_10247365: ;
        if ((int32_t)ebx >= (int32_t)(edx + loc_10))
        {
            eax = loc_10;
        }
        else
        {
            eax = ebx - edx;
        }
        t10 = rd32(ebp + 8u);
        t11 = rd32(sp0 + 4u);
        esi = edx + t10;
        edi = t11;
        ecx = eax >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = eax & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(sp0 - 0x10u, loc_10 - eax);
        if ((int32_t)(loc_10 - eax) <= 0)
        {
            loc_10 = loc_10 - eax;
            goto L_1024740a;
        }
        loc_10 = loc_10 - eax;
        if ((int32_t)rd32(ebp + 0x24u) < 0) goto L_1024740a;
        ecx = rd32(ebp + 0x24u);
        t12 = eax + rd32(sp0 + 4u);
        t13 = rd32(ebp + 0x18u);
        wr32(sp0 + 4u, t12);
        if (t13 != 0u)
        {
            eax = t13;
            goto L_102473cb;
        }
        edx = (rd8(ebp + 0x38u) >> 1u) + 1u;
L_102473bb: ;
        edx = rd32(ebp + 0x30u) + edx * rd8(ebp + 0x36u) * ecx;
        goto L_10247365;
    }
L_1024740a: ;
    if (rd32(ebp + 0x18u) != 0u)
    {
        eax = rd32(ebp + 0x18u);
        if (eax != 3u)
        {
            t78 = rd32(sp0 + 8u);
            t79 = rd32(sp0 + 0xcu);
            esi = t78;
            edi = t79;
            ecx = arg4 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = arg4 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (rd32(ebp + 0x18u) != 2u)
            {
                loc_18 = in_ebx;
                loc_1c = in_ebp;
                loc_20 = in_esi;
                loc_24 = in_edi;
            }
            else
            {
                if ((rd8(ebp + 0x37u) & 0xf8u) != 0x10u)
                {
                    loc_18 = in_ebx;
                    loc_1c = in_ebp;
                    loc_20 = in_esi;
                    loc_24 = in_edi;
                }
                else
                {
                    ecx = (ecx & 0xffffff00u) | (rd8(ebp + 0x37u) & 0xf8u);
                    eax = rd32(sp0 + 0xcu);
                    edx = (arg4 >> 1u) * 2u + rd32(sp0 + 0xcu);
L_102478c1: ;
                    t80 = rd8(eax + 1u);
                    t81 = rd8(eax);
                    wr8(eax, (uint8_t)(t81 ^ t80));
                    t82 = rd8(eax + 1u);
                    wr8(eax + 1u, (uint8_t)(t82 ^ t81 ^ t80));
                    t83 = rd8(eax);
                    wr8(eax, (uint8_t)(t83 ^ t82 ^ t81 ^ t80));
                    if (eax + 2u < edx)
                    {
                        eax = eax + 2u;
                        ecx = ((ecx | t80) & 0xffffff00u) | (uint8_t)(t82 ^ t81 ^ t80);
                        ebx = ((ebx | (t81 ^ t80)) & 0xffffff00u) | (uint8_t)(t83 ^ t82 ^ t81 ^ t80);
                        goto L_102478c1;
                    }
                    loc_18 = in_ebx;
                    loc_1c = in_ebp;
                    loc_20 = in_esi;
                    loc_24 = in_edi;
                }
            }
        }
        else
        {
            if ((int32_t)rd32(ebp + 0xb8u) >= (int32_t)rd32(ebp + 0x20u))
            {
                loc_18 = in_ebx;
                loc_1c = in_ebp;
                loc_20 = in_esi;
                loc_24 = in_edi;
            }
            else
            {
                t20 = rd32(ebp + 0xacu);
                wr32(sp0 - 0x28u, t20);
                t21 = rd32(ebp + 0xa4u);
                wr32(sp0 - 8u, t21);
                t22 = rd32(sp0 + 8u);
                wr32(sp0 + 4u, t22);
                wr32(sp0 - 0x14u, arg4);
                g->eax = arg4;
                g->esp = sp0 - 0x1cu;
                t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t20, t21, 1, 3, t20, in_edi, in_esi);
                wr32(sp0 - 0x10u, t23);
                if ((int32_t)rd32(ebp + 0xbcu) <= 0)
                {
                    eax = rd32(ebp + 0xbcu);
                    loc_14 = arg4;
                    loc_10 = t23;
                }
                else
                {
                    eax = rd32(ebp + 0xbcu);
                    esi = t22;
                    loc_10 = t23;
                    t24 = rd32(sp0 - 8u);
                    wr32(sp0 - 0x28u, t24);
                    wr32(sp0 - 0x2cu, esi);
                    g->esp = sp0 - 0x24u;
                    cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x88u, 2, esi, t24);
L_102474ab: ;
                    wr32(sp0 - 0x28u, sp0 - 4u);
                    wr32(sp0 - 0x2cu, sp0 - 8u);
                    t25 = rd32(ebp + 0x8cu);
                    wr32(sp0 - 0x30u, t25);
                    wr32(sp0 - 0x34u, esi);
                    t26 = rd32(ebp + 0x98u);
                    wr32(sp0 - 0x38u, t26);
                    g->eax = t26;
                    g->esp = sp0 - 0x24u;
                    t27 = cow_cdecl(g, COW_IMG(0x102ca210u), 5, t26, esi, t25, sp0 - 8u, sp0 - 4u);
                    if (t27 != 0u) goto L_102474d6;
                    if ((int32_t)rd32(sp0 - 4u) < 1) goto L_102474ab;
L_102474d6: ;
                    t28 = rd32(sp0 + 0xcu);
                    t29 = rd8(ebp + 0x36u) * rd32(ebp + 0xbcu) * 2u;
                    t30 = rd32(ebp + 0x94u);
                    esi = t30;
                    edi = t28;
                    ecx = t29 >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t29 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    t31 = rd8(ebp + 0x36u);
                    t32 = rd32(ebp + 0xbcu);
                    wr32(ebp + 0xbcu, 0u);
                    t33 = t28 + t31 * t32 * 2u;
                    wr32(sp0 + 0xcu, t33);
                    t34 = arg4 - t31 * t32 * 2u;
                    wr32(sp0 - 0x14u, t34);
                    t35 = rd32(sp0 + 8u) + rd32(sp0 - 8u);
                    t36 = rd32(ebp + 0x20u);
                    wr32(sp0 + 4u, t35);
                    t37 = t32 + rd32(ebp + 0xb8u);
                    wr32(ebp + 0xb8u, t37);
                    if ((int32_t)t37 < (int32_t)t36)
                    {
                        eax = t36;
                        loc_14 = t34;
                        loc_10 = rd32(sp0 - 0x10u);
                    }
                    else
                    {
                        loc_14 = t34;
                        if ((int32_t)rd32(ebp + 0x24u) < 0)
                        {
                            eax = rd32(ebp + 0x24u);
                            loc_10 = rd32(sp0 - 0x10u);
                        }
                        else
                        {
                            eax = rd32(ebp + 0x24u);
                            wr32(ebp + 0xb8u, eax);
                            loc_10 = rd32(sp0 - 0x10u);
                        }
                    }
                }
L_1024755a: ;
                if (rd8(ebp + 0x36u) != 2u)
                {
                    ebx = loc_10;
                    esi = rd32(sp0 + 4u);
                    edi = loc_10;
                    t40 = rd32(ebp + 0xacu) - (uint32_t)((int32_t)rd32(ebp + 0xacu) >> 0x1fu);
                    ecx = (uint32_t)((int32_t)t40 >> 1u) >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = (uint32_t)((int32_t)t40 >> 1u) & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    t41 = (uint32_t)((int32_t)(rd32(ebp + 0xacu) - (uint32_t)((int32_t)rd32(ebp + 0xacu) >> 0x1fu)) >> 1u);
                    wr32(sp0 - 0x28u, t41);
                    wr32(sp0 - 0x2cu, ebx);
                    g->esp = sp0 - 0x24u;
                    cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x88u, 2, ebx, t41);
                    t42 = (uint32_t)((int32_t)(rd32(ebp + 0xacu) - (uint32_t)((int32_t)rd32(ebp + 0xacu) >> 0x1fu)) >> 1u);
                    esi = ebx;
                    edi = ebx + t42;
                    ecx = t42 >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t42 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                }
                else
                {
                    ebx = loc_10;
                    esi = rd32(sp0 + 4u);
                    edi = loc_10;
                    t38 = rd32(ebp + 0xacu);
                    ecx = t38 >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t38 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    t39 = rd32(ebp + 0xacu);
                    wr32(sp0 - 0x28u, t39);
                    wr32(sp0 - 0x2cu, ebx);
                    g->esp = sp0 - 0x24u;
                    cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x88u, 2, ebx, t39);
                }
L_102475ea: ;
                wr32(sp0 - 0x28u, sp0 - 4u);
                wr32(sp0 - 0x2cu, sp0 - 8u);
                t43 = rd32(ebp + 0x8cu);
                wr32(sp0 - 0x30u, t43);
                wr32(sp0 - 0x34u, ebx);
                t44 = rd32(ebp + 0x98u);
                wr32(sp0 - 0x38u, t44);
                g->eax = t43;
                g->esp = sp0 - 0x24u;
                t45 = cow_cdecl(g, COW_IMG(0x102ca210u), 5, t44, ebx, t43, sp0 - 8u, sp0 - 4u);
                wr32(sp0 - 0xcu, t45);
                if (t45 != 0u)
                {
                    loc_c = t45;
                    goto L_10247619;
                }
                loc_c = t45;
                if ((int32_t)rd32(sp0 - 4u) < 1) goto L_102475ea;
L_10247619: ;
                if (rd8(ebp + 0x36u) == 2u)
                {
                    eax = rd32(sp0 - 8u);
                    ebx = (ebx & 0xffffff00u) | rd8(ebp + 0x36u);
                }
                else
                {
                    eax = rd32(sp0 - 8u);
                    ebx = (ebx & 0xffffff00u) | rd8(ebp + 0x36u);
                    eax = (uint32_t)((int32_t)(eax - (uint32_t)((int32_t)eax >> 0x1fu)) >> 1u);
                }
                t46 = eax + rd32(sp0 + 4u);
                wr32(sp0 + 4u, t46);
                if ((int32_t)(rd32(ebp + 0xb8u) & 0x800003ffu) >= 0)
                {
                    ecx = rd32(ebp + 0xb8u) & 0x800003ffu;
                }
                else
                {
                    ecx = rd32(ebp + 0xb8u) & 0x800003ffu;
                    ecx = (ecx - 1u | 0xfffffc00u) + 1u;
                }
                t47 = rd32(sp0 - 0x14u);
                wr32(sp0 + 8u, ecx);
                if ((uint8_t)ebx != 2u)
                {
                    eax = t47;
                    if ((int32_t)eax >= (int32_t)(-(ecx * 2u) + 0x800u))
                    {
                        edx = -(ecx * 2u) + 0x800u;
                    }
                    else
                    {
                        edx = eax;
                    }
                    wr32(sp0 - 0x14u, eax - edx);
                    ecx = ecx * 4u + rd32(ebp + 0x8cu);
                    esi = rd32(sp0 + 0xcu);
                    loc_14 = eax - edx;
                    eax = edx >> 1u;
L_102476c1: ;
                    t51 = rd16(ecx);
                    wr16(esi, (uint16_t)t51);
                    if ((int32_t)(eax - 1u) > 0)
                    {
                        eax = eax - 1u;
                        ecx = ecx + 4u;
                        esi = esi + 2u;
                        edi = (edi & 0xffff0000u) | t51;
                        goto L_102476c1;
                    }
                    ecx = ecx + 4u;
                    esi = esi + 2u;
                    wr32(sp0 + 0xcu, esi);
                    ebx = edx * 2u;
                }
                else
                {
                    eax = t47;
                    if ((int32_t)eax >= (int32_t)(-(ecx * 4u) + 0x1000u))
                    {
                        edx = ecx;
                        ebx = -(ecx * 4u) + 0x1000u;
                    }
                    else
                    {
                        edx = ecx;
                        ebx = eax;
                    }
                    wr32(sp0 - 0x14u, eax - ebx);
                    t48 = rd32(sp0 + 0xcu);
                    t49 = rd32(ebp + 0x8cu);
                    esi = edx * 4u + t49;
                    edi = t48;
                    ecx = ebx >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = ebx & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    t50 = t48 + (ebx >> 1u) * 2u;
                    wr32(sp0 + 0xcu, t50);
                    ecx = ebx >> 1u;
                    loc_14 = eax - ebx;
                }
                t52 = (ecx & 0xffffff00u) | rd8(ebp + 0x36u);
                t53 = cow_divu(g, ebx, (uint8_t)t52 * 2u);
                t54 = cow_modu(g, ebx, (uint8_t)t52 * 2u);
                t55 = (ebx >> 2u) + rd32(ebp + 0xb8u);
                t56 = rd32(sp0 + 8u);
                wr32(ebp + 0xb8u, t55);
                t57 = 0x400u - t53 - t56;
                t58 = rd32(ebp + 0x20u);
                wr32(sp0 + 8u, t57);
                if ((int32_t)t55 < (int32_t)t58)
                {
                    ecx = t52;
                    esi = t57;
                    goto L_1024781d;
                }
                ecx = t52;
                esi = t57;
                if ((int32_t)rd32(ebp + 0x24u) < 0)
                {
                    eax = rd32(ebp + 0x24u);
                    goto L_10247835;
                }
                eax = rd32(ebp + 0x24u);
                wr32(ebp + 0xb8u, eax);
                if ((int32_t)loc_14 > 0)
                {
                    if ((uint8_t)ecx != 2u)
                    {
                        esi = rd32(sp0 + 4u);
                        t62 = rd32(sp0 - 0x10u);
                        t63 = rd32(ebp + 0xacu) - (uint32_t)((int32_t)rd32(ebp + 0xacu) >> 0x1fu);
                        edi = t62;
                        ecx = (uint32_t)((int32_t)t63 >> 1u) >> 2u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        ecx = (uint32_t)((int32_t)t63 >> 1u) & 3u;
                        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                        t64 = (uint32_t)((int32_t)(rd32(ebp + 0xacu) - (uint32_t)((int32_t)rd32(ebp + 0xacu) >> 0x1fu)) >> 1u);
                        wr32(sp0 - 0x28u, t64);
                        wr32(sp0 - 0x2cu, t62);
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x88u, 2, t62, t64);
                        t65 = (uint32_t)((int32_t)(rd32(ebp + 0xacu) - (uint32_t)((int32_t)rd32(ebp + 0xacu) >> 0x1fu)) >> 1u);
                        esi = t62;
                        edi = t62 + t65;
                        ecx = t65 >> 2u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        ecx = t65 & 3u;
                        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                        ebx = t62;
                    }
                    else
                    {
                        esi = rd32(sp0 + 4u);
                        t59 = rd32(ebp + 0xacu);
                        t60 = rd32(sp0 - 0x10u);
                        edi = t60;
                        ecx = t59 >> 2u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        ecx = t59 & 3u;
                        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                        t61 = rd32(ebp + 0xacu);
                        wr32(sp0 - 0x28u, t61);
                        wr32(sp0 - 0x2cu, t60);
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x10246a90u), ebp + 0x88u, 2, t60, t61);
                        ebx = rd32(sp0 - 0x10u);
                    }
L_102477d0: ;
                    wr32(sp0 - 0x28u, sp0 - 4u);
                    wr32(sp0 - 0x2cu, sp0 - 8u);
                    t66 = rd32(ebp + 0x8cu);
                    wr32(sp0 - 0x30u, t66);
                    wr32(sp0 - 0x34u, ebx);
                    t67 = rd32(ebp + 0x98u);
                    wr32(sp0 - 0x38u, t67);
                    g->eax = t66;
                    g->esp = sp0 - 0x24u;
                    t68 = cow_cdecl(g, COW_IMG(0x102ca210u), 5, t67, ebx, t66, sp0 - 8u, sp0 - 4u);
                    wr32(sp0 - 0xcu, t68);
                    if (t68 != 0u)
                    {
                        eax = t68;
                        loc_c = t68;
                        goto L_102477ff;
                    }
                    eax = t68;
                    loc_c = t68;
                    if ((int32_t)rd32(sp0 - 4u) < 1) goto L_102477d0;
L_102477ff: ;
                    if (rd8(ebp + 0x36u) == 2u)
                    {
                        eax = rd32(sp0 - 8u);
                    }
                    else
                    {
                        eax = rd32(sp0 - 8u);
                        eax = (uint32_t)((int32_t)(eax - (uint32_t)((int32_t)eax >> 0x1fu)) >> 1u);
                    }
                    t69 = eax + rd32(sp0 + 4u);
                    t70 = rd32(sp0 + 8u);
                    wr32(sp0 + 4u, t69);
                    ecx = t69;
                    esi = t70;
                    loc_14 = rd32(sp0 - 0x14u);
                }
L_1024781d: ;
                if (loc_c != 0u)
                {
                    eax = loc_c;
                    goto L_10247835;
                }
                if ((int32_t)loc_14 > 0)
                {
                    eax = loc_14;
                    loc_10 = rd32(sp0 - 0x10u);
                    goto L_1024755a;
                }
                eax = loc_14;
                esi = rd32(sp0 + 8u);
L_10247835: ;
                t71 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x28u, t71);
                g->esp = sp0 - 0x24u;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t71, 1, 1, t71);
                if ((int32_t)esi <= 0)
                {
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
                else
                {
                    t72 = rd8(ebp + 0x36u);
                    t73 = rd32(sp0 + 8u);
                    t74 = rd32(sp0 + 8u);
                    t75 = rd32(ebp + 0x94u);
                    wr32(ebp + 0xbcu, t73);
                    t76 = t72 * t74 * 2u;
                    t77 = rd32(ebp + 0x8cu);
                    esi = t77 + (0x400u - t74) * t72 * 2u;
                    edi = t75;
                    ecx = t76 >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t76 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
            }
        }
    }
    else
    {
        wr32(sp0 - 0x28u, arg4);
        wr32(sp0 - 0x2cu, ebp + 0xdcu);
        t16 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x30u, t16);
        t17 = rd32(sp0 + 8u);
        wr32(sp0 - 0x34u, t17);
        t18 = rd8(ebp + 0x38u);
        wr32(sp0 - 0x38u, t18);
        t19 = rd8(ebp + 0x36u);
        wr32(sp0 - 0x3cu, t19);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10246ad0u), 15, t19, t18, t17, t16, ebp + 0xdcu, arg4, in_edi, in_esi, in_ebp, in_ebx, loc_14, loc_10, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
        loc_14 = rd32(sp0 - 0x14u);
    }
    if (rd32(ebp + 0x18u) != 0u)
    {
        eax = rd32(ebp + 0x18u);
        goto L_102478f8;
    }
    t84 = rd8(ebp + 0x38u);
    ecx = (t84 >> 1u) + 1u;
L_10247917: ;
    eax = loc_14;
L_1024791b: ;
    t87 = cow_divs(g, eax, ecx * rd8(ebp + 0x36u));
    t88 = cow_mods(g, eax, ecx * rd8(ebp + 0x36u));
    t89 = t87 + rd32(ebp + 0xf0u);
    t90 = rd32(ebp + 0x24u);
    wr32(ebp + 0xf0u, t89);
    if ((int32_t)t90 >= 0)
    {
        ecx = t89;
        edx = t90;
        if ((int32_t)ecx < (int32_t)rd32(ebp + 0x20u)) goto L_10247952;
        eax = rd32(ebp + 0x20u);
L_10247942: ;
        if ((int32_t)(ecx + edx - eax) >= (int32_t)eax)
        {
            ecx = ecx + edx - eax;
            goto L_10247942;
        }
        ecx = ecx + edx - eax;
        wr32(ebp + 0xf0u, ecx);
    }
L_10247952: ;
    g->ebx = loc_18;
    g->esi = loc_20;
    g->edi = loc_24;
    g->ebp = loc_1c;
    return 0u;
L_102472d6: ;
    if (eax != 3u) goto L_10247324;
    t6 = rd32(sp0 + 0xcu);
    edi = t6;
    eax = 0u;
    ecx = arg4 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg4 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t7 = rd32(ebp + 0xb8u) + ((uint32_t)((int32_t)rd32(ebp + 0xb8u) >> 0x1fu) & 0x3ffu);
    if (rd8(ebp + 0x36u) == 2u)
    {
        eax = rd32(ebp + 0xacu);
        ecx = (uint32_t)((int32_t)t7 >> 0xau);
        ebx = rd32(ebp + 0x14u);
    }
    else
    {
        eax = rd32(ebp + 0xacu);
        ecx = (uint32_t)((int32_t)t7 >> 0xau);
        ebx = rd32(ebp + 0x14u);
        eax = (uint32_t)((int32_t)(eax - (uint32_t)((int32_t)eax >> 0x1fu)) >> 1u);
    }
    t8 = eax * ecx + rd32(ebp + 0x30u);
    edx = t8;
    goto L_1024734a;
L_10247324: ;
    eax = rd8(ebp + 0x37u) >> 3u;
    goto L_1024732c;
L_102473cb: ;
    if (eax != 3u) goto L_10247400;
    t14 = ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 0x3ffu);
    if (rd8(ebp + 0x36u) == 2u)
    {
        eax = rd32(ebp + 0xacu);
        ecx = (uint32_t)((int32_t)t14 >> 0xau) - 1u;
    }
    else
    {
        eax = rd32(ebp + 0xacu);
        ecx = (uint32_t)((int32_t)t14 >> 0xau) - 1u;
        eax = (uint32_t)((int32_t)(eax - (uint32_t)((int32_t)eax >> 0x1fu)) >> 1u);
    }
    t15 = eax * ecx + rd32(ebp + 0x30u);
    edx = t15;
    goto L_10247365;
L_10247400: ;
    edx = rd8(ebp + 0x37u) >> 3u;
    goto L_102473bb;
L_102478f8: ;
    if (eax != 3u) goto L_1024790d;
    t85 = rd8(ebp + 0x37u);
    eax = arg4;
    ecx = t85 >> 3u;
    goto L_1024791b;
L_1024790d: ;
    t86 = rd8(ebp + 0x37u);
    ecx = t86 >> 3u;
    goto L_10247917;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10247250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10247250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
