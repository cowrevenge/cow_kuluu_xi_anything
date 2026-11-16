/* f_0x1013b280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1013b280(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x44u, self);
    if (rd8(arg2) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg2);
        goto L_1013b99f;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    if (rd32(sp0 + 0x14u) == 0u) goto L_1013b99f;
    ebx = rd32(sp0 + 0x14u);
    if (rd32(self + 0x18u) == 0u) goto L_1013b99f;
    wr32(sp0 - 0x54u, in_ebp);
    if (rd32(sp0 + 4u) == 1u)
    {
        ebp = rd32(sp0 + 0xcu) - 1u;
        goto L_1013b6a8;
    }
    eax = rd32(sp0 + 4u) - 1u;
    ebp = rd32(sp0 + 0xcu) - 1u;
    if (eax == 1u)
    {
        if ((int32_t)rd32(sp0 + 0x10u) <= 0)
        {
            ecx = self;
            edx = 0u;
        }
        else
        {
            t57 = rd32(ebx + 4u);
            wr32(sp0 - 0x58u, t57);
            wr32(sp0 - 0x5cu, rd32(ebx));
            wr32(sp0 - 0x60u, ebp);
            wr32(sp0 - 0x64u, arg2);
            g->ebx = ebx;
            g->edx = rd32(ebx);
            t58 = rd32(ebx);
            g->esp = sp0 - 0x54u;
            t59 = cow_thiscall(g, COW_IMG(0x1013b010u), self, 4, arg2, ebp, t58, t57);
            t60 = g->edx;
            t61 = rd32(ebx + 0xcu);
            wr32(sp0 - 0x58u, t61);
            t62 = rd32(ebx + 8u);
            wr32(sp0 - 0x5cu, t62);
            wr32(sp0 - 0x60u, ebp - t59);
            wr32(sp0 - 0x64u, arg2);
            g->ebx = ebx;
            g->edx = t60;
            cow_thiscall(g, COW_IMG(0x1013b010u), self, 4, arg2, ebp - t59, t62, t61);
            t63 = g->ecx;
            t64 = g->edx;
            ecx = t63;
            edx = t64;
        }
    }
    else
    {
        eax = eax - 1u;
        if (eax == 1u)
        {
            if ((int32_t)rd32(ebx + 0x100u) <= 0)
            {
                ecx = self;
                edx = 0u;
            }
            else
            {
                t51 = rd32(ebx + 0x110u) + 1u;
                wr32(sp0 - 0x58u, t51);
                t52 = rd32(COW_IMG(0x1036fcf0u) + rd32(ebx + 0x104u) * 4u);
                wr32(sp0 - 0x5cu, t52);
                t53 = rd32(COW_IMG(0x1036fd28u) + rd32(ebx + 0x11cu) * 4u);
                wr32(sp0 - 0x60u, t53);
                wr32(sp0 - 0x64u, COW_IMG(0x1036fe10u));
                wr32(sp0 - 0x68u, arg2);
                g->ebx = ebx;
                g->ecx = t52;
                g->edx = rd32(ebx + 0x11cu);
                t54 = rd32(ebx + 0x11cu);
                g->esp = sp0 - 0x54u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2, COW_IMG(0x1036fe10u), t53, t52, t51);
                t55 = g->ecx;
                t56 = g->edx;
                ecx = t55;
                edx = t56;
            }
        }
        else
        {
            if (rd32(ebx + 0x144u) == 0u)
            {
                if (rd32(ebx + 0x128u) == 0u)
                {
                    if (rd32(ebx + 0x100u) != 0u)
                    {
                        ecx = rd32(ebx + 0x100u);
                        if ((int32_t)ecx <= 0)
                        {
                            edx = 0u;
                        }
                        else
                        {
                            wr32(sp0 + 0xcu, ebx + 0xcu);
                            eax = 0u;
                            ecx = ebx + 0xcu;
L_1013b560: ;
                            wr32(sp0 - 0x58u, eax + 1u);
                            wr32(sp0 - 0x5cu, COW_IMG(0x1036fe18u));
                            wr32(sp0 - 0x60u, sp0 - 0x40u);
                            wr32(sp0 + 0x14u, eax + 1u);
                            g->ebx = ebx;
                            g->ecx = ecx;
                            g->esp = sp0 - 0x4cu;
                            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036fe18u), eax + 1u, in_ebp, in_edi);
                            t33 = g->ecx;
                            edi = COW_IMG(0x10350e4cu);
                            eax = 0u;
                            ecx = 0xffffffffu;
                            cf = sp0 - 0x54u < sp0 - 0x60u;
                            pf = PARITY((uint8_t)(sp0 - 0x54u));
                            af = (sp0 - 0x60u ^ sp0 - 0x54u) >> 4u & 1u;
                            zf = sp0 == 0x54u;
                            sf = (int32_t)(sp0 - 0x54u) < 0;
                            of = ((sp0 - 0x60u ^ sp0 - 0x54u) & (sp0 - 0x54u ^ 0xcu)) >> 0x1fu;
                            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                            t34 = ~ecx - 1u;
                            edi = sp0 - 0x40u;
                            ecx = 0xffffffffu;
                            cf = 0u;
                            pf = PARITY(0xffu);
                            af = 0u;
                            zf = 0u;
                            sf = 1u;
                            of = 0u;
                            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                            t35 = t34 + ~ecx - 1u;
                            wr32(sp0 + 0x10u, t35);
                            if ((int32_t)(t34 + ~ecx - 1u) > (int32_t)ebp)
                            {
                                ecx = ~ecx - 1u;
                                edx = t35;
                                goto L_1013b991;
                            }
                            ecx = ~ecx - 1u;
                            edi = sp0 - 0x40u;
                            ecx = 0xffffffffu;
                            cf = 0u;
                            pf = PARITY(0xffu);
                            af = 0u;
                            zf = 0u;
                            sf = 1u;
                            of = 0u;
                            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                            t36 = edi - ~ecx;
                            edi = arg2;
                            ecx = 0xffffffffu;
                            cf = 0u;
                            pf = PARITY(0xffu);
                            af = 0u;
                            zf = 0u;
                            sf = 1u;
                            of = 0u;
                            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                            esi = t36;
                            edi = edi - 1u;
                            ecx = ~ecx >> 2u;
                            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                            t37 = rd32(sp0 + 0x10u);
                            ecx = ~ecx & 3u;
                            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                            t38 = rd32(rd32(sp0 + 0xcu) - 8u);
                            wr32(sp0 - 0x58u, t38);
                            t39 = rd32(rd32(sp0 + 0xcu) - 0xcu);
                            wr32(sp0 - 0x5cu, t39);
                            wr32(sp0 - 0x60u, ebp - t37);
                            wr32(sp0 - 0x64u, arg2);
                            g->ebx = ebx;
                            t40 = rd32(sp0 + 0xcu);
                            g->esp = sp0 - 0x54u;
                            t41 = cow_thiscall(g, COW_IMG(0x1013b010u), rd32(sp0 - 0x44u), 4, arg2, ebp - t37, t39, t38);
                            wr32(sp0 - 0x58u, rd32(t40));
                            t42 = rd32(t40 - 4u);
                            wr32(sp0 - 0x5cu, t42);
                            t43 = ebp - t37 - t41;
                            wr32(sp0 - 0x60u, t43);
                            wr32(sp0 - 0x64u, arg2);
                            g->ebx = ebx;
                            g->edx = rd32(t40);
                            t44 = rd32(sp0 - 0x44u);
                            t45 = rd32(t40);
                            t46 = cow_thiscall(g, COW_IMG(0x1013b010u), t44, 4, arg2, t43, t42, t45);
                            t47 = g->ecx;
                            t48 = g->edx;
                            edi = arg2;
                            eax = 0u;
                            ecx = 0xffffffffu;
                            cf = t40 + 0x10u < t40;
                            pf = PARITY((uint8_t)(t40 + 0x10u));
                            af = (t40 ^ 0x10u ^ t40 + 0x10u) >> 4u & 1u;
                            zf = t40 + 0x10u == 0u;
                            sf = (int32_t)(t40 + 0x10u) < 0;
                            of = ((t40 ^ t40 + 0x10u) & (t40 + 0x10u ^ 0x10u)) >> 0x1fu;
                            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                            t49 = rd32(sp0 + 0x14u);
                            wr16(edi - 1u, rd16(COW_IMG(0x10350e4cu)));
                            t50 = rd32(ebx + 0x100u);
                            wr32(sp0 + 0xcu, t40 + 0x10u);
                            if ((int32_t)t49 < (int32_t)t50)
                            {
                                eax = t49;
                                ecx = t50;
                                ebp = t43 - t46;
                                goto L_1013b560;
                            }
                            ecx = t50;
                            edx = t48;
                        }
                    }
                    else
                    {
                        ecx = rd32(ebx + 0x100u);
                        if ((int32_t)rd32(sp0 + 0x10u) <= 0)
                        {
                            edx = 0u;
                        }
                        else
                        {
                            eax = rd32(sp0 + 0x10u);
                            if ((int32_t)eax <= 0)
                            {
                                edx = 0u;
                                goto L_1013b991;
                            }
                            esi = 0u;
L_1013b529: ;
                            t28 = rd32(ebx + esi * 8u + 4u);
                            wr32(sp0 - 0x58u, t28);
                            t29 = rd32(ebx + esi * 8u);
                            wr32(sp0 - 0x5cu, t29);
                            wr32(sp0 - 0x60u, ebp);
                            wr32(sp0 - 0x64u, arg2);
                            g->ebx = ebx;
                            g->edx = t29;
                            g->esp = sp0 - 0x54u;
                            t30 = cow_thiscall(g, COW_IMG(0x1013b010u), self, 4, arg2, ebp, t29, t28);
                            t31 = g->ecx;
                            t32 = g->edx;
                            if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 + 0x10u))
                            {
                                ebp = ebp - t30;
                                esi = esi + 1u;
                                goto L_1013b529;
                            }
                            ecx = t31;
                            edx = t32;
                        }
                    }
                }
                else
                {
                    ecx = ebx + 0x128u;
                    wr32(sp0 + 4u, 0u);
                    wr32(sp0 + 0x14u, 0u);
                    wr32(sp0 + 0xcu, ecx);
                    eax = 0u;
                    edx = 0u;
L_1013b42a: ;
                    if (rd32(ecx) == 0u) goto L_1013b4eb;
                    wr32(sp0 - 0x58u, eax + 1u);
                    wr32(sp0 - 0x5cu, COW_IMG(0x1036fe18u));
                    wr32(sp0 - 0x60u, sp0 - 0x40u);
                    g->ebx = ebx;
                    g->ecx = sp0 - 0x40u;
                    g->esp = sp0 - 0x4cu;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036fe18u), eax + 1u, in_ebp, in_edi);
                    t17 = g->ecx;
                    edi = COW_IMG(0x10350e4cu);
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = sp0 - 0x54u < sp0 - 0x60u;
                    pf = PARITY((uint8_t)(sp0 - 0x54u));
                    af = (sp0 - 0x60u ^ sp0 - 0x54u) >> 4u & 1u;
                    zf = sp0 == 0x54u;
                    sf = (int32_t)(sp0 - 0x54u) < 0;
                    of = ((sp0 - 0x60u ^ sp0 - 0x54u) & (sp0 - 0x54u ^ 0xcu)) >> 0x1fu;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    t18 = ~ecx - 1u;
                    edi = sp0 - 0x40u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0xffu);
                    af = 0u;
                    zf = 0u;
                    sf = 1u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    t19 = t18 + ~ecx - 1u;
                    wr32(sp0 + 0x10u, t19);
                    if ((int32_t)(t18 + ~ecx - 1u) > (int32_t)ebp)
                    {
                        ecx = ~ecx - 1u;
                        edx = t19;
                        goto L_1013b991;
                    }
                    ecx = ~ecx - 1u;
                    edi = sp0 - 0x40u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0xffu);
                    af = 0u;
                    zf = 0u;
                    sf = 1u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    t20 = edi - ~ecx;
                    edi = arg2;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0xffu);
                    af = 0u;
                    zf = 0u;
                    sf = 1u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    esi = t20;
                    edi = edi - 1u;
                    ecx = ~ecx >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = ~ecx & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    if ((int32_t)rd32(sp0 + 4u) >= (int32_t)rd32(rd32(sp0 + 0xcu)))
                    {
                        edx = ~ecx;
                        ecx = rd32(sp0 + 0x10u);
                        ebp = ebp - rd32(sp0 + 0x10u);
                        goto L_1013b4d2;
                    }
                    ebp = ebp - rd32(sp0 + 0x10u);
                    esi = rd32(sp0 + 4u);
                    edi = rd32(sp0 + 0xcu);
L_1013b4ad: ;
                    t21 = rd32(ebx + esi * 8u + 4u);
                    wr32(sp0 - 0x58u, t21);
                    t22 = rd32(ebx + esi * 8u);
                    wr32(sp0 - 0x5cu, t22);
                    wr32(sp0 - 0x60u, ebp);
                    wr32(sp0 - 0x64u, arg2);
                    g->ebx = ebx;
                    g->edx = arg2;
                    t23 = rd32(sp0 - 0x44u);
                    g->esp = sp0 - 0x54u;
                    t24 = cow_thiscall(g, COW_IMG(0x1013b010u), t23, 4, arg2, ebp, t22, t21);
                    t25 = g->ecx;
                    t26 = g->edx;
                    if ((int32_t)(esi + 1u) < (int32_t)rd32(edi))
                    {
                        ebp = ebp - t24;
                        esi = esi + 1u;
                        goto L_1013b4ad;
                    }
                    ecx = t25;
                    edx = t26;
                    ebp = ebp - t24;
                    esi = esi + 1u;
                    wr32(sp0 + 4u, esi);
L_1013b4d2: ;
                    edi = arg2;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0u);
                    af = 0u;
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    wr16(edi - 1u, rd16(COW_IMG(0x10350e4cu)));
                    eax = rd32(sp0 + 0x14u);
L_1013b4eb: ;
                    t27 = rd32(sp0 + 0xcu);
                    wr32(sp0 + 0x14u, eax + 1u);
                    wr32(sp0 + 0xcu, t27 + 4u);
                    if ((int32_t)(eax + 1u) < 3)
                    {
                        eax = eax + 1u;
                        ecx = t27 + 4u;
                        goto L_1013b42a;
                    }
                    ecx = t27 + 4u;
                }
            }
            else
            {
                eax = rd32(ebx + 0x144u);
                esi = ebx + 0x144u;
                t1 = rd8(ebx + 0x154u);
                wr32(sp0 + 4u, 0u);
                if (!(t1 & 1u))
                {
                    ecx = self;
                    edx = 0u;
                }
                else
                {
                    wr32(sp0 - 0x58u, 0u);
                    wr32(sp0 - 0x5cu, 0x520u);
                    wr32(sp0 - 0x60u, ebp);
                    wr32(sp0 - 0x64u, arg2);
                    g->ebx = ebx;
                    g->edx = 0u;
                    g->esp = sp0 - 0x54u;
                    t2 = cow_thiscall(g, COW_IMG(0x1013b010u), self, 4, arg2, ebp, 0x520u, 0u);
                    t3 = g->ecx;
                    t4 = g->edx;
                    t5 = rd16(COW_IMG(0x10350e4cu));
                    edi = arg2;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0u);
                    af = 0u;
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    wr16(edi - 1u, (uint16_t)t5);
                    edx = (t4 & 0xffff0000u) | t5;
                    ebp = ebp - t2;
                }
                wr32(sp0 + 0xcu, esi);
                wr32(sp0 + 0x14u, 0u);
                eax = 0u;
L_1013b329: ;
                if (rd32(esi) == 0u) goto L_1013b3ea;
                wr32(sp0 - 0x58u, eax + 1u);
                wr32(sp0 - 0x5cu, COW_IMG(0x1036fe18u));
                wr32(sp0 - 0x60u, sp0 - 0x40u);
                g->ebx = ebx;
                g->ecx = ecx;
                g->esp = sp0 - 0x4cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036fe18u), eax + 1u, in_ebp, in_edi);
                t6 = g->ecx;
                edi = COW_IMG(0x10350e4cu);
                eax = 0u;
                ecx = 0xffffffffu;
                cf = sp0 - 0x54u < sp0 - 0x60u;
                pf = PARITY((uint8_t)(sp0 - 0x54u));
                af = (sp0 - 0x60u ^ sp0 - 0x54u) >> 4u & 1u;
                zf = sp0 == 0x54u;
                sf = (int32_t)(sp0 - 0x54u) < 0;
                of = ((sp0 - 0x60u ^ sp0 - 0x54u) & (sp0 - 0x54u ^ 0xcu)) >> 0x1fu;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                t7 = ~ecx - 1u;
                edi = sp0 - 0x40u;
                ecx = 0xffffffffu;
                cf = 0u;
                pf = PARITY(0xffu);
                af = 0u;
                zf = 0u;
                sf = 1u;
                of = 0u;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                t8 = t7 + ~ecx - 1u;
                wr32(sp0 + 0x10u, t8);
                if ((int32_t)(t7 + ~ecx - 1u) > (int32_t)ebp)
                {
                    ecx = ~ecx - 1u;
                    edx = t8;
                    goto L_1013b991;
                }
                ecx = ~ecx - 1u;
                edi = sp0 - 0x40u;
                ecx = 0xffffffffu;
                cf = 0u;
                pf = PARITY(0xffu);
                af = 0u;
                zf = 0u;
                sf = 1u;
                of = 0u;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                t9 = edi - ~ecx;
                edi = arg2;
                ecx = 0xffffffffu;
                cf = 0u;
                pf = PARITY(0xffu);
                af = 0u;
                zf = 0u;
                sf = 1u;
                of = 0u;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                esi = t9;
                edi = edi - 1u;
                ecx = ~ecx >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = ~ecx & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                if ((int32_t)rd32(sp0 + 4u) >= (int32_t)rd32(rd32(sp0 + 0xcu)))
                {
                    edx = ~ecx;
                    ecx = rd32(sp0 + 0x10u);
                    ebp = ebp - rd32(sp0 + 0x10u);
                    goto L_1013b3d1;
                }
                ebp = ebp - rd32(sp0 + 0x10u);
                esi = rd32(sp0 + 4u);
                edi = rd32(sp0 + 0xcu);
L_1013b3ac: ;
                t10 = rd32(ebx + esi * 8u + 4u);
                wr32(sp0 - 0x58u, t10);
                t11 = rd32(ebx + esi * 8u);
                wr32(sp0 - 0x5cu, t11);
                wr32(sp0 - 0x60u, ebp);
                wr32(sp0 - 0x64u, arg2);
                g->ebx = ebx;
                g->edx = arg2;
                t12 = rd32(sp0 - 0x44u);
                g->esp = sp0 - 0x54u;
                t13 = cow_thiscall(g, COW_IMG(0x1013b010u), t12, 4, arg2, ebp, t11, t10);
                t14 = g->ecx;
                t15 = g->edx;
                if ((int32_t)(esi + 1u) < (int32_t)rd32(edi))
                {
                    ebp = ebp - t13;
                    esi = esi + 1u;
                    goto L_1013b3ac;
                }
                ecx = t14;
                edx = t15;
                ebp = ebp - t13;
                esi = esi + 1u;
                wr32(sp0 + 4u, esi);
L_1013b3d1: ;
                edi = arg2;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = 0u;
                pf = PARITY(0u);
                af = 0u;
                zf = 1u;
                sf = 0u;
                of = 0u;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                wr16(edi - 1u, rd16(COW_IMG(0x10350e4cu)));
                eax = rd32(sp0 + 0x14u);
L_1013b3ea: ;
                t16 = rd32(sp0 + 0xcu);
                wr32(sp0 + 0x14u, eax + 1u);
                wr32(sp0 + 0xcu, t16 + 4u);
                if ((int32_t)(eax + 1u) < 4)
                {
                    eax = eax + 1u;
                    esi = t16 + 4u;
                    goto L_1013b329;
                }
            }
        }
    }
L_1013b991: ;
    wr32(sp0 - 0x58u, arg2);
    g->ebx = ebx;
    g->eax = arg2;
    g->esp = sp0 - 0x54u;
    t117 = cow_thiscall_cdecl(g, COW_IMG(0x1013b9c0u), ecx, 1, arg2);
    eax = t117;
L_1013b99f: ;
    g->ebx = in_ebx;
    return eax;
L_1013b6a8: ;
    if (rd32(ebx + 0x158u) == 0u)
    {
        eax = rd32(ebx + 0x158u);
        goto L_1013b6d8;
    }
    eax = rd32(ebx + 0x158u);
    t65 = rd32(ebx + 0x15cu);
    wr32(sp0 - 0x58u, t65);
    wr32(sp0 - 0x5cu, eax);
    wr32(sp0 - 0x60u, 0x16u);
    g->eax = eax;
    g->ecx = self;
    g->edx = t65;
    g->esp = sp0 - 0x58u;
    t66 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x16u, eax);
    t67 = g->ecx;
    t68 = g->edx;
    wr32(sp0 - 0x5cu, t66);
    wr32(sp0 - 0x60u, COW_IMG(0x1036fe04u));
    wr32(sp0 - 0x64u, arg2);
    g->ebx = ebx;
    g->ecx = t67;
    g->edx = t68;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2, COW_IMG(0x1036fe04u), t66, rd32(sp0 - 0x58u), in_ebp);
    t69 = g->ecx;
    t70 = g->edx;
    ecx = t69;
    edx = t70;
    goto L_1013b991;
L_1013b6d8: ;
    if (rd32(ebx + 0x100u) == 0u)
    {
        ecx = rd32(ebx + 0x100u);
        goto L_1013b7aa;
    }
    ecx = rd32(ebx + 0x100u);
    if ((int32_t)ecx <= 0)
    {
        edx = 0u;
    }
    else
    {
        wr32(sp0 + 0xcu, ebx + 0x104u);
        eax = 0u;
        esi = ebx + 0x104u;
L_1013b6fa: ;
        t71 = rd32(esi + 0xcu) + 1u;
        wr32(sp0 - 0x58u, t71);
        t72 = rd32(COW_IMG(0x1036fcf0u) + rd32(esi) * 4u);
        wr32(sp0 - 0x5cu, t72);
        t73 = rd32(esi + 0x18u);
        wr32(sp0 + 0x14u, eax + 1u);
        t74 = rd32(COW_IMG(0x1036fd28u) + t73 * 4u);
        wr32(sp0 - 0x60u, t74);
        wr32(sp0 - 0x64u, eax + 1u);
        wr32(sp0 - 0x68u, COW_IMG(0x1036fdf8u));
        wr32(sp0 - 0x6cu, sp0 - 0x40u);
        g->ebx = ebx;
        g->ecx = t74;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036fdf8u), eax + 1u, t74, t72);
        t75 = g->ecx;
        t76 = g->edx;
        edi = sp0 - 0x40u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = sp0 - 0x54u < sp0 - 0x6cu;
        pf = PARITY((uint8_t)(sp0 - 0x54u));
        af = (sp0 - 0x6cu ^ 0x18u ^ sp0 - 0x54u) >> 4u & 1u;
        zf = sp0 == 0x54u;
        sf = (int32_t)(sp0 - 0x54u) < 0;
        of = ((sp0 - 0x6cu ^ sp0 - 0x54u) & (sp0 - 0x54u ^ 0x18u)) >> 0x1fu;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t77 = ~ecx - 1u;
        wr32(sp0 + 0x10u, t77);
        if ((int32_t)(~ecx - 1u) >= (int32_t)ebp)
        {
            edx = t76;
        }
        else
        {
            ecx = t77;
            edi = sp0 - 0x40u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t78 = edi - ~ecx;
            edi = arg2;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            esi = t78;
            edi = edi - 1u;
            ecx = ~ecx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t79 = rd32(sp0 + 0x10u);
            ecx = ~ecx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = ~ecx;
            ebp = ebp - t79;
            esi = rd32(sp0 + 0xcu);
        }
        t80 = rd32(sp0 + 0x14u);
        t81 = rd32(ebx + 0x100u);
        wr32(sp0 + 0xcu, esi + 4u);
        if ((int32_t)t80 < (int32_t)t81)
        {
            eax = t80;
            esi = esi + 4u;
            goto L_1013b6fa;
        }
        ecx = t81;
    }
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr8(arg2 + ~ecx - 2u, 0u);
    ecx = ~ecx - 1u;
    goto L_1013b991;
L_1013b7aa: ;
    if (rd32(ebx + 0x128u) == 0u) goto L_1013b831;
    if ((int32_t)rd32(ebx + 0x138u) >= 15)
    {
        wr32(self + 0x338u, 0x80407090u);
    }
    wr32(sp0 - 0x58u, 0x3fu);
    t82 = rd32(self + 0x14u);
    wr8(sp0 + 0x10u, (uint8_t)(rd8(ebx + 0x134u) + 0x41u));
    t83 = rd8(ebx + 0x134u);
    g->esp = sp0 - 0x54u;
    t84 = cow_thiscall(g, COW_IMG(0x101c8450u), t82, 1, 0x3fu);
    if (t84 != 0u)
    {
        eax = t84;
        t90 = rd32(ebx + 0x13cu);
        wr32(sp0 - 0x58u, t90);
        t91 = rd32(ebx + 0x138u);
        wr32(sp0 - 0x5cu, t91);
        t92 = (uint32_t)(int8_t)rd8(sp0 + 0x10u);
        wr32(sp0 - 0x60u, t92);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        g->ebx = ebx;
        g->ecx = t91;
        g->edx = t92;
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, eax, t92, t91, t90);
        t93 = g->ecx;
        t94 = g->edx;
        ecx = t93;
        edx = t94;
    }
    else
    {
        t85 = rd32(ebx + 0x13cu);
        wr32(sp0 - 0x58u, t85);
        t86 = rd32(ebx + 0x138u);
        wr32(sp0 - 0x5cu, t86);
        t87 = (uint32_t)(int8_t)rd8(sp0 + 0x10u);
        wr32(sp0 - 0x60u, t87);
        wr32(sp0 - 0x64u, COW_IMG(0x1036fdecu));
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        g->ebx = ebx;
        g->ecx = sp0 - 0x40u;
        g->edx = t86;
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036fdecu), t87, t86, t85);
        t88 = g->ecx;
        t89 = g->edx;
        ecx = t88;
        edx = t89;
    }
L_1013b956: ;
    edi = sp0 - 0x40u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)(~ecx - 1u) >= (int32_t)ebp)
    {
        ecx = ~ecx - 1u;
    }
    else
    {
        ecx = ~ecx - 1u;
        edi = sp0 - 0x40u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t116 = edi - ~ecx;
        edi = arg2;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t116;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edx = ~ecx;
    }
    goto L_1013b991;
L_1013b831: ;
    if (rd32(ebx + 0x144u) == 0u) goto L_1013b8c3;
    if ((int32_t)rd32(ebx + 0x138u) < (int32_t)rd32(ebx + 0x140u))
    {
        eax = rd32(ebx + 0x138u);
    }
    else
    {
        eax = rd32(ebx + 0x138u);
        wr32(self + 0x338u, 0x80407090u);
    }
    wr32(sp0 - 0x58u, 0x3bu);
    t95 = rd32(self + 0x14u);
    wr8(sp0 + 0x10u, (uint8_t)(rd8(ebx + 0x134u) + 0x41u));
    t96 = rd8(ebx + 0x134u);
    g->esp = sp0 - 0x54u;
    t97 = cow_thiscall(g, COW_IMG(0x101c8450u), t95, 1, 0x3bu);
    t98 = rd32(ebx + 0x13cu);
    wr32(sp0 - 0x58u, t98);
    t99 = rd32(ebx + 0x140u);
    wr32(sp0 - 0x5cu, t99);
    if (t97 != 0u)
    {
        eax = t97;
        loc_5c = t99;
        t104 = rd32(ebx + 0x138u);
        wr32(sp0 - 0x60u, t104);
        t105 = (uint32_t)(int8_t)rd8(sp0 + 0x10u);
        wr32(sp0 - 0x64u, t105);
        wr32(sp0 - 0x68u, eax);
        wr32(sp0 - 0x6cu, sp0 - 0x40u);
        g->ebx = ebx;
        g->ecx = t104;
        g->edx = t105;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, eax, t105, t104, loc_5c);
        t106 = g->ecx;
        t107 = g->edx;
        ecx = t106;
        edx = t107;
    }
    else
    {
        loc_5c = t99;
        t100 = rd32(ebx + 0x138u);
        wr32(sp0 - 0x60u, t100);
        t101 = (uint32_t)(int8_t)rd8(sp0 + 0x10u);
        wr32(sp0 - 0x64u, t101);
        wr32(sp0 - 0x68u, COW_IMG(0x1036fddcu));
        wr32(sp0 - 0x6cu, sp0 - 0x40u);
        g->ebx = ebx;
        g->ecx = t101;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036fddcu), t101, t100, loc_5c);
        t102 = g->ecx;
        t103 = g->edx;
        ecx = t102;
        edx = t103;
    }
    goto L_1013b956;
L_1013b8c3: ;
    if (rd32(ebx + 0x160u) == 0u)
    {
        edx = 0u;
        goto L_1013b991;
    }
    wr32(sp0 - 0x58u, 0x3du);
    g->esp = sp0 - 0x54u;
    t108 = cow_thiscall(g, COW_IMG(0x101c8450u), rd32(self + 0x14u), 1, 0x3du);
    if (rd32(ebx + 0x160u) - 1u > 3u)
    {
        esi = t108;
        goto L_1013b90a;
    }
    eax = rd32(ebx + 0x160u) - 1u;
    esi = t108;
    t109 = rd32(COW_IMG(0x1013b9a8u) + eax * 4u);
    switch (t109 - RD)
    {
    case 0x1013b8eeu: goto L_1013b8ee;
    case 0x1013b8f5u: goto L_1013b8f5;
    case 0x1013b8fcu: goto L_1013b8fc;
    case 0x1013b903u: goto L_1013b903;
    default: rt_fatal(g, COW_IMG(0x1013b8e7u), "switch");
    }
    return 0;
L_1013b8ee: ;
    ecx = 0xbb8u;
L_1013b90f: ;
    t110 = cow_divs(g, rd32(ebx + 0x164u) * 0x2710u, ecx);
    t111 = cow_mods(g, rd32(ebx + 0x164u) * 0x2710u, ecx);
    if ((int32_t)t110 <= 10000)
    {
        eax = t110;
        ebx = rd32(ebx + 0x164u);
    }
    else
    {
        ebx = rd32(ebx + 0x164u);
        eax = 0x2710u;
    }
    t112 = cow_divs(g, eax, 0x64u);
    t113 = cow_mods(g, eax, 0x64u);
    wr32(sp0 - 0x58u, t113);
    wr32(sp0 - 0x5cu, t112);
    if (esi != 0u)
    {
        loc_58 = t113;
        loc_5c = t112;
        wr32(sp0 - 0x60u, esi);
        loc_60 = esi;
    }
    else
    {
        loc_58 = t113;
        loc_5c = t112;
        wr32(sp0 - 0x60u, COW_IMG(0x1036fdd4u));
        loc_60 = COW_IMG(0x1036fdd4u);
    }
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    g->ebx = ebx;
    g->ecx = 0x64u;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, loc_60, loc_5c, loc_58, rd32(sp0 - 0x54u));
    t114 = g->ecx;
    t115 = g->edx;
    ecx = t114;
    edx = t115;
    goto L_1013b956;
L_1013b8f5: ;
    ecx = 0x1388u;
    goto L_1013b90f;
L_1013b8fc: ;
    ecx = 0x2710u;
    goto L_1013b90f;
L_1013b903: ;
    ecx = 0x7530u;
    goto L_1013b90f;
L_1013b90a: ;
    ecx = 0x270fu;
    goto L_1013b90f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013b280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013b280(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
