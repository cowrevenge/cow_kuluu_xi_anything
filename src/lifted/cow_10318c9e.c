/* f_0x10318c9e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10318c9e(Guest* g)
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
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_254;
    uint32_t loc_258;
    uint32_t loc_25c;
    uint32_t loc_260;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 628u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x254u, in_ebx);
    wr32(sp0 - 0x258u, in_esi);
    wr32(sp0 - 0x25cu, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x34u, 0u);
    t1 = rd32(sp0 + 8u) + 1u;
    t2 = rd8(rd32(sp0 + 8u));
    wr32(sp0 + 8u, t1);
    if ((uint8_t)t2 == 0u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_254 = in_ebx;
        loc_258 = in_esi;
        loc_25c = in_edi;
        loc_18 = 0u;
        goto L_10319414;
    }
    ebx = (in_ebx & 0xffffff00u) | t2;
    esi = t1;
    ecx = 0u;
    loc_4 = in_ebp;
    loc_254 = in_ebx;
    loc_258 = in_esi;
    loc_25c = in_edi;
    loc_14 = 0u;
    loc_18 = 0u;
    loc_34 = 0u;
    loc_3c = rd32(sp0 - 0x3cu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_44 = rd32(sp0 - 0x44u);
L_10318cdf: ;
    if ((int32_t)loc_18 < 0)
    {
        edx = 0x200u;
        goto L_10319414;
    }
    if ((int8_t)ebx < 32) goto L_10318d01;
    if ((int8_t)ebx > 120) goto L_10318d01;
    eax = rd8(COW_IMG(0x1034a2e8u) + (uint32_t)(int8_t)ebx) & 0xfu;
L_10318d03: ;
    t3 = (uint32_t)((int32_t)(uint32_t)(int8_t)rd8(COW_IMG(0x1034a308u) + eax * 8u + ecx) >> 4u);
    wr32(sp0 - 0x40u, t3);
    if ((uint32_t)((int32_t)(uint32_t)(int8_t)rd8(COW_IMG(0x1034a308u) + eax * 8u + ecx) >> 4u) > 7u)
    {
        edx = 0x200u;
        loc_40 = t3;
        goto L_10319403;
    }
    eax = t3;
    loc_40 = t3;
    t4 = rd32(COW_IMG(0x1031941cu) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x10318d21u: goto L_10318d21;
    case 0x10318d3eu: goto L_10318d3e;
    case 0x10318d8au: goto L_10318d8a;
    case 0x10318dc1u: goto L_10318dc1;
    case 0x10318dcau: goto L_10318dca;
    case 0x10318e02u: goto L_10318e02;
    case 0x10318e51u: goto L_10318e51;
    case 0x10318e96u: goto L_10318e96;
    default: rt_fatal(g, COW_IMG(0x10318d1au), "switch");
    }
    return 0;
L_10318cd2: ;
    ecx = loc_40;
    goto L_10318cdf;
L_10318d01: ;
    eax = 0u;
    goto L_10318d03;
L_10318d21: ;
    wr32(sp0 - 0xcu, 0xffffffffu);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x30u, 0u);
    edx = 0x200u;
    loc_3c = 0u;
    loc_30 = 0u;
    loc_c = 0xffffffffu;
    loc_8 = 0u;
    loc_28 = 0u;
    loc_2c = 0u;
    loc_44 = 0u;
L_10319403: ;
    t84 = rd32(sp0 + 8u) + 1u;
    t85 = rd8(rd32(sp0 + 8u));
    wr32(sp0 + 8u, t84);
    if ((uint8_t)t85 != 0u)
    {
        ebx = (ebx & 0xffffff00u) | t85;
        esi = t84;
        goto L_10318cd2;
    }
L_10319414: ;
    g->ebx = loc_254;
    g->esi = loc_258;
    g->edi = loc_25c;
    g->ebp = loc_4;
    g->edx = edx;
    return loc_18;
L_10318d3e: ;
    if ((uint32_t)(int8_t)ebx == 0x20u)
    {
        wr32(sp0 - 8u, loc_8 | 2u);
        edx = 0x200u;
        loc_8 = loc_8 | 2u;
    }
    else
    {
        eax = (uint32_t)(int8_t)ebx - 0x20u;
        if (eax == 3u)
        {
            wr8(sp0 - 8u, (uint8_t)(loc_8 | 0x80u));
            edx = 0x200u;
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            eax = eax - 3u;
            if (eax == 8u)
            {
                wr32(sp0 - 8u, loc_8 | 1u);
                edx = 0x200u;
                loc_8 = loc_8 | 1u;
            }
            else
            {
                eax = eax - 8u;
                if (eax == 2u)
                {
                    wr32(sp0 - 8u, loc_8 | 4u);
                    edx = 0x200u;
                    loc_8 = loc_8 | 4u;
                }
                else
                {
                    eax = eax - 2u;
                    if (eax != 3u)
                    {
                        edx = 0x200u;
                    }
                    else
                    {
                        wr32(sp0 - 8u, loc_8 | 8u);
                        edx = 0x200u;
                        loc_8 = loc_8 | 8u;
                    }
                }
            }
        }
    }
    goto L_10319403;
L_10318d8a: ;
    if ((uint8_t)ebx != 0x2au) goto L_10318db2;
    wr32(sp0 - 0x260u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = 0x200u;
    g->esp = sp0 - 0x25cu;
    t81 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
    t82 = g->edx;
    wr32(sp0 - 0x2cu, t81);
    if ((int32_t)t81 >= 0)
    {
        edx = t82;
        loc_4 = rd32(sp0 - 4u);
        loc_254 = rd32(sp0 - 0x254u);
        loc_258 = rd32(sp0 - 0x258u);
        loc_25c = rd32(sp0 - 0x25cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = t81;
        loc_44 = rd32(sp0 - 0x44u);
        goto L_10319403;
    }
    eax = t81;
    edx = t82;
    t83 = rd32(sp0 - 8u) | 4u;
    wr32(sp0 - 8u, t83);
    eax = -eax;
    loc_8 = t83;
    loc_4 = rd32(sp0 - 4u);
    loc_254 = rd32(sp0 - 0x254u);
    loc_258 = rd32(sp0 - 0x258u);
    loc_25c = rd32(sp0 - 0x25cu);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_c = rd32(sp0 - 0xcu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_44 = rd32(sp0 - 0x44u);
L_10318daa: ;
    wr32(sp0 - 0x2cu, eax);
    loc_2c = eax;
    goto L_10319403;
L_10318db2: ;
    eax = loc_2c * 0xau + (uint32_t)(int8_t)ebx - 0x30u;
    edx = 0x200u;
    goto L_10318daa;
L_10318dc1: ;
    wr32(sp0 - 0xcu, 0u);
    edx = 0x200u;
    loc_c = 0u;
    goto L_10319403;
L_10318dca: ;
    if ((uint8_t)ebx != 0x2au)
    {
        t80 = loc_c * 0xau + (uint32_t)(int8_t)ebx - 0x30u;
        wr32(sp0 - 0xcu, t80);
        edx = 0x200u;
        loc_c = t80;
    }
    else
    {
        wr32(sp0 - 0x260u, sp0 + 0xcu);
        g->eax = sp0 + 0xcu;
        g->edx = 0x200u;
        g->esp = sp0 - 0x25cu;
        t78 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
        t79 = g->edx;
        wr32(sp0 - 0xcu, t78);
        if ((int32_t)t78 >= 0)
        {
            edx = t79;
            loc_4 = rd32(sp0 - 4u);
            loc_254 = rd32(sp0 - 0x254u);
            loc_258 = rd32(sp0 - 0x258u);
            loc_25c = rd32(sp0 - 0x25cu);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_40 = rd32(sp0 - 0x40u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_30 = rd32(sp0 - 0x30u);
            loc_c = t78;
            loc_8 = rd32(sp0 - 8u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_44 = rd32(sp0 - 0x44u);
        }
        else
        {
            edx = t79;
            loc_c = t78;
            wr32(sp0 - 0xcu, 0xffffffffu);
            loc_4 = rd32(sp0 - 4u);
            loc_254 = rd32(sp0 - 0x254u);
            loc_258 = rd32(sp0 - 0x258u);
            loc_25c = rd32(sp0 - 0x25cu);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_40 = rd32(sp0 - 0x40u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_30 = rd32(sp0 - 0x30u);
            loc_c = 0xffffffffu;
            loc_8 = rd32(sp0 - 8u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_44 = rd32(sp0 - 0x44u);
        }
    }
    goto L_10319403;
L_10318e02: ;
    if ((uint8_t)ebx == 0x49u) goto L_10318e34;
    if ((uint8_t)ebx == 0x68u)
    {
        wr32(sp0 - 8u, loc_8 | 0x20u);
        edx = 0x200u;
        loc_8 = loc_8 | 0x20u;
    }
    else
    {
        if ((uint8_t)ebx == 0x6cu)
        {
            wr32(sp0 - 8u, loc_8 | 0x10u);
            edx = 0x200u;
            loc_8 = loc_8 | 0x10u;
        }
        else
        {
            if ((uint8_t)ebx != 0x77u)
            {
                edx = 0x200u;
            }
            else
            {
                wr32(sp0 - 8u, loc_8 | 0x800u);
                edx = 0x200u;
                loc_8 = loc_8 | 0x800u;
            }
        }
    }
    goto L_10319403;
L_10318e34: ;
    if (rd8(esi) != 0x36u) goto L_10318e4d;
    if (rd8(esi + 1u) != 0x34u) goto L_10318e4d;
    wr8(sp0 - 7u, (uint8_t)(loc_8 >> 8u | 0x80u));
    wr32(sp0 + 8u, esi + 2u);
    edx = 0x200u;
    loc_8 = rd32(sp0 - 8u);
    goto L_10319403;
L_10318e4d: ;
    wr32(sp0 - 0x40u, 0u);
    loc_40 = 0u;
L_10318e51: ;
    wr32(sp0 - 0x30u, 0u);
    if ((rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
    {
        ecx = rd32(COW_IMG(0x103d0030u));
        edx = 0x200u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103d0030u));
        wr32(sp0 - 0x260u, sp0 - 0x18u);
        wr32(sp0 - 0x264u, arg1);
        wr32(sp0 - 0x268u, (uint32_t)(int8_t)ebx);
        g->ecx = ecx;
        g->edx = 0x200u;
        g->esp = sp0 - 0x258u;
        cow_call_regs(g, COW_IMG(0x1031943cu), (uint32_t)(int8_t)ebx, g->ecx, g->edx, 1, 4, (uint32_t)(int8_t)ebx, arg1, sp0 - 0x18u, loc_25c);
        t74 = g->ecx;
        t75 = g->edx;
        t76 = rd8(esi);
        wr32(sp0 + 8u, esi + 1u);
        ecx = t74;
        edx = t75;
        ebx = (ebx & 0xffffff00u) | t76;
        loc_4 = rd32(sp0 - 4u);
        loc_254 = rd32(sp0 - 0x254u);
        loc_258 = rd32(sp0 - 0x258u);
        loc_25c = rd32(sp0 - 0x25cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_44 = rd32(sp0 - 0x44u);
    }
    wr32(sp0 - 0x260u, sp0 - 0x18u);
    wr32(sp0 - 0x264u, arg1);
    wr32(sp0 - 0x268u, (uint32_t)(int8_t)ebx);
    g->edx = edx;
    g->esp = sp0 - 0x258u;
    cow_call_regs(g, COW_IMG(0x1031943cu), (uint32_t)(int8_t)ebx, g->ecx, g->edx, 1, 4, (uint32_t)(int8_t)ebx, arg1, sp0 - 0x18u, loc_25c);
    t77 = g->edx;
    edx = t77;
    loc_4 = rd32(sp0 - 4u);
    loc_254 = rd32(sp0 - 0x254u);
    loc_258 = rd32(sp0 - 0x258u);
    loc_25c = rd32(sp0 - 0x25cu);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_30 = 0u;
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_10319403;
L_10318e96: ;
    if ((int8_t)ebx > 103)
    {
        eax = (uint32_t)(int8_t)ebx;
        goto L_103190da;
    }
    eax = (uint32_t)(int8_t)ebx;
    if ((int32_t)eax >= 101) goto L_10318f41;
    if ((int32_t)eax > 88) goto L_10318fa0;
    zf = eax == 0x58u;
    if (zf) goto L_1031914e;
    if (eax == 0x43u) goto L_10318f64;
    eax = eax - 0x43u;
    if (eax == 2u) goto L_10318f37;
    eax = eax - 2u;
    if (eax == 2u) goto L_10318f37;
    eax = eax - 2u;
    if (eax != 0xcu)
    {
        eax = eax - 0xcu;
        edx = 0x200u;
        goto L_103192f2;
    }
    if ((loc_8 & 0x830u) == 0u)
    {
        wr32(sp0 - 8u, loc_8 | 0x800u);
        loc_8 = loc_8 | 0x800u;
    }
L_10318edf: ;
    if (loc_c == 0xffffffffu)
    {
        esi = 0x7fffffffu;
    }
    else
    {
        esi = loc_c;
    }
    wr32(sp0 - 0x260u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->esp = sp0 - 0x25cu;
    t30 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
    wr32(sp0 - 0x10u, t30);
    if ((rd16(sp0 - 8u) & 0x810u) == 0u)
    {
        ecx = t30;
        loc_10 = t30;
        if (ecx == 0u)
        {
            wr32(sp0 - 0x10u, rd32(COW_IMG(0x103d0790u)));
            ecx = rd32(COW_IMG(0x103d0790u));
            loc_10 = rd32(COW_IMG(0x103d0790u));
        }
        eax = ecx;
L_10319131: ;
        if (esi == 0u)
        {
            edx = esi;
            goto L_10319140;
        }
        edx = esi;
        esi = esi - 1u;
        if (rd8(eax) == 0u) goto L_10319140;
        eax = eax + 1u;
        goto L_10319131;
    }
    else
    {
        ecx = t30;
        loc_10 = t30;
        if (ecx == 0u)
        {
            wr32(sp0 - 0x10u, rd32(COW_IMG(0x103d0794u)));
            ecx = rd32(COW_IMG(0x103d0794u));
            loc_10 = rd32(COW_IMG(0x103d0794u));
        }
        wr32(sp0 - 0x30u, 1u);
        eax = ecx;
L_10318f1e: ;
        if (esi == 0u)
        {
            edx = esi;
            goto L_10319119;
        }
        edx = esi;
        esi = esi - 1u;
        if (rd16(eax) == 0u) goto L_10319119;
        eax = eax + 2u;
        goto L_10318f1e;
    }
L_103192ef: ;
    wr32(sp0 - 0x14u, eax);
    loc_4 = rd32(sp0 - 4u);
    loc_254 = rd32(sp0 - 0x254u);
    loc_258 = rd32(sp0 - 0x258u);
    loc_25c = rd32(sp0 - 0x25cu);
    loc_14 = eax;
    loc_18 = rd32(sp0 - 0x18u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_44 = rd32(sp0 - 0x44u);
L_103192f2: ;
    if (loc_3c == 0u)
    {
        if ((loc_8 & 0x40u) == 0u)
        {
            ebx = loc_8;
        }
        else
        {
            ebx = loc_8;
            if (!(ebx >> 8u & 1u)) goto L_1031930f;
            wr8(sp0 - 0x1au, 0x2du);
L_10319323: ;
            wr32(sp0 - 0x28u, 1u);
            loc_28 = 1u;
        }
L_1031932a: ;
        if ((ebx & 0xcu) != 0u)
        {
            esi = loc_2c - loc_28 - loc_14;
        }
        else
        {
            esi = loc_2c - loc_28 - loc_14;
            wr32(sp0 - 0x260u, sp0 - 0x18u);
            wr32(sp0 - 0x264u, arg1);
            wr32(sp0 - 0x268u, esi);
            wr32(sp0 - 0x26cu, 0x20u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x254u;
            cow_cdecl(g, COW_IMG(0x10319471u), 6, 0x20u, esi, arg1, sp0 - 0x18u, loc_25c, loc_258);
            t44 = g->ecx;
            t45 = g->edx;
            ecx = t44;
            edx = t45;
            loc_4 = rd32(sp0 - 4u);
            loc_254 = rd32(sp0 - 0x254u);
            loc_258 = rd32(sp0 - 0x258u);
            loc_25c = rd32(sp0 - 0x25cu);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_40 = rd32(sp0 - 0x40u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_30 = rd32(sp0 - 0x30u);
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_44 = rd32(sp0 - 0x44u);
        }
        wr32(sp0 - 0x260u, sp0 - 0x18u);
        wr32(sp0 - 0x264u, arg1);
        wr32(sp0 - 0x268u, loc_28);
        wr32(sp0 - 0x26cu, sp0 - 0x1au);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x25cu;
        cow_cdecl(g, COW_IMG(0x103194a2u), 4, sp0 - 0x1au, loc_28, arg1, sp0 - 0x18u);
        t46 = g->ecx;
        t47 = g->edx;
        if ((ebx & 8u) == 0u)
        {
            ecx = t46;
            edx = t47;
        }
        else
        {
            ecx = t46;
            edx = t47;
            if ((ebx & 4u) == 0u)
            {
                wr32(sp0 - 0x260u, sp0 - 0x18u);
                wr32(sp0 - 0x264u, arg1);
                wr32(sp0 - 0x268u, esi);
                wr32(sp0 - 0x26cu, 0x30u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x254u;
                cow_cdecl(g, COW_IMG(0x10319471u), 6, 0x30u, esi, arg1, sp0 - 0x18u, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
                t48 = g->ecx;
                t49 = g->edx;
                ecx = t48;
                edx = t49;
            }
        }
        if (rd32(sp0 - 0x30u) == 0u) goto L_103193c3;
        if ((int32_t)rd32(sp0 - 0x14u) <= 0) goto L_103193c3;
        eax = rd32(sp0 - 0x14u);
        ebx = rd32(sp0 - 0x10u);
        edi = rd32(sp0 - 0x14u) - 1u;
L_10319391: ;
        t50 = (eax & 0xffff0000u) | rd16(ebx);
        wr32(sp0 - 0x260u, t50);
        wr32(sp0 - 0x264u, sp0 - 0x48u);
        g->eax = sp0 - 0x48u;
        g->esp = sp0 - 0x25cu;
        t51 = cow_call_regs(g, COW_IMG(0x10323bf7u), g->eax, ecx, edx, 1, 2, sp0 - 0x48u, t50);
        t52 = g->edx;
        if ((int32_t)t51 <= 0)
        {
            eax = t51;
            ecx = rd32(sp0 - 0x260u);
            edx = t52;
            ebx = ebx + 2u;
            goto L_103193d8;
        }
        eax = t51;
        edx = t52;
        ebx = ebx + 2u;
        wr32(sp0 - 0x260u, sp0 - 0x18u);
        wr32(sp0 - 0x264u, arg1);
        wr32(sp0 - 0x268u, eax);
        wr32(sp0 - 0x26cu, sp0 - 0x48u);
        g->ecx = sp0 - 0x18u;
        g->edx = edx;
        g->esp = sp0 - 0x25cu;
        cow_cdecl(g, COW_IMG(0x103194a2u), 4, sp0 - 0x48u, eax, arg1, sp0 - 0x18u);
        t53 = g->ecx;
        t54 = g->edx;
        if (edi != 0u)
        {
            eax = edi;
            ecx = t53;
            edx = t54;
            edi = edi - 1u;
            goto L_10319391;
        }
        eax = edi;
        ecx = t53;
        edx = t54;
L_103193d8: ;
        if ((rd8(sp0 - 8u) & 4u) == 0u)
        {
            loc_3c = rd32(sp0 - 0x3cu);
            loc_4 = rd32(sp0 - 4u);
            loc_254 = rd32(sp0 - 0x254u);
            loc_258 = rd32(sp0 - 0x258u);
            loc_25c = rd32(sp0 - 0x25cu);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_40 = rd32(sp0 - 0x40u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_30 = rd32(sp0 - 0x30u);
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_44 = rd32(sp0 - 0x44u);
        }
        else
        {
            wr32(sp0 - 0x260u, sp0 - 0x18u);
            wr32(sp0 - 0x264u, arg1);
            wr32(sp0 - 0x268u, esi);
            wr32(sp0 - 0x26cu, 0x20u);
            g->eax = sp0 - 0x18u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x254u;
            t60 = cow_cdecl(g, COW_IMG(0x10319471u), 6, 0x20u, esi, arg1, sp0 - 0x18u, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
            t61 = g->ecx;
            t62 = g->edx;
            eax = t60;
            ecx = t61;
            edx = t62;
            loc_3c = rd32(sp0 - 0x3cu);
            loc_4 = rd32(sp0 - 4u);
            loc_254 = rd32(sp0 - 0x254u);
            loc_258 = rd32(sp0 - 0x258u);
            loc_25c = rd32(sp0 - 0x25cu);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_40 = rd32(sp0 - 0x40u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_30 = rd32(sp0 - 0x30u);
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_44 = rd32(sp0 - 0x44u);
        }
    }
L_103193f0: ;
    if (loc_34 != 0u)
    {
        wr32(sp0 - 0x260u, loc_34);
        g->ebx = ebx;
        g->esp = sp0 - 0x254u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, loc_34, loc_25c, loc_258);
        t63 = g->edx;
        wr32(sp0 - 0x34u, 0u);
        edx = t63;
        loc_4 = rd32(sp0 - 4u);
        loc_254 = rd32(sp0 - 0x254u);
        loc_258 = rd32(sp0 - 0x258u);
        loc_25c = rd32(sp0 - 0x25cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_34 = 0u;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_44 = rd32(sp0 - 0x44u);
    }
    goto L_10319403;
L_10318f37: ;
    wr32(sp0 - 0x44u, 1u);
    ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 0x20u);
    loc_44 = 1u;
L_10318f41: ;
    wr32(sp0 - 8u, loc_8 | 0x40u);
    wr32(sp0 - 0x10u, sp0 - 0x250u);
    if ((int32_t)loc_c >= 0)
    {
        zf = loc_c == 0u;
        loc_8 = loc_8 | 0x40u;
        if (!zf)
        {
            if ((int32_t)loc_c > 512)
            {
                wr32(sp0 - 0xcu, 0x200u);
                loc_c = 0x200u;
            }
            if ((int32_t)loc_c <= 163)
            {
                edx = 0x200u;
                edi = sp0 - 0x250u;
                loc_10 = sp0 - 0x250u;
            }
            else
            {
                wr32(sp0 - 0x260u, loc_c + 0x15du);
                g->eax = loc_c + 0x15du;
                g->esp = sp0 - 0x254u;
                t16 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, ecx, 0x200u, 1, 3, loc_c + 0x15du, loc_25c, loc_258);
                t17 = g->edx;
                wr32(sp0 - 0x34u, t16);
                if (t16 == 0u)
                {
                    edx = t17;
                    loc_34 = t16;
                    wr32(sp0 - 0xcu, 0xa3u);
                    edi = sp0 - 0x250u;
                    loc_4 = rd32(sp0 - 4u);
                    loc_254 = rd32(sp0 - 0x254u);
                    loc_258 = rd32(sp0 - 0x258u);
                    loc_25c = rd32(sp0 - 0x25cu);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_8 = rd32(sp0 - 8u);
                    loc_10 = sp0 - 0x250u;
                    loc_c = 0xa3u;
                    loc_3c = rd32(sp0 - 0x3cu);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                }
                else
                {
                    eax = t16;
                    edx = t17;
                    loc_34 = t16;
                    wr32(sp0 - 0x10u, eax);
                    edi = eax;
                    loc_4 = rd32(sp0 - 4u);
                    loc_254 = rd32(sp0 - 0x254u);
                    loc_258 = rd32(sp0 - 0x258u);
                    loc_25c = rd32(sp0 - 0x25cu);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_8 = rd32(sp0 - 8u);
                    loc_10 = eax;
                    loc_c = rd32(sp0 - 0xcu);
                    loc_3c = rd32(sp0 - 0x3cu);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                }
            }
        }
        else
        {
            if ((uint8_t)ebx != 0x67u)
            {
                edx = 0x200u;
                edi = sp0 - 0x250u;
                loc_10 = sp0 - 0x250u;
            }
            else
            {
                wr32(sp0 - 0xcu, 1u);
                edx = 0x200u;
                edi = sp0 - 0x250u;
                loc_10 = sp0 - 0x250u;
                loc_c = 1u;
            }
        }
    }
    else
    {
        loc_8 = loc_8 | 0x40u;
        wr32(sp0 - 0xcu, 6u);
        edx = 0x200u;
        edi = sp0 - 0x250u;
        loc_10 = sp0 - 0x250u;
        loc_c = 6u;
    }
    wr32(sp0 - 0x260u, loc_44);
    t18 = rd32(sp0 + 0xcu) + 8u;
    wr32(sp0 + 0xcu, t18);
    wr32(sp0 - 0x264u, loc_c);
    t19 = rd32(t18 - 8u);
    wr32(sp0 - 0x50u, t19);
    t20 = rd32(t18 - 4u);
    wr32(sp0 - 0x4cu, t20);
    wr32(sp0 - 0x268u, (uint32_t)(int8_t)ebx);
    wr32(sp0 - 0x26cu, edi);
    wr32(sp0 - 0x270u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = edx;
    g->esp = sp0 - 0x25cu;
    t21 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x103d0778u)), t19, 5, sp0 - 0x50u, edi, (uint32_t)(int8_t)ebx, loc_c, loc_44);
    t22 = g->ecx;
    t23 = g->edx;
    if ((rd32(sp0 - 8u) & 0x80u) == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        esi = rd32(sp0 - 8u) & 0x80u;
    }
    else
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        esi = rd32(sp0 - 8u) & 0x80u;
        if (rd32(sp0 - 0xcu) == 0u)
        {
            wr32(sp0 - 0x260u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x25cu;
            t24 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x103d0784u)), ecx, 1, edi);
            t25 = g->edx;
            eax = t24;
            ecx = rd32(sp0 - 0x260u);
            edx = t25;
        }
    }
    if ((uint8_t)ebx == 0x67u)
    {
        if (esi == 0u)
        {
            wr32(sp0 - 0x260u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x25cu;
            t26 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x103d077cu)), ecx, 1, edi);
            t27 = g->edx;
            eax = t26;
            ecx = rd32(sp0 - 0x260u);
            edx = t27;
        }
    }
    if (rd8(edi) != 0x2du)
    {
        loc_10 = rd32(sp0 - 0x10u);
    }
    else
    {
        wr8(sp0 - 7u, rd8(sp0 - 7u) | 1u);
        wr32(sp0 - 0x10u, edi + 1u);
        loc_10 = edi + 1u;
        edi = edi + 1u;
    }
    wr32(sp0 - 0x260u, edi);
    loc_260 = edi;
L_103190cf: ;
    g->edx = edx;
    g->esp = sp0 - 0x25cu;
    t28 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, loc_260);
    t29 = g->edx;
    eax = t28;
    ecx = rd32(sp0 - 0x260u);
    edx = t29;
    loc_30 = rd32(sp0 - 0x30u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_103192ef;
L_10318f64: ;
    if ((loc_8 & 0x830u) == 0u)
    {
        wr32(sp0 - 8u, loc_8 | 0x800u);
        loc_8 = loc_8 | 0x800u;
    }
L_10318f6f: ;
    wr32(sp0 - 0x260u, sp0 + 0xcu);
    if ((loc_8 & 0x810u) == 0u)
    {
        g->eax = sp0 + 0xcu;
        g->edx = 0x200u;
        g->esp = sp0 - 0x25cu;
        t11 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
        t12 = g->edx;
        wr8(sp0 - 0x250u, (uint8_t)t11);
        wr32(sp0 - 0x14u, 1u);
        ecx = sp0 + 0xcu;
        edx = t12;
        loc_14 = 1u;
        loc_3c = rd32(sp0 - 0x3cu);
    }
    else
    {
        g->eax = sp0 + 0xcu;
        g->ecx = ecx;
        g->edx = 0x200u;
        g->esp = sp0 - 0x25cu;
        t5 = cow_cdecl(g, COW_IMG(0x103194f7u), 1, sp0 + 0xcu);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x264u, t5);
        wr32(sp0 - 0x268u, sp0 - 0x250u);
        g->eax = sp0 - 0x250u;
        g->esp = sp0 - 0x260u;
        t8 = cow_call_regs(g, COW_IMG(0x10323bf7u), g->eax, t6, t7, 1, 2, sp0 - 0x250u, t5);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x14u, t8);
        if ((int32_t)t8 >= 0)
        {
            ecx = t9;
            edx = t10;
            loc_14 = t8;
            loc_3c = rd32(sp0 - 0x3cu);
        }
        else
        {
            ecx = t9;
            edx = t10;
            loc_14 = t8;
            wr32(sp0 - 0x3cu, 1u);
            loc_3c = 1u;
        }
    }
    wr32(sp0 - 0x10u, sp0 - 0x250u);
    eax = sp0 - 0x250u;
    loc_4 = rd32(sp0 - 4u);
    loc_254 = rd32(sp0 - 0x254u);
    loc_258 = rd32(sp0 - 0x258u);
    loc_25c = rd32(sp0 - 0x25cu);
    loc_18 = rd32(sp0 - 0x18u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_10 = sp0 - 0x250u;
    loc_30 = rd32(sp0 - 0x30u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_103192f2;
L_10318fa0: ;
    if (eax == 0x5au) goto L_10318fd7;
    eax = eax - 0x5au;
    if (eax == 9u) goto L_10318f6f;
    eax = eax - 9u;
    if (eax == 1u) goto L_103191b3;
    eax = eax - 1u;
    edx = 0x200u;
    goto L_103192f2;
L_10318fd7: ;
    wr32(sp0 - 0x260u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = 0x200u;
    g->esp = sp0 - 0x25cu;
    t13 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
    t14 = g->edx;
    if (t13 == 0u)
    {
        ecx = sp0 + 0xcu;
        edx = t14;
        goto L_10319017;
    }
    eax = t13;
    edx = t14;
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_10319017;
    }
    ecx = rd32(eax + 4u);
    if ((rd32(sp0 - 8u) & 0x800u) == 0u) goto L_10319008;
    wr32(sp0 - 0x10u, ecx);
    t15 = (uint32_t)(int16_t)rd16(eax) >> 1u;
    wr32(sp0 - 0x14u, t15);
    wr32(sp0 - 0x30u, 1u);
    eax = t15;
    loc_4 = rd32(sp0 - 4u);
    loc_254 = rd32(sp0 - 0x254u);
    loc_258 = rd32(sp0 - 0x258u);
    loc_25c = rd32(sp0 - 0x25cu);
    loc_14 = t15;
    loc_18 = rd32(sp0 - 0x18u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_10 = ecx;
    loc_30 = 1u;
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_103192f2;
L_10319008: ;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x10u, ecx);
    eax = (uint32_t)(int16_t)rd16(eax);
    loc_30 = 0u;
    loc_10 = ecx;
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_103192ef;
L_10319017: ;
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x103d0790u)));
    wr32(sp0 - 0x260u, rd32(COW_IMG(0x103d0790u)));
    eax = rd32(COW_IMG(0x103d0790u));
    loc_260 = rd32(COW_IMG(0x103d0790u));
    loc_10 = rd32(COW_IMG(0x103d0790u));
    goto L_103190cf;
L_103190da: ;
    if (eax == 0x69u) goto L_103191b3;
    eax = eax - 0x69u;
    if (eax == 5u) goto L_10319189;
    eax = eax - 5u;
    if (eax == 1u) goto L_10319177;
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10319147;
    }
    eax = eax - 1u;
    if (eax == 3u) goto L_10318edf;
    eax = eax - 3u;
    if (eax == 2u) goto L_103191b7;
    eax = eax - 2u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        edx = 0x200u;
        goto L_103192f2;
    }
    eax = eax - 3u;
    wr32(sp0 - 0x38u, 0x27u);
    loc_38 = 0x27u;
L_10319155: ;
    wr32(sp0 - 0x14u, 0x10u);
    if ((loc_8 & 0x80u) == 0u)
    {
        loc_14 = 0x10u;
    }
    else
    {
        wr8(sp0 - 0x1au, 0x30u);
        wr32(sp0 - 0x28u, 2u);
        wr8(sp0 - 0x19u, (uint8_t)((uint8_t)loc_38 + 0x51u));
        loc_14 = 0x10u;
        loc_28 = 2u;
    }
L_103191be: ;
    if ((loc_8 >> 8u & 0x80u) == 0u)
    {
        if ((loc_8 & 0x20u) == 0u) goto L_103191f7;
        wr32(sp0 - 0x260u, sp0 + 0xcu);
        if ((loc_8 & 0x40u) == 0u)
        {
            g->eax = sp0 + 0xcu;
            g->esp = sp0 - 0x25cu;
            t38 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
            eax = (uint16_t)t38;
        }
        else
        {
            g->eax = sp0 + 0xcu;
            g->esp = sp0 - 0x25cu;
            t37 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
            eax = (uint32_t)(int16_t)t37;
        }
L_103191e9: ;
        edx = (uint32_t)((int32_t)eax >> 0x1fu);
    }
    else
    {
        wr32(sp0 - 0x260u, sp0 + 0xcu);
        g->eax = sp0 + 0xcu;
        g->edx = 0x200u;
        g->esp = sp0 - 0x25cu;
        t35 = cow_cdecl(g, COW_IMG(0x103194e7u), 1, sp0 + 0xcu);
        t36 = g->edx;
        eax = t35;
        edx = t36;
    }
L_10319211: ;
    if ((rd8(sp0 - 8u) & 0x40u) == 0u) goto L_10319234;
    if ((int32_t)edx > 0) goto L_10319234;
    sf = (int32_t)edx < 0;
    if (sf) goto L_10319221;
    if (1u) goto L_10319234;
L_10319221: ;
    wr32(sp0 - 0x24u, -eax);
    wr8(sp0 - 7u, rd8(sp0 - 7u) | 1u);
    t41 = -(edx + (eax != 0u));
    wr32(sp0 - 0x20u, t41);
    edx = t41;
    loc_24 = -eax;
    loc_20 = t41;
L_1031923a: ;
    if ((rd8(sp0 - 7u) & 0x80u) == 0u)
    {
        wr32(sp0 - 0x20u, 0u);
        loc_20 = 0u;
    }
    if ((int32_t)rd32(sp0 - 0xcu) >= 0)
    {
        t42 = rd32(sp0 - 8u) & 0xfffffff7u;
        wr32(sp0 - 8u, t42);
        if ((int32_t)rd32(sp0 - 0xcu) <= 512)
        {
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = t42;
        }
        else
        {
            loc_8 = t42;
            wr32(sp0 - 0xcu, 0x200u);
            loc_c = 0x200u;
        }
    }
    else
    {
        wr32(sp0 - 0xcu, 1u);
        loc_c = 1u;
        loc_8 = rd32(sp0 - 8u);
    }
    if ((loc_24 | loc_20) != 0u)
    {
        loc_28 = rd32(sp0 - 0x28u);
    }
    else
    {
        wr32(sp0 - 0x28u, 0u);
        loc_28 = 0u;
    }
    wr32(sp0 - 0x10u, sp0 - 0x51u);
    ecx = sp0 + 0xcu;
    loc_10 = sp0 - 0x51u;
L_10319276: ;
    wr32(sp0 - 0xcu, loc_c - 1u);
    if ((int32_t)loc_c > 0)
    {
        loc_c = loc_c - 1u;
        goto L_10319288;
    }
    loc_c = loc_c - 1u;
    if ((loc_24 | loc_20) == 0u) goto L_103192c7;
L_10319288: ;
    t64 = (uint32_t)((int32_t)rd32(sp0 - 0x14u) >> 0x1fu);
    t65 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x260u, t64);
    wr32(sp0 - 0x264u, t65);
    wr32(sp0 - 0x268u, loc_20);
    wr32(sp0 - 0x26cu, loc_24);
    g->eax = t65;
    g->ecx = ecx;
    g->edx = t64;
    g->esp = sp0 - 0x25cu;
    t66 = cow_stdcall(g, COW_IMG(0x103168f0u), 4, loc_24, loc_20, t65, t64);
    t67 = g->ecx;
    t68 = g->edx;
    wr32(sp0 - 0x260u, t64);
    wr32(sp0 - 0x264u, t65);
    t69 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x268u, t69);
    t70 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x26cu, t70);
    g->ecx = t67;
    g->edx = t68;
    t71 = cow_stdcall(g, COW_IMG(0x10316970u), 4, t70, t69, t65, t64);
    t72 = g->ecx;
    t73 = g->edx;
    wr32(sp0 - 0x24u, t71);
    wr32(sp0 - 0x20u, t73);
    if ((int32_t)(t66 + 0x30u) <= 57)
    {
        ecx = t72;
        edx = t73;
        ebx = t66 + 0x30u;
        loc_10 = rd32(sp0 - 0x10u);
        loc_24 = t71;
        loc_20 = t73;
    }
    else
    {
        ecx = t72;
        edx = t73;
        ebx = t66 + 0x30u;
        loc_10 = rd32(sp0 - 0x10u);
        loc_24 = t71;
        loc_20 = t73;
        ebx = ebx + rd32(sp0 - 0x38u);
    }
    wr32(sp0 - 0x10u, loc_10 - 1u);
    wr8(loc_10, (uint8_t)ebx);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_10 = loc_10 - 1u;
    goto L_10319276;
L_10319119: ;
    eax = (uint32_t)((int32_t)(eax - ecx) >> 1u);
    loc_30 = 1u;
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_103192ef;
L_10319140: ;
    eax = eax - ecx;
    loc_30 = rd32(sp0 - 0x30u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    goto L_103192ef;
L_10319147: ;
    wr32(sp0 - 0xcu, 8u);
    loc_c = 8u;
L_1031914e: ;
    wr32(sp0 - 0x38u, 7u);
    loc_38 = 7u;
    goto L_10319155;
L_10319177: ;
    wr32(sp0 - 0x14u, 8u);
    if ((loc_8 & 0x80u) == 0u)
    {
        loc_14 = 8u;
        loc_38 = rd32(sp0 - 0x38u);
    }
    else
    {
        wr32(sp0 - 8u, loc_8 | 0x200u);
        loc_14 = 8u;
        loc_38 = rd32(sp0 - 0x38u);
        loc_8 = loc_8 | 0x200u;
    }
    goto L_103191be;
L_10319189: ;
    wr32(sp0 - 0x260u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = 0x200u;
    g->esp = sp0 - 0x25cu;
    t31 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
    t32 = g->edx;
    if ((rd8(sp0 - 8u) & 0x20u) == 0u)
    {
        eax = t31;
        edx = t32;
        t34 = rd32(sp0 - 0x18u);
        wr32(eax, t34);
        ecx = t34;
    }
    else
    {
        eax = t31;
        edx = t32;
        t33 = rd16(sp0 - 0x18u);
        wr16(eax, (uint16_t)t33);
        ecx = (sp0 + 0xcu & 0xffff0000u) | t33;
    }
    wr32(sp0 - 0x3cu, 1u);
    loc_3c = 1u;
    loc_4 = rd32(sp0 - 4u);
    loc_254 = rd32(sp0 - 0x254u);
    loc_258 = rd32(sp0 - 0x258u);
    loc_25c = rd32(sp0 - 0x25cu);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_103193f0;
L_103191b3: ;
    wr32(sp0 - 8u, loc_8 | 0x40u);
    loc_8 = loc_8 | 0x40u;
L_103191b7: ;
    wr32(sp0 - 0x14u, 0xau);
    loc_14 = 0xau;
    loc_38 = rd32(sp0 - 0x38u);
    goto L_103191be;
L_103191f7: ;
    wr32(sp0 - 0x260u, sp0 + 0xcu);
    if ((loc_8 & 0x40u) == 0u) goto L_10319209;
    g->eax = sp0 + 0xcu;
    g->esp = sp0 - 0x25cu;
    t39 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
    eax = t39;
    goto L_103191e9;
L_10319209: ;
    g->eax = sp0 + 0xcu;
    g->esp = sp0 - 0x25cu;
    t40 = cow_cdecl(g, COW_IMG(0x103194dau), 1, sp0 + 0xcu);
    eax = t40;
    edx = 0u;
    goto L_10319211;
L_10319234: ;
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x20u, edx);
    loc_24 = eax;
    loc_20 = edx;
    goto L_1031923a;
L_103192c7: ;
    wr32(sp0 - 0x10u, loc_10 + 1u);
    t43 = sp0 - 0x51u - loc_10;
    wr32(sp0 - 0x14u, t43);
    if ((loc_8 >> 8u & 2u) == 0u)
    {
        eax = t43;
        loc_4 = rd32(sp0 - 4u);
        loc_254 = rd32(sp0 - 0x254u);
        loc_258 = rd32(sp0 - 0x258u);
        loc_25c = rd32(sp0 - 0x25cu);
        loc_14 = t43;
        loc_18 = rd32(sp0 - 0x18u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_10 = loc_10 + 1u;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_103192f2;
    }
    eax = t43;
    loc_10 = loc_10 + 1u;
    loc_14 = t43;
    if (rd8(loc_10) != 0x30u) goto L_103192e5;
    ecx = loc_10;
    if (eax != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_254 = rd32(sp0 - 0x254u);
        loc_258 = rd32(sp0 - 0x258u);
        loc_25c = rd32(sp0 - 0x25cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_103192f2;
    }
L_103192e5: ;
    wr32(sp0 - 0x10u, loc_10 - 1u);
    wr8(loc_10 - 1u, 0x30u);
    eax = eax + 1u;
    ecx = loc_10 - 1u;
    loc_30 = rd32(sp0 - 0x30u);
    loc_10 = loc_10 - 1u;
    goto L_103192ef;
L_1031930f: ;
    if (!(ebx & 1u)) goto L_1031931a;
    wr8(sp0 - 0x1au, 0x2bu);
    goto L_10319323;
L_1031931a: ;
    if ((ebx & 2u) == 0u) goto L_1031932a;
    wr8(sp0 - 0x1au, 0x20u);
    goto L_10319323;
L_103193c3: ;
    wr32(sp0 - 0x260u, sp0 - 0x18u);
    wr32(sp0 - 0x264u, arg1);
    t55 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x268u, t55);
    t56 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x26cu, t56);
    g->eax = sp0 - 0x18u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x25cu;
    t57 = cow_cdecl(g, COW_IMG(0x103194a2u), 4, t56, t55, arg1, sp0 - 0x18u);
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
    goto L_103193d8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10318c9e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10318c9e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
