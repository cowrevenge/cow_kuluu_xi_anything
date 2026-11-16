/* f_0x1031a1c2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031a1c2(Guest* g)
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
    uint32_t loc_20;
    uint32_t loc_2300;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_308;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_44;
    uint32_t loc_4c;
    uint32_t loc_c;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
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
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 9016u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x230cu, in_ebx);
    wr32(sp0 - 0x2310u, in_esi);
    wr32(sp0 - 0x2314u, in_edi);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x34u, 0u);
    if (rd16(rd32(sp0 + 8u)) == 0u)
    {
        ebx = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u) & 0xff00ffffu;
        loc_34 = 0u;
    }
    else
    {
        eax = rd16(rd32(sp0 + 8u));
        ebx = rd32(sp0 - 0x18u);
        edi = rd32(sp0 + 8u);
        loc_14 = rd32(sp0 - 0x14u) & 0xff00ffffu;
        ecx = self;
        edx = in_edx;
        loc_34 = 0u;
L_1031a1f4: ;
        wr32(sp0 - 0x2318u, 8u);
        wr32(sp0 - 0x231cu, eax);
        g->edx = edx;
        g->esp = sp0 - 0x2310u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031a160u), ecx, 3, eax, 8u, in_edi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = 8u;
            edx = t2;
        }
        else
        {
            edx = t2;
            wr32(sp0 - 0x2318u, arg1);
            t3 = rd32(sp0 - 8u) - 1u;
            wr32(sp0 - 8u, t3);
            wr32(sp0 - 0x231cu, arg1);
            wr32(sp0 - 0x2320u, sp0 - 8u);
            g->edx = edx;
            g->esp = sp0 - 0x2308u;
            t4 = cow_cdecl(g, COW_IMG(0x1031ad0fu), 6, sp0 - 8u, arg1, arg1, rd32(sp0 - 0x2314u), rd32(sp0 - 0x2310u), rd32(sp0 - 0x230cu));
            t5 = g->edx;
            wr32(sp0 - 0x231cu, t4);
            g->ecx = arg1;
            g->edx = t5;
            g->esp = sp0 - 0x2314u;
            t6 = cow_cdecl(g, COW_IMG(0x1031acf6u), 2, t4, arg1);
            t7 = g->ecx;
            t8 = g->edx;
            t9 = (t6 & 0xffff0000u) | rd16(edi + 2u);
            wr32(sp0 - 0x2320u, t9);
            g->eax = t9;
            g->ecx = t7;
            g->edx = t8;
            t10 = cow_cdecl(g, COW_IMG(0x10312beeu), 3, t9, rd32(sp0 - 0x231cu), arg1);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
            edi = edi + 2u;
L_1031a22a: ;
            if (eax == 0u) goto L_1031a23c;
            t13 = (eax & 0xffff0000u) | rd16(edi + 2u);
            wr32(sp0 - 0x2318u, t13);
            g->eax = t13;
            g->edx = edx;
            g->esp = sp0 - 0x230cu;
            t14 = cow_cdecl(g, COW_IMG(0x10312beeu), 3, t13, rd32(sp0 - 0x2314u), rd32(sp0 - 0x2310u));
            t15 = g->edx;
            eax = t14;
            ecx = rd32(sp0 - 0x2318u);
            edx = t15;
            edi = edi + 2u;
            goto L_1031a22a;
        }
L_1031a23c: ;
        if (rd16(edi) != 0x25u) goto L_1031ac29;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x44u, 0u);
        loc_1c = (uint16_t)rd32(sp0 - 0x1cu);
        loc_c = 0x100u;
        loc_14 = rd32(sp0 - 0x14u) & 0xffffffu;
        loc_30 = 0u;
        loc_10 = 0u;
        loc_44 = 0u;
L_1031a274: ;
        if ((rd16(edi + 2u) & 0xff00u) != 0u)
        {
            esi = rd16(edi + 2u);
            edi = edi + 2u;
            goto L_1031a2c5;
        }
        esi = rd16(edi + 2u);
        edi = edi + 2u;
        if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
        {
            eax = rd8((uint8_t)esi * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
            ecx = rd32(COW_IMG(0x103d0030u));
        }
        else
        {
            wr32(sp0 - 0x2318u, 4u);
            wr32(sp0 - 0x231cu, (uint8_t)esi);
            g->edx = edx;
            g->esp = sp0 - 0x2310u;
            t16 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)esi, 4u, rd32(sp0 - 0x2314u));
            t17 = g->edx;
            eax = t16;
            ecx = 4u;
            edx = t17;
        }
        if (eax == 0u) goto L_1031a2c5;
        wr32(sp0 - 0x30u, loc_30 + 1u);
        t18 = esi + loc_10 * 0xau - 0x30u;
        wr32(sp0 - 0x10u, t18);
        eax = t18;
        loc_30 = loc_30 + 1u;
        loc_10 = t18;
L_1031a32c: ;
        if ((uint8_t)loc_c == 0u) goto L_1031a274;
        wr32(sp0 + 8u, edi);
        if ((uint8_t)(loc_c >> 0x10u) == 0u)
        {
            t19 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x4cu, t19);
            wr32(sp0 + 0xcu, t19 + 4u);
            wr32(sp0 - 0x24u, rd32(t19));
            eax = rd32(t19);
            loc_4c = t19;
            loc_24 = rd32(t19);
        }
        if (loc_c >> 0x18u != 0u)
        {
            loc_c = loc_c & 0xffffff00u;
        }
        else
        {
            loc_c = loc_c & 0xffffff00u;
            if (rd16(edi) == 0x53u)
            {
                eax = (eax & 0xffff0000u) | rd16(edi);
                goto L_1031a370;
            }
            eax = (eax & 0xffff0000u) | rd16(edi);
            if ((uint16_t)eax == 0x43u) goto L_1031a370;
            loc_c = (loc_c & 0xffffffu) | 0x1000000u;
        }
L_1031a374: ;
        t20 = rd16(edi) | 0x20u;
        wr32(sp0 - 0x28u, t20);
        if ((rd16(edi) | 0x20u) == 0x6eu)
        {
            esi = t20;
            loc_28 = t20;
        }
        else
        {
            esi = t20;
            loc_28 = t20;
            if (esi == 0x63u) goto L_1031a39b;
            if (esi == 0x7bu) goto L_1031a39b;
            wr32(sp0 - 0x2318u, arg1);
            wr32(sp0 - 0x231cu, sp0 - 8u);
            g->edx = edx;
            g->esp = sp0 - 0x2304u;
            t21 = cow_cdecl(g, COW_IMG(0x1031ad0fu), 6, sp0 - 8u, arg1, rd32(sp0 - 0x2314u), rd32(sp0 - 0x2310u), rd32(sp0 - 0x230cu), rd32(sp0 - 0x2308u));
            t22 = g->edx;
            eax = t21;
            edx = t22;
L_1031a3a6: ;
            wr32(sp0 - 0x18u, eax);
            ebx = eax;
            loc_18 = eax;
        }
        if (loc_30 == 0u)
        {
            ecx = loc_30;
            goto L_1031a3bd;
        }
        ecx = loc_30;
        if (loc_10 == 0u) goto L_1031ac67;
L_1031a3bd: ;
        if ((int32_t)esi > 111) goto L_1031a6a9;
        zf = esi == 0x6fu;
        if (zf) goto L_1031a95e;
        if (esi == 0x63u) goto L_1031a687;
        if (esi == 0x64u) goto L_1031a95e;
        zf = esi == 0x64u;
        sf = (int32_t)(esi - 0x64u) < 0;
        of = ((esi ^ 0x64u) & (esi ^ esi - 0x64u)) >> 0x1fu;
        if (zf || sf != of) goto L_1031a6d3;
        if ((int32_t)esi <= 103) goto L_1031a422;
        if (esi == 0x69u) goto L_1031a409;
        if (esi != 0x6eu) goto L_1031a6d3;
        if ((uint8_t)(loc_c >> 0x10u) == 0u)
        {
            esi = rd32(sp0 - 8u);
            goto L_1031aaf2;
        }
L_1031ac1f: ;
        edi = rd32(sp0 + 8u) + 2u;
        loc_14 = (loc_14 & 0xff00ffffu) | (uint8_t)((uint8_t)(loc_14 >> 0x10u) + 1u) << 0x10u;
L_1031ac44: ;
        if ((uint16_t)ebx != 0xffffffffu)
        {
            eax = (uint16_t)ebx;
            goto L_1031ac59;
        }
        eax = (uint16_t)ebx;
        if (rd16(edi) != 0x25u) goto L_1031ac75;
        if (rd16(edi + 2u) != 0x6eu) goto L_1031ac75;
L_1031ac59: ;
        if (rd16(edi) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi);
            goto L_1031a1f2;
        }
    }
L_1031ac75: ;
    if ((uint16_t)ebx != 0xffffffffu)
    {
        eax = loc_34;
    }
    else
    {
        eax = loc_34;
        if (eax == 0u)
        {
            if ((uint8_t)(loc_14 >> 0x10u) == (uint8_t)eax)
            {
                eax = 0xffffffffu;
            }
        }
    }
    return eax;
L_1031a1f2: ;
    goto L_1031a1f4;
L_1031a2c5: ;
    if ((int32_t)esi > 78) goto L_1031a30a;
    zf = esi == 0x4eu;
    if (zf) goto L_1031a32c;
    if (esi == 0x2au) goto L_1031a305;
    if (esi == 0x46u) goto L_1031a32c;
    if (esi == 0x49u) goto L_1031a2e5;
    if (esi != 0x4cu) goto L_1031a319;
    loc_c = (loc_c & 0xffff00ffu) | (uint8_t)((uint8_t)(loc_c >> 8u) + 1u) << 8u;
    goto L_1031a32c;
L_1031a2e5: ;
    if (rd16(edi + 2u) != 0x36u) goto L_1031a319;
    if (rd16(edi + 4u) != 0x34u)
    {
        eax = edi + 4u;
        goto L_1031a319;
    }
    eax = edi + 4u;
    wr32(sp0 - 0x44u, loc_44 + 1u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    edi = eax;
    loc_44 = loc_44 + 1u;
    loc_3c = 0u;
    loc_38 = 0u;
    goto L_1031a32c;
L_1031a305: ;
    loc_c = (loc_c & 0xff00ffffu) | (uint8_t)((uint8_t)(loc_c >> 0x10u) + 1u) << 0x10u;
    goto L_1031a32c;
L_1031a30a: ;
    if (esi == 0x68u) goto L_1031a326;
    if (esi == 0x6cu) goto L_1031a31e;
    if (esi == 0x77u) goto L_1031a321;
L_1031a319: ;
    loc_c = (loc_c & 0xffffff00u) | (uint8_t)((uint8_t)loc_c + 1u);
    goto L_1031a32c;
L_1031a31e: ;
    loc_c = (loc_c & 0xffff00ffu) | (uint8_t)((uint8_t)(loc_c >> 8u) + 1u) << 8u;
L_1031a321: ;
    loc_c = (loc_c & 0xffffffu) | (uint8_t)((loc_c >> 0x18u) + 1u) << 0x18u;
    goto L_1031a32c;
L_1031a326: ;
    loc_c = (((loc_c & 0xffff00ffu) | (uint8_t)((uint8_t)(loc_c >> 8u) - 1u) << 8u) & 0xffffffu) | (uint8_t)((loc_c >> 0x18u) - 1u) << 0x18u;
    goto L_1031a32c;
L_1031a370: ;
    loc_c = (loc_c & 0xffffffu) | (loc_c >> 0x18u | 0xffu) << 0x18u;
    goto L_1031a374;
L_1031a39b: ;
    wr32(sp0 - 0x2318u, arg1);
    t23 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t23);
    g->esp = sp0 - 0x2314u;
    t24 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    goto L_1031a3a6;
L_1031a409: ;
    wr32(sp0 - 0x2318u, 0x64u);
    wr32(sp0 - 0x28u, 0x64u);
    esi = 0x64u;
    loc_28 = 0x64u;
L_1031a40f: ;
    if ((uint16_t)ebx != 0x2du) goto L_1031a71a;
    loc_1c = (loc_1c & 0xff00ffffu) | 0x10000u;
L_1031a720: ;
    wr32(sp0 - 0x10u, loc_10 - 1u);
    if (loc_10 != 1u)
    {
        loc_10 = loc_10 - 1u;
        goto L_1031a72f;
    }
    loc_10 = loc_10 - 1u;
    if (ecx == 0u) goto L_1031a72f;
    loc_c = (loc_c & 0xffffff00u) | 1u;
L_1031a740: ;
    if ((uint16_t)ebx != 0x30u)
    {
        loc_20 = 0u;
        goto L_1031a990;
    }
    wr32(sp0 - 0x2318u, arg1);
    t76 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t76);
    g->esp = sp0 - 0x2314u;
    t77 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
    t78 = g->edx;
    wr32(sp0 - 0x2318u, 0x78u);
    wr32(sp0 - 0x18u, t77);
    if ((uint16_t)t77 == 0x78u)
    {
        eax = t77;
        edx = t78;
        goto L_1031a796;
    }
    eax = t77;
    edx = t78;
    ebx = t77;
    loc_18 = t77;
    if ((uint16_t)ebx == 0x58u) goto L_1031a796;
    wr32(sp0 - 0x20u, 1u);
    if (esi == 0x78u) goto L_1031a780;
    wr32(sp0 - 0x28u, 0x6fu);
    ecx = arg1;
    loc_20 = 1u;
    loc_28 = 0x6fu;
L_1031a990: ;
    if (loc_44 == 0u)
    {
        if ((uint8_t)loc_c != 0u)
        {
            esi = 0u;
        }
        else
        {
            esi = 0u;
L_1031ab21: ;
            if (loc_28 == 0x78u) goto L_1031ab7f;
            if (loc_28 == 0x70u) goto L_1031ab7f;
            if ((uint8_t)(ebx >> 8u) != 0u) goto L_1031abf0;
            if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
            {
                eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
                ecx = rd32(COW_IMG(0x103d0030u));
            }
            else
            {
                wr32(sp0 - 0x2318u, 4u);
                wr32(sp0 - 0x231cu, (uint8_t)ebx);
                g->edx = edx;
                g->esp = sp0 - 0x2310u;
                t132 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)ebx, 4u, rd32(sp0 - 0x2314u));
                t133 = g->edx;
                eax = t132;
                ecx = 4u;
                edx = t133;
            }
            if (eax == 0u) goto L_1031abf0;
            if (loc_28 != 0x6fu) goto L_1031ab78;
            if ((uint16_t)ebx >= 0x38u) goto L_1031abf0;
            esi = esi << 3u;
L_1031abc5: ;
            wr32(sp0 - 0x20u, loc_20 + 1u);
            if (loc_30 == 0u)
            {
                eax = (uint16_t)ebx;
                esi = esi + (uint16_t)ebx - 0x30u;
                loc_20 = loc_20 + 1u;
                goto L_1031abda;
            }
            eax = (uint16_t)ebx;
            esi = esi + (uint16_t)ebx - 0x30u;
            loc_20 = loc_20 + 1u;
            wr32(sp0 - 0x10u, loc_10 - 1u);
            if (loc_10 == 1u) goto L_1031abfe;
            loc_10 = loc_10 - 1u;
L_1031abda: ;
            wr32(sp0 - 0x2318u, arg1);
            t138 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t138);
            g->esp = sp0 - 0x2314u;
            t139 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
            t140 = g->edx;
            wr32(sp0 - 0x18u, t139);
            eax = t139;
            ecx = arg1;
            edx = t140;
            ebx = t139;
            loc_18 = t139;
            goto L_1031ab21;
        }
L_1031abfe: ;
        if ((uint8_t)(loc_1c >> 0x10u) != 0u)
        {
            esi = -esi;
        }
    }
    else
    {
        if ((uint8_t)loc_c == 0u)
        {
            esi = loc_3c;
L_1031a9ac: ;
            if (loc_28 != 0x78u) goto L_1031aa11;
            if ((uint8_t)(ebx >> 8u) != 0u) goto L_1031aaa7;
            if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
            {
                eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 0x80u;
                ecx = rd32(COW_IMG(0x103d0030u));
            }
            else
            {
                wr32(sp0 - 0x2318u, 0x80u);
                wr32(sp0 - 0x231cu, (uint8_t)ebx);
                g->edx = edx;
                g->esp = sp0 - 0x2310u;
                t108 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)ebx, 0x80u, rd32(sp0 - 0x2314u));
                t109 = g->edx;
                eax = t108;
                ecx = 0x80u;
                edx = t109;
            }
            if (eax == 0u) goto L_1031aaa7;
            wr32(sp0 - 0x2318u, 4u);
            g->esp = sp0 - 0x2314u;
            t110 = cow_call_regs(g, COW_IMG(0x10312a60u), esi, 4u, loc_38, 1, 0);
            t111 = g->ecx;
            t112 = g->edx;
            wr32(sp0 - 0x2318u, ebx);
            wr32(sp0 - 0x38u, t112);
            g->esp = sp0 - 0x230cu;
            t113 = cow_thiscall_cdecl(g, COW_IMG(0x1031ac91u), t111, 3, ebx, rd32(sp0 - 0x2314u), rd32(sp0 - 0x2310u));
            wr32(sp0 - 0x18u, t113);
            ecx = rd32(sp0 - 0x2318u);
            ebx = t113;
            esi = t110;
            loc_18 = t113;
L_1031aa74: ;
            t122 = rd32(sp0 - 0x20u) + 1u;
            wr32(sp0 - 0x20u, t122);
            t123 = loc_38 + (uint32_t)((int32_t)((uint16_t)ebx - 0x30u) >> 0x1fu) + (esi + (uint16_t)ebx - 0x30u < esi);
            wr32(sp0 - 0x38u, t123);
            t124 = esi + (uint16_t)ebx - 0x30u;
            wr32(sp0 - 0x3cu, t124);
            if (rd32(sp0 - 0x30u) == 0u)
            {
                eax = (uint16_t)ebx - 0x30u;
                edx = (uint32_t)((int32_t)((uint16_t)ebx - 0x30u) >> 0x1fu);
                esi = t124;
                loc_38 = t123;
                loc_20 = t122;
                loc_3c = t124;
                goto L_1031aa91;
            }
            eax = (uint16_t)ebx - 0x30u;
            edx = (uint32_t)((int32_t)((uint16_t)ebx - 0x30u) >> 0x1fu);
            esi = t124;
            loc_38 = t123;
            loc_20 = t122;
            loc_3c = t124;
            t125 = rd32(sp0 - 0x10u) - 1u;
            wr32(sp0 - 0x10u, t125);
            if (rd32(sp0 - 0x10u) == 1u) goto L_1031aab5;
            loc_10 = t125;
L_1031aa91: ;
            wr32(sp0 - 0x2318u, arg1);
            t126 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t126);
            g->esp = sp0 - 0x2314u;
            t127 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
            t128 = g->edx;
            wr32(sp0 - 0x18u, t127);
            eax = t127;
            ecx = arg1;
            edx = t128;
            ebx = t127;
            loc_18 = t127;
            goto L_1031a9ac;
        }
L_1031aab5: ;
        if ((uint8_t)(loc_1c >> 0x10u) != 0u)
        {
            wr32(sp0 - 0x3cu, -loc_3c);
            t131 = -(loc_38 + (loc_3c != 0u));
            wr32(sp0 - 0x38u, t131);
            ecx = t131;
            loc_3c = -loc_3c;
            loc_38 = t131;
        }
        esi = 0u;
    }
    if (loc_28 == 0x46u)
    {
        wr32(sp0 - 0x20u, 0u);
        loc_20 = 0u;
    }
    if (loc_20 == 0u) goto L_1031ac75;
    if ((uint8_t)(loc_c >> 0x10u) != 0u) goto L_1031ac1f;
    t143 = rd32(sp0 - 0x34u) + 1u;
    wr32(sp0 - 0x34u, t143);
    loc_34 = t143;
L_1031aaf2: ;
    if (loc_44 == 0u)
    {
        if ((uint8_t)(loc_c >> 8u) == 0u)
        {
            eax = loc_24;
            wr16(eax, (uint16_t)esi);
        }
        else
        {
            eax = loc_24;
            wr32(eax, esi);
        }
    }
    else
    {
        wr32(loc_24, loc_3c);
        wr32(loc_24 + 4u, loc_38);
        ecx = loc_38;
    }
    goto L_1031ac1f;
L_1031a422: ;
    if ((uint16_t)ebx != 0x2du) goto L_1031a43d;
    esi = sp0 - 0x306u;
    loc_308 = (rd32(sp0 - 0x308u) & 0xffff0000u) | (uint16_t)ebx;
L_1031a443: ;
    wr32(sp0 - 0x2318u, arg1);
    wr32(sp0 - 0x10u, loc_10 - 1u);
    t26 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t26);
    g->esp = sp0 - 0x2314u;
    t27 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
    t28 = g->edx;
    wr32(sp0 - 0x18u, t27);
    ecx = arg1;
    edx = t28;
    ebx = t27;
    loc_18 = t27;
L_1031a457: ;
    if (loc_30 == 0u) goto L_1031a466;
    if ((int32_t)loc_10 <= 349) goto L_1031a46d;
L_1031a466: ;
    wr32(sp0 - 0x10u, 0x15du);
    loc_10 = 0x15du;
L_1031a46d: ;
    if ((uint8_t)(ebx >> 8u) != 0u)
    {
        loc_20 = 0u;
    }
    else
    {
        loc_20 = 0u;
L_1031a477: ;
        if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
        {
            eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
            ecx = rd32(COW_IMG(0x103d0030u));
        }
        else
        {
            wr32(sp0 - 0x2318u, 4u);
            wr32(sp0 - 0x231cu, (uint8_t)ebx);
            g->edx = edx;
            g->esp = sp0 - 0x2310u;
            t29 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)ebx, 4u, rd32(sp0 - 0x2314u));
            t30 = g->edx;
            eax = t29;
            ecx = 4u;
            edx = t30;
        }
        if (eax == 0u) goto L_1031a4cc;
        wr32(sp0 - 0x10u, loc_10 - 1u);
        if (loc_10 == 0u)
        {
            loc_10 = loc_10 - 1u;
            goto L_1031a4cc;
        }
        eax = loc_10;
        loc_10 = loc_10 - 1u;
        wr32(sp0 - 0x20u, loc_20 + 1u);
        wr32(sp0 - 0x2318u, arg1);
        wr16(esi, (uint16_t)ebx);
        t31 = rd32(sp0 - 8u) + 1u;
        wr32(sp0 - 8u, t31);
        g->esp = sp0 - 0x2314u;
        t32 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
        t33 = g->edx;
        wr32(sp0 - 0x18u, t32);
        if ((uint8_t)(t32 >> 8u) == 0u)
        {
            ecx = arg1;
            edx = t33;
            ebx = t32;
            esi = esi + 2u;
            loc_18 = t32;
            goto L_1031a477;
        }
        ecx = arg1;
        edx = t33;
        ebx = t32;
        esi = esi + 2u;
        loc_18 = t32;
    }
L_1031a4cc: ;
    wr32(sp0 - 0x2318u, rd32(COW_IMG(0x103d023cu)));
    wr32(sp0 - 0x231cu, COW_IMG(0x103d0240u));
    wr32(sp0 - 0x2320u, sp0 - 0x3eu);
    g->esp = sp0 - 0x2314u;
    t34 = cow_call_regs(g, COW_IMG(0x10324215u), g->eax, ecx, edx, 1, 3, sp0 - 0x3eu, COW_IMG(0x103d0240u), rd32(COW_IMG(0x103d023cu)));
    t35 = g->ecx;
    t36 = g->edx;
    if (rd16(sp0 - 0x3eu) != (uint16_t)ebx)
    {
        eax = t34;
        ecx = t35;
        edx = t36;
        edi = rd32(sp0 - 0x10u);
    }
    else
    {
        ecx = t35;
        edx = t36;
        edi = rd32(sp0 - 0x10u);
        if (edi == 0u)
        {
            eax = edi;
            edi = edi - 1u;
        }
        else
        {
            eax = edi;
            edi = edi - 1u;
            wr32(sp0 - 0x2318u, arg1);
            t37 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t37);
            g->esp = sp0 - 0x2314u;
            t38 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
            t39 = g->edx;
            t40 = rd16(sp0 - 0x3eu);
            wr16(esi, (uint16_t)t40);
            wr32(sp0 - 0x18u, t38);
            eax = (t38 & 0xffff0000u) | t40;
            edx = t39;
            ebx = t38;
            esi = esi + 2u;
            loc_18 = t38;
L_1031a50d: ;
            if ((uint8_t)(ebx >> 8u) != 0u)
            {
                ecx = arg1;
                goto L_1031a567;
            }
            if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
            {
                eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
                ecx = rd32(COW_IMG(0x103d0030u));
            }
            else
            {
                wr32(sp0 - 0x2318u, 4u);
                wr32(sp0 - 0x231cu, (uint8_t)ebx);
                g->edx = edx;
                g->esp = sp0 - 0x2310u;
                t41 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), arg1, 3, (uint8_t)ebx, 4u, rd32(sp0 - 0x2314u));
                t42 = g->edx;
                eax = t41;
                ecx = 4u;
                edx = t42;
            }
            if (eax == 0u) goto L_1031a567;
            if (edi == 0u)
            {
                eax = edi;
                edi = edi - 1u;
                goto L_1031a567;
            }
            eax = edi;
            edi = edi - 1u;
            t43 = rd32(sp0 - 0x20u) + 1u;
            wr32(sp0 - 0x20u, t43);
            wr32(sp0 - 0x2318u, arg1);
            wr16(esi, (uint16_t)ebx);
            t44 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t44);
            g->esp = sp0 - 0x2314u;
            t45 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
            t46 = g->edx;
            wr32(sp0 - 0x18u, t45);
            eax = t45;
            edx = t46;
            ebx = t45;
            esi = esi + 2u;
            loc_18 = t45;
            goto L_1031a50d;
        }
    }
L_1031a567: ;
    if (rd32(sp0 - 0x20u) != 0u)
    {
        if ((uint16_t)ebx == 0x65u) goto L_1031a581;
        if ((uint16_t)ebx != 0x45u) goto L_1031a61c;
L_1031a581: ;
        if (edi == 0u)
        {
            eax = edi;
        }
        else
        {
            eax = edi;
            edi = edi - 1u;
            wr32(sp0 - 0x2318u, arg1);
            wr16(esi, 0x65u);
            t47 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t47);
            g->esp = sp0 - 0x2314u;
            t48 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
            t49 = g->edx;
            wr32(sp0 - 0x18u, t48);
            if ((uint16_t)t48 != 0x2du)
            {
                eax = t48;
                edx = t49;
                ebx = t48;
                esi = esi + 2u;
                loc_18 = t48;
                goto L_1031a5b1;
            }
            edx = t49;
            ebx = t48;
            esi = esi + 2u;
            loc_18 = t48;
            wr16(esi, (uint16_t)ebx);
            esi = esi + 2u;
L_1031a5b7: ;
            if (edi != 0u)
            {
                eax = edi;
                ecx = arg1;
                edi = edi - 1u;
                goto L_1031a5c2;
            }
            eax = edi;
            edi = 0u;
L_1031a5d3: ;
            if ((uint8_t)(ebx >> 8u) != 0u)
            {
                ecx = arg1;
                goto L_1031a61c;
            }
            if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
            {
                eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
                ecx = rd32(COW_IMG(0x103d0030u));
            }
            else
            {
                wr32(sp0 - 0x2318u, 4u);
                wr32(sp0 - 0x231cu, (uint8_t)ebx);
                g->edx = edx;
                g->esp = sp0 - 0x2310u;
                t50 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), arg1, 3, (uint8_t)ebx, 4u, rd32(sp0 - 0x2314u));
                t51 = g->edx;
                eax = t50;
                ecx = 4u;
                edx = t51;
            }
            if (eax == 0u) goto L_1031a61c;
            if (edi == 0u)
            {
                eax = edi;
                goto L_1031a61c;
            }
            eax = edi;
            edi = edi - 1u;
            t52 = rd32(sp0 - 0x20u) + 1u;
            wr32(sp0 - 0x20u, t52);
            wr16(esi, (uint16_t)ebx);
            esi = esi + 2u;
            loc_20 = t52;
L_1031a5c2: ;
            wr32(sp0 - 0x2318u, arg1);
            t53 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t53);
            g->esp = sp0 - 0x2314u;
            t54 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
            t55 = g->edx;
            wr32(sp0 - 0x18u, t54);
            eax = t54;
            edx = t55;
            ebx = t54;
            loc_18 = t54;
            goto L_1031a5d3;
        }
    }
L_1031a61c: ;
    wr32(sp0 - 0x2318u, arg1);
    t56 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t56);
    wr32(sp0 - 0x231cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x2314u;
    cow_cdecl(g, COW_IMG(0x1031acf6u), 2, ebx, arg1);
    t57 = g->edx;
    if (rd32(sp0 - 0x20u) == 0u) goto L_1031ac75;
    edx = t57;
    if (rd8(sp0 - 0xau) != 0u)
    {
        ecx = arg1;
    }
    else
    {
        wr16(esi, 0u);
        t58 = rd32(sp0 - 0x34u) + 1u;
        wr32(sp0 - 0x34u, t58);
        t59 = (uint32_t)((int32_t)(esi - (sp0 - 0x308u)) >> 1u) * 2u + 2u;
        wr32(sp0 - 0x2318u, t59);
        g->ecx = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x230cu;
        t60 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t59, rd32(sp0 - 0x2314u), rd32(sp0 - 0x2310u));
        t61 = g->ecx;
        t62 = g->edx;
        wr32(sp0 - 0x231cu, t59);
        wr32(sp0 - 0x2320u, sp0 - 0x308u);
        wr32(sp0 - 0x2324u, t60);
        g->esp = sp0 - 0x2318u;
        cow_call_regs(g, COW_IMG(0x10323fdau), g->eax, t61, t62, 1, 3, t60, sp0 - 0x308u, t59);
        t63 = g->ecx;
        t64 = g->edx;
        wr32(sp0 - 0x2328u, t60);
        t65 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x232cu, t65);
        t66 = (uint32_t)(int8_t)rd8(sp0 - 0xbu) - 1u;
        wr32(sp0 - 0x2330u, t66);
        g->eax = t66;
        g->edx = t64;
        g->esp = sp0 - 0x2324u;
        t67 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x103d0780u)), t63, 3, t66, t65, t60);
        t68 = g->ecx;
        t69 = g->edx;
        wr32(sp0 - 0x2334u, t60);
        g->esp = sp0 - 0x2328u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t68, t69, 1, 3, t60, rd32(sp0 - 0x2330u), rd32(sp0 - 0x232cu));
        t70 = g->ecx;
        t71 = g->edx;
        ecx = t70;
        edx = t71;
    }
    goto L_1031ac1f;
L_1031a43d: ;
    if ((uint16_t)ebx != 0x2bu)
    {
        esi = sp0 - 0x308u;
        goto L_1031a457;
    }
    esi = sp0 - 0x308u;
    goto L_1031a443;
L_1031a5b1: ;
    if ((uint16_t)ebx != 0x2bu) goto L_1031a5d3;
    goto L_1031a5b7;
L_1031a687: ;
    if (ecx == 0u)
    {
        wr32(sp0 - 0x10u, loc_10 + 1u);
        wr32(sp0 - 0x30u, 1u);
        loc_30 = 1u;
        loc_10 = loc_10 + 1u;
    }
    if ((int8_t)(loc_c >> 0x18u) > 0)
    {
        loc_14 = (loc_14 & 0xffffffu) | 0x1000000u;
    }
    edi = COW_IMG(0x103d0910u);
L_1031a7be: ;
    loc_1c = (loc_1c & 0xffffffu) | (loc_1c >> 0x18u | 0xffu) << 0x18u;
L_1031a7c2: ;
    wr32(sp0 - 0x2318u, 0x2000u);
    wr32(sp0 - 0x231cu, 0u);
    wr32(sp0 - 0x2320u, sp0 - 0x2308u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2314u;
    t85 = cow_cdecl(g, COW_IMG(0x10316dd0u), 3, sp0 - 0x2308u, 0u, 0x2000u);
    t86 = g->ecx;
    t87 = g->edx;
    if (esi != 0x7bu)
    {
        eax = t85;
        ecx = t86;
        edx = t87;
        loc_2c = 0u;
    }
    else
    {
        ecx = t86;
        edx = t87;
        wr32(sp0 - 0x2318u, 0x5du);
        if (rd16(edi) != 0x5du)
        {
            eax = 0x5du;
        }
        else
        {
            wr32(sp0 - 0x2cu, 0x5du);
            eax = 0x5du;
            edi = edi + 2u;
            loc_2c = 0x5du;
            loc_2300 = (rd32(sp0 - 0x2300u) & 0xffffffu) | 0x20000000u;
        }
    }
L_1031a7f1: ;
    if (rd16(edi) == 0x5du)
    {
        eax = (eax & 0xffff0000u) | rd16(edi);
        goto L_1031a878;
    }
    eax = (eax & 0xffff0000u) | rd16(edi);
    if ((uint16_t)eax != 0x2du)
    {
        edi = edi + 2u;
        goto L_1031a858;
    }
    edi = edi + 2u;
    if ((uint16_t)loc_2c == 0u) goto L_1031a858;
    if (rd16(edi) == 0x5du) goto L_1031a858;
    ecx = (ecx & 0xffff0000u) | rd16(edi);
    if ((uint16_t)loc_2c >= (uint16_t)ecx)
    {
        edi = edi + 2u;
        wr32(sp0 - 0x2cu, ecx);
        eax = loc_2c;
        loc_2c = ecx;
    }
    else
    {
        edi = edi + 2u;
        eax = ecx;
    }
    if ((uint16_t)loc_2c <= (uint16_t)eax)
    {
        edx = (uint16_t)loc_2c;
        esi = (uint16_t)eax - (uint16_t)loc_2c + 1u;
L_1031a834: ;
        wr8(sp0 + (edx >> 3u) - 0x2308u, (uint8_t)(rd8(sp0 + (edx >> 3u) - 0x2308u) | ((edx & 7u) != 0u ? (uint8_t)(1u << (edx & 7u)) : 1u)));
        if (esi != 1u)
        {
            ebx = (ebx & 0xffffff00u) | (uint8_t)((edx & 7u) != 0u ? (uint8_t)(1u << (edx & 7u)) : 1u);
            edx = edx + 1u;
            esi = esi - 1u;
            goto L_1031a834;
        }
        eax = sp0 + (edx >> 3u) - 0x2308u;
        ecx = edx & 7u;
        edx = edx + 1u;
        ebx = rd32(sp0 - 0x18u);
    }
    wr32(sp0 - 0x2cu, 0u);
    loc_2c = 0u;
    goto L_1031a7f1;
L_1031a6a9: ;
    if (esi == 0x70u)
    {
        eax = esi - 0x70u;
        goto L_1031a95a;
    }
    eax = esi - 0x70u;
    if (eax == 3u) goto L_1031a7af;
    eax = eax - 3u;
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_1031a95e;
    }
    eax = eax - 2u;
    if (eax == 3u)
    {
        eax = eax - 3u;
        goto L_1031a40f;
    }
    eax = eax - 3u;
    if (eax == 3u) goto L_1031a6f4;
    eax = eax - 3u;
L_1031a6d3: ;
    if (rd16(edi) != (uint16_t)ebx) goto L_1031ac67;
    if ((uint8_t)(loc_c >> 0x10u) != 0u)
    {
        loc_14 = (loc_14 & 0xff00ffffu) | (uint8_t)((uint8_t)(loc_14 >> 0x10u) - 1u) << 0x10u;
    }
    else
    {
        loc_14 = (loc_14 & 0xff00ffffu) | (uint8_t)((uint8_t)(loc_14 >> 0x10u) - 1u) << 0x10u;
        wr32(sp0 + 0xcu, loc_4c);
    }
    goto L_1031ac1f;
L_1031a6f4: ;
    if ((int8_t)(loc_c >> 0x18u) > 0)
    {
        loc_14 = (loc_14 & 0xffffffu) | 0x1000000u;
    }
    t72 = rd32(sp0 + 8u) + 2u;
    wr32(sp0 + 8u, t72);
    if (rd16(t72) != 0x5eu)
    {
        edi = t72;
        goto L_1031a7c2;
    }
    edi = t72;
    edi = edi + 2u;
    goto L_1031a7be;
L_1031a71a: ;
    if ((uint16_t)ebx != 0x2bu) goto L_1031a740;
    goto L_1031a720;
L_1031a72f: ;
    wr32(sp0 - 0x2318u, arg1);
    t73 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t73);
    g->esp = sp0 - 0x2314u;
    t74 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
    t75 = g->edx;
    wr32(sp0 - 0x18u, t74);
    eax = t74;
    ecx = arg1;
    edx = t75;
    ebx = t74;
    loc_18 = t74;
    goto L_1031a740;
L_1031a780: ;
    wr32(sp0 - 0x2318u, arg1);
    t79 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t79);
    wr32(sp0 - 0x231cu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2314u;
    t80 = cow_cdecl(g, COW_IMG(0x1031acf6u), 2, ebx, arg1);
    t81 = g->edx;
    wr32(sp0 - 0x2318u, 0x30u);
    eax = t80;
    edx = t81;
    ebx = 0x30u;
L_1031a98d: ;
    wr32(sp0 - 0x18u, ebx);
    ecx = arg1;
    loc_18 = ebx;
    goto L_1031a990;
L_1031a796: ;
    wr32(sp0 - 0x2318u, arg1);
    t82 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t82);
    g->esp = sp0 - 0x2314u;
    t83 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, arg1, edx, 1, 1, arg1);
    t84 = g->edx;
    wr32(sp0 - 0x18u, t83);
    wr32(sp0 - 0x28u, 0x78u);
    eax = t83;
    ecx = arg1;
    edx = t84;
    ebx = t83;
    loc_28 = 0x78u;
    loc_18 = t83;
    goto L_1031a990;
L_1031a7af: ;
    if ((int8_t)(loc_c >> 0x18u) > 0)
    {
        loc_14 = (loc_14 & 0xffffffu) | 0x1000000u;
    }
    edi = COW_IMG(0x103d0904u);
    goto L_1031a7be;
L_1031a858: ;
    wr32(sp0 - 0x2cu, eax);
    wr8(sp0 + ((uint16_t)eax >> 3u) - 0x2308u, (uint8_t)(rd8(sp0 + ((uint16_t)eax >> 3u) - 0x2308u) | ((eax & 7u) != 0u ? (uint8_t)(1u << (eax & 7u)) : 1u)));
    ecx = eax & 7u;
    edx = (edx & 0xffffff00u) | (uint8_t)((eax & 7u) != 0u ? (uint8_t)(1u << (eax & 7u)) : 1u);
    loc_2c = eax;
    eax = sp0 + ((uint16_t)eax >> 3u) - 0x2308u;
    goto L_1031a7f1;
L_1031a878: ;
    if (rd16(edi) == 0u) goto L_1031ac75;
    if (rd32(sp0 - 0x28u) == 0x7bu)
    {
        wr32(sp0 + 8u, edi);
    }
    wr32(sp0 - 0x2318u, arg1);
    t88 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t88);
    wr32(sp0 - 0x231cu, ebx);
    g->eax = eax;
    g->edx = edx;
    t89 = rd32(sp0 - 0x24u);
    g->esp = sp0 - 0x2314u;
    t90 = cow_cdecl(g, COW_IMG(0x1031acf6u), 2, ebx, arg1);
    t91 = g->edx;
    eax = t90;
    ecx = arg1;
    edx = t91;
    esi = t89;
L_1031a89c: ;
    if (rd32(sp0 - 0x30u) == 0u) goto L_1031a8ac;
    t92 = rd32(sp0 - 0x10u) - 1u;
    wr32(sp0 - 0x10u, t92);
    if (rd32(sp0 - 0x10u) == 0u) goto L_1031a920;
    eax = rd32(sp0 - 0x10u);
    loc_10 = t92;
L_1031a8ac: ;
    wr32(sp0 - 0x2318u, arg1);
    t93 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t93);
    g->esp = sp0 - 0x2314u;
    t94 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
    t95 = g->edx;
    wr32(sp0 - 0x18u, t94);
    if ((uint16_t)t94 == 0xffffu)
    {
        eax = t94;
        ecx = arg1;
        edx = t95;
        ebx = t94;
        loc_18 = t94;
        goto L_1031a912;
    }
    ebx = t94;
    loc_18 = t94;
    wr32(sp0 - 0x2318u, 1u);
    if ((((uint32_t)(int8_t)rd8(sp0 + ((uint16_t)ebx >> 3u) - 0x2308u) ^ (uint32_t)(int8_t)rd8(sp0 - 0x19u)) & 1u << (ebx & 7u)) == 0u)
    {
        eax = (uint32_t)(int8_t)rd8(sp0 + ((uint16_t)ebx >> 3u) - 0x2308u) ^ (uint32_t)(int8_t)rd8(sp0 - 0x19u);
        ecx = (uint32_t)(int8_t)rd8(sp0 - 0x19u);
        edx = 1u << (ebx & 7u);
        goto L_1031a912;
    }
    eax = (uint32_t)(int8_t)rd8(sp0 + ((uint16_t)ebx >> 3u) - 0x2308u) ^ (uint32_t)(int8_t)rd8(sp0 - 0x19u);
    ecx = (uint32_t)(int8_t)rd8(sp0 - 0x19u);
    edx = 1u << (ebx & 7u);
    if (rd8(sp0 - 0xau) != 0u)
    {
        esi = esi + 2u;
    }
    else
    {
        if (rd8(sp0 - 0x11u) == 0u)
        {
            wr32(sp0 - 0x2318u, ebx);
            t98 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0x231cu, t98);
            g->esp = sp0 - 0x2314u;
            t99 = cow_call_regs(g, COW_IMG(0x10323bf7u), g->eax, ecx, edx, 1, 2, t98, ebx);
            t100 = g->edx;
            t101 = t99 + rd32(sp0 - 0x24u);
            wr32(sp0 - 0x24u, t101);
            eax = t99;
            ecx = rd32(sp0 - 0x2318u);
            edx = t100;
            loc_24 = t101;
        }
        else
        {
            t96 = rd32(sp0 - 0x24u) + 2u;
            wr32(sp0 - 0x24u, t96);
            t97 = rd32(sp0 - 0x24u);
            wr16(t97, (uint16_t)ebx);
            eax = t97;
            loc_24 = t96;
        }
    }
    goto L_1031a89c;
L_1031a912: ;
    wr32(sp0 - 0x2318u, arg1);
    t102 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t102);
    wr32(sp0 - 0x231cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x2314u;
    cow_cdecl(g, COW_IMG(0x1031acf6u), 2, ebx, arg1);
    t103 = g->edx;
    ecx = arg1;
    edx = t103;
L_1031a920: ;
    if (esi == loc_24) goto L_1031ac75;
    if (rd8(sp0 - 0xau) == 0u)
    {
        t104 = rd32(sp0 - 0x34u) + 1u;
        wr32(sp0 - 0x34u, t104);
        if (rd32(sp0 - 0x28u) == 0x63u)
        {
            loc_34 = t104;
        }
        else
        {
            loc_34 = t104;
            if (rd8(sp0 - 0x11u) == 0u)
            {
                eax = loc_24;
                wr8(eax, 0u);
            }
            else
            {
                eax = loc_24;
                wr16(eax, 0u);
            }
        }
    }
    goto L_1031ac1f;
L_1031a95a: ;
    loc_c = (loc_c & 0xffff00ffu) | 0x100u;
L_1031a95e: ;
    if ((uint16_t)ebx != 0x2du) goto L_1031a96a;
    loc_1c = (loc_1c & 0xff00ffffu) | 0x10000u;
L_1031a970: ;
    wr32(sp0 - 0x10u, loc_10 - 1u);
    if (loc_10 != 1u)
    {
        loc_10 = loc_10 - 1u;
        goto L_1031a97f;
    }
    loc_10 = loc_10 - 1u;
    if (ecx == 0u) goto L_1031a97f;
    loc_c = (loc_c & 0xffffff00u) | 1u;
    loc_20 = 0u;
    goto L_1031a990;
L_1031a96a: ;
    if ((uint16_t)ebx != 0x2bu)
    {
        loc_20 = 0u;
        goto L_1031a990;
    }
    goto L_1031a970;
L_1031a97f: ;
    wr32(sp0 - 0x2318u, arg1);
    t105 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t105);
    g->esp = sp0 - 0x2314u;
    t106 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
    t107 = g->edx;
    eax = t106;
    edx = t107;
    ebx = t106;
    goto L_1031a98d;
L_1031aa11: ;
    if ((uint8_t)(ebx >> 8u) != 0u) goto L_1031aaa7;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x2318u, 4u);
        wr32(sp0 - 0x231cu, (uint8_t)ebx);
        g->edx = edx;
        g->esp = sp0 - 0x2310u;
        t114 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)ebx, 4u, rd32(sp0 - 0x2314u));
        t115 = g->edx;
        eax = t114;
        ecx = 4u;
        edx = t115;
    }
    if (eax == 0u) goto L_1031aaa7;
    if (loc_28 != 0x6fu) goto L_1031aa62;
    if ((uint16_t)ebx >= 0x38u) goto L_1031aaa7;
    wr32(sp0 - 0x2318u, 3u);
    g->esp = sp0 - 0x2314u;
    t116 = cow_call_regs(g, COW_IMG(0x10312a60u), esi, 3u, loc_38, 1, 0);
    t117 = g->ecx;
    t118 = g->edx;
    eax = t116;
    ecx = t117;
    edx = t118;
L_1031aa6f: ;
    wr32(sp0 - 0x38u, edx);
    esi = eax;
    loc_38 = edx;
    goto L_1031aa74;
L_1031aa62: ;
    wr32(sp0 - 0x2318u, 0u);
    wr32(sp0 - 0x231cu, 0xau);
    wr32(sp0 - 0x2320u, loc_38);
    wr32(sp0 - 0x2324u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2314u;
    t119 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, esi, loc_38, 0xau, 0u);
    t120 = g->ecx;
    t121 = g->edx;
    eax = t119;
    ecx = t120;
    edx = t121;
    goto L_1031aa6f;
L_1031aaa7: ;
    wr32(sp0 - 0x2318u, arg1);
    t129 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t129);
    wr32(sp0 - 0x231cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x2314u;
    cow_cdecl(g, COW_IMG(0x1031acf6u), 2, ebx, arg1);
    t130 = g->edx;
    ecx = arg1;
    edx = t130;
    goto L_1031aab5;
L_1031ab78: ;
    esi = esi * 0xau;
    goto L_1031abc5;
L_1031ab7f: ;
    if ((uint8_t)(ebx >> 8u) != 0u) goto L_1031abf0;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 0x80u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x2318u, 0x80u);
        wr32(sp0 - 0x231cu, (uint8_t)ebx);
        g->edx = edx;
        g->esp = sp0 - 0x2310u;
        t134 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)ebx, 0x80u, rd32(sp0 - 0x2314u));
        t135 = g->edx;
        eax = t134;
        ecx = 0x80u;
        edx = t135;
    }
    if (eax == 0u) goto L_1031abf0;
    wr32(sp0 - 0x2318u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x230cu;
    t136 = cow_thiscall_cdecl(g, COW_IMG(0x1031ac91u), ecx, 3, ebx, rd32(sp0 - 0x2314u), rd32(sp0 - 0x2310u));
    t137 = g->edx;
    wr32(sp0 - 0x18u, t136);
    ecx = rd32(sp0 - 0x2318u);
    edx = t137;
    ebx = t136;
    esi = esi << 4u;
    loc_18 = t136;
    goto L_1031abc5;
L_1031abf0: ;
    wr32(sp0 - 0x2318u, arg1);
    t141 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t141);
    wr32(sp0 - 0x231cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x2314u;
    cow_cdecl(g, COW_IMG(0x1031acf6u), 2, ebx, arg1);
    t142 = g->edx;
    ecx = arg1;
    edx = t142;
    goto L_1031abfe;
L_1031ac29: ;
    wr32(sp0 - 0x2318u, arg1);
    t144 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t144);
    g->esp = sp0 - 0x2314u;
    t145 = cow_call_regs(g, COW_IMG(0x1031acebu), eax, ecx, edx, 1, 1, arg1);
    t146 = g->edx;
    wr32(sp0 - 0x18u, t145);
    if (rd16(edi) != (uint16_t)t145)
    {
        eax = (t145 & 0xffff0000u) | rd16(edi);
        ecx = arg1;
        edx = t146;
        ebx = t145;
        goto L_1031ac67;
    }
    ecx = arg1;
    edx = t146;
    ebx = t145;
    edi = edi + 2u;
    loc_18 = t145;
    goto L_1031ac44;
L_1031ac67: ;
    wr32(sp0 - 0x2318u, arg1);
    t147 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t147);
    wr32(sp0 - 0x231cu, ebx);
    g->esp = sp0 - 0x2314u;
    cow_cdecl(g, COW_IMG(0x1031acf6u), 2, ebx, arg1);
    goto L_1031ac75;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031a1c2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031a1c2(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
