/* f_0x1031d2b7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031d2b7(Guest* g)
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
    uint32_t loc_1c8;
    uint32_t loc_1d8;
    uint32_t loc_1dc;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_48;
    uint32_t loc_60;
    uint32_t loc_8;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 488u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1ccu, in_ebx);
    wr32(sp0 - 0x1d0u, in_esi);
    wr32(sp0 - 0x1d4u, in_edi);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x38u, 0u);
    if (rd8(rd32(sp0 + 8u)) == 0u)
    {
        edx = in_edx;
        loc_1c = rd32(sp0 - 0x1cu) & 0xffffffu;
        loc_38 = 0u;
        goto L_1031dcbd;
    }
    eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 8u));
    esi = rd32(sp0 + 8u);
    loc_1c = rd32(sp0 - 0x1cu) & 0xffffffu;
    ecx = self;
    edx = in_edx;
    loc_8 = 0u;
    loc_38 = 0u;
L_1031d2e6: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x1d8u, 8u);
        wr32(sp0 - 0x1dcu, (uint8_t)eax);
        g->edx = edx;
        g->esp = sp0 - 0x1d0u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)eax, 8u, in_edi);
        t2 = g->edx;
        eax = t1;
        ecx = 8u;
        edx = t2;
    }
    if (eax != 0u)
    {
        wr32(sp0 - 8u, loc_8 - 1u);
        wr32(sp0 - 0x1d8u, arg1);
        wr32(sp0 - 0x1dcu, arg1);
        wr32(sp0 - 0x1e0u, sp0 - 8u);
        g->edx = edx;
        g->esp = sp0 - 0x1c8u;
        t3 = cow_cdecl(g, COW_IMG(0x1031dd44u), 6, sp0 - 8u, arg1, arg1, in_edi, in_esi, in_ebx);
        t4 = g->edx;
        wr32(sp0 - 0x1dcu, t3);
        g->ecx = arg1;
        g->edx = t4;
        g->esp = sp0 - 0x1d4u;
        cow_cdecl(g, COW_IMG(0x1031dd2du), 2, t3, arg1);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = rd8(esi + 1u);
        wr32(sp0 - 0x1e0u, t7);
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x1dcu;
        t8 = cow_cdecl(g, COW_IMG(0x103147f1u), 1, t7);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
        esi = esi + 1u;
L_1031d335: ;
        if (eax == 0u) goto L_1031d347;
        t11 = rd8(esi + 1u);
        wr32(sp0 - 0x1d8u, t11);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        t12 = cow_cdecl(g, COW_IMG(0x103147f1u), 1, t11);
        t13 = g->edx;
        eax = t12;
        ecx = rd32(sp0 - 0x1d8u);
        edx = t13;
        esi = esi + 1u;
        goto L_1031d335;
    }
L_1031d347: ;
    if (rd8(esi) != 0x25u) goto L_1031dc29;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x34u, 0u);
    loc_1c = loc_1c & 0xff000000u;
    loc_3c = loc_3c & 0xffffffu;
    loc_14 = (uint8_t)loc_14 | 0x1000000u;
    loc_c = loc_c & 0xffffffu;
    loc_24 = 0u;
    loc_10 = 0u;
    loc_34 = 0u;
L_1031d37e: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ebx = rd8(esi + 1u);
        esi = esi + 1u;
        eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        ebx = rd8(esi + 1u);
        esi = esi + 1u;
        wr32(sp0 - 0x1d8u, 4u);
        wr32(sp0 - 0x1dcu, (uint8_t)ebx);
        g->edx = edx;
        g->esp = sp0 - 0x1d0u;
        t14 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)ebx, 4u, in_edi);
        t15 = g->edx;
        eax = t14;
        ecx = 4u;
        edx = t15;
    }
    if (eax == 0u)
    {
        if ((int32_t)ebx > 78) goto L_1031d403;
        zf = ebx == 0x4eu;
        if (zf) goto L_1031d425;
        if (ebx == 0x2au) goto L_1031d3fe;
        if (ebx == 0x46u) goto L_1031d425;
        if (ebx == 0x49u) goto L_1031d3e0;
        if (ebx != 0x4cu) goto L_1031d412;
        loc_14 = (loc_14 & 0xffffffu) | (uint8_t)((loc_14 >> 0x18u) + 1u) << 0x18u;
    }
    else
    {
        wr32(sp0 - 0x24u, loc_24 + 1u);
        t16 = ebx + loc_10 * 0xau - 0x30u;
        wr32(sp0 - 0x10u, t16);
        eax = t16;
        loc_24 = loc_24 + 1u;
        loc_10 = t16;
    }
L_1031d425: ;
    if ((uint8_t)(loc_14 >> 8u) == 0u) goto L_1031d37e;
    wr32(sp0 + 8u, esi);
    if ((uint8_t)(loc_14 >> 0x10u) == 0u)
    {
        t17 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x48u, t17);
        wr32(sp0 + 0xcu, t17 + 4u);
        wr32(sp0 - 0x30u, rd32(t17));
        eax = rd32(t17);
        loc_48 = t17;
        loc_30 = rd32(t17);
    }
    if (loc_c >> 0x18u != 0u)
    {
        loc_14 = loc_14 & 0xffff00ffu;
    }
    else
    {
        loc_14 = loc_14 & 0xffff00ffu;
        if (rd8(esi) == 0x53u) goto L_1031d464;
        eax = (eax & 0xffffff00u) | rd8(esi);
        if ((uint8_t)eax == 0x43u) goto L_1031d464;
        loc_c = (loc_c & 0xffffffu) | (loc_c >> 0x18u | 0xffu) << 0x18u;
    }
L_1031d468: ;
    t18 = rd8(rd32(sp0 + 8u)) | 0x20u;
    wr32(sp0 - 0x40u, t18);
    if ((rd8(rd32(sp0 + 8u)) | 0x20u) == 0x6eu)
    {
        ebx = rd32(sp0 + 8u);
        esi = t18;
        loc_40 = t18;
    }
    else
    {
        ebx = rd32(sp0 + 8u);
        esi = t18;
        loc_40 = t18;
        if (esi == 0x63u) goto L_1031d492;
        if (esi == 0x7bu) goto L_1031d492;
        wr32(sp0 - 0x1d8u, arg1);
        wr32(sp0 - 0x1dcu, sp0 - 8u);
        g->edx = edx;
        g->esp = sp0 - 0x1c4u;
        t19 = cow_cdecl(g, COW_IMG(0x1031dd44u), 6, sp0 - 8u, arg1, in_edi, in_esi, in_ebx, rd32(sp0 - 0x1c8u));
        t20 = g->edx;
        eax = t19;
        edx = t20;
L_1031d49d: ;
        wr32(sp0 - 0x18u, eax);
        ecx = arg1;
        loc_18 = eax;
    }
    if (loc_24 == 0u) goto L_1031d4b1;
    if (loc_10 == 0u)
    {
        eax = 0u;
        goto L_1031dc8d;
    }
L_1031d4b1: ;
    if ((int32_t)esi > 111) goto L_1031d718;
    zf = esi == 0x6fu;
    if (zf)
    {
        eax = 0u;
        goto L_1031d9ca;
    }
    if (esi == 0x63u) goto L_1031d6f5;
    if (esi == 0x64u)
    {
        eax = 0u;
        goto L_1031d9ca;
    }
    zf = esi == 0x64u;
    sf = (int32_t)(esi - 0x64u) < 0;
    of = ((esi ^ 0x64u) & (esi ^ esi - 0x64u)) >> 0x1fu;
    if (zf || sf != of) goto L_1031d742;
    if ((int32_t)esi <= 103) goto L_1031d515;
    if (esi == 0x69u) goto L_1031d4fd;
    if (esi != 0x6eu) goto L_1031d742;
    if ((uint8_t)(loc_14 >> 0x10u) == 0u)
    {
        edi = loc_8;
        goto L_1031dbf8;
    }
    eax = 0u;
L_1031dc1e: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    esi = rd32(sp0 + 8u);
    loc_1c = (loc_1c & 0xffffffu) | (uint8_t)((loc_1c >> 0x18u) + 1u) << 0x18u;
L_1031dc6b: ;
    if (loc_18 != 0xffffffffu) goto L_1031dc81;
    if (rd8(esi) != 0x25u) goto L_1031dcc3;
    if (rd8(rd32(sp0 + 8u) + 1u) != 0x6eu) goto L_1031dcc3;
    eax = rd32(sp0 + 8u);
    esi = eax;
L_1031dc81: ;
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_1031d2e1;
    }
L_1031dcbd: ;
    if (loc_18 != 0xffffffffu) goto L_1031dcd4;
L_1031dcc3: ;
    if (loc_38 != 0u)
    {
        eax = loc_38;
    }
    else
    {
        eax = loc_38;
        if (loc_1c >> 0x18u == (uint8_t)eax)
        {
            eax = 0xffffffffu;
        }
    }
L_1031dcd7: ;
    g->edx = edx;
    return eax;
L_1031d2e1: ;
    goto L_1031d2e6;
L_1031d3e0: ;
    if (rd8(esi + 1u) != 0x36u) goto L_1031d412;
    if (rd8(esi + 2u) != 0x34u)
    {
        eax = esi + 2u;
        goto L_1031d412;
    }
    eax = esi + 2u;
    wr32(sp0 - 0x34u, loc_34 + 1u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x28u, 0u);
    esi = eax;
    loc_34 = loc_34 + 1u;
    loc_2c = 0u;
    loc_28 = 0u;
    goto L_1031d425;
L_1031d3fe: ;
    loc_14 = (loc_14 & 0xff00ffffu) | (uint8_t)((uint8_t)(loc_14 >> 0x10u) + 1u) << 0x10u;
    goto L_1031d425;
L_1031d403: ;
    if (ebx == 0x68u) goto L_1031d41f;
    if (ebx == 0x6cu) goto L_1031d417;
    if (ebx == 0x77u) goto L_1031d41a;
L_1031d412: ;
    loc_14 = (loc_14 & 0xffff00ffu) | (uint8_t)((uint8_t)(loc_14 >> 8u) + 1u) << 8u;
    goto L_1031d425;
L_1031d417: ;
    loc_14 = (loc_14 & 0xffffffu) | (uint8_t)((loc_14 >> 0x18u) + 1u) << 0x18u;
L_1031d41a: ;
    loc_c = (loc_c & 0xffffffu) | (uint8_t)((loc_c >> 0x18u) + 1u) << 0x18u;
    goto L_1031d425;
L_1031d41f: ;
    loc_14 = (loc_14 & 0xffffffu) | (uint8_t)((loc_14 >> 0x18u) - 1u) << 0x18u;
    loc_c = (loc_c & 0xffffffu) | (uint8_t)((loc_c >> 0x18u) - 1u) << 0x18u;
    goto L_1031d425;
L_1031d464: ;
    loc_c = (loc_c & 0xffffffu) | 0x1000000u;
    goto L_1031d468;
L_1031d492: ;
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 8u, loc_8 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t21 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    goto L_1031d49d;
L_1031d4fd: ;
    wr32(sp0 - 0x1d8u, 0x64u);
    eax = 0u;
    esi = 0x64u;
L_1031d500: ;
    if (loc_18 != 0x2du)
    {
        ebx = loc_18;
        goto L_1031d78a;
    }
    ebx = loc_18;
    loc_1c = (loc_1c & 0xffff00ffu) | 0x100u;
L_1031d78f: ;
    wr32(sp0 - 0x10u, loc_10 - 1u);
    if (loc_10 != 1u)
    {
        loc_10 = loc_10 - 1u;
        goto L_1031d7a0;
    }
    loc_10 = loc_10 - 1u;
    if (loc_24 == 0u) goto L_1031d7a0;
    loc_14 = (loc_14 & 0xffff00ffu) | 0x100u;
L_1031d7b1: ;
    if (ebx != 0x30u)
    {
        loc_20 = 0u;
        goto L_1031d9ff;
    }
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 8u, loc_8 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t58 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t59 = g->edx;
    wr32(sp0 - 0x18u, t58);
    if ((uint8_t)t58 == 0x78u)
    {
        edx = t59;
        goto L_1031d7ff;
    }
    eax = t58;
    edx = t59;
    ebx = t58;
    loc_18 = t58;
    if ((uint8_t)ebx == 0x58u) goto L_1031d7ff;
    wr32(sp0 - 0x20u, 1u);
    if (esi == 0x78u) goto L_1031d7e9;
    wr32(sp0 - 0x1d8u, 0x6fu);
    loc_1d8 = 0x6fu;
L_1031d7e3: ;
    ecx = arg1;
    esi = loc_1d8;
    loc_20 = 1u;
L_1031d9ff: ;
    if (loc_34 == 0u)
    {
        if ((uint8_t)(loc_14 >> 8u) != 0u)
        {
            edi = 0u;
            goto L_1031dbd4;
        }
        edi = 0u;
L_1031db22: ;
        if (esi == 0x78u) goto L_1031db66;
        if (esi == 0x70u) goto L_1031db66;
        if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
        {
            eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
        }
        else
        {
            wr32(sp0 - 0x1d8u, 4u);
            wr32(sp0 - 0x1dcu, ebx);
            g->edx = edx;
            g->esp = sp0 - 0x1d0u;
            t114 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, ebx, 4u, in_edi);
            t115 = g->edx;
            eax = t114;
            ecx = 4u;
            edx = t115;
        }
        if (eax == 0u) goto L_1031dbc6;
        if (esi != 0x6fu) goto L_1031db5f;
        if ((int32_t)ebx >= 56) goto L_1031dbc6;
        edi = edi << 3u;
L_1031db9e: ;
        wr32(sp0 - 0x20u, loc_20 + 1u);
        if (loc_24 == 0u)
        {
            edi = ebx + edi - 0x30u;
            loc_20 = loc_20 + 1u;
            goto L_1031dbb0;
        }
        edi = ebx + edi - 0x30u;
        loc_20 = loc_20 + 1u;
        wr32(sp0 - 0x10u, loc_10 - 1u);
        if (loc_10 == 1u) goto L_1031dbd4;
        loc_10 = loc_10 - 1u;
L_1031dbb0: ;
        wr32(sp0 - 0x1d8u, arg1);
        wr32(sp0 - 8u, loc_8 + 1u);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        t120 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
        t121 = g->edx;
        wr32(sp0 - 0x18u, t120);
        ecx = arg1;
        edx = t121;
        ebx = t120;
        loc_18 = t120;
        goto L_1031db22;
    }
    else
    {
        if ((uint8_t)(loc_14 >> 8u) != 0u) goto L_1031daf6;
L_1031da13: ;
        if (esi != 0x78u) goto L_1031da67;
        if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
        {
            eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 0x80u;
        }
        else
        {
            wr32(sp0 - 0x1d8u, 0x80u);
            wr32(sp0 - 0x1dcu, ebx);
            g->edx = edx;
            g->esp = sp0 - 0x1d0u;
            t90 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, ebx, 0x80u, in_edi);
            t91 = g->edx;
            eax = t90;
            ecx = 0x80u;
            edx = t91;
        }
        if (eax == 0u) goto L_1031dae8;
        wr32(sp0 - 0x1d8u, 4u);
        g->esp = sp0 - 0x1d4u;
        t92 = cow_call_regs(g, COW_IMG(0x10312a60u), loc_2c, 4u, loc_28, 1, 0);
        t93 = g->ecx;
        t94 = g->edx;
        wr32(sp0 - 0x1d8u, ebx);
        wr32(sp0 - 0x2cu, t92);
        wr32(sp0 - 0x28u, t94);
        t95 = cow_thiscall_cdecl(g, COW_IMG(0x1031dcdcu), t93, 1, ebx);
        wr32(sp0 - 0x18u, t95);
        ecx = rd32(sp0 - 0x1d8u);
        ebx = t95;
        loc_18 = t95;
L_1031daba: ;
        t104 = rd32(sp0 - 0x20u) + 1u;
        wr32(sp0 - 0x20u, t104);
        t105 = ebx + loc_2c - 0x30u;
        wr32(sp0 - 0x2cu, t105);
        t106 = loc_28 + (uint32_t)((int32_t)(ebx - 0x30u) >> 0x1fu) + (ebx + loc_2c - 0x30u < loc_2c);
        wr32(sp0 - 0x28u, t106);
        if (rd32(sp0 - 0x24u) == 0u)
        {
            edx = (uint32_t)((int32_t)(ebx - 0x30u) >> 0x1fu);
            loc_2c = t105;
            loc_28 = t106;
            loc_20 = t104;
            goto L_1031dad2;
        }
        eax = ebx - 0x30u;
        edx = (uint32_t)((int32_t)(ebx - 0x30u) >> 0x1fu);
        loc_2c = t105;
        loc_28 = t106;
        loc_20 = t104;
        t107 = rd32(sp0 - 0x10u) - 1u;
        wr32(sp0 - 0x10u, t107);
        if (rd32(sp0 - 0x10u) == 1u) goto L_1031daf6;
        loc_10 = t107;
L_1031dad2: ;
        wr32(sp0 - 0x1d8u, arg1);
        t108 = rd32(sp0 - 8u) + 1u;
        wr32(sp0 - 8u, t108);
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        t109 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
        t110 = g->edx;
        wr32(sp0 - 0x18u, t109);
        ecx = arg1;
        edx = t110;
        ebx = t109;
        loc_18 = t109;
        goto L_1031da13;
    }
L_1031dbdc: ;
    if (esi == 0x46u)
    {
        wr32(sp0 - 0x20u, 0u);
        loc_20 = 0u;
    }
    if (loc_20 == 0u) goto L_1031dcbd;
    if ((uint8_t)(loc_14 >> 0x10u) != 0u) goto L_1031dc1e;
    wr32(sp0 - 0x38u, loc_38 + 1u);
    loc_38 = loc_38 + 1u;
L_1031dbf8: ;
    if (loc_34 == 0u)
    {
        if (loc_14 >> 0x18u == 0u)
        {
            eax = loc_30;
            wr16(eax, (uint16_t)edi);
        }
        else
        {
            eax = loc_30;
            wr32(eax, edi);
        }
    }
    else
    {
        wr32(loc_30, loc_2c);
        wr32(loc_30 + 4u, loc_28);
        eax = loc_30;
        ecx = loc_28;
    }
    goto L_1031dc1e;
L_1031d515: ;
    if (loc_18 != 0x2du)
    {
        ebx = loc_18;
        goto L_1031d531;
    }
    ebx = loc_18;
    esi = sp0 - 0x1c7u;
    loc_1c8 = (rd32(sp0 - 0x1c8u) & 0xffffff00u) | (uint8_t)ebx;
L_1031d536: ;
    wr32(sp0 - 0x10u, loc_10 - 1u);
    wr32(sp0 - 8u, loc_8 + 1u);
    wr32(sp0 - 0x1d8u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t23 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t24 = g->edx;
    wr32(sp0 - 0x18u, t23);
    ecx = arg1;
    edx = t24;
    ebx = t23;
    loc_18 = t23;
L_1031d550: ;
    if (loc_24 == 0u) goto L_1031d55f;
    if ((int32_t)loc_10 <= 349)
    {
        loc_20 = 0u;
        goto L_1031d566;
    }
L_1031d55f: ;
    wr32(sp0 - 0x10u, 0x15du);
    loc_20 = 0u;
    loc_10 = 0x15du;
L_1031d566: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
    }
    else
    {
        wr32(sp0 - 0x1d8u, 4u);
        wr32(sp0 - 0x1dcu, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x1d0u;
        t25 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, ebx, 4u, in_edi);
        t26 = g->edx;
        eax = t25;
        ecx = 4u;
        edx = t26;
    }
    if (eax == 0u) goto L_1031d5ab;
    wr32(sp0 - 0x10u, loc_10 - 1u);
    if (loc_10 == 0u)
    {
        eax = loc_10;
        loc_10 = loc_10 - 1u;
        goto L_1031d5ab;
    }
    loc_10 = loc_10 - 1u;
    wr32(sp0 - 0x20u, loc_20 + 1u);
    wr8(esi, (uint8_t)ebx);
    wr32(sp0 - 8u, loc_8 + 1u);
    wr32(sp0 - 0x1d8u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t27 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t28 = g->edx;
    wr32(sp0 - 0x18u, t27);
    ecx = arg1;
    edx = t28;
    ebx = t27;
    esi = esi + 1u;
    loc_18 = t27;
    goto L_1031d566;
L_1031d531: ;
    if (ebx != 0x2bu) goto L_1031d54d;
    esi = sp0 - 0x1c8u;
    goto L_1031d536;
L_1031d54d: ;
    esi = sp0 - 0x1c8u;
    goto L_1031d550;
L_1031d5ab: ;
    if (rd8(COW_IMG(0x103d0240u)) == (uint8_t)ebx)
    {
        wr32(sp0 - 0x10u, loc_10 - 1u);
        if (loc_10 == 0u)
        {
            eax = loc_10;
            loc_10 = loc_10 - 1u;
        }
        else
        {
            loc_10 = loc_10 - 1u;
            wr32(sp0 - 8u, loc_8 + 1u);
            wr32(sp0 - 0x1d8u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0x1d4u;
            t29 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
            t30 = g->edx;
            wr8(esi, rd8(COW_IMG(0x103d0240u)));
            wr32(sp0 - 0x18u, t29);
            edx = t30;
            ebx = t29;
            esi = esi + 1u;
            loc_18 = t29;
L_1031d5d4: ;
            if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
            {
                eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
                ecx = arg1;
            }
            else
            {
                wr32(sp0 - 0x1d8u, 4u);
                wr32(sp0 - 0x1dcu, ebx);
                g->edx = edx;
                g->esp = sp0 - 0x1d0u;
                t31 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), arg1, 3, ebx, 4u, rd32(sp0 - 0x1d4u));
                t32 = g->edx;
                eax = t31;
                ecx = 4u;
                edx = t32;
            }
            if (eax == 0u) goto L_1031d619;
            t33 = rd32(sp0 - 0x10u) - 1u;
            wr32(sp0 - 0x10u, t33);
            if (rd32(sp0 - 0x10u) == 0u)
            {
                eax = rd32(sp0 - 0x10u);
                loc_10 = t33;
                goto L_1031d619;
            }
            loc_10 = t33;
            t34 = rd32(sp0 - 0x20u) + 1u;
            wr32(sp0 - 0x20u, t34);
            wr8(esi, (uint8_t)ebx);
            t35 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t35);
            wr32(sp0 - 0x1d8u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0x1d4u;
            t36 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
            t37 = g->edx;
            wr32(sp0 - 0x18u, t36);
            edx = t37;
            ebx = t36;
            esi = esi + 1u;
            loc_18 = t36;
            goto L_1031d5d4;
        }
    }
L_1031d619: ;
    if (loc_20 != 0u)
    {
        if (ebx == 0x65u) goto L_1031d631;
        if (ebx != 0x45u) goto L_1031d6b1;
L_1031d631: ;
        wr32(sp0 - 0x10u, loc_10 - 1u);
        if (loc_10 == 0u)
        {
            eax = loc_10;
        }
        else
        {
            loc_10 = loc_10 - 1u;
            wr8(esi, 0x65u);
            wr32(sp0 - 8u, loc_8 + 1u);
            wr32(sp0 - 0x1d8u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0x1d4u;
            t38 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
            t39 = g->edx;
            wr32(sp0 - 0x18u, t38);
            if (t38 != 0x2du)
            {
                edx = t39;
                ebx = t38;
                esi = esi + 1u;
                loc_18 = t38;
                goto L_1031d658;
            }
            eax = t38;
            edx = t39;
            ebx = t38;
            esi = esi + 1u;
            loc_18 = t38;
            wr8(esi, (uint8_t)eax);
            esi = esi + 1u;
L_1031d65d: ;
            t40 = rd32(sp0 - 0x10u) - 1u;
            wr32(sp0 - 0x10u, t40);
            if (rd32(sp0 - 0x10u) != 0u)
            {
                ecx = arg1;
                loc_10 = t40;
                goto L_1031d66c;
            }
            eax = rd32(sp0 - 0x10u);
            loc_10 = t40;
            wr32(sp0 - 0x10u, loc_10 & eax);
            loc_10 = loc_10 & eax;
L_1031d67b: ;
            if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
            {
                eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
                ecx = arg1;
            }
            else
            {
                wr32(sp0 - 0x1d8u, 4u);
                wr32(sp0 - 0x1dcu, ebx);
                g->edx = edx;
                g->esp = sp0 - 0x1d0u;
                t41 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), arg1, 3, ebx, 4u, rd32(sp0 - 0x1d4u));
                t42 = g->edx;
                eax = t41;
                ecx = 4u;
                edx = t42;
            }
            if (eax == 0u) goto L_1031d6b1;
            wr32(sp0 - 0x10u, loc_10 - 1u);
            if (loc_10 == 0u)
            {
                eax = loc_10;
                goto L_1031d6b1;
            }
            loc_10 = loc_10 - 1u;
            t43 = rd32(sp0 - 0x20u) + 1u;
            wr32(sp0 - 0x20u, t43);
            wr8(esi, (uint8_t)ebx);
            esi = esi + 1u;
            loc_20 = t43;
L_1031d66c: ;
            t44 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t44);
            wr32(sp0 - 0x1d8u, arg1);
            g->edx = edx;
            g->esp = sp0 - 0x1d4u;
            t45 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
            t46 = g->edx;
            wr32(sp0 - 0x18u, t45);
            edx = t46;
            ebx = t45;
            loc_18 = t45;
            goto L_1031d67b;
        }
    }
L_1031d6b1: ;
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 0x1dcu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t47 = cow_cdecl(g, COW_IMG(0x1031dd2du), 2, ebx, arg1);
    t48 = g->edx;
    if (rd32(sp0 - 0x20u) == 0u)
    {
        edx = t48;
        goto L_1031dcbd;
    }
    eax = t47;
    edx = t48;
    if (rd8(sp0 - 0x12u) != 0u)
    {
        ecx = arg1;
    }
    else
    {
        t49 = rd32(sp0 - 0x38u) + 1u;
        wr32(sp0 - 0x38u, t49);
        wr8(esi, 0u);
        wr32(sp0 - 0x1d8u, sp0 - 0x1c8u);
        t50 = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x1dcu, t50);
        t51 = (uint32_t)(int8_t)rd8(sp0 - 0x11u) - 1u;
        wr32(sp0 - 0x1e0u, t51);
        g->eax = t51;
        g->edx = edx;
        g->esp = sp0 - 0x1d4u;
        t52 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x103d0780u)), arg1, 3, t51, t50, sp0 - 0x1c8u);
        t53 = g->ecx;
        t54 = g->edx;
        eax = t52;
        ecx = t53;
        edx = t54;
    }
    goto L_1031dc1e;
L_1031d658: ;
    if (ebx != 0x2bu) goto L_1031d67b;
    goto L_1031d65d;
L_1031d6f5: ;
    if (loc_24 == 0u)
    {
        wr32(sp0 - 0x10u, loc_10 + 1u);
        wr32(sp0 - 0x24u, 1u);
        loc_24 = 1u;
        loc_10 = loc_10 + 1u;
    }
    if ((int8_t)(loc_c >> 0x18u) > 0)
    {
        loc_1c = (loc_1c & 0xff00ffffu) | 0x10000u;
    }
    edi = COW_IMG(0x103d2aa8u);
L_1031d823: ;
    loc_1c = (loc_1c & 0xffffff00u) | (uint8_t)(loc_1c | 0xffu);
L_1031d827: ;
    wr32(sp0 - 0x1d8u, 0x20u);
    wr32(sp0 - 0x1dcu, 0u);
    wr32(sp0 - 0x1e0u, sp0 - 0x68u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t66 = cow_cdecl(g, COW_IMG(0x10316dd0u), 3, sp0 - 0x68u, 0u, 0x20u);
    t67 = g->ecx;
    t68 = g->edx;
    if (rd32(sp0 - 0x40u) != 0x7bu)
    {
        eax = t66;
        ecx = t67;
        edx = t68;
        goto L_1031d84b;
    }
    eax = t66;
    ecx = t67;
    edx = t68;
    if (rd8(edi) != 0x5du) goto L_1031d84b;
    edx = (edx & 0xffffff00u) | 0x5du;
    edi = edi + 1u;
    loc_60 = (rd32(sp0 - 0x60u) & 0xffffffu) | 0x20000000u;
L_1031d84e: ;
    if (rd8(edi) == 0x5du)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        goto L_1031d8b3;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    if ((uint8_t)eax != 0x2du)
    {
        edi = edi + 1u;
        goto L_1031d89a;
    }
    edi = edi + 1u;
    if ((uint8_t)edx == 0u) goto L_1031d89a;
    if (rd8(edi) == 0x5du) goto L_1031d89a;
    ecx = (ecx & 0xffffff00u) | rd8(edi);
    if ((uint8_t)edx >= (uint8_t)ecx)
    {
        edi = edi + 1u;
        eax = (eax & 0xffffff00u) | (uint8_t)edx;
        edx = (edx & 0xffffff00u) | (uint8_t)ecx;
    }
    else
    {
        edi = edi + 1u;
        eax = (eax & 0xffffff00u) | (uint8_t)ecx;
    }
    if ((uint8_t)edx <= (uint8_t)eax)
    {
        esi = (uint8_t)eax - (uint8_t)edx + 1u;
        edx = (uint8_t)edx;
L_1031d87e: ;
        wr8(sp0 + (edx >> 3u) - 0x68u, (uint8_t)(rd8(sp0 + (edx >> 3u) - 0x68u) | ((edx & 7u) != 0u ? (uint8_t)(1u << (edx & 7u)) : 1u)));
        if (esi != 1u)
        {
            ebx = (ebx & 0xffffff00u) | (uint8_t)((edx & 7u) != 0u ? (uint8_t)(1u << (edx & 7u)) : 1u);
            edx = edx + 1u;
            esi = esi - 1u;
            goto L_1031d87e;
        }
        eax = sp0 + (edx >> 3u) - 0x68u;
        ecx = edx & 7u;
        ebx = (ebx & 0xffffff00u) | (uint8_t)((edx & 7u) != 0u ? (uint8_t)(1u << (edx & 7u)) : 1u);
        edx = edx + 1u;
    }
    edx = edx & 0xffffff00u;
    goto L_1031d84e;
L_1031d718: ;
    if (esi == 0x70u)
    {
        eax = esi - 0x70u;
        goto L_1031d9c6;
    }
    eax = esi - 0x70u;
    if (eax == 3u) goto L_1031d814;
    eax = eax - 3u;
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_1031d9ca;
    }
    eax = eax - 2u;
    if (eax == 3u)
    {
        eax = eax - 3u;
        goto L_1031d500;
    }
    eax = eax - 3u;
    if (eax == 3u) goto L_1031d766;
L_1031d742: ;
    if (rd8(ebx) != loc_18)
    {
        eax = rd8(ebx);
        goto L_1031dc8d;
    }
    eax = rd8(ebx);
    if ((uint8_t)(loc_14 >> 0x10u) != 0u)
    {
        loc_1c = (loc_1c & 0xffffffu) | (uint8_t)((loc_1c >> 0x18u) - 1u) << 0x18u;
    }
    else
    {
        loc_1c = (loc_1c & 0xffffffu) | (uint8_t)((loc_1c >> 0x18u) - 1u) << 0x18u;
        wr32(sp0 + 0xcu, loc_48);
        eax = loc_48;
    }
    goto L_1031dc1e;
L_1031d766: ;
    if ((int8_t)(loc_c >> 0x18u) > 0)
    {
        loc_1c = (loc_1c & 0xff00ffffu) | 0x10000u;
    }
    t55 = rd32(sp0 + 8u) + 1u;
    wr32(sp0 + 8u, t55);
    if (rd8(t55) != 0x5eu)
    {
        edi = t55;
        goto L_1031d827;
    }
    edi = t55;
    edi = edi + 1u;
    goto L_1031d823;
L_1031d78a: ;
    if (ebx != 0x2bu) goto L_1031d7b1;
    goto L_1031d78f;
L_1031d7a0: ;
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 8u, loc_8 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t56 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t57 = g->edx;
    wr32(sp0 - 0x18u, t56);
    eax = t56;
    ecx = arg1;
    edx = t57;
    ebx = t56;
    loc_18 = t56;
    goto L_1031d7b1;
L_1031d7e9: ;
    wr32(sp0 - 0x1d8u, arg1);
    t60 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t60);
    wr32(sp0 - 0x1dcu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t61 = cow_cdecl(g, COW_IMG(0x1031dd2du), 2, ebx, arg1);
    t62 = g->edx;
    wr32(sp0 - 0x1d8u, 0x30u);
    eax = t61;
    edx = t62;
    ebx = 0x30u;
L_1031d9fc: ;
    wr32(sp0 - 0x18u, ebx);
    ecx = arg1;
    loc_18 = ebx;
    goto L_1031d9ff;
L_1031d7ff: ;
    wr32(sp0 - 0x1d8u, arg1);
    t63 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t63);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t64 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t65 = g->edx;
    wr32(sp0 - 0x18u, t64);
    wr32(sp0 - 0x1d8u, 0x78u);
    eax = t64;
    edx = t65;
    ebx = t64;
    loc_1d8 = 0x78u;
    loc_18 = t64;
    goto L_1031d7e3;
L_1031d814: ;
    if ((int8_t)(loc_c >> 0x18u) > 0)
    {
        loc_1c = (loc_1c & 0xff00ffffu) | 0x10000u;
    }
    edi = COW_IMG(0x103d2aa0u);
    goto L_1031d823;
L_1031d84b: ;
    edx = (edx & 0xffffff00u) | rd8(sp0 - 0x39u);
    goto L_1031d84e;
L_1031d89a: ;
    wr8(sp0 + ((uint8_t)eax >> 3u) - 0x68u, (uint8_t)(rd8(sp0 + ((uint8_t)eax >> 3u) - 0x68u) | ((eax & 7u) != 0u ? (uint8_t)(1u << (eax & 7u)) : 1u)));
    ecx = eax & 7u;
    edx = (edx & 0xffffff00u) | (uint8_t)eax;
    ebx = (ebx & 0xffffff00u) | (uint8_t)((eax & 7u) != 0u ? (uint8_t)(1u << (eax & 7u)) : 1u);
    eax = sp0 + ((uint8_t)eax >> 3u) - 0x68u;
    goto L_1031d84e;
L_1031d8b3: ;
    if (rd8(edi) == 0u) goto L_1031dcbd;
    if (rd32(sp0 - 0x40u) == 0x7bu)
    {
        wr32(sp0 + 8u, edi);
    }
    t69 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t69);
    wr32(sp0 - 0x1d8u, arg1);
    t70 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x1dcu, t70);
    t71 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x34u, t71);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_cdecl(g, COW_IMG(0x1031dd2du), 2, t70, arg1);
    t72 = g->edx;
    ecx = arg1;
    edx = t72;
    esi = t71;
L_1031d8dc: ;
    if (rd32(sp0 - 0x24u) == 0u) goto L_1031d8f0;
    t73 = rd32(sp0 - 0x10u) - 1u;
    wr32(sp0 - 0x10u, t73);
    if (rd32(sp0 - 0x10u) == 0u)
    {
        eax = rd32(sp0 - 0x10u);
        goto L_1031d98c;
    }
    loc_10 = t73;
L_1031d8f0: ;
    t74 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t74);
    wr32(sp0 - 0x1d8u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t75 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t76 = g->edx;
    wr32(sp0 - 0x18u, t75);
    if (t75 == 0xffffffffu)
    {
        eax = t75;
        ecx = arg1;
        edx = t76;
        loc_18 = t75;
        goto L_1031d980;
    }
    eax = t75;
    loc_18 = t75;
    wr32(sp0 - 0x1d8u, 1u);
    if ((((uint32_t)(int8_t)rd8(sp0 + (uint32_t)((int32_t)eax >> 3u) - 0x68u) ^ (uint32_t)(int8_t)rd8(sp0 - 0x1cu)) & 1u << (eax & 7u)) == 0u)
    {
        ecx = (uint32_t)(int8_t)rd8(sp0 + (uint32_t)((int32_t)eax >> 3u) - 0x68u) ^ (uint32_t)(int8_t)rd8(sp0 - 0x1cu);
        edx = 1u << (eax & 7u);
        goto L_1031d980;
    }
    ecx = (uint32_t)(int8_t)rd8(sp0 + (uint32_t)((int32_t)eax >> 3u) - 0x68u) ^ (uint32_t)(int8_t)rd8(sp0 - 0x1cu);
    edx = 1u << (eax & 7u);
    if (rd8(sp0 - 0x12u) != 0u)
    {
        t83 = rd32(sp0 - 0x34u) + 1u;
        wr32(sp0 - 0x34u, t83);
        loc_34 = t83;
    }
    else
    {
        if (rd8(sp0 - 0x1au) == 0u)
        {
            wr8(esi, (uint8_t)eax);
            esi = esi + 1u;
        }
        else
        {
            if ((rd8((uint8_t)eax * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
            {
                ecx = rd32(COW_IMG(0x103d0030u));
                loc_3c = (rd32(sp0 - 0x3cu) & 0xffffff00u) | (uint8_t)eax;
            }
            else
            {
                ecx = rd32(COW_IMG(0x103d0030u));
                loc_3c = (rd32(sp0 - 0x3cu) & 0xffffff00u) | (uint8_t)eax;
                t77 = rd32(sp0 - 8u) + 1u;
                wr32(sp0 - 8u, t77);
                wr32(sp0 - 0x1d8u, arg1);
                g->edx = edx;
                g->esp = sp0 - 0x1d4u;
                t78 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
                t79 = g->edx;
                ecx = arg1;
                edx = t79;
                loc_3c = (rd32(sp0 - 0x3cu) & 0xffff00ffu) | (uint8_t)t78 << 8u;
            }
            wr32(sp0 - 0x1d8u, rd32(COW_IMG(0x103d023cu)));
            wr32(sp0 - 0x1dcu, sp0 - 0x3cu);
            wr32(sp0 - 0x1e0u, sp0 - 0x42u);
            g->esp = sp0 - 0x1d4u;
            t80 = cow_call_regs(g, COW_IMG(0x10324215u), g->eax, ecx, edx, 1, 3, sp0 - 0x42u, sp0 - 0x3cu, rd32(COW_IMG(0x103d023cu)));
            t81 = g->ecx;
            t82 = g->edx;
            wr16(esi, rd16(sp0 - 0x42u));
            ecx = t81;
            edx = t82;
            esi = esi + 2u;
        }
        wr32(sp0 - 0x30u, esi);
        loc_30 = esi;
    }
    goto L_1031d8dc;
L_1031d980: ;
    t84 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t84);
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 0x1dcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t85 = cow_cdecl(g, COW_IMG(0x1031dd2du), 2, eax, arg1);
    t86 = g->edx;
    eax = t85;
    ecx = arg1;
    edx = t86;
L_1031d98c: ;
    if (loc_34 == esi) goto L_1031dcbd;
    if (rd8(sp0 - 0x12u) == 0u)
    {
        t87 = rd32(sp0 - 0x38u) + 1u;
        wr32(sp0 - 0x38u, t87);
        if (rd32(sp0 - 0x40u) == 0x63u)
        {
            loc_38 = t87;
        }
        else
        {
            loc_38 = t87;
            if (rd8(sp0 - 0x1au) == 0u)
            {
                eax = loc_30;
                wr8(eax, 0u);
            }
            else
            {
                eax = loc_30;
                wr16(eax, 0u);
            }
        }
    }
    goto L_1031dc1e;
L_1031d9c6: ;
    loc_14 = (loc_14 & 0xffffffu) | 0x1000000u;
L_1031d9ca: ;
    if (loc_18 != 0x2du)
    {
        ebx = loc_18;
        goto L_1031d9d8;
    }
    ebx = loc_18;
    loc_1c = (loc_1c & 0xffff00ffu) | 0x100u;
L_1031d9dd: ;
    wr32(sp0 - 0x10u, loc_10 - 1u);
    if (loc_10 != 1u)
    {
        loc_10 = loc_10 - 1u;
        goto L_1031d9ee;
    }
    loc_10 = loc_10 - 1u;
    if (loc_24 == 0u) goto L_1031d9ee;
    loc_14 = (loc_14 & 0xffff00ffu) | 0x100u;
    loc_20 = 0u;
    goto L_1031d9ff;
L_1031d9d8: ;
    if (ebx != 0x2bu)
    {
        loc_20 = 0u;
        goto L_1031d9ff;
    }
    goto L_1031d9dd;
L_1031d9ee: ;
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 8u, loc_8 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t88 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t89 = g->edx;
    eax = t88;
    edx = t89;
    ebx = t88;
    goto L_1031d9fc;
L_1031da67: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
    }
    else
    {
        wr32(sp0 - 0x1d8u, 4u);
        wr32(sp0 - 0x1dcu, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x1d0u;
        t96 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, ebx, 4u, in_edi);
        t97 = g->edx;
        eax = t96;
        ecx = 4u;
        edx = t97;
    }
    if (eax == 0u) goto L_1031dae8;
    if (esi != 0x6fu) goto L_1031daa5;
    if ((int32_t)ebx >= 56) goto L_1031dae8;
    wr32(sp0 - 0x1d8u, 3u);
    g->esp = sp0 - 0x1d4u;
    t98 = cow_call_regs(g, COW_IMG(0x10312a60u), loc_2c, 3u, loc_28, 1, 0);
    t99 = g->ecx;
    t100 = g->edx;
    eax = t98;
    ecx = t99;
    edx = t100;
L_1031dab4: ;
    wr32(sp0 - 0x2cu, eax);
    wr32(sp0 - 0x28u, edx);
    loc_2c = eax;
    loc_28 = edx;
    goto L_1031daba;
L_1031daa5: ;
    wr32(sp0 - 0x1d8u, 0u);
    wr32(sp0 - 0x1dcu, 0xau);
    wr32(sp0 - 0x1e0u, loc_28);
    wr32(sp0 - 0x1e4u, loc_2c);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t101 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, loc_2c, loc_28, 0xau, 0u);
    t102 = g->ecx;
    t103 = g->edx;
    eax = t101;
    ecx = t102;
    edx = t103;
    goto L_1031dab4;
L_1031dae8: ;
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 - 0x1dcu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t111 = cow_cdecl(g, COW_IMG(0x1031dd2du), 2, ebx, arg1);
    t112 = g->edx;
    eax = t111;
    ecx = arg1;
    edx = t112;
L_1031daf6: ;
    if ((uint8_t)(loc_1c >> 8u) == 0u)
    {
        edi = 0u;
    }
    else
    {
        wr32(sp0 - 0x2cu, -loc_2c);
        t113 = -(loc_28 + (loc_2c != 0u));
        wr32(sp0 - 0x28u, t113);
        eax = -loc_2c;
        ecx = t113;
        edi = 0u;
        loc_2c = -loc_2c;
        loc_28 = t113;
    }
    goto L_1031dbdc;
L_1031db5f: ;
    edi = edi * 0xau;
    goto L_1031db9e;
L_1031db66: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 0x80u;
    }
    else
    {
        wr32(sp0 - 0x1d8u, 0x80u);
        wr32(sp0 - 0x1dcu, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x1d0u;
        t116 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, ebx, 0x80u, in_edi);
        t117 = g->edx;
        eax = t116;
        ecx = 0x80u;
        edx = t117;
    }
    if (eax == 0u) goto L_1031dbc6;
    wr32(sp0 - 0x1d8u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t118 = cow_thiscall_cdecl(g, COW_IMG(0x1031dcdcu), ecx, 1, ebx);
    t119 = g->edx;
    wr32(sp0 - 0x18u, t118);
    eax = t118;
    ecx = rd32(sp0 - 0x1d8u);
    edx = t119;
    ebx = t118;
    edi = edi << 4u;
    loc_18 = t118;
    goto L_1031db9e;
L_1031dbc6: ;
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 - 0x1dcu, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t122 = cow_cdecl(g, COW_IMG(0x1031dd2du), 2, ebx, arg1);
    t123 = g->edx;
    eax = t122;
    ecx = arg1;
    edx = t123;
L_1031dbd4: ;
    if ((uint8_t)(loc_1c >> 8u) != 0u)
    {
        edi = -edi;
    }
    goto L_1031dbdc;
L_1031dc29: ;
    wr32(sp0 - 8u, loc_8 + 1u);
    wr32(sp0 - 0x1d8u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t124 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t125 = g->edx;
    wr32(sp0 - 0x18u, t124);
    t126 = rd8(esi);
    wr32(sp0 + 8u, esi + 1u);
    if (t126 != t124)
    {
        eax = t126;
        edx = t125;
        ebx = t124;
        loc_18 = t124;
        goto L_1031dc98;
    }
    edx = t125;
    ebx = t124;
    esi = esi + 1u;
    loc_18 = t124;
    if ((rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
    {
        eax = (uint8_t)ebx;
        ecx = rd32(COW_IMG(0x103d0030u));
        goto L_1031dc6b;
    }
    ecx = rd32(COW_IMG(0x103d0030u));
    t127 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t127);
    wr32(sp0 - 0x1d8u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t128 = cow_cdecl(g, COW_IMG(0x1031dd13u), 1, arg1);
    t129 = g->edx;
    t130 = rd8(esi);
    wr32(sp0 + 8u, esi + 1u);
    if (t130 != t128)
    {
        eax = t128;
        ecx = t130;
        edx = t129;
        goto L_1031dca6;
    }
    eax = t128;
    ecx = t130;
    edx = t129;
    esi = esi + 1u;
    t131 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t131);
    loc_8 = t131;
    goto L_1031dc6b;
L_1031dc8d: ;
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 8u, loc_8 - 1u);
    wr32(sp0 - 0x1dcu, loc_18);
    loc_1dc = loc_18;
L_1031dc9d: ;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    cow_cdecl(g, COW_IMG(0x1031dd2du), 2, loc_1dc, arg1);
    t139 = g->edx;
    edx = t139;
    goto L_1031dcbd;
L_1031dc98: ;
    t138 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t138);
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 0x1dcu, ebx);
    ecx = arg1;
    loc_1dc = ebx;
    goto L_1031dc9d;
L_1031dca6: ;
    t132 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t132);
    wr32(sp0 - 0x1d8u, arg1);
    wr32(sp0 - 0x1dcu, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1d4u;
    t133 = cow_cdecl(g, COW_IMG(0x1031dd2du), 2, eax, arg1);
    t134 = g->ecx;
    t135 = g->edx;
    t136 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t136);
    wr32(sp0 - 0x1e0u, arg1);
    wr32(sp0 - 0x1e4u, ebx);
    g->edx = t135;
    g->esp = sp0 - 0x1dcu;
    cow_cdecl(g, COW_IMG(0x1031dd2du), 2, ebx, arg1);
    t137 = g->edx;
    edx = t137;
    goto L_1031dcbd;
L_1031dcd4: ;
    eax = loc_38;
    goto L_1031dcd7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031d2b7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031d2b7(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
