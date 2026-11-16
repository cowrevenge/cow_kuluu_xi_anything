/* f_0x10065320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10065320(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d74;
    double d80;
    double d81;
    double d87;
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
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, 0u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t1);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10065910u), self, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        loc_1c = t5;
        goto L_10065376;
    }
    eax = t5;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t8 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, eax);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, t9, t10, 1, 2, COW_IMG(0x10353b94u), t8);
    t12 = g->edx;
    g->edx = t12;
    return t11 & 0xffffff00u;
L_10065376: ;
    if ((int32_t)rd32(eax + 4u) <= 0)
    {
        ebp = arg2;
        goto L_10065890;
    }
    ebp = arg2;
    loc_10 = 0xffffffffu;
    loc_14 = 0xffffffffu;
    loc_18 = 0xffffffffu;
    loc_c = 0u;
    loc_24 = rd32(sp0 - 0x24u);
    loc_8 = rd32(sp0 - 8u);
    loc_4 = rd32(sp0 - 4u);
L_1006539c: ;
    if ((int32_t)rd32(loc_c * 0x10u + rd32(loc_1c + 8u)) < 11)
    {
        eax = rd32(loc_c * 0x10u + rd32(loc_1c + 8u));
        ebx = loc_c << 4u;
        goto L_10065404;
    }
    eax = rd32(loc_c * 0x10u + rd32(loc_1c + 8u));
    ebx = loc_c << 4u;
    if ((int32_t)eax > 15) goto L_10065404;
    if (eax == 0xcu)
    {
        if (loc_18 == 0xffffffffu)
        {
            loc_18 = 0u;
            loc_24 = loc_24 & 0xffffffu;
        }
    }
    if (eax == 0xdu)
    {
        if (loc_14 == 0xffffffffu)
        {
            loc_14 = 0u;
            loc_8 = 0u;
        }
    }
    if (eax == 0xeu)
    {
        if (loc_10 == 0xffffffffu)
        {
            loc_10 = 0u;
            loc_4 = 0u;
        }
    }
L_10065445: ;
    if (rd32(ebx + rd32(loc_1c + 8u)) > 0x10u)
    {
        ecx = rd32(ebx + rd32(loc_1c + 8u));
        edx = loc_1c;
        goto L_100658b3;
    }
    eax = ebx + rd32(loc_1c + 8u);
    ecx = rd32(ebx + rd32(loc_1c + 8u));
    edx = loc_1c;
    esi = arg1 + loc_c;
    t13 = rd32(COW_IMG(0x100658ccu) + ecx * 4u);
    switch (t13 - RD)
    {
    case 0x1006546bu: goto L_1006546b;
    case 0x1006548du: goto L_1006548d;
    case 0x100654a2u: goto L_100654a2;
    case 0x100654deu: goto L_100654de;
    case 0x10065575u: goto L_10065575;
    case 0x10065626u: goto L_10065626;
    case 0x1006563bu: goto L_1006563b;
    case 0x10065705u: goto L_10065705;
    case 0x10065766u: goto L_10065766;
    case 0x100657c4u: goto L_100657c4;
    case 0x100658b3u: goto L_100658b3;
    default: rt_fatal(g, COW_IMG(0x10065464u), "switch");
    }
    return 0;
L_10065404: ;
    if (loc_18 == 0xffffffffu)
    {
        ecx = loc_18;
    }
    else
    {
        ecx = loc_18;
        wr8(ebp, loc_24 >> 0x18u);
        ebp = ebp + 1u;
    }
    if (loc_14 != 0xffffffffu)
    {
        wr16(ebp, (uint16_t)loc_8);
        ebp = ebp + 2u;
    }
    if (loc_10 != 0xffffffffu)
    {
        wr32(ebp, loc_4);
        ebp = ebp + 4u;
    }
    loc_10 = 0xffffffffu;
    loc_14 = 0xffffffffu;
    loc_18 = 0xffffffffu;
    goto L_10065445;
L_1006546b: ;
    if (rd8(eax + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t95 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t96 = g->edx;
        g->ebx = ebx;
        g->edx = t96;
        t97 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t95);
        t98 = g->ecx;
        t99 = g->edx;
        t100 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t98, 1, t97);
        wr8(ebp, (uint8_t)t100);
        ebp = ebp + 1u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        g->eax = COW_IMG(0x10353b90u);
        g->esp = sp0 - 0x34u;
        t94 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, COW_IMG(0x10353b90u));
        wr8(ebp, (uint8_t)t94);
        ebp = ebp + 1u;
    }
L_10065843: ;
    if ((int32_t)(loc_c + 1u) < (int32_t)rd32(loc_1c + 4u))
    {
        edx = rd32(loc_1c + 4u);
        loc_c = loc_c + 1u;
        goto L_1006539c;
    }
    eax = loc_c + 1u;
    edx = rd32(loc_1c + 4u);
    if (loc_18 == 0xffffffffu)
    {
        ecx = loc_18;
    }
    else
    {
        ecx = loc_18;
        wr8(ebp, loc_24 >> 0x18u);
        edx = (edx & 0xffffff00u) | loc_24 >> 0x18u;
        ebp = ebp + 1u;
    }
    if (loc_14 != 0xffffffffu)
    {
        wr16(ebp, (uint16_t)loc_8);
        ebp = ebp + 2u;
    }
    if (loc_10 != 0xffffffffu)
    {
        wr32(ebp, loc_4);
        edx = loc_4;
        ebp = ebp + 4u;
    }
L_10065890: ;
    t103 = (uint8_t)ebp - (uint8_t)arg2;
    wr32(self + 0x128u, t103);
    g->ebx = in_ebx;
    g->edx = edx;
    return 1u;
L_1006548d: ;
    if (rd8(eax + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t88 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t89 = g->edx;
        g->ebx = ebx;
        g->edx = t89;
        t90 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t88);
        t91 = g->ecx;
        t92 = g->edx;
        eax = t90;
        ecx = t91;
        edx = t92;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        eax = COW_IMG(0x10353b90u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t93 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    wr16(ebp, (uint16_t)t93);
    ebp = ebp + 2u;
    goto L_10065843;
L_100654a2: ;
    if (rd8(eax + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t82 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t83 = g->edx;
        g->ebx = ebx;
        g->edx = t83;
        t84 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t82);
        t85 = g->ecx;
        t86 = g->edx;
        g->ebx = ebx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t85, 3, t84, in_edi, in_esi);
        d87 = cow_take_float(g);
        wrf32(ebp, (float)d87);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        g->ebx = ebx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, COW_IMG(0x10353b90u), in_edi, in_esi);
        d81 = cow_take_float(g);
        wrf32(ebp, (float)d81);
    }
L_1006583d: ;
    ebp = ebp + 4u;
    goto L_10065843;
L_100654de: ;
    if (rd8(eax + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t75 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t76 = g->edx;
        g->ebx = ebx;
        g->edx = t76;
        t77 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t75);
        t78 = g->ecx;
        t79 = g->edx;
        g->ebx = ebx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall_cdecl(g, COW_IMG(0x10313922u), t78, 3, t77, in_edi, in_esi);
        d80 = cow_take_float(g);
        wrf64(ebp, d80);
        ebp = ebp + 8u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        g->ebx = ebx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall_cdecl(g, COW_IMG(0x10313922u), ecx, 3, COW_IMG(0x10353b90u), in_edi, in_esi);
        d74 = cow_take_float(g);
        wrf64(ebp, d74);
        ebp = ebp + 8u;
    }
    goto L_10065843;
L_10065575: ;
    if (rd8(eax + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t61 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t62 = g->edx;
        g->ebx = ebx;
        t63 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t61);
        t64 = g->ecx;
        eax = t63;
        ecx = t64;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        eax = COW_IMG(0x10353b90u);
    }
    edi = eax;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = ebp + 2u < ebp;
    pf = PARITY((uint8_t)(ebp + 2u));
    af = (ebp ^ ebp + 2u) >> 4u & 1u;
    zf = ebp + 2u == 0u;
    sf = (int32_t)(ebp + 2u) < 0;
    of = ((ebp ^ ebp + 2u) & (ebp + 2u ^ 2u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr16(ebp, (uint16_t)~ecx);
    if (rd8(ebx + rd32(loc_1c + 8u) + 8u) == 0u)
    {
        edx = rd32(loc_1c + 8u);
        ebp = ebp + 2u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t65 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t66 = g->edx;
        g->ebx = ebx;
        t67 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t65);
        t68 = g->ecx;
        eax = t67;
        ecx = t68;
    }
    else
    {
        ecx = loc_1c;
        ebp = ebp + 2u;
        eax = COW_IMG(0x10353b90u);
    }
    edx = ebp;
L_100655d9: ;
    t69 = rd8(eax);
    wr8(edx, (uint8_t)t69);
    if ((uint8_t)t69 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t69;
        edx = edx + 1u;
        goto L_100655d9;
    }
    edx = edx + 1u;
    if (rd8(ebx + rd32(loc_1c + 8u) + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t70 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t71 = g->edx;
        g->ebx = ebx;
        t72 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t70);
        t73 = g->ecx;
        eax = t72;
        ecx = t73;
    }
    else
    {
        ecx = rd32(loc_1c + 8u);
        eax = COW_IMG(0x10353b90u);
    }
    edi = eax;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    ebp = ebp + ~ecx;
    goto L_10065843;
L_10065626: ;
    if (rd8(eax + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t55 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t56 = g->edx;
        g->ebx = ebx;
        g->edx = t56;
        t57 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t55);
        t58 = g->ecx;
        t59 = g->edx;
        eax = t57;
        ecx = t58;
        edx = t59;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        eax = COW_IMG(0x10353b90u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t60 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    wr32(ebp, t60);
    goto L_1006583d;
L_1006563b: ;
    if (rd8(eax + 8u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t36 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t37 = g->edx;
        g->ebx = ebx;
        g->edx = t37;
        t38 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t36);
        t39 = g->edx;
        eax = t38;
        edx = t39;
    }
    else
    {
        eax = COW_IMG(0x10353b90u);
    }
    t40 = rd8(eax);
    wr8(ebp, (uint8_t)t40);
    if (rd8(ebx + rd32(loc_1c + 8u) + 8u) == 0u)
    {
        edx = (edx & 0xffffff00u) | t40;
        ebp = ebp + 1u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t41 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t42 = g->edx;
        g->ebx = ebx;
        g->edx = t42;
        t43 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t41);
        t44 = g->edx;
        eax = t43;
        edx = t44;
    }
    else
    {
        edx = (edx & 0xffffff00u) | t40;
        ebp = ebp + 1u;
        eax = COW_IMG(0x10353b90u);
    }
    t45 = rd8(eax + 1u);
    wr8(ebp, (uint8_t)t45);
    if (rd8(ebx + rd32(loc_1c + 8u) + 8u) == 0u)
    {
        edx = (edx & 0xffffff00u) | t45;
        ebp = ebp + 1u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t46 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t47 = g->edx;
        g->ebx = ebx;
        g->edx = t47;
        t48 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t46);
        t49 = g->edx;
        eax = t48;
        edx = t49;
    }
    else
    {
        edx = (edx & 0xffffff00u) | t45;
        ebp = ebp + 1u;
        eax = COW_IMG(0x10353b90u);
    }
    t50 = rd8(eax + 2u);
    wr8(ebp, (uint8_t)t50);
    if (rd8(ebx + rd32(loc_1c + 8u) + 8u) == 0u)
    {
        edx = (edx & 0xffffff00u) | t50;
        ebp = ebp + 1u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t51 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t52 = g->edx;
        g->ebx = ebx;
        g->edx = t52;
        t53 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t51);
        t54 = g->edx;
        wr8(ebp, rd8(t53 + 3u));
        ebp = ebp + 1u;
    }
    else
    {
        edx = (edx & 0xffffff00u) | t50;
        ebp = ebp + 1u;
        wr8(ebp, rd8(COW_IMG(0x10353b93u)));
        ebp = ebp + 1u;
    }
    goto L_10065843;
L_10065705: ;
    if (rd8(eax + 8u) == 0u)
    {
        edi = rd32(eax + 4u);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t29 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t30 = g->edx;
        g->ebx = ebx;
        g->edx = t30;
        t31 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t29);
        t32 = g->ecx;
        t33 = g->edx;
        eax = t31;
        ecx = t32;
        edx = t33;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        edi = rd32(eax + 4u);
        eax = COW_IMG(0x10353b90u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t34 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t35 = (loc_18 & 0x1fu) != 0u ? (uint8_t)(((uint8_t)t34 & (uint8_t)(uint32_t)((int32_t)0xffu >> ((8u - edi & 0x1fu) < 0x20u ? 8u - edi & 0x1fu : 0x1fu))) << (loc_18 & 0x1fu)) : (uint8_t)t34 & (uint8_t)(uint32_t)((int32_t)0xffu >> ((8u - edi & 0x1fu) < 0x20u ? 8u - edi & 0x1fu : 0x1fu));
    loc_18 = edi + loc_18;
    loc_24 = (loc_24 & 0xffffffu) | (uint8_t)(loc_24 >> 0x18u | t35) << 0x18u;
    goto L_10065843;
L_10065766: ;
    if (rd8(eax + 8u) == 0u)
    {
        edi = rd32(eax + 4u);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t22 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t23 = g->edx;
        g->ebx = ebx;
        g->edx = t23;
        t24 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t22);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        edi = rd32(eax + 4u);
        eax = COW_IMG(0x10353b90u);
    }
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t28 = loc_8 | (t27 & (uint32_t)((int32_t)0xffffu >> ((0x10u - edi & 0x1fu) < 0x20u ? 0x10u - edi & 0x1fu : 0x1fu))) << (loc_14 & 0x1fu);
    loc_14 = edi + loc_14;
    loc_8 = t28;
    goto L_10065843;
L_100657c4: ;
    if (rd8(eax + 8u) == 0u)
    {
        edi = rd32(eax + 4u);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t14 = cow_thiscall(g, COW_IMG(0x10068050u), self + 0x330u, 1, esi);
        t15 = g->edx;
        g->ebx = ebx;
        g->edx = t15;
        t16 = cow_thiscall(g, COW_IMG(0x10065a10u), self, 1, t14);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        edi = rd32(eax + 4u);
        eax = COW_IMG(0x10353b90u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t20 = g->edx;
    t21 = loc_4 | (t19 & 0xffffffffu >> (0x20u - edi & 0x1fu)) << (loc_10 & 0x1fu);
    loc_10 = edi + loc_10;
    loc_4 = t21;
    goto L_10065843;
L_100658b3: ;
    g->ebx = ebx;
    g->esp = sp0 - 0x30u;
    t101 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b80u), in_edi);
    t102 = g->edx;
    g->ebx = in_ebx;
    g->edx = t102;
    return t101 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10065320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10065320(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
