/* f_0x10147ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10147ac0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d63;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t loc_f0;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 268u);

    wr32(sp0 - 0xe0u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xe0u;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        edi = in_edi;
        goto L_10147ea2;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (rd8(self + 0x1cu) != 0u)
    {
        edi = in_edi;
        goto L_10147bba;
    }
    if (rd32(COW_IMG(0x10578768u)) == 0u)
    {
        edi = in_edi;
        goto L_10147bba;
    }
    eax = rd32(COW_IMG(0x10578768u));
    wr32(sp0 - 0xe4u, in_edi);
    wr32(sp0 - 0xe8u, 0x4eu);
    wr32(sp0 - 0xecu, 0xeu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x4eu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xf0u, 0x4eu);
    edi = t4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0xf4u, 0xeu);
    t7 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t7;
    g->esp = sp0 - 0xecu;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x4eu);
    t9 = g->ecx;
    eax = t8;
    ecx = t9;
    edx = sp0 - 0xc8u;
    edi = t7;
L_10147b16: ;
    t10 = rd8(eax);
    wr8(edx, (uint8_t)t10);
    if ((uint8_t)t10 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t10;
        edx = edx + 1u;
        goto L_10147b16;
    }
    edx = edx + 1u;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10147b41;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_10147b3a;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10147b44;
    }
L_10147b3a: ;
    eax = 1u;
L_10147b46: ;
    t11 = rd32(COW_IMG(0x10147eacu) + eax * 4u);
    switch (t11 - RD)
    {
    case 0x10147b4du: goto L_10147b4d;
    case 0x10147b51u: goto L_10147b51;
    case 0x10147b63u: goto L_10147b63;
    default: rt_fatal(g, COW_IMG(0x10147b46u), "switch");
    }
    return 0;
L_10147b41: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_10147b44: ;
    if (!cf && !zf) goto L_10147b75;
    goto L_10147b46;
L_10147b4d: ;
    eax = 0u;
L_10147b79: ;
    wr32(sp0 - 0xe8u, eax);
    t16 = (uint16_t)rd32(COW_IMG(0x10485678u));
    wr32(sp0 - 0xecu, t16);
    wr32(sp0 - 0xf0u, 0xc8u - edi);
    t17 = edi + sp0 - 0xc8u;
    wr32(sp0 - 0xf4u, t17);
    t18 = rd32(COW_IMG(0x10578768u));
    g->esp = sp0 - 0xe4u;
    t19 = cow_fastcall(g, COW_IMG(0x10157120u), t18, t16, 4, t17, 0xc8u - edi, t16, eax);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        ecx = t20;
        edx = t21;
        edi = rd32(sp0 - 0xe4u);
    }
    else
    {
        eax = t19;
        edi = rd32(sp0 - 0xe4u);
        wr32(sp0 - 0xe4u, 2u);
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        g->edx = sp0 - 0xc8u;
        t22 = rd32(COW_IMG(0x105781f8u));
        g->esp = sp0 - 0xe0u;
        cow_thiscall(g, COW_IMG(0x1013a320u), t22, 2, sp0 - 0xc8u, 2u);
        t23 = g->ecx;
        t24 = g->edx;
        wr8(self + 0x1cu, 1u);
        ecx = t23;
        edx = t24;
    }
L_10147bba: ;
    if ((uint8_t)rd32(COW_IMG(0x10485684u)) < 3u)
    {
        eax = rd32(COW_IMG(0x10485684u));
        wr32(sp0 - 0xe4u, 0u);
        wr32(sp0 - 0xe8u, 0u);
        wr32(sp0 - 0xecu, 0x80808080u);
        t25 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x12u;
        wr32(sp0 - 0xf0u, t25);
        t26 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x37u;
        wr32(sp0 - 0xf4u, t26);
        g->edx = t26;
        t27 = rd32(self + (uint8_t)eax * 4u + 0x40u);
        g->esp = sp0 - 0xe0u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t27, 5, t26, t25, 0x80808080u, 0u, 0u);
        t28 = g->ecx;
        t29 = g->edx;
        ecx = t28;
        edx = t29;
    }
    wr32(sp0 - 0xe4u, 0x80808080u);
    wr32(sp0 - 0xe8u, rd16(COW_IMG(0x1048567eu)));
    wr32(sp0 - 0xecu, 4u);
    g->eax = rd16(COW_IMG(0x1048567eu));
    g->ecx = ecx;
    g->edx = edx;
    t30 = rd16(COW_IMG(0x1048567eu));
    g->esp = sp0 - 0xe4u;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 4u, t30);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0xe8u, t31);
    t34 = (t32 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x34u);
    wr32(sp0 - 0xecu, t34);
    t35 = (t33 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x5eu);
    wr32(sp0 - 0xf0u, t35);
    g->ecx = t34;
    g->edx = t35;
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t35, t34, t31, 0x80808080u, in_esi, rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
    t36 = g->ecx;
    t37 = g->edx;
    g->ecx = t36;
    g->edx = t37;
    g->esp = sp0 - 0xe0u;
    t38 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        edx = t40;
        goto L_10147c67;
    }
    eax = t38;
    ecx = t39;
    edx = t40;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t41 = cow_call_regs(g, COW_IMG(0x10087b20u), eax, g->ecx, g->edx, 1, 0);
    t42 = g->ecx;
    t43 = g->edx;
    if ((uint8_t)t41 == 0u)
    {
        ecx = t42;
        goto L_10147cb8;
    }
    ecx = t42;
    edx = t43;
    t44 = rd32(COW_IMG(0x10482f98u)) >> 0x12u & 0xfu;
    wr32(sp0 - 0xe4u, t44);
    wr32(sp0 - 0xe8u, 1u);
    g->eax = t44;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t45 = cow_cdecl(g, COW_IMG(0x10107320u), 2, 1u, t44);
    t46 = g->ecx;
    t47 = g->edx;
    if (t45 == 0u)
    {
        ecx = t46;
        goto L_10147cb8;
    }
    eax = t45;
    ecx = t46;
    edx = t47;
    wr32(sp0 - 0xe4u, 0x80808080u);
    wr32(sp0 - 0xe8u, eax);
    t48 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x24u);
    wr32(sp0 - 0xecu, t48);
    t49 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x32u);
    wr32(sp0 - 0xf0u, t49);
    ecx = t48;
    edx = t49;
    loc_e8 = eax;
    loc_ec = t48;
    loc_f0 = t49;
L_10147cb0: ;
    g->ecx = ecx;
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, loc_f0, loc_ec, loc_e8, 0x80808080u, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
    t56 = g->ecx;
    ecx = t56;
L_10147cb8: ;
    wr32(sp0 - 0xe4u, rd16(COW_IMG(0x1048567au)));
    wr32(sp0 - 0xe8u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->edx = rd16(COW_IMG(0x1048567au));
    t57 = rd16(COW_IMG(0x1048567au));
    g->esp = sp0 - 0xd8u;
    t58 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x10352ff0u), t57, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t59 = g->edx;
    wr32(sp0 - 0xf0u, 0x3f800000u);
    wr32(sp0 - 0xf4u, 0x3f800000u);
    wr32(sp0 - 0xf8u, 1u);
    wr32(sp0 - 0xfcu, 0x80808080u);
    wr32(sp0 - 0x100u, sp0 - 0xd8u);
    t60 = (t59 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x44u);
    wr32(sp0 - 0x104u, t60);
    t61 = (t58 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x40u);
    wr32(sp0 - 0x108u, t61);
    g->esp = sp0 - 0xecu;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0xd8u, 7, t61, t60, sp0 - 0xd8u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t62 = (uint16_t)rd32(COW_IMG(0x1048567cu));
    wr32(sp0 - 0xdcu, t62);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe8u, t62);
    d63 = (double)(float)fr(g, (double)(int32_t)t62 * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(sp0 - 0xe8u, (float)d63);
    t64 = rd32(self + 0x50u);
    wr32(sp0 - 0xecu, t64);
    t65 = rd32(self + 0x4cu);
    wr32(sp0 - 0xf0u, t65);
    t66 = (t62 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x54u);
    wr32(sp0 - 0xf4u, t66);
    t67 = (t64 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x5cu);
    wr32(sp0 - 0xf8u, t67);
    g->edi = edi;
    g->eax = t65;
    g->ecx = t66;
    g->edx = t67;
    g->esp = sp0 - 0xbcu;
    t68 = cow_cdecl(g, COW_IMG(0x101caec0u), 15, t67, t66, t65, t64, cow_f2bits(d63), 0u, rd32(sp0 - 0xe0u), t62, rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u));
    t69 = g->ecx;
    t70 = g->edx;
    g->ecx = t69;
    g->edx = t70;
    g->esp = sp0 - 0xe0u;
    t71 = cow_call_regs(g, COW_IMG(0x10087b20u), t68, g->ecx, g->edx, 1, 0);
    t72 = g->ecx;
    t73 = g->edx;
    if ((uint8_t)t71 == 0u)
    {
        eax = t71;
        edx = t73;
        goto L_10147ea2;
    }
    ecx = t72;
    edx = t73;
    if ((int32_t)(rd32(COW_IMG(0x10482f9cu)) >> 2u & 3u) >= 0)
    {
        eax = rd32(COW_IMG(0x10482f9cu)) >> 2u & 3u;
        if ((int32_t)eax <= 2)
        {
            t74 = rd32(COW_IMG(0x103716acu) + eax * 4u);
            wr32(sp0 - 0xe4u, t74);
            wr32(sp0 - 0xe8u, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0xecu, sp0 - 0xd8u);
            g->ecx = sp0 - 0xd8u;
            g->esp = sp0 - 0xd8u;
            t75 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x1034f7e0u), t74, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
            t76 = g->ecx;
            wr32(sp0 - 0xf0u, 0x80808080u);
            wr32(sp0 - 0xf4u, sp0 - 0xd8u);
            t77 = (t75 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x91u);
            wr32(sp0 - 0xf8u, t77);
            t78 = (t76 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x8cu);
            wr32(sp0 - 0xfcu, t78);
            g->ecx = t78;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t78, t77, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x1034f7e0u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
            t79 = g->ecx;
            ecx = t79;
        }
    }
    t80 = (uint16_t)rd32(COW_IMG(0x10482fa4u));
    wr32(sp0 - 0xe4u, t80);
    wr32(sp0 - 0xe8u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->edx = t80;
    g->esp = sp0 - 0xd8u;
    t81 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x10352ff0u), t80, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t82 = g->edx;
    wr32(sp0 - 0xf0u, 0x80808080u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    t83 = (t82 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0xa1u);
    wr32(sp0 - 0xf8u, t83);
    t84 = (t81 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x5au);
    wr32(sp0 - 0xfcu, t84);
    g->edx = t83;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t84, t83, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x10352ff0u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t85 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = t85;
        goto L_10147ea2;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    t86 = rd8(eax + 0x40decu);
    wr32(sp0 - 0xe4u, t86);
    wr32(sp0 - 0xe8u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->ecx = t86;
    g->edx = sp0 - 0xd8u;
    g->esp = sp0 - 0xd8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x10352ff0u), t86, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0xf0u, 0x80808080u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    t89 = (t87 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x6au);
    wr32(sp0 - 0xf8u, t89);
    t90 = (t88 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x6eu);
    wr32(sp0 - 0xfcu, t90);
    g->ecx = t89;
    g->edx = t90;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t90, t89, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x10352ff0u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t91 = g->ecx;
    t92 = g->edx;
    if (rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40debu) == 0u)
    {
        eax = (rd32(COW_IMG(0x104dfd98u)) & 0xffffff00u) | rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40debu);
        ecx = t91;
        edx = t92;
        goto L_10147e69;
    }
    eax = (rd32(COW_IMG(0x104dfd98u)) & 0xffffff00u) | rd8(rd32(COW_IMG(0x104dfd98u)) + 0x40debu);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0x80808080u);
    t93 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x68u;
    wr32(sp0 - 0xf0u, t93);
    t94 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0xdau;
    wr32(sp0 - 0xf4u, t94);
    g->eax = (uint8_t)eax;
    g->edx = t94;
    g->esp = sp0 - 0xe0u;
    t95 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + (uint8_t)eax * 4u + 0x50u), 5, t94, t93, 0x80808080u, 0u, 0u);
    t96 = g->edx;
    g->esi = rd32(sp0 - 0xe0u);
    g->edi = edi;
    g->edx = t96;
    return t95;
L_10147b51: ;
    t14 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    wr32(sp0 - 0xe8u, t14);
    g->esp = sp0 - 0xe4u;
    t15 = cow_cdecl(g, COW_IMG(0x1008aab0u), 1, t14);
    eax = t15;
    goto L_10147b79;
L_10147b63: ;
    t12 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    wr32(sp0 - 0xe8u, t12);
    g->esp = sp0 - 0xe4u;
    t13 = cow_cdecl(g, COW_IMG(0x1008ab00u), 1, t12);
    eax = t13;
    goto L_10147b79;
L_10147b75: ;
    eax = rd32(sp0 - 0xdcu);
    goto L_10147b79;
L_10147c67: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_10147cb8;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40da8u) * 4u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    t50 = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(eax + 0xefu);
    wr32(sp0 - 0xe4u, t50);
    wr32(sp0 - 0xe8u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t50;
    g->esp = sp0 - 0xe0u;
    t51 = cow_cdecl(g, COW_IMG(0x10107320u), 2, 1u, t50);
    t52 = g->ecx;
    t53 = g->edx;
    if (t51 == 0u)
    {
        ecx = t52;
        goto L_10147cb8;
    }
    eax = t51;
    ecx = t52;
    edx = t53;
    wr32(sp0 - 0xe4u, 0x80808080u);
    wr32(sp0 - 0xe8u, eax);
    t54 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x24u);
    wr32(sp0 - 0xecu, t54);
    t55 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x32u);
    wr32(sp0 - 0xf0u, t55);
    ecx = t55;
    loc_e8 = eax;
    eax = t54;
    loc_ec = t54;
    loc_f0 = t55;
    goto L_10147cb0;
L_10147e69: ;
    wr32(sp0 - 0xe4u, (uint8_t)eax);
    wr32(sp0 - 0xe8u, COW_IMG(0x103718b8u));
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    g->edx = edx;
    g->esp = sp0 - 0xd8u;
    t97 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xd8u, COW_IMG(0x103718b8u), (uint8_t)eax, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t98 = g->edx;
    wr32(sp0 - 0xf0u, 0x80808080u);
    wr32(sp0 - 0xf4u, sp0 - 0xd8u);
    t99 = (t98 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x68u);
    wr32(sp0 - 0xf8u, t99);
    t100 = (t97 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0xdau);
    wr32(sp0 - 0xfcu, t100);
    g->eax = t100;
    g->edx = t99;
    t101 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t100, t99, sp0 - 0xd8u, 0x80808080u, sp0 - 0xd8u, COW_IMG(0x103718b8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
    t102 = g->edx;
    eax = t101;
    edx = t102;
L_10147ea2: ;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10147ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10147ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
