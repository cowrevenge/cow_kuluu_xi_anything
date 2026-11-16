/* f_0x1030b4b5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1030b4b5(Guest* g)
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
    uint32_t t78;
    uint32_t t79;
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
L_1030b91e: ;
    loc_10 = eax;
L_1030b921: ;
    if (rd32(ebx) <= 9u)
    {
        ecx = rd32(ebx);
        goto L_1030b4fa;
    }
    loc_2c = 0xfffffffeu;
L_1030b92e: ;
    t71 = rd32(sp0 + 8u);
    wr32(edi + 0x20u, t71);
    t72 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t72);
    wr32(esi + 4u, loc_c);
L_1030b940: ;
    t78 = rd32(esi);
    wr32(esi, loc_8);
    wr32(esi + 8u, loc_8 + rd32(esi + 8u) - t78);
    ecx = loc_8 - t78;
L_1030b94c: ;
    wr32(edi + 0x34u, edx);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), ecx, 4, edi, esi, loc_2c, in_edi);
    t79 = g->edx;
    g->edx = t79;
    return;
L_1030b4fa: ;
    t9 = rd32(COW_IMG(0x1030b9f1u) + ecx * 4u);
    switch (t9 - RD)
    {
    case 0x1030b501u: goto L_1030b501;
    case 0x1030b5d7u: goto L_1030b5d7;
    case 0x1030b687u: goto L_1030b687;
    case 0x1030b6e2u: goto L_1030b6e2;
    case 0x1030b76bu: goto L_1030b76b;
    case 0x1030b791u: goto L_1030b791;
    case 0x1030b882u: goto L_1030b882;
    case 0x1030b96bu: goto L_1030b96b;
    case 0x1030b998u: goto L_1030b998;
    case 0x1030b9eau: goto L_1030b9ea;
    default: rt_fatal(g, COW_IMG(0x1030b4fau), "switch");
    }
    return;
L_1030b501: ;
    if (eax < 0x102u) goto L_1030b59c;
    if (loc_c < 0xau) goto L_1030b59c;
    t49 = rd32(sp0 + 8u);
    wr32(edi + 0x20u, t49);
    t50 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t50);
    wr32(esi + 4u, loc_c);
    t51 = rd32(esi);
    wr32(esi + 8u, loc_8 + rd32(esi + 8u) - t51);
    wr32(esi, loc_8);
    wr32(edi + 0x34u, edx);
    t52 = rd32(ebx + 0x18u);
    t53 = rd32(ebx + 0x14u);
    t54 = rd8(ebx + 0x11u);
    t55 = rd8(ebx + 0x10u);
    g->esp = sp0 - 0x20u;
    t56 = cow_cdecl(g, COW_IMG(0x1030dcbdu), 8, t55, t54, t53, t52, edi, esi, in_edi, in_esi);
    t57 = rd32(edi + 0x34u);
    wr32(sp0 + 0xcu, t56);
    t58 = rd32(esi + 4u);
    t59 = rd32(edi + 0x20u);
    t60 = rd32(esi);
    wr32(sp0 + 8u, t59);
    t61 = rd32(edi + 0x1cu);
    wr32(sp0 + 4u, t61);
    if (t57 >= rd32(edi + 0x30u))
    {
        edx = t57;
        loc_8 = t60;
        loc_c = t58;
        eax = rd32(edi + 0x2cu) - edx;
    }
    else
    {
        eax = rd32(edi + 0x30u);
        edx = t57;
        loc_8 = t60;
        loc_c = t58;
        eax = eax - edx - 1u;
    }
    if (rd32(sp0 + 0xcu) == 0u)
    {
        loc_10 = eax;
        goto L_1030b59c;
    }
    loc_10 = eax;
    t62 = (rd32(sp0 + 0xcu) != 1u) * 2u + 7u;
    wr32(ebx, t62);
L_1030b73d: ;
    eax = loc_10;
    goto L_1030b921;
L_1030b59c: ;
    t63 = rd8(ebx + 0x10u);
    wr32(ebx + 0xcu, t63);
    t64 = rd32(ebx + 0x14u);
    wr32(ebx + 8u, t64);
    wr32(ebx, 1u);
L_1030b5d7: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 0xcu)) goto L_1030b5b1;
    eax = rd32(ebx + 0xcu);
    t65 = rd32(ebx + 8u);
    t66 = rd32(COW_IMG(0x103cff60u) + eax * 4u);
    t67 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t67 >> (rd8(t65 + (t66 & t67) * 8u + 1u) & 0x1fu));
    t68 = t65 + (t66 & t67) * 8u;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - rd8(t68 + 1u));
    if (rd8(t68) != 0u)
    {
        eax = t68;
        loc_1c = rd8(t68);
        goto L_1030b61b;
    }
    eax = t68;
    t69 = rd32(eax + 4u);
    wr32(ebx, 6u);
    eax = t69;
L_1030b73a: ;
    wr32(ebx + 8u, eax);
    goto L_1030b73d;
L_1030b5b1: ;
    if (loc_c == 0u) goto L_1030b97e;
    t73 = rd8(loc_8);
    t74 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | t73 << (t74 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
    goto L_1030b5d7;
L_1030b61b: ;
    if ((loc_1c & 0x10u) == 0u)
    {
        ecx = loc_1c;
        goto L_1030b63a;
    }
    ecx = loc_1c;
    wr32(ebx + 8u, ecx & 0xfu);
    t70 = rd32(eax + 4u);
    wr32(ebx + 4u, t70);
    wr32(ebx, 2u);
    goto L_1030b73d;
L_1030b63a: ;
    if ((ecx & 0x40u) != 0u) goto L_1030b64d;
    wr32(ebx + 0xcu, ecx);
    eax = eax + rd32(eax + 4u) * 8u;
    goto L_1030b73a;
L_1030b64d: ;
    if ((ecx & 0x20u) == 0u) goto L_1030b95e;
    wr32(ebx, 7u);
    goto L_1030b73d;
L_1030b661: ;
    if (loc_c == 0u) goto L_1030b97e;
    t47 = rd8(loc_8);
    t48 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | t47 << (t48 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
L_1030b687: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 8u)) goto L_1030b661;
    eax = rd32(ebx + 8u);
    t35 = rd32(ebx + 8u);
    t36 = rd32(COW_IMG(0x103cff60u) + eax * 4u);
    t37 = rd32(sp0 + 8u);
    wr32(ebx + 4u, rd32(ebx + 4u) + (t36 & t37));
    wr32(sp0 + 8u, rd32(sp0 + 8u) >> (t35 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) - t35);
    t38 = rd8(ebx + 0x11u);
    wr32(ebx + 0xcu, t38);
    t39 = rd32(ebx + 0x18u);
    wr32(ebx + 8u, t39);
    wr32(ebx, 3u);
L_1030b6e2: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 0xcu)) goto L_1030b6bc;
    eax = rd32(ebx + 0xcu);
    t40 = rd32(ebx + 8u);
    t41 = rd32(COW_IMG(0x103cff60u) + eax * 4u);
    t42 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t42 >> (rd8(t40 + (t41 & t42) * 8u + 1u) & 0x1fu));
    t43 = t40 + (t41 & t42) * 8u;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - rd8(t43 + 1u));
    if ((rd8(t43) & 0x10u) == 0u)
    {
        eax = rd8(t43);
        ecx = t43;
        goto L_1030b729;
    }
    eax = rd8(t43);
    ecx = t43;
    wr32(ebx + 8u, eax & 0xfu);
    t44 = rd32(ecx + 4u);
    wr32(ebx + 0xcu, t44);
    wr32(ebx, 4u);
    goto L_1030b73d;
L_1030b6bc: ;
    if (loc_c == 0u) goto L_1030b97e;
    t45 = rd8(loc_8);
    t46 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | t45 << (t46 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
    goto L_1030b6e2;
L_1030b729: ;
    if ((eax & 0x40u) != 0u) goto L_1030b96f;
    wr32(ebx + 0xcu, eax);
    eax = ecx + rd32(ecx + 4u) * 8u;
    goto L_1030b73a;
L_1030b745: ;
    if (loc_c == 0u) goto L_1030b97e;
    t33 = rd8(loc_8);
    t34 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) | t33 << (t34 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 8u);
    loc_8 = loc_8 + 1u;
    loc_c = loc_c - 1u;
L_1030b76b: ;
    if (rd32(sp0 + 4u) < rd32(ebx + 8u)) goto L_1030b745;
    eax = rd32(ebx + 8u);
    t21 = rd32(ebx + 8u);
    t22 = rd32(COW_IMG(0x103cff60u) + eax * 4u);
    t23 = rd32(sp0 + 8u);
    wr32(ebx + 0xcu, rd32(ebx + 0xcu) + (t22 & t23));
    wr32(sp0 + 8u, rd32(sp0 + 8u) >> (t21 & 0x1fu));
    wr32(sp0 + 4u, rd32(sp0 + 4u) - t21);
    wr32(ebx, 5u);
L_1030b791: ;
    if (edx - rd32(edi + 0x28u) >= rd32(ebx + 0xcu))
    {
        eax = rd32(ebx + 0xcu);
        ecx = edx - eax;
        loc_18 = edx - eax;
    }
    else
    {
        ecx = edx - rd32(edi + 0x28u);
        t24 = edx + rd32(edi + 0x2cu) - rd32(ebx + 0xcu) - rd32(edi + 0x28u);
        loc_18 = t24;
    }
    eax = loc_10;
L_1030b7b9: ;
    if (rd32(ebx + 4u) == 0u) goto L_1030b87a;
    if (eax != 0u) goto L_1030b851;
    t25 = rd32(edi + 0x2cu);
    if (edx != rd32(edi + 0x2cu)) goto L_1030b7f3;
    loc_14 = t25;
    if (rd32(edi + 0x30u) == rd32(edi + 0x28u))
    {
        ecx = rd32(edi + 0x28u);
        goto L_1030b7f3;
    }
    eax = rd32(edi + 0x30u);
    ecx = rd32(edi + 0x28u);
    if (ecx >= eax)
    {
        edx = ecx;
        eax = loc_14 - edx;
    }
    else
    {
        edx = ecx;
        eax = eax - edx - 1u;
    }
    if (eax != 0u) goto L_1030b851;
L_1030b7f3: ;
    t26 = rd32(sp0 + 0xcu);
    wr32(edi + 0x34u, edx);
    g->esp = sp0 - 0x24u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), ecx, 4, edi, esi, t26, in_edi);
    t28 = rd32(edi + 0x34u);
    wr32(sp0 + 0xcu, t27);
    t29 = rd32(edi + 0x30u);
    if (t28 >= rd32(edi + 0x30u))
    {
        edx = t28;
        loc_1c = t29;
        eax = rd32(edi + 0x2cu) - edx;
    }
    else
    {
        eax = t29;
        edx = t28;
        loc_1c = t29;
        eax = eax - edx - 1u;
    }
    t30 = rd32(edi + 0x2cu);
    if (edx == rd32(edi + 0x2cu))
    {
        loc_10 = eax;
        loc_14 = t30;
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
                eax = loc_14 - edx;
            }
            else
            {
                edx = ecx;
                eax = eax - edx - 1u;
            }
        }
    }
    if (eax == 0u) goto L_1030b993;
L_1030b851: ;
    wr32(sp0 + 0xcu, 0u);
    wr8(edx, rd8(loc_18));
    if (loc_18 + 1u != rd32(edi + 0x2cu))
    {
        ecx = loc_18 + 1u;
        edx = edx + 1u;
        loc_10 = eax - 1u;
        eax = eax - 1u;
        loc_18 = loc_18 + 1u;
    }
    else
    {
        edx = edx + 1u;
        loc_10 = eax - 1u;
        eax = eax - 1u;
        t32 = rd32(edi + 0x28u);
        ecx = t32;
        loc_18 = t32;
    }
    wr32(ebx + 4u, rd32(ebx + 4u) - 1u);
    goto L_1030b7b9;
L_1030b87a: ;
    wr32(ebx, 0u);
    goto L_1030b921;
L_1030b882: ;
    if (eax != 0u) goto L_1030b910;
    t15 = rd32(edi + 0x2cu);
    if (edx != rd32(edi + 0x2cu)) goto L_1030b8b2;
    loc_14 = t15;
    if (rd32(edi + 0x30u) == rd32(edi + 0x28u))
    {
        ecx = rd32(edi + 0x28u);
        goto L_1030b8b2;
    }
    eax = rd32(edi + 0x30u);
    ecx = rd32(edi + 0x28u);
    if (ecx >= eax)
    {
        edx = ecx;
        eax = loc_14 - edx;
    }
    else
    {
        edx = ecx;
        eax = eax - edx - 1u;
    }
    if (eax != 0u) goto L_1030b910;
L_1030b8b2: ;
    t16 = rd32(sp0 + 0xcu);
    wr32(edi + 0x34u, edx);
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), ecx, 4, edi, esi, t16, in_edi);
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
        loc_14 = t20;
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
                eax = loc_14 - edx;
            }
            else
            {
                edx = ecx;
                eax = eax - edx - 1u;
            }
        }
    }
    if (eax == 0u) goto L_1030b993;
L_1030b910: ;
    wr32(sp0 + 0xcu, 0u);
    wr8(edx, rd8(ebx + 8u));
    wr32(ebx, 0u);
    eax = eax - 1u;
    edx = edx + 1u;
    goto L_1030b91e;
L_1030b95e: ;
    wr32(ebx, 9u);
    wr32(esi + 0x18u, COW_IMG(0x103496c4u));
L_1030b96b: ;
    loc_2c = 0xfffffffdu;
    goto L_1030b92e;
L_1030b96f: ;
    wr32(ebx, 9u);
    wr32(esi + 0x18u, COW_IMG(0x103496acu));
    goto L_1030b96b;
L_1030b97e: ;
    t75 = rd32(sp0 + 0xcu);
    t76 = rd32(sp0 + 8u);
    wr32(edi + 0x20u, t76);
    t77 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t77);
    wr32(esi + 4u, 0u);
    loc_2c = t75;
    goto L_1030b940;
L_1030b993: ;
    t31 = rd32(sp0 + 0xcu);
    loc_2c = t31;
    goto L_1030b92e;
L_1030b998: ;
    if (rd32(sp0 + 4u) > 7u)
    {
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 8u);
        loc_8 = loc_8 - 1u;
        loc_c = loc_c + 1u;
    }
    t10 = rd32(sp0 + 0xcu);
    wr32(edi + 0x34u, edx);
    g->esp = sp0 - 0x24u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x1030bf60u), ecx, 4, edi, esi, t10, in_edi);
    if (rd32(edi + 0x30u) == rd32(edi + 0x34u))
    {
        edx = rd32(edi + 0x34u);
        goto L_1030b9e4;
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
    goto L_1030b94c;
L_1030b9e4: ;
    wr32(ebx, 8u);
L_1030b9ea: ;
    loc_2c = 1u;
    goto L_1030b92e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030b4b5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030b4b5(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
