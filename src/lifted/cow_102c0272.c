/* f_0x102c0272 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102c0272(Guest* g)
{
    unsigned cf;
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
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(rd32(sp0 + 8u));
    if ((rd8(rd32(sp0 + 8u) + 8u) & 2u) == 0u)
    {
        loc_c = 0u;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 8u) + 8u);
        edx = rd32(sp0 + 8u);
        ebx = t1;
        loc_18 = t1;
        t2 = rd16(rd32(sp0 + 4u) + 0x22au);
        t3 = rd16(rd32(sp0 + 4u) + 0x22cu);
        t4 = rd16(rd32(sp0 + 4u) + 0x22eu);
        if ((uint8_t)ecx != 2u)
        {
            esi = rd32(sp0 + 4u);
            edi = rd32(sp0 + 0xcu);
            loc_c = 0u;
            loc_1c = t2;
            loc_14 = t3;
            loc_10 = t4;
        }
        else
        {
            esi = rd32(sp0 + 4u);
            edi = rd32(sp0 + 0xcu);
            loc_1c = t2;
            loc_14 = t3;
            loc_10 = t4;
            if (rd8(edx + 9u) != 8u) goto L_102c03be;
            if (rd32(esi + 0x168u) == 0u) goto L_102c0361;
            if (rd32(esi + 0x16cu) == 0u) goto L_102c0361;
            if (ebx == 0u)
            {
                ecx = edi;
                loc_c = 0u;
                goto L_102c0548;
            }
            ecx = edi;
            loc_c = 0u;
            loc_20 = ebx;
            loc_8 = rd32(sp0 - 8u);
L_102c02f2: ;
            t5 = rd32(esi + 0x16cu);
            t6 = rd8(rd32(esi + 0x16cu) + rd8(edi + 2u));
            t7 = rd8(rd8(edi) + rd32(esi + 0x16cu));
            t8 = rd8(rd32(esi + 0x16cu) + rd8(edi + 1u));
            wr8(sp0 + 7u, (uint8_t)t6);
            if ((uint8_t)(t7 << 0x10u >> 0x10u) != t8 << 0x18u >> 0x18u)
            {
                edi = edi + 3u;
                loc_8 = (((loc_8 & 0xff00ffffu) | t7 << 0x10u) & 0xffffffu) | t8 << 0x18u;
                goto L_102c0328;
            }
            edx = ((t5 | t6) & 0xffffff00u) | (uint8_t)(t7 << 0x10u >> 0x10u);
            edi = edi + 3u;
            loc_8 = (((loc_8 & 0xff00ffffu) | t7 << 0x10u) & 0xffffffu) | t8 << 0x18u;
            if ((uint8_t)edx != rd8(sp0 + 7u)) goto L_102c0328;
            edx = (edx & 0xffffff00u) | rd8(edi - 1u);
L_102c0354: ;
            wr8(ecx, (uint8_t)edx);
            if (loc_20 != 1u)
            {
                ecx = ecx + 1u;
                loc_20 = loc_20 - 1u;
                goto L_102c02f2;
            }
            ecx = ecx + 1u;
L_102c0542: ;
            ebx = loc_18;
            edi = rd32(sp0 + 0xcu);
L_102c0548: ;
            edx = rd32(sp0 + 8u);
        }
L_102c054b: ;
        if (rd8(edx + 8u) != 6u)
        {
            eax = 0xffu;
        }
        else
        {
            if (rd8(edx + 9u) != 8u) goto L_102c0647;
            if (rd32(esi + 0x168u) == 0u) goto L_102c05f2;
            if (rd32(esi + 0x16cu) == 0u) goto L_102c05f2;
            if (ebx == 0u)
            {
                eax = edi;
                goto L_102c07eb;
            }
            eax = edi;
            loc_24 = ebx;
L_102c0582: ;
            t27 = rd32(esi + 0x16cu);
            wr8(sp0 + 7u, rd8(rd8(eax) + t27));
            wr8(sp0 + 0xfu, rd8(t27 + rd8(eax + 1u)));
            t28 = rd8(t27 + rd8(eax + 2u));
            wr8(sp0 + 0xbu, (uint8_t)t28);
            if (rd8(sp0 + 7u) != rd8(sp0 + 0xfu))
            {
                eax = eax + 3u;
                goto L_102c05b3;
            }
            eax = eax + 3u;
            ecx = ((t27 | t28) & 0xffffff00u) | rd8(sp0 + 7u);
            if ((uint8_t)ecx == rd8(sp0 + 0xbu)) goto L_102c05b7;
L_102c05b3: ;
            loc_c = loc_c | 1u;
L_102c05b7: ;
            t29 = rd8(sp0 + 0xbu);
            t30 = rd8(sp0 + 0xfu);
            t31 = rd8(sp0 + 7u);
            t32 = rd8(rd32(esi + 0x168u) + ((rd8(sp0 + 0xbu) * loc_10 + rd8(sp0 + 0xfu) * loc_14 + rd8(sp0 + 7u) * loc_1c) >> 0xfu));
            wr8(edi, (uint8_t)t32);
            t33 = rd8(eax);
            wr8(edi + 1u, (uint8_t)t33);
            if (loc_24 != 1u)
            {
                eax = eax + 1u;
                edi = edi + 2u;
                loc_24 = loc_24 - 1u;
                goto L_102c0582;
            }
            eax = eax + 1u;
            ecx = (((t29 * loc_10 + t30 * loc_14 + t31 * loc_1c) >> 0xfu | t32) & 0xffffff00u) | t33;
L_102c07e8: ;
            ebx = loc_18;
        }
L_102c07eb: ;
        wr8(edx + 0xau, (uint8_t)(rd8(edx + 0xau) + 0xfeu));
        t63 = rd8(edx + 9u);
        t64 = rd8(edx + 0xau);
        wr8(edx + 8u, rd8(edx + 8u) & 0xfdu);
        eax = (eax & 0xffffff00u) | t63;
        ecx = (ecx & 0xffffff00u) | t64;
        cf = 0u;
        of = 0u;
        { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
        wr8(edx + 0xbu, (uint8_t)eax);
        t65 = ((uint8_t)eax * ebx + 7u) >> 3u;
        wr32(edx + 4u, t65);
    }
    return loc_c;
L_102c0328: ;
    edx = (((loc_8 >> 0x18u) * loc_14 + rd8(sp0 + 7u) * loc_10 + (uint8_t)(loc_8 >> 0x10u) * loc_1c) >> 0xfu & 0xffffff00u) | rd8(rd32(esi + 0x168u) + (((loc_8 >> 0x18u) * loc_14 + rd8(sp0 + 7u) * loc_10 + (uint8_t)(loc_8 >> 0x10u) * loc_1c) >> 0xfu));
    loc_c = loc_c | 1u;
    goto L_102c0354;
L_102c0361: ;
    if (ebx == 0u)
    {
        loc_c = 0u;
        goto L_102c0548;
    }
    edx = edi;
    loc_c = 0u;
    loc_20 = ebx;
    loc_8 = rd32(sp0 - 8u);
L_102c036e: ;
    t9 = rd8(edi);
    t10 = rd8(edi + 2u);
    t11 = rd8(edi + 1u);
    wr8(sp0 + 7u, (uint8_t)t10);
    if ((uint8_t)t9 != (uint8_t)(t11 << 0x10u >> 0x10u))
    {
        edi = edi + 3u;
        loc_8 = (((loc_8 & 0xffffffu) | t9 << 0x18u) & 0xff00ffffu) | t11 << 0x10u;
        goto L_102c038e;
    }
    ecx = (ecx & 0xffffff00u) | t9;
    ebx = (ebx & 0xffffff00u) | t10;
    edi = edi + 3u;
    loc_8 = (((loc_8 & 0xffffffu) | t9 << 0x18u) & 0xff00ffffu) | t11 << 0x10u;
    if ((uint8_t)ecx != (uint8_t)ebx) goto L_102c038e;
    ecx = (ecx & 0xffffff00u) | rd8(edi - 1u);
L_102c03b1: ;
    wr8(edx, (uint8_t)ecx);
    if (loc_20 != 1u)
    {
        edx = edx + 1u;
        loc_20 = loc_20 - 1u;
        goto L_102c036e;
    }
    goto L_102c0542;
L_102c038e: ;
    ecx = ((loc_8 >> 0x18u) * loc_1c + rd8(sp0 + 7u) * loc_10 + (uint8_t)(loc_8 >> 0x10u) * loc_14) >> 0xfu;
    ebx = (loc_8 >> 0x18u) * loc_1c;
    loc_c = loc_c | 1u;
    goto L_102c03b1;
L_102c03be: ;
    if (rd32(esi + 0x178u) == 0u) goto L_102c04d8;
    if (rd32(esi + 0x174u) == 0u) goto L_102c04d8;
    if (ebx == 0u)
    {
        loc_c = 0u;
        goto L_102c054b;
    }
    loc_20 = edi;
    loc_c = 0u;
    loc_24 = ebx;
L_102c03e6: ;
    t12 = rd8(edi + 4u) << 8u | rd8(edi + 5u);
    t13 = rd8(edi);
    t14 = rd8(edi + 1u);
    t15 = rd8(edi + 2u);
    t16 = rd8(edi + 3u);
    wr32(sp0 + 4u, t12);
    if ((uint16_t)(t13 << 8u | t14) != (uint16_t)(t15 << 8u | t16))
    {
        edx = t13 << 8u | t14;
        ebx = t15 << 8u | t16;
        loc_28 = edi + 6u;
        goto L_102c0415;
    }
    ecx = t12;
    edx = t13 << 8u | t14;
    ebx = t15 << 8u | t16;
    loc_28 = edi + 6u;
    edi = edi + 6u;
    if ((uint16_t)edx == (uint16_t)ecx) goto L_102c04bd;
L_102c0415: ;
    t17 = rd16(esi + 0x158u);
    t18 = rd16(sp0 + 4u);
    wr32(sp0 + 4u, (uint16_t)ebx);
    t19 = rd32(sp0 + 4u) >> 8u;
    t20 = rd16(((uint16_t)edx >> 8u) * 2u + rd32(rd32(esi + 0x178u) + ((uint8_t)edx >> (t17 & 0x1fu)) * 4u));
    t21 = rd32(sp0 + 4u);
    t22 = rd16(esi + 0x158u);
    wr32(sp0 + 4u, t19);
    t23 = t20 * loc_1c + rd16(rd32(sp0 + 4u) * 2u + rd32(rd32(esi + 0x178u) + ((uint8_t)t21 >> (t22 & 0x1fu)) * 4u)) * loc_14 + rd16((t18 >> 8u) * 2u + rd32(rd32(esi + 0x178u) + ((uint8_t)t18 >> (rd16(esi + 0x158u) & 0x1fu)) * 4u)) * loc_10;
    t24 = (uint16_t)(t23 >> 0xfu);
    edx = (t24 >> 8u & 0xffff0000u) | rd16((t24 >> 8u) * 2u + rd32(rd32(esi + 0x174u) + ((uint8_t)t24 >> (rd16(esi + 0x158u) & 0x1fu)) * 4u));
    edi = loc_28;
    loc_c = loc_c | 1u;
L_102c04bd: ;
    wr8(loc_20, (uint8_t)(edx >> 8u));
    wr8(loc_20 + 1u, (uint8_t)edx);
    if (loc_24 != 1u)
    {
        loc_20 = loc_20 + 2u;
        loc_24 = loc_24 - 1u;
        goto L_102c03e6;
    }
    ecx = loc_20 + 2u;
    goto L_102c0542;
L_102c04d8: ;
    if (ebx == 0u)
    {
        loc_c = 0u;
        goto L_102c054b;
    }
    loc_24 = edi;
    loc_c = 0u;
    loc_20 = ebx;
L_102c04e2: ;
    t25 = rd8(edi) << 8u | rd8(edi + 1u);
    wr32(sp0 + 4u, t25);
    if (rd16(sp0 + 4u) != (rd8(edi + 2u) << 8u | rd8(edi + 3u)))
    {
        ecx = rd8(edi + 4u) << 8u | rd8(edi + 5u);
        edx = rd8(edi + 2u) << 8u | rd8(edi + 3u);
        edi = edi + 6u;
        goto L_102c050c;
    }
    ecx = rd8(edi + 4u) << 8u | rd8(edi + 5u);
    edx = rd8(edi + 2u) << 8u | rd8(edi + 3u);
    edi = edi + 6u;
    if (rd16(sp0 + 4u) == (uint16_t)ecx) goto L_102c0510;
L_102c050c: ;
    loc_c = loc_c | 1u;
L_102c0510: ;
    t26 = rd16(sp0 + 4u);
    wr8(loc_24, (uint8_t)(((uint16_t)ecx * loc_10 + (uint16_t)edx * loc_14 + t26 * loc_1c) >> 0x17u));
    wr8(loc_24 + 1u, (uint8_t)(((uint16_t)ecx * loc_10 + (uint16_t)edx * loc_14 + t26 * loc_1c) >> 0xfu));
    if (loc_20 != 1u)
    {
        loc_24 = loc_24 + 2u;
        loc_20 = loc_20 - 1u;
        goto L_102c04e2;
    }
    ecx = ((uint16_t)ecx * loc_10 + (uint16_t)edx * loc_14 + t26 * loc_1c) >> 0xfu;
    goto L_102c0542;
L_102c05f2: ;
    if (ebx == 0u)
    {
        eax = edi;
        goto L_102c07eb;
    }
    eax = edi;
    esi = edi;
    edi = ebx;
L_102c0600: ;
    t34 = rd8(eax);
    t35 = rd8(eax + 1u);
    wr8(sp0 + 0xbu, (uint8_t)t35);
    t36 = rd8(eax + 2u);
    t37 = rd8(sp0 + 0xbu);
    wr8(sp0 + 0xfu, (uint8_t)t36);
    if ((uint8_t)t34 != (uint8_t)t37)
    {
        eax = eax + 3u;
        ecx = (ecx & 0xffffff00u) | t34;
        goto L_102c0618;
    }
    eax = eax + 3u;
    ecx = (ecx & 0xffffff00u) | t34;
    ebx = ((ebx | t35) & 0xffffff00u) | t36;
    if ((uint8_t)ecx == (uint8_t)ebx) goto L_102c061c;
L_102c0618: ;
    loc_c = loc_c | 1u;
L_102c061c: ;
    t38 = rd8(sp0 + 0xfu);
    t39 = rd8(sp0 + 0xbu);
    wr8(esi, (uint8_t)((t38 * loc_10 + ((uint8_t)ecx + t39) * loc_14) >> 8u));
    t40 = rd8(eax);
    wr8(esi + 1u, (uint8_t)t40);
    if (edi != 1u)
    {
        eax = eax + 1u;
        ebx = (t38 * loc_10 + ((uint8_t)ecx + t39) * loc_14) >> 8u;
        ecx = (t38 * loc_10 & 0xffffff00u) | t40;
        esi = esi + 2u;
        edi = edi - 1u;
        goto L_102c0600;
    }
    eax = eax + 1u;
    ecx = (t38 * loc_10 & 0xffffff00u) | t40;
    goto L_102c07e8;
L_102c0647: ;
    if (rd32(esi + 0x178u) == 0u) goto L_102c0777;
    if (rd32(esi + 0x174u) == 0u) goto L_102c0777;
    if (ebx == 0u)
    {
        eax = 0xffu;
        ecx = edi;
        goto L_102c07eb;
    }
    ecx = edi;
    loc_24 = edi;
    loc_20 = ebx;
L_102c0671: ;
    t41 = rd8(edi + 2u) << 8u | rd8(edi + 3u);
    t42 = rd8(edi);
    t43 = rd8(edi + 1u);
    wr32(sp0 + 4u, t41);
    t44 = rd8(edi + 4u) << 8u | rd8(edi + 5u);
    t45 = rd16(sp0 + 4u);
    wr32(sp0 + 0xcu, t44);
    if ((uint16_t)(t42 << 8u | t43) != (uint16_t)t45)
    {
        edx = t42 << 8u | t43;
        loc_28 = edi + 6u;
        goto L_102c06a4;
    }
    edx = t42 << 8u | t43;
    ebx = t44;
    loc_28 = edi + 6u;
    edi = edi + 6u;
    if ((uint16_t)edx == (uint16_t)ebx) goto L_102c0750;
L_102c06a4: ;
    t46 = rd16(sp0 + 4u);
    t47 = rd16(esi + 0x158u);
    t48 = rd16(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t46);
    t49 = rd32(sp0 + 0xcu) >> 8u;
    t50 = rd16(((uint16_t)edx >> 8u) * 2u + rd32(rd32(esi + 0x178u) + ((uint8_t)edx >> (t47 & 0x1fu)) * 4u));
    t51 = rd32(sp0 + 0xcu);
    t52 = rd16(esi + 0x158u);
    wr32(sp0 + 0xcu, t49);
    t53 = t50 * loc_1c + rd16(rd32(sp0 + 0xcu) * 2u + rd32(rd32(esi + 0x178u) + ((uint8_t)t51 >> (t52 & 0x1fu)) * 4u)) * loc_14 + rd16((t48 >> 8u) * 2u + rd32(rd32(esi + 0x178u) + ((uint8_t)t48 >> (rd16(esi + 0x158u) & 0x1fu)) * 4u)) * loc_10;
    t54 = (uint16_t)(t53 >> 0xfu);
    ecx = loc_24;
    edx = (t54 >> 8u & 0xffff0000u) | rd16((t54 >> 8u) * 2u + rd32(rd32(esi + 0x174u) + ((uint8_t)t54 >> (rd16(esi + 0x158u) & 0x1fu)) * 4u));
    edi = loc_28;
    loc_c = loc_c | 1u;
L_102c0750: ;
    wr8(ecx, (uint8_t)(edx >> 8u));
    wr8(ecx + 1u, (uint8_t)edx);
    t55 = rd8(edi);
    wr8(ecx + 2u, (uint8_t)t55);
    wr8(ecx + 3u, rd8(edi + 1u));
    if (loc_20 != 1u)
    {
        edi = edi + 2u;
        loc_20 = loc_20 - 1u;
        loc_24 = ecx + 4u;
        ecx = ecx + 4u;
        goto L_102c0671;
    }
    ecx = ecx + 4u;
    eax = 0xffu;
    edx = rd32(sp0 + 8u);
    goto L_102c07e8;
L_102c0777: ;
    if (ebx == 0u)
    {
        eax = 0xffu;
        ecx = edi;
        goto L_102c07eb;
    }
    ecx = edi;
    esi = edi;
    wr32(sp0 + 0xcu, ebx);
L_102c0782: ;
    t56 = rd8(ecx + 1u) | rd8(ecx) << 8u;
    t57 = rd8(ecx + 5u) | rd8(ecx + 4u) << 8u;
    t58 = rd8(ecx + 3u);
    t59 = rd8(ecx + 2u);
    wr32(sp0 + 8u, t57);
    if ((uint16_t)t56 != (uint16_t)(t58 | t59 << 8u))
    {
        ecx = ecx + 6u;
        ebx = t58 | t59 << 8u;
        edi = t56;
        goto L_102c07ac;
    }
    eax = t57;
    ecx = ecx + 6u;
    ebx = t58 | t59 << 8u;
    edi = t56;
    if ((uint16_t)edi == (uint16_t)eax) goto L_102c07b0;
L_102c07ac: ;
    loc_c = loc_c | 1u;
L_102c07b0: ;
    t60 = rd16(sp0 + 8u);
    wr8(esi, (uint8_t)(((uint16_t)ebx * loc_14 + (uint16_t)edi * loc_1c + t60 * loc_10) >> 0x17u));
    wr8(esi + 1u, (uint8_t)(((uint16_t)ebx * loc_14 + (uint16_t)edi * loc_1c + t60 * loc_10) >> 0xfu));
    t61 = rd8(ecx);
    wr8(esi + 2u, (uint8_t)t61);
    t62 = rd8(ecx + 1u);
    wr8(esi + 3u, (uint8_t)t62);
    wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) - 1u);
    if (rd32(sp0 + 0xcu) != 1u)
    {
        ecx = ecx + 2u;
        esi = esi + 4u;
        goto L_102c0782;
    }
    eax = ((((uint16_t)ebx * loc_14 + (uint16_t)edi * loc_1c + t60 * loc_10) >> 0xfu | t61) & 0xffffff00u) | t62;
    ecx = ecx + 2u;
    goto L_102c07e8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c0272(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c0272(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
