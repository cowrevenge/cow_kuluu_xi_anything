/* f_0x102c8dbf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c8dbf(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_2c;
    uint32_t loc_8;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(rd32(sp0 + 8u));
    t2 = rd32(rd32(sp0 + 8u) + 4u);
    t3 = rd32(rd32(sp0 + 4u) + 0x20u);
    t4 = rd32(rd32(sp0 + 4u) + 0x34u);
    t5 = rd32(rd32(sp0 + 4u) + 4u);
    t6 = rd32(sp0 + 8u);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t3);
    t8 = rd32(t7 + 0x1cu);
    wr32(sp0 + 4u, t8);
    if (t4 >= rd32(t7 + 0x30u))
    {
        edx = t4;
        ebx = t5;
        esi = t6;
        edi = t7;
        loc_8 = t1;
        loc_c = t2;
        eax = rd32(edi + 0x2cu) - edx;
    }
    else
    {
        eax = rd32(t7 + 0x30u);
        edx = t4;
        ebx = t5;
        esi = t6;
        edi = t7;
        loc_8 = t1;
        loc_c = t2;
        eax = eax - edx - 1u;
    }
    loc_10 = eax;
L_102c8dff: ;
    if (rd32(ebx) > 9u) goto L_102c92bb;
    ecx = rd32(ebx);
    t9 = rd32(COW_IMG(0x102c92edu) + ecx * 4u);
    switch (t9 - RD)
    {
    case 0x102c8e11u: goto L_102c8e11;
    case 0x102c8eeau: goto L_102c8eea;
    case 0x102c8f93u: goto L_102c8f93;
    case 0x102c8feeu: goto L_102c8fee;
    case 0x102c9079u: goto L_102c9079;
    case 0x102c909fu: goto L_102c909f;
    case 0x102c9191u: goto L_102c9191;
    case 0x102c923bu: goto L_102c923b;
    case 0x102c9268u: goto L_102c9268;
    case 0x102c92b7u: goto L_102c92b7;
    default: rt_fatal(g, COW_IMG(0x102c8e0au), "switch");
    }
    return;
L_102c8e11: ;
    if (eax < 0x102u) goto L_102c8eaf;
    if (loc_c < 0xau) goto L_102c8eaf;
    t48 = rd32(sp0 + 8u);
    wr32(edi + 0x20u, t48);
    t49 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t49);
    wr32(esi + 4u, loc_c);
    t50 = rd32(esi);
    wr32(esi, loc_8);
    wr32(esi + 8u, loc_8 + rd32(esi + 8u) - t50);
    wr32(edi + 0x34u, edx);
    t51 = rd32(ebx + 0x18u);
    t52 = rd32(ebx + 0x14u);
    t53 = rd8(ebx + 0x11u);
    t54 = rd8(ebx + 0x10u);
    g->esp = sp0 - 0x20u;
    t55 = cow_cdecl(g, COW_IMG(0x102c994cu), 8, t54, t53, t52, t51, edi, esi, in_edi, in_esi);
    wr32(sp0 + 0xcu, t55);
    t56 = rd32(esi + 4u);
    t57 = rd32(edi + 0x20u);
    t58 = rd32(edi + 0x34u);
    t59 = rd32(esi);
    wr32(sp0 + 8u, t57);
    t60 = rd32(edi + 0x1cu);
    wr32(sp0 + 4u, t60);
    if (t58 >= rd32(edi + 0x30u))
    {
        edx = t58;
        loc_8 = t59;
        loc_c = t56;
        eax = rd32(edi + 0x2cu) - edx;
    }
    else
    {
        eax = rd32(edi + 0x30u);
        edx = t58;
        loc_8 = t59;
        loc_c = t56;
        eax = eax - edx - 1u;
    }
    if (rd32(sp0 + 0xcu) == 0u)
    {
        loc_10 = eax;
        goto L_102c8eaf;
    }
    loc_10 = eax;
    t61 = (rd32(sp0 + 0xcu) != 1u) * 2u + 7u;
    wr32(ebx, t61);
L_102c8ea7: ;
    eax = loc_10;
    goto L_102c8dff;
L_102c8eaf: ;
    t62 = rd8(ebx + 0x10u);
    wr32(ebx + 0xcu, t62);
    t63 = rd32(ebx + 0x14u);
    wr32(ebx + 8u, t63);
    wr32(ebx, 1u);
L_102c8eea: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 0xcu)) goto L_102c8ec4;
    eax = rd32(ebx + 0xcu);
    t64 = rd32(ebx + 8u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 8u)) * 8u;
    t65 = rd8(t64 + 1u);
    t66 = rd32(COW_IMG(0x103cac48u) + eax * 4u);
    t67 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - t65);
    wr32(sp0 + 8u, rd32(sp0 + 8u) >> (t65 & 0x1fu));
    if (rd8(t64) != 0u)
    {
        eax = t64;
        loc_1c = rd8(t64);
        goto L_102c8f31;
    }
    eax = t64;
    t68 = rd32(eax + 4u);
    wr32(ebx, 6u);
    wr32(ebx + 8u, t68);
    goto L_102c8ea7;
L_102c8ec4: ;
    if (loc_c == 0u) goto L_102c924e;
    t71 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | rd8(loc_8) << (t71 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
    goto L_102c8eea;
L_102c8f31: ;
    if ((loc_1c & 0x10u) == 0u)
    {
        ecx = loc_1c;
        goto L_102c8f50;
    }
    ecx = loc_1c;
    wr32(ebx + 8u, ecx & 0xfu);
    t69 = rd32(eax + 4u);
    wr32(ebx + 4u, t69);
    wr32(ebx, 2u);
    goto L_102c8ea7;
L_102c8f50: ;
    if ((ecx & 0x40u) == 0u) goto L_102c9042;
    if ((ecx & 0x20u) == 0u) goto L_102c922e;
    wr32(ebx, 7u);
    goto L_102c8ea7;
L_102c8f6d: ;
    if (loc_c == 0u) goto L_102c924e;
    t47 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | rd8(loc_8) << (t47 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
L_102c8f93: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 8u)) goto L_102c8f6d;
    eax = rd32(ebx + 8u);
    t36 = rd32(COW_IMG(0x103cac48u) + eax * 4u);
    t37 = rd32(sp0 + 8u);
    t38 = rd32(ebx + 8u);
    wr32(ebx, 3u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) >> (t38 & 0x1fu));
    wr32(ebx + 4u, (t36 & t37) + rd32(ebx + 4u));
    wr32(sp0 + 4u, rd32(sp0 + 4u) - t38);
    t39 = rd8(ebx + 0x11u);
    wr32(ebx + 0xcu, t39);
    t40 = rd32(ebx + 0x18u);
    wr32(ebx + 8u, t40);
L_102c8fee: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 0xcu)) goto L_102c8fc8;
    eax = rd32(ebx + 0xcu);
    t41 = rd32(ebx + 8u) + (rd32(COW_IMG(0x103cac48u) + eax * 4u) & rd32(sp0 + 8u)) * 8u;
    t42 = rd8(t41 + 1u);
    t43 = rd32(COW_IMG(0x103cac48u) + eax * 4u);
    t44 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - t42);
    wr32(sp0 + 8u, rd32(sp0 + 8u) >> (t42 & 0x1fu));
    if ((rd8(t41) & 0x10u) == 0u)
    {
        eax = t41;
        ecx = rd8(t41);
        goto L_102c9039;
    }
    eax = t41;
    ecx = rd8(t41);
    wr32(ebx + 8u, ecx & 0xfu);
    t45 = rd32(eax + 4u);
    wr32(ebx + 0xcu, t45);
    wr32(ebx, 4u);
    goto L_102c8ea7;
L_102c8fc8: ;
    if (loc_c == 0u) goto L_102c924e;
    t46 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | rd8(loc_8) << (t46 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
    goto L_102c8fee;
L_102c9039: ;
    if ((ecx & 0x40u) != 0u) goto L_102c923f;
L_102c9042: ;
    wr32(ebx + 0xcu, ecx);
    t70 = eax + rd32(eax + 4u) * 8u;
    wr32(ebx + 8u, t70);
    goto L_102c8ea7;
L_102c9053: ;
    if (loc_c == 0u) goto L_102c924e;
    t35 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | rd8(loc_8) << (t35 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
L_102c9079: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 8u)) goto L_102c9053;
    eax = rd32(ebx + 8u);
    t22 = rd32(COW_IMG(0x103cac48u) + eax * 4u);
    t23 = rd32(sp0 + 8u);
    t24 = rd32(ebx + 8u);
    wr32(ebx, 5u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) >> (t24 & 0x1fu));
    wr32(ebx + 0xcu, (t22 & t23) + rd32(ebx + 0xcu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) - t24);
L_102c909f: ;
    t25 = edx - rd32(ebx + 0xcu);
    if (edx - rd32(ebx + 0xcu) >= rd32(edi + 0x28u))
    {
        ecx = rd32(edi + 0x28u);
        loc_14 = t25;
    }
    else
    {
        ecx = rd32(edi + 0x28u);
        loc_14 = t25;
        t26 = rd32(edi + 0x2cu) - ecx;
        loc_1c = t26;
L_102c90b6: ;
        if (loc_14 + loc_1c < rd32(edi + 0x28u))
        {
            loc_14 = loc_14 + loc_1c;
            goto L_102c90b6;
        }
        loc_14 = loc_14 + loc_1c;
    }
    if (rd32(ebx + 4u) == 0u)
    {
        eax = loc_10;
        goto L_102c9189;
    }
    eax = loc_10;
L_102c90d1: ;
    if (eax != 0u) goto L_102c915f;
    t27 = rd32(edi + 0x2cu);
    if (edx != rd32(edi + 0x2cu)) goto L_102c9101;
    loc_18 = t27;
    if (rd32(edi + 0x30u) == rd32(edi + 0x28u))
    {
        ecx = rd32(edi + 0x28u);
        goto L_102c9101;
    }
    eax = rd32(edi + 0x30u);
    ecx = rd32(edi + 0x28u);
    if (ecx >= eax)
    {
        edx = ecx;
        eax = loc_18 - edx;
    }
    else
    {
        edx = ecx;
        eax = eax - edx - 1u;
    }
    if (eax != 0u) goto L_102c915f;
L_102c9101: ;
    t28 = rd32(sp0 + 0xcu);
    wr32(edi + 0x34u, edx);
    g->esp = sp0 - 0x24u;
    t29 = cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, ecx, edx, 1, 4, edi, esi, t28, in_edi);
    t30 = rd32(edi + 0x34u);
    wr32(sp0 + 0xcu, t29);
    t31 = rd32(edi + 0x30u);
    if (t30 >= rd32(edi + 0x30u))
    {
        edx = t30;
        loc_1c = t31;
        eax = rd32(edi + 0x2cu) - edx;
    }
    else
    {
        eax = t31;
        edx = t30;
        loc_1c = t31;
        eax = eax - edx - 1u;
    }
    t32 = rd32(edi + 0x2cu);
    if (edx == rd32(edi + 0x2cu))
    {
        loc_10 = eax;
        loc_18 = t32;
        if (loc_1c == rd32(edi + 0x28u))
        {
            eax = loc_10;
        }
        else
        {
            eax = loc_1c;
            ecx = rd32(edi + 0x28u);
            if (ecx >= eax)
            {
                edx = ecx;
                eax = loc_18 - edx;
            }
            else
            {
                edx = ecx;
                eax = eax - edx - 1u;
            }
        }
    }
    if (eax == 0u) goto L_102c9263;
L_102c915f: ;
    wr32(sp0 + 0xcu, 0u);
    wr8(edx, rd8(loc_14));
    if (loc_14 + 1u != rd32(edi + 0x2cu))
    {
        ecx = loc_14 + 1u;
        edx = edx + 1u;
        loc_10 = eax - 1u;
        eax = eax - 1u;
        loc_14 = loc_14 + 1u;
    }
    else
    {
        edx = edx + 1u;
        loc_10 = eax - 1u;
        eax = eax - 1u;
        t34 = rd32(edi + 0x28u);
        ecx = t34;
        loc_14 = t34;
    }
    wr32(ebx + 4u, rd32(ebx + 4u) - 1u);
    if (rd32(ebx + 4u) != 1u) goto L_102c90d1;
L_102c9189: ;
    wr32(ebx, 0u);
    goto L_102c8dff;
L_102c9191: ;
    if (eax != 0u) goto L_102c921b;
    t15 = rd32(edi + 0x2cu);
    if (edx != rd32(edi + 0x2cu)) goto L_102c91c1;
    loc_18 = t15;
    if (rd32(edi + 0x30u) == rd32(edi + 0x28u))
    {
        ecx = rd32(edi + 0x28u);
        goto L_102c91c1;
    }
    eax = rd32(edi + 0x30u);
    ecx = rd32(edi + 0x28u);
    if (ecx >= eax)
    {
        edx = ecx;
        eax = loc_18 - edx;
    }
    else
    {
        edx = ecx;
        eax = eax - edx - 1u;
    }
    if (eax != 0u) goto L_102c921b;
L_102c91c1: ;
    t16 = rd32(sp0 + 0xcu);
    wr32(edi + 0x34u, edx);
    g->esp = sp0 - 0x24u;
    t17 = cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, ecx, edx, 1, 4, edi, esi, t16, in_edi);
    t18 = rd32(edi + 0x34u);
    wr32(sp0 + 0xcu, t17);
    t19 = rd32(edi + 0x30u);
    if (t18 >= rd32(edi + 0x30u))
    {
        edx = t18;
        loc_1c = t19;
        eax = rd32(edi + 0x2cu) - edx;
    }
    else
    {
        eax = t19;
        edx = t18;
        loc_1c = t19;
        eax = eax - edx - 1u;
    }
    t20 = rd32(edi + 0x2cu);
    if (edx != rd32(edi + 0x2cu))
    {
        ecx = t20;
    }
    else
    {
        loc_10 = eax;
        loc_18 = t20;
        if (loc_1c == rd32(edi + 0x28u))
        {
            ecx = rd32(edi + 0x28u);
            eax = loc_10;
        }
        else
        {
            eax = loc_1c;
            ecx = rd32(edi + 0x28u);
            if (ecx >= eax)
            {
                edx = ecx;
                eax = loc_18 - edx;
            }
            else
            {
                edx = ecx;
                eax = eax - edx - 1u;
            }
        }
    }
    if (eax == 0u) goto L_102c9263;
L_102c921b: ;
    t21 = rd8(ebx + 8u);
    wr32(sp0 + 0xcu, 0u);
    wr8(edx, (uint8_t)t21);
    edx = edx + 1u;
    loc_10 = eax - 1u;
    eax = eax - 1u;
    goto L_102c9189;
L_102c922e: ;
    wr32(ebx, 9u);
    wr32(esi + 0x18u, COW_IMG(0x103c9a30u));
L_102c923b: ;
    loc_2c = 0xfffffffdu;
L_102c92bd: ;
    t75 = rd32(sp0 + 8u);
    wr32(edi + 0x20u, t75);
    t76 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t76);
    wr32(esi + 4u, loc_c);
L_102c92cf: ;
    t77 = rd32(esi);
    wr32(esi, loc_8);
    wr32(esi + 8u, loc_8 + rd32(esi + 8u) - t77);
    ecx = loc_8 - t77;
L_102c92db: ;
    wr32(edi + 0x34u, edx);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, ecx, edx, 1, 4, edi, esi, loc_2c, in_edi);
    return;
L_102c923f: ;
    wr32(ebx, 9u);
    wr32(esi + 0x18u, COW_IMG(0x103c9a18u));
    goto L_102c923b;
L_102c924e: ;
    t72 = rd32(sp0 + 0xcu);
    t73 = rd32(sp0 + 8u);
    wr32(edi + 0x20u, t73);
    t74 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t74);
    wr32(esi + 4u, 0u);
    loc_2c = t72;
    goto L_102c92cf;
L_102c9263: ;
    t33 = rd32(sp0 + 0xcu);
    loc_2c = t33;
    goto L_102c92bd;
L_102c9268: ;
    if (rd32(sp0 + 4u) > 7u)
    {
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 8u);
        loc_8 = loc_8 - 1u;
        loc_c = loc_c + 1u;
    }
    t10 = rd32(sp0 + 0xcu);
    wr32(edi + 0x34u, edx);
    g->esp = sp0 - 0x24u;
    t11 = cow_call_regs(g, COW_IMG(0x102c9860u), g->eax, ecx, edx, 1, 4, edi, esi, t10, in_edi);
    if (rd32(edi + 0x30u) == rd32(edi + 0x34u))
    {
        edx = rd32(edi + 0x34u);
        goto L_102c92b1;
    }
    eax = t11;
    edx = rd32(edi + 0x34u);
    t12 = rd32(sp0 + 8u);
    wr32(edi + 0x20u, t12);
    t13 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t13);
    wr32(esi + 4u, loc_c);
    t14 = rd32(esi);
    wr32(esi, loc_8);
    wr32(esi + 8u, loc_8 + rd32(esi + 8u) - t14);
    ecx = loc_8;
    loc_2c = eax;
    goto L_102c92db;
L_102c92b1: ;
    wr32(ebx, 8u);
L_102c92b7: ;
    loc_2c = 1u;
    goto L_102c92bd;
L_102c92bb: ;
    loc_2c = 0xfffffffeu;
    goto L_102c92bd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c8dbf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c8dbf(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
