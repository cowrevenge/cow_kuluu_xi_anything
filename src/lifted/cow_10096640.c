/* f_0x10096640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10096640(Guest* g)
{
    double d23;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 & 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_stdcall(g, COW_IMG(0x10094190u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 != 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t7 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
            t8 = g->ecx;
            t9 = g->edx;
            if (rd8(COW_IMG(0x10487eeeu)) != 0u)
            {
                eax = (t7 & 0xffffff00u) | rd8(COW_IMG(0x10487eeeu));
                ecx = t8;
                edx = t9;
                edi = t7;
            }
            else
            {
                ecx = t8;
                edx = t9;
                edi = t7;
                if (!(rd32(edi + 0x120u) >> 9u & 1u))
                {
                    eax = rd32(edi + 0x120u) >> 9u;
                }
                else
                {
                    eax = rd32(edi + 0x120u) >> 9u;
                    if (rd8(COW_IMG(0x10482f44u)) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f44u));
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f44u));
                        wr32(COW_IMG(0x1035af40u), 0xc0400000u);
                        wr32(COW_IMG(0x1035af44u), 0xbfc00000u);
                        wr32(COW_IMG(0x1035af48u), 0u);
                    }
                    g->edx = rd32(COW_IMG(0x104568fcu));
                    t10 = rd32(COW_IMG(0x104568fcu));
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, COW_IMG(0x1001e780u), rd32(t10 + 0x50u), 1, edi + 4u);
                    t11 = g->edx;
                    t12 = rd32(edi + 0xa0u);
                    g->eax = t12;
                    g->edx = t11;
                    t13 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u);
                    t14 = cow_thiscall(g, COW_IMG(0x10021680u), t13, 2, COW_IMG(0x1035af40u), t12);
                    t15 = g->ecx;
                    t16 = g->edx;
                    wr32(COW_IMG(0x1035af48u), 0u);
                    wr32(COW_IMG(0x1035af44u), 0u);
                    wr32(COW_IMG(0x1035af40u), 0u);
                    wr8(COW_IMG(0x10487eeeu), 1u);
                    eax = t14;
                    ecx = t15;
                    edx = t16;
                }
            }
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t17 = cow_stdcall(g, COW_IMG(0x10093db0u), 0);
            t18 = g->ecx;
            t19 = g->edx;
            if ((uint8_t)t17 != 0u)
            {
                eax = t17;
                ecx = t18;
                edx = t19;
                if (rd8(COW_IMG(0x10482f43u)) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f43u));
                    goto L_10096750;
                }
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f43u));
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t20 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t21 = g->ecx;
                t22 = g->edx;
                d23 = cow_take_float(g);
                fpush(g, d23);
                t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
                t25 = rd32(COW_IMG(0x1047fb3cu)) - t24;
                t26 = rd32(COW_IMG(0x1047fb3cu));
                wr32(COW_IMG(0x1047fb3cu), t25);
                if ((int32_t)(t26 - t24) >= 0)
                {
                    ecx = t25;
                }
                else
                {
                    ecx = t25;
                    wr8(COW_IMG(0x10482f43u), 1u);
                }
                if ((int32_t)rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40de8u) > (int32_t)rd32(COW_IMG(0x10485630u))) goto L_10096c86;
                eax = rd32(COW_IMG(0x10485630u));
                edx = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40de8u);
                wr8(COW_IMG(0x10482f43u), 1u);
L_10096750: ;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t27 = cow_call_regs(g, COW_IMG(0x1008abe0u), eax, g->ecx, g->edx, 1, 0);
                t28 = g->edx;
                if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
                {
                    eax = t27;
                    ecx = rd32(COW_IMG(0x10456a28u));
                    edx = t28;
                    if (rd8(COW_IMG(0x10482f44u)) == 0u) goto L_1009677c;
                    if (rd32(rd32(COW_IMG(0x106631d4u)) + 0x18u) != 0u) goto L_10096c86;
                    edx = rd32(COW_IMG(0x106631d4u));
L_1009677c: ;
                    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d90u) == 0u)
                    {
                        eax = rd32(COW_IMG(0x104dfd98u));
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x104dfd98u));
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        cow_call_regs(g, COW_IMG(0x10123e60u), eax, g->ecx, g->edx, 1, 1, 1u);
                        t29 = g->ecx;
                        t30 = g->edx;
                        t31 = rd32(COW_IMG(0x104dfd98u));
                        wr8(COW_IMG(0x10482f18u), 1u);
                        wr8(COW_IMG(0x10487e48u), 1u);
                        t32 = rd16(t31 + 0x40d94u);
                        wr16(COW_IMG(0x104804c4u), 0u);
                        wr16(COW_IMG(0x1047fb40u), (uint16_t)t32);
                        t33 = (t30 & 0xffff0000u) | rd16(t31 + 0x3c35au);
                        t34 = ((t29 | t32) & 0xffff0000u) | rd16(t31 + 0x40d8eu);
                        t35 = (t33 & 0xffff0000u) | rd16(t31 + 0x40d92u);
                        t36 = (t31 & 0xffff0000u) | rd16(t31 + 0x40d90u);
                        g->edx = t35;
                        g->esp = sp0 - 0x18u;
                        cow_cdecl(g, COW_IMG(0x100aed00u), 4, t36, t35, t34, t33);
                        t37 = g->edx;
                        t38 = rd32(edi + 0x78u);
                        t39 = rd32(edi + 0x74u);
                        t40 = rd16(COW_IMG(0x10485f7au));
                        wr32(COW_IMG(0x10480aa4u), t38);
                        t41 = rd32(COW_IMG(0x104dfd98u));
                        wr16(COW_IMG(0x10482f1au), (uint16_t)t40);
                        t42 = rd16(t41 + 0x40d90u);
                        wr16(COW_IMG(0x10485f7cu), (uint16_t)t42);
                        t43 = rd16(t41 + 0x40d92u);
                        wr16(COW_IMG(0x1047fb3au), (uint16_t)t43);
                        wr16(t41 + 0x40d90u, 0u);
                        eax = t41;
                        ecx = (t39 & 0xffff0000u) | t42;
                        edx = ((t37 | t40) & 0xffff0000u) | t43;
                    }
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t44 = cow_call_regs(g, COW_IMG(0x100882d0u), eax, g->ecx, g->edx, 1, 0);
                    t45 = g->ecx;
                    t46 = g->edx;
                    if (rd8(COW_IMG(0x10487e48u)) == 0u)
                    {
                        eax = rd32(COW_IMG(0x1057876cu));
                        ecx = (t45 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x74u);
                        edx = t46;
                        ecx = (ecx & 0xffffff00u) | (ecx & 0xfdu);
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x1057876cu));
                        ecx = (t45 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x74u);
                        edx = t46;
                        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 2u);
                    }
                    wr8(eax + 0x74u, (uint8_t)ecx);
                    if (rd8(COW_IMG(0x10487e48u)) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
                        if (rd8(COW_IMG(0x104807f5u)) != 1u)
                        {
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t47 = cow_call_regs(g, COW_IMG(0x100aea40u), eax, g->ecx, g->edx, 1, 0);
                            t48 = g->edx;
                            wr8(COW_IMG(0x104807f5u), (uint8_t)t47);
                            if ((uint8_t)t47 != 1u)
                            {
                                eax = t47;
                                edx = t48;
                            }
                            else
                            {
                                eax = t47;
                                edx = t48;
                                esi = COW_IMG(0x10480af0u);
L_10096879: ;
                                if (rd32(esi) != 0u)
                                {
                                    ecx = rd32(esi);
                                    if (!(rd32(ecx + 0x120u) >> 7u & 1u))
                                    {
                                        eax = rd32(ecx + 0x120u) >> 7u;
                                    }
                                    else
                                    {
                                        eax = rd32(ecx + 0x120u) >> 7u;
                                        g->eax = eax;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x14u;
                                        t49 = cow_thiscall(g, COW_IMG(0x100973b0u), ecx, 0);
                                        t50 = g->edx;
                                        eax = t49;
                                        edx = t50;
                                    }
                                }
                                if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
                                {
                                    esi = esi + 4u;
                                    goto L_10096879;
                                }
                            }
                        }
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
                        wr8(COW_IMG(0x104807f5u), 0u);
                    }
                    wr8(COW_IMG(0x104898f9u), 0u);
                    esi = 0u;
L_100968a5: ;
                    if (rd32(COW_IMG(0x10480af0u) + esi * 4u) == 0u)
                    {
                        ecx = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                        if (!(rd32(ecx + 0x124u) >> 0xcu & 1u))
                        {
                            edx = rd32(ecx + 0x124u) >> 0xcu;
                        }
                        else
                        {
                            t51 = rd32(ecx + 0x120u);
                            if (t51 >> 7u & 1u)
                            {
                                eax = t51;
                                edx = t51 >> 7u;
                            }
                            else
                            {
                                eax = t51;
                                if ((uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) == esi)
                                {
                                    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                                }
                                else
                                {
                                    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                                    if (eax >> 8u & 1u)
                                    {
                                        eax = eax >> 8u;
                                    }
                                    else
                                    {
                                        if (rd32(ecx + 0x130u) >> 3u & 1u)
                                        {
                                            eax = rd32(ecx + 0x130u) >> 3u;
                                        }
                                        else
                                        {
                                            eax = rd32(ecx + 0x130u) >> 3u;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x14u;
                                            t52 = cow_call_regs(g, COW_IMG(0x1008ee30u), eax, ecx, g->edx, 1, 0);
                                            t53 = g->edx;
                                            t54 = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                                            t55 = cow_fastcall(g, COW_IMG(0x10092900u), t54, t53, 0);
                                            t56 = g->ecx;
                                            t57 = g->edx;
                                            eax = t55;
                                            ecx = t56;
                                            edx = t57;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((int32_t)(esi + 1u) < 2304)
                    {
                        esi = esi + 1u;
                        goto L_100968a5;
                    }
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t58 = cow_stdcall(g, COW_IMG(0x10095660u), 0);
                    t59 = g->edx;
                    wr32(COW_IMG(0x10482f88u), 0u);
                    wr32(COW_IMG(0x10482f8cu), 0u);
                    wr32(COW_IMG(0x10482f90u), 0u);
                    wr32(COW_IMG(0x10482f94u), 0x3f800000u);
                    wr32(COW_IMG(0x10480990u), 0u);
                    wr32(COW_IMG(0x10480994u), 0u);
                    wr32(COW_IMG(0x10480998u), 0u);
                    wr32(COW_IMG(0x1048099cu), 0x3f800000u);
                    wr8(COW_IMG(0x10480a91u), 0u);
                    if (edi == 0u)
                    {
                        eax = t58;
                        edx = t59;
                    }
                    else
                    {
                        eax = t58;
                        edx = t59;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t60 = cow_thiscall(g, COW_IMG(0x1008b100u), edi, 0);
                        t61 = g->edx;
                        t62 = cow_fastcall(g, COW_IMG(0x1008b170u), edi, t61, 0);
                        t63 = g->edx;
                        eax = t62;
                        edx = t63;
                    }
                    if (rd8(COW_IMG(0x104808f0u)) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808f0u));
                    }
                    else
                    {
                        ebx = in_ebx & 0xffffff00u;
                        esi = 0u;
L_10096987: ;
                        if (rd32(COW_IMG(0x10480af0u) + esi * 4u) == 0u)
                        {
                            eax = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                            if (!(rd32(eax + 0x124u) >> 0xcu & 1u)) goto L_100969c3;
                            t64 = rd32(eax + 0x120u);
                            if (t64 >> 7u & 1u)
                            {
                                edx = t64 >> 7u;
                                goto L_100969c3;
                            }
                            ecx = t64;
                            if ((uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) == esi)
                            {
                                edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                                goto L_100969c3;
                            }
                            edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                            if (!(ecx >> 8u & 1u)) goto L_10096a0b;
L_100969c3: ;
                            if ((uint32_t)(int8_t)rd8(COW_IMG(0x104808f0u)) == 1u) goto L_100969f4;
                            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x104808f0u)) - 1u;
                            if (ecx != 1u) goto L_10096a0b;
                            if (rd32(eax + 0xd4u) == 0u) goto L_10096a0b;
                            ecx = rd32(eax + 0xd4u);
                            if ((int8_t)rd8(eax + 0x120u) >= 0) goto L_10096a0b;
                            g->eax = eax;
                            g->esp = sp0 - 0x18u;
                            t65 = cow_fastcall(g, COW_IMG(0x100b37a0u), rd32(eax + 0xd4u), edx, 0);
                            t66 = g->edx;
                            eax = t65;
                            edx = t66;
                            zf = t65 + 1u == 0u;
L_10096a07: ;
                            if (!zf)
                            {
                                ebx = (ebx & 0xffffff00u) | 1u;
                            }
                        }
L_10096a0b: ;
                        if ((int32_t)(esi + 1u) < 2304)
                        {
                            esi = esi + 1u;
                            goto L_10096987;
                        }
                        if (rd8(COW_IMG(0x104808f0u)) == 1u)
                        {
                            wr8(COW_IMG(0x104808f0u), 2u);
                        }
                        if ((uint8_t)ebx == 0u)
                        {
                            wr8(COW_IMG(0x104808f0u), 0u);
                        }
                    }
                    wr8(COW_IMG(0x10480aecu), 0u);
                    esi = 0u;
L_10096a3f: ;
                    if (rd32(COW_IMG(0x10480af0u) + esi * 4u) == 0u)
                    {
                        ecx = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                        goto L_10096a8b;
                    }
                    ecx = rd32(COW_IMG(0x10480af0u) + esi * 4u);
                    if (!(rd32(ecx + 0x124u) >> 0xcu & 1u))
                    {
                        eax = rd32(ecx + 0x124u) >> 0xcu;
                        goto L_10096a79;
                    }
                    t69 = rd32(ecx + 0x120u);
                    if (t69 >> 7u & 1u)
                    {
                        eax = t69;
                        edx = t69 >> 7u;
                        goto L_10096a79;
                    }
                    eax = t69;
                    if ((uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) == esi)
                    {
                        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                        goto L_10096a79;
                    }
                    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                    if (!(eax >> 8u & 1u))
                    {
                        eax = eax >> 8u;
                        goto L_10096a8b;
                    }
                    eax = eax >> 8u;
L_10096a79: ;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t70 = cow_call_regs(g, COW_IMG(0x1008e9a0u), eax, ecx, g->edx, 1, 0);
                    t71 = g->ecx;
                    t72 = g->edx;
                    if (rd8(COW_IMG(0x104898f9u)) != 0u) goto L_10096c86;
                    eax = (t70 & 0xffffff00u) | rd8(COW_IMG(0x104898f9u));
                    ecx = t71;
                    edx = t72;
L_10096a8b: ;
                    if ((int32_t)(esi + 1u) < 2304)
                    {
                        esi = esi + 1u;
                        goto L_10096a3f;
                    }
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t73 = cow_stdcall(g, COW_IMG(0x10095900u), 0);
                    t74 = g->ecx;
                    t75 = g->edx;
                    if (rd32(COW_IMG(0x10482f20u)) == 0u)
                    {
                        eax = t73;
                        ecx = t74;
                        edx = t75;
                    }
                    else
                    {
                        eax = t73;
                        ecx = t74;
                        edx = t75;
                        if (rd8(COW_IMG(0x10487e48u)) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
                            goto L_10096adc;
                        }
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
                        if (rd8(COW_IMG(0x104807f5u)) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
                            goto L_10096ae2;
                        }
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
                        if (rd16(COW_IMG(0x10485578u)) != rd16(COW_IMG(0x1047fb3au)))
                        {
                            eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485578u));
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485578u));
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t76 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
                            t77 = g->ecx;
                            t78 = g->edx;
                            wr8(COW_IMG(0x104804c2u), 1u);
                            wr8(COW_IMG(0x104808f0u), 1u);
                            wr8(COW_IMG(0x10487034u), 1u);
                            eax = t76;
                            ecx = t77;
                            edx = t78;
                        }
L_10096adc: ;
                        wr32(COW_IMG(0x10482f20u), 0u);
                    }
L_10096ae2: ;
                    if (rd8(COW_IMG(0x104804c2u)) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104804c2u));
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104804c2u));
                        if (rd8(COW_IMG(0x104808f0u)) != 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808f0u));
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808f0u));
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t79 = cow_call_regs(g, COW_IMG(0x100ae960u), eax, g->ecx, g->edx, 1, 0);
                            t80 = g->ecx;
                            t81 = g->edx;
                            eax = t79;
                            ecx = t80;
                            edx = t81;
                        }
                    }
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t82 = cow_stdcall(g, COW_IMG(0x10077fb0u), 0);
                    t83 = g->ecx;
                    t84 = g->edx;
                    if (edi == 0u)
                    {
                        eax = t82;
                        ecx = t83;
                        edx = t84;
                    }
                    else
                    {
                        eax = t82;
                        edx = t84;
                        g->ebp = 0u;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t85 = cow_thiscall(g, COW_IMG(0x100983f0u), edi, 0);
                        t86 = g->ecx;
                        t87 = g->edx;
                        if (rd8(COW_IMG(0x1048098eu)) != 0u)
                        {
                            eax = (t85 & 0xffffff00u) | rd8(COW_IMG(0x1048098eu));
                            ecx = t86;
                            edx = t87;
                        }
                        else
                        {
                            eax = (t85 & 0xffffff00u) | rd8(COW_IMG(0x1048098eu));
                            ecx = t86;
                            edx = t87;
                            if (rd8(COW_IMG(0x10482f1eu)) != 0u)
                            {
                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f1eu));
                            }
                            else
                            {
                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f1eu));
                                if (rd8(COW_IMG(0x104807f3u)) != 0u)
                                {
                                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f3u));
                                }
                                else
                                {
                                    if (rd32(edi + 0x170u) == 0x1au)
                                    {
                                        eax = rd32(edi + 0x170u);
                                    }
                                    else
                                    {
                                        eax = rd32(edi + 0x170u);
                                        if (eax != 0x1bu)
                                        {
                                            if (eax != 0x1cu)
                                            {
                                                if (eax != 0x1du)
                                                {
                                                    if (eax != 0x1eu)
                                                    {
                                                        if (eax != 0x1fu)
                                                        {
                                                            if (eax != 4u)
                                                            {
                                                                if (rd8(edi + 0x1feu) != 0u)
                                                                {
                                                                    eax = (eax & 0xffffff00u) | rd8(edi + 0x1feu);
                                                                }
                                                                else
                                                                {
                                                                    eax = (eax & 0xffffff00u) | rd8(edi + 0x1feu);
                                                                    if (rd32(edi + 0x16cu) != 4u)
                                                                    {
                                                                        if (rd8(COW_IMG(0x10487e48u)) != 0u)
                                                                        {
                                                                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
                                                                        }
                                                                        else
                                                                        {
                                                                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
                                                                            if (rd8(COW_IMG(0x10486000u)) == 0u)
                                                                            {
                                                                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10486000u));
                                                                                goto L_10096b9c;
                                                                            }
                                                                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10486000u));
                                                                            t88 = rd32(edi + 0x78u);
                                                                            t89 = rd32(edi + 0x74u);
                                                                            g->eax = eax;
                                                                            g->ecx = t88;
                                                                            g->edx = t89;
                                                                            g->esp = sp0 - 0x14u;
                                                                            t90 = cow_cdecl(g, COW_IMG(0x100780a0u), 5, t89, t88, 0xdu, 1u, 0u);
                                                                            t91 = g->ecx;
                                                                            t92 = g->edx;
                                                                            if (t90 != 0u)
                                                                            {
                                                                                eax = t90;
                                                                                ecx = t91;
                                                                                edx = t92;
                                                                                goto L_10096baa;
                                                                            }
                                                                            eax = t90;
                                                                            ecx = t91;
                                                                            edx = t92;
                                                                            wr8(COW_IMG(0x10486000u), (uint8_t)eax);
L_10096b9c: ;
                                                                            g->eax = eax;
                                                                            g->ecx = ecx;
                                                                            g->edx = edx;
                                                                            g->esp = sp0 - 8u;
                                                                            t93 = cow_cdecl(g, COW_IMG(0x10096c90u), 5, edi, COW_IMG(0x10485ff8u), in_edi, in_esi, in_ebp);
                                                                            t94 = g->ecx;
                                                                            t95 = g->edx;
                                                                            eax = t93;
                                                                            ecx = t94;
                                                                            edx = t95;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
L_10096baa: ;
                    g->esp = sp0 - 0x14u;
                    t96 = cow_call_regs(g, COW_IMG(0x10093e30u), eax, ecx, edx, 1, 0);
                    t97 = g->ecx;
                    t98 = g->edx;
                    g->edx = t98;
                    t99 = cow_thiscall(g, COW_IMG(0x10093e50u), t97, 0);
                    t100 = g->ecx;
                    t101 = g->edx;
                    g->ecx = t100;
                    g->edx = t101;
                    t102 = cow_call_regs(g, COW_IMG(0x10097af0u), t99, g->ecx, g->edx, 1, 0);
                    t103 = g->ecx;
                    t104 = g->edx;
                    g->edx = t104;
                    t105 = cow_thiscall(g, COW_IMG(0x100a3d00u), t103, 0);
                    t106 = g->ecx;
                    t107 = g->edx;
                    g->ecx = t106;
                    g->edx = t107;
                    t108 = cow_stdcall(g, COW_IMG(0x1009f2f0u), 0);
                    t109 = g->ecx;
                    t110 = g->edx;
                    g->edx = t110;
                    t111 = cow_thiscall(g, COW_IMG(0x100997b0u), t109, 0);
                    t112 = g->ecx;
                    t113 = g->edx;
                    g->ecx = t112;
                    g->edx = t113;
                    t114 = cow_stdcall(g, COW_IMG(0x10087220u), 0);
                    t115 = g->ecx;
                    t116 = g->edx;
                    g->ecx = t115;
                    g->edx = t116;
                    t117 = cow_stdcall(g, COW_IMG(0x100872c0u), 0);
                    t118 = g->ecx;
                    t119 = g->edx;
                    g->ecx = t118;
                    g->edx = t119;
                    t120 = cow_call_regs(g, COW_IMG(0x100873b0u), t117, g->ecx, g->edx, 1, 0);
                    t121 = g->ecx;
                    t122 = g->edx;
                    if (rd8(COW_IMG(0x10482f18u)) == 0u)
                    {
                        eax = (t120 & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
                        ecx = t121;
                        edx = t122;
                    }
                    else
                    {
                        eax = (t120 & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
                        ecx = t121;
                        edx = t122;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t123 = cow_stdcall(g, COW_IMG(0x100fc300u), 0);
                        t124 = g->ecx;
                        t125 = g->edx;
                        if ((uint16_t)t123 == 0u)
                        {
                            eax = t123;
                            ecx = t124;
                            edx = t125;
                        }
                        else
                        {
                            eax = t123;
                            ecx = t124;
                            edx = t125;
                            if (rd8(COW_IMG(0x10482f18u)) == 0u)
                            {
                                ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
                            }
                            else
                            {
                                ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10482f18u));
                                if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) == 0u)
                                {
                                    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
                                    goto L_10096c1e;
                                }
                                eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
                                if (!(rd32(eax + 0x12cu) >> 0x1eu & 1u))
                                {
                                    ecx = rd32(eax + 0x12cu) >> 0x1eu;
                                    goto L_10096c2e;
                                }
                                ecx = rd32(eax + 0x12cu) >> 0x1eu;
                                if (!(rd32(eax + 0x124u) >> 0xcu & 1u))
                                {
                                    edx = rd32(eax + 0x124u) >> 0xcu;
                                    goto L_10096c2e;
                                }
                                edx = rd32(eax + 0x124u) >> 0xcu;
L_10096c1e: ;
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x14u;
                                t126 = cow_thiscall_cdecl(g, COW_IMG(0x100fc320u), ecx, 1, 0u);
                                t127 = g->ecx;
                                t128 = g->edx;
                                wr8(COW_IMG(0x10482f18u), 0u);
                                eax = t126;
                                ecx = t127;
                                edx = t128;
                            }
                        }
                    }
L_10096c2e: ;
                    if (rd8(COW_IMG(0x10487e48u)) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
                        if (rd8(COW_IMG(0x10485a70u)) != 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485a70u));
                            if (rd8(COW_IMG(0x10488208u)) == 0u)
                            {
                                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10488208u));
                                if (rd8(COW_IMG(0x104807f5u)) != 0u)
                                {
                                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
                                    g->edx = edx;
                                    g->esp = sp0 - 8u;
                                    t129 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0xfu, 1u, 0xffffffffu, in_edi, in_esi, in_ebp);
                                    t130 = g->ecx;
                                    t131 = g->edx;
                                    if ((uint8_t)t129 != 0u)
                                    {
                                        eax = t129;
                                        ecx = t130;
                                        edx = t131;
                                        g->esp = sp0 - 0x14u;
                                        cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
                                        wr8(COW_IMG(0x104804c2u), 1u);
                                        wr8(COW_IMG(0x104808f0u), 1u);
                                        wr8(COW_IMG(0x10487034u), 1u);
                                        wr32(COW_IMG(0x10482f20u), 0u);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_10096c86: ;
    g->ebp = in_ebp;
    return;
L_100969f4: ;
    if (rd32(eax + 0xd4u) == 0u)
    {
        eax = rd32(eax + 0xd4u);
        goto L_10096a0b;
    }
    eax = rd32(eax + 0xd4u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t67 = cow_call_regs(g, COW_IMG(0x100bd0e0u), eax, eax, g->edx, 1, 0);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    zf = t67 == 0u;
    goto L_10096a07;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10096640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10096640(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
