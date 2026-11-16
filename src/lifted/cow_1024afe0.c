/* f_0x1024afe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1024afe0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d74;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    int64_t q82;
    unsigned sf;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x30u, in_ebx, self);
    t2 = g->edx;
    if (t1 == 0u)
    {
        loc_4 = self;
        goto L_1024b44f;
    }
    edx = t2;
    ebx = t1;
    t3 = rd32(COW_IMG(0x106690b8u));
    edi = ebx;
    eax = 0u;
    ecx = 0xcu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg1, COW_IMG(0x1034f2d0u), in_edi, in_esi, in_ebp);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ebp = t3;
    }
    else
    {
        ecx = t5;
        edx = t6;
        ebp = t3;
        esi = t4;
        g->ecx = ecx;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, ebx, 1u, 0x30u, esi, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->edi = edi;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t8, 1, 3, esi, ebx, 1u);
    }
    esi = ebx;
    edi = COW_IMG(0x103888d0u);
    ecx = 0xau;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
        edi = ebx;
        eax = 0u;
        ecx = 0xcu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0xcu;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, 0u, 1, 3, 0x20u, in_edi, in_esi);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            ecx = t10;
            edx = t11;
        }
        else
        {
            ecx = t10;
            edx = t11;
            esi = t9;
            g->esp = sp0 - 0x14u;
            cow_call_regs(g, COW_IMG(0x10249af0u), arg1, ecx, edx, 1, 3, esi, arg1, 1u);
            t12 = g->ecx;
            t13 = g->edx;
            if ((int32_t)rd32(esi + 0x1cu) <= 0)
            {
                eax = rd32(esi + 0x1cu);
                ecx = t12;
                edx = t13;
            }
            else
            {
                edx = t13;
                if (rd32(esi) != 0u)
                {
                    wr32(ebx + 0xcu, 2u);
                }
                else
                {
                    wr32(ebx + 0xcu, 1u);
                }
                t14 = rd32(esi + 0x1cu);
                wr32(ebx + 0x28u, t14);
                wr8(ebx + 0x2eu, rd8(esi + 4u));
                wr8(ebx + 0x2fu, 1u);
                t15 = rd32(esi + 0x18u);
                wr32(ebx + 0x10u, t15);
                t16 = rd8(esi + 8u);
                wr8(ebx + 0x2du, (uint8_t)t16);
                t17 = rd32(esi + 0x18u);
                wr32(ebx + 0x18u, t17);
                t18 = rd32(esi + 0xcu);
                wr32(ebx + 0x20u, t18);
                if ((int32_t)rd32(esi + 0x14u) <= 0)
                {
                    eax = rd32(esi + 0x14u);
                    ecx = (t14 & 0xffffff00u) | t16;
                    edx = t17;
                    eax = 0xffffffffu;
                }
                else
                {
                    ecx = (t14 & 0xffffff00u) | t16;
                    edx = t17;
                    eax = rd32(esi + 0x10u);
                }
                wr32(ebx + 0x1cu, eax);
                wr8(ebx + 0x2cu, 0x7fu);
                wr32(ebx + 0x14u, 0x400u);
            }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
            t19 = g->ecx;
            t20 = g->edx;
            ecx = t19;
            edx = t20;
        }
    }
    if ((int32_t)rd32(ebx + 0x10u) <= 0)
    {
        eax = rd32(ebx + 0x10u);
        loc_4 = self;
        goto L_1024b443;
    }
    if ((int32_t)rd32(ebx + 0x14u) >= 1024)
    {
        eax = rd32(ebx + 0x14u);
        zf = rd32(ebx + 0x14u) == 0x400u;
        goto L_1024b103;
    }
    eax = rd32(ebx + 0x14u);
    if (eax != rd32(ebp + 0x94u)) goto L_1024b109;
    zf = eax == 0x400u;
L_1024b103: ;
    if (!zf)
    {
        loc_4 = self;
        goto L_1024b443;
    }
L_1024b109: ;
    if (rd32(ebp + 4u) != 0u)
    {
        t21 = rd32(ebp + 0x38u);
        wr32(ebp + 0x94u, 0xffffffffu);
        if (t21 != 0u)
        {
            eax = t21;
            g->eax = eax;
            g->edx = edx;
            t22 = rd32(COW_IMG(0x103291c8u));
            g->esp = sp0 - 0x14u;
            t23 = cow_thiscall(g, t22, ecx, 2, eax, 0u);
            t24 = g->ecx;
            t25 = g->edx;
            if (t23 == 0u)
            {
                eax = t23;
                ecx = t24;
            }
            else
            {
                eax = t23;
                ecx = t24;
                edx = t25;
                esi = t22;
                edi = rd32(COW_IMG(0x103290f8u));
L_1024b136: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t26 = cow_thiscall(g, edi, ecx, 1, 1u);
                t27 = g->edx;
                t28 = rd32(ebp + 0x38u);
                g->edx = t27;
                t29 = cow_thiscall(g, esi, t28, 2, t28, 0u);
                t30 = g->ecx;
                t31 = g->edx;
                if (t29 != 0u)
                {
                    eax = t29;
                    ecx = t30;
                    edx = t31;
                    goto L_1024b136;
                }
                eax = t29;
                ecx = t30;
            }
            t32 = rd32(ebp + 0x38u);
            g->edx = t32;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(COW_IMG(0x10329104u)), ecx, 1, t32);
            t33 = g->edx;
            wr32(ebp + 0x38u, 0u);
            edx = t33;
        }
        if (rd32(ebp + 4u) != 0u)
        {
            eax = rd32(ebp + 4u);
            g->edx = edx;
            t34 = rd32(eax);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(t34 + 0x48u), t34, 1, eax);
            t35 = g->ecx;
            t36 = g->edx;
            if (rd32(ebp + 4u) == 0u)
            {
                edx = t36;
            }
            else
            {
                eax = rd32(ebp + 4u);
                ecx = t35;
                g->edx = rd32(eax);
                t37 = rd32(eax);
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, rd32(t37 + 8u), ecx, 1, eax);
                t38 = g->edx;
                wr32(ebp + 4u, 0u);
                edx = t38;
            }
            if (rd32(ebp) != 0u)
            {
                eax = rd32(ebp);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
                t39 = g->edx;
                wr32(ebp, 0u);
                edx = t39;
            }
        }
    }
    edi = ebp + 0xbcu;
    eax = 0u;
    ecx = 0x41u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0xcu;
    t40 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x12u, in_edi, in_esi);
    t41 = g->ecx;
    t42 = g->edx;
    g->esp = sp0 - 0x10u;
    t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t41, t42, 1, 3, 0x24u, 0x12u, in_edi);
    t44 = g->ecx;
    t45 = g->edx;
    if (t40 == 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        edi = t43;
        loc_4 = t43;
    }
    else
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        esi = t40;
        edi = t43;
        loc_4 = t43;
        if (edi != 0u)
        {
            eax = arg1;
            edx = ebp + 0xbcu - arg1;
L_1024b1d0: ;
            t46 = rd8(eax);
            wr8(eax + edx, (uint8_t)t46);
            if ((uint8_t)t46 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t46;
                goto L_1024b1d0;
            }
            eax = eax + 1u;
            wr16(esi, 1u);
            wr16(esi + 2u, rd8(ebx + 0x2eu));
            wr16(esi + 0xeu, rd8(ebx + 0x2du));
            wr16(esi + 0xcu, (uint16_t)(uint32_t)((int32_t)(rd8(ebx + 0x2eu) * rd8(ebx + 0x2du) + ((uint32_t)((int32_t)(rd8(ebx + 0x2eu) * rd8(ebx + 0x2du)) >> 0x1fu) & 7u)) >> 3u));
            t47 = rd32(ebx + 0x24u);
            t48 = rd32(ebx + 0x20u);
            wr16(esi + 0x10u, 0u);
            t49 = t47 + t48 & 0x7fffffffu;
            t50 = rd16(esi + 0xcu);
            wr32(esi + 4u, t49);
            t51 = t50 * (t47 + t48 & 0x7fffffffu);
            wr32(esi + 8u, t51);
            eax = 0u;
            ecx = 9u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(loc_4, 0x24u);
            wr32(loc_4 + 0x14u, rd32(COW_IMG(0x1034a118u)));
            wr32(loc_4 + 0x18u, rd32(COW_IMG(0x1034a11cu)));
            wr32(loc_4 + 0x1cu, rd32(COW_IMG(0x1034a120u)));
            wr32(loc_4 + 0x20u, rd32(COW_IMG(0x1034a124u)));
            t52 = rd32(COW_IMG(0x106690f8u));
            wr32(loc_4 + 0x10u, esi);
            wr32(loc_4 + 4u, t52 | 0x50080u);
            wr32(loc_4 + 8u, 0xc0000u);
            g->eax = loc_4;
            g->edx = rd32(rd32(COW_IMG(0x106690f4u)));
            t53 = rd32(COW_IMG(0x106690f4u));
            t54 = rd32(rd32(COW_IMG(0x106690f4u)));
            g->esp = sp0 - 0x14u;
            t55 = cow_thiscall(g, rd32(t54 + 0xcu), t53, 4, t53, loc_4, ebp, 0u);
            t56 = g->ecx;
            t57 = g->edx;
            if ((int32_t)t55 < 0)
            {
                eax = t55;
                ecx = t56;
                edx = t57;
            }
            else
            {
                g->eax = rd32(ebp);
                g->edx = rd32(rd32(ebp));
                t58 = rd32(ebp);
                t59 = rd32(rd32(ebp));
                g->esp = sp0 - 0x14u;
                t60 = cow_thiscall(g, rd32(t59), ebp + 4u, 3, t58, COW_IMG(0x1034185cu), ebp + 4u);
                t61 = g->ecx;
                t62 = g->edx;
                if ((int32_t)t60 >= 0)
                {
                    eax = t60;
                    ecx = t61;
                    edx = t62;
                }
                else
                {
                    ecx = t61;
                    edx = t62;
                    if (rd32(ebp) == 0u)
                    {
                        eax = rd32(ebp);
                    }
                    else
                    {
                        eax = rd32(ebp);
                        g->eax = eax;
                        g->edx = edx;
                        t63 = rd32(eax);
                        g->esp = sp0 - 0x14u;
                        t64 = cow_thiscall(g, rd32(t63 + 8u), t63, 1, eax);
                        t65 = g->ecx;
                        t66 = g->edx;
                        wr32(ebp, 0u);
                        eax = t64;
                        ecx = t65;
                        edx = t66;
                    }
                }
            }
            edi = loc_4;
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t67 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t68 = g->ecx;
        t69 = g->edx;
        eax = t67;
        ecx = t68;
        edx = t69;
    }
    if (edi != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        t70 = g->edx;
        edx = t70;
    }
    if (rd32(ebp) == 0u)
    {
        eax = rd32(ebp);
        ecx = 0u;
        goto L_1024b443;
    }
    if ((int32_t)rd32(ebx + 0x14u) < 0)
    {
        eax = rd32(ebx + 0x14u);
        goto L_1024b31b;
    }
    eax = rd32(ebx + 0x14u);
    if ((int32_t)eax >= 1024) goto L_1024b31b;
    t71 = rd32(eax * 4u + rd32(COW_IMG(0x106690bcu)));
    wr32(ebp + 0x98u, t71);
    wr32(ebp + 0x88u, t71);
    wr32(ebp + 0xb0u, t71);
    t72 = rd32(ebx + 0x14u);
    t73 = rd32(COW_IMG(0x106690bcu));
    wr32(t73 + t72 * 4u, 0u);
    eax = t72;
    edx = t73;
L_1024b32d: ;
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x106690ecu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x106690ecu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        d74 = fr(g, (double)(int32_t)rd32(ebx + 0x18u) * (double)rdf32(COW_IMG(0x106690ecu)));
        fpush(g, d74);
        g->esp = sp0 - 0x14u;
        t75 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        wr32(ebp + 0x98u, t75);
        wr32(ebp + 0x88u, t75);
        wr32(ebp + 0xb0u, t75);
        wr32(COW_IMG(0x106690ecu), 0u);
    }
    esi = ebx;
    edi = ebp + 8u;
    ecx = 0xcu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t76 = rd32(ebx + 0x14u);
    wr32(ebp + 0x94u, t76);
    t77 = rd8(ebx + 0x2cu);
    wr8(ebp + 0xb8u, (uint8_t)t77);
    wr32(ebp + 0x40u, ebp);
    g->eax = t76;
    g->edx = ebp + 0x3cu;
    g->esp = sp0 - 0x14u;
    t78 = cow_thiscall(g, rd32(COW_IMG(0x10329100u)), (ecx & 0xffffff00u) | t77, 6, 0u, 0u, COW_IMG(0x10247960u), ebp + 0x38u, 0u, ebp + 0x3cu);
    t79 = g->ecx;
    t80 = g->edx;
    wr32(ebp + 0x38u, t78);
    wr32(ebp + 0x44u, t78);
    if (t78 == 0u)
    {
        edx = t80;
        wr32(ebp + 0x94u, 0xffffffffu);
    }
    else
    {
        eax = t78;
        ecx = t79;
        edx = t80;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(COW_IMG(0x10329210u)), ecx, 2, eax, 1u);
        t81 = g->edx;
        edx = t81;
    }
    wr32(ebp + 0x54u, 0u);
    q82 = (int64_t)cow_muls(0x88888889u, arg3 * 0x32u);
    t83 = (uint32_t)((int32_t)(arg3 * 0x32u + cow_qhi(q82)) >> 5u);
    t84 = t83 + (t83 >> 0x1fu);
    if (t83 + (t83 >> 0x1fu) == 0u)
    {
        eax = t83 >> 0x1fu;
        edx = t84;
        goto L_1024b428;
    }
    esi = t84;
    t85 = rd32(COW_IMG(0x103889f0u) + (arg2 & 0x7fu) * 4u);
    t86 = rd32(COW_IMG(0x103889f4u));
    wr32(ebp + 0x48u, esi);
    t87 = cow_divs(g, ((t85 - t86) << 0xcu & 0xffff00ffu) | (uint8_t)((t85 - t86) << 0xcu >> 8u | 8u) << 8u, esi);
    t88 = cow_mods(g, ((t85 - t86) << 0xcu & 0xffff00ffu) | (uint8_t)((t85 - t86) << 0xcu >> 8u | 8u) << 8u, esi);
    wr32(ebp + 0x4cu, t86 << 0xcu);
    wr32(ebp + 0x50u, t87);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
    g->edi = in_edi;
    return;
L_1024b31b: ;
    wr32(ebp + 0x98u, 0u);
    wr32(ebp + 0x88u, 0u);
    wr32(ebp + 0xb0u, 0u);
    goto L_1024b32d;
L_1024b428: ;
    t89 = rd32(COW_IMG(0x103889f0u) + (arg2 & 0x7fu) * 4u);
    wr32(ebp + 0x50u, 0u);
    wr32(ebp + 0x48u, 1u);
    wr32(ebp + 0x4cu, t89 << 0xcu);
    ecx = t89 << 0xcu;
L_1024b443: ;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
L_1024b44f: ;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024afe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024afe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
