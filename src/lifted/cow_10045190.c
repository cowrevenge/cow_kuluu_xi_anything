/* f_0x10045190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10045190(Guest* g)
{
    double d106;
    double d107;
    double d108;
    double d113;
    double d23;
    double d24;
    double d25;
    double d28;
    double d42;
    double d43;
    double d44;
    double d59;
    double d62;
    double d64;
    double d74;
    double d77;
    double d79;
    double d90;
    double d91;
    double d92;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_18_f;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_58;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
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
    uint32_t t26;
    uint32_t t27;
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
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
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
    uint32_t t78;
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
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    if (rd32(self + 0xfcu) != 0u)
    {
        eax = rd32(self + 0xfcu);
        if (rd32(eax) != 0u)
        {
            wr32(sp0 - 0x4cu, in_ebp);
            wr32(sp0 - 0x50u, in_edi);
            t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
            t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t3);
            wr32(sp0 - 0x40u, t4);
            if ((int32_t)(rd32(self + 0x10cu) >> 6u & 7u) <= 0)
            {
                ebp = t2;
                edi = t4;
            }
            else
            {
                eax = rd32(self + 0x10cu) >> 6u & 7u;
                ecx = t3;
                ebp = t2;
                edi = t4;
                loc_40 = t4;
                if ((int32_t)eax <= 2) goto L_10045307;
                if (eax != 3u) goto L_100457b8;
                g->eax = eax;
                g->edx = in_edx;
                g->esp = sp0 - 0x50u;
                t5 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
                t6 = g->edx;
                if (t5 == 0u)
                {
                    eax = t5;
                    edx = t6;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x50u;
                    t12 = cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
                    t13 = g->ecx;
                    t14 = g->edx;
                    eax = t12;
                    ecx = t13;
                    edx = t14;
                }
                else
                {
                    eax = t5;
                    edx = t6;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x50u;
                    t7 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
                    t8 = g->edx;
                    wr32(sp0 - 0x54u, ebp);
                    esi = t7;
                    edi = ebp;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    g->ecx = ecx;
                    g->edx = t8;
                    g->esp = sp0 - 0x10u;
                    t9 = cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, t7, 68u);
                    t10 = g->ecx;
                    t11 = g->edx;
                    eax = t9;
                    ecx = t10;
                    edx = t11;
                    edi = rd32(sp0 - 0x40u);
                }
                g->eax = eax;
                g->esp = sp0 - 0x50u;
                t15 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
                t16 = rd32(t15 + 0x44u);
                wr32(sp0 + 4u, t16);
                t17 = rd32(t15 + 0x48u);
                t18 = rd32(COW_IMG(0x1047cf7cu));
                wr32(sp0 + 8u, t17);
                t19 = rd32(t15 + 0x4cu);
                wr32(sp0 + 0xcu, t19);
                wr32(sp0 - 0x54u, sp0 + 4u);
                wr32(sp0 - 0x58u, ebp);
                wr32(sp0 - 0x5cu, sp0 + 4u);
                g->eax = sp0 + 4u;
                g->edx = rd32(t18);
                t20 = rd32(t18);
                t21 = cow_thiscall(g, rd32(t20 + 0x50u), t18, 3, sp0 + 4u, ebp, sp0 + 4u);
                t22 = g->edx;
                d23 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(self + 0x54u));
                wrf32(sp0 - 0x18u, (float)d23);
                d24 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(self + 0x5cu));
                wrf32(sp0 - 0x10u, (float)d24);
                if ((rd32(self + 0x10cu) & 0x1c0u) == 0x80u)
                {
                    edx = t22;
                    loc_18_f = d23;
                    loc_10_f = d24;
                    x2 = fr(g, d24 * d24);
                    x1 = fr(g, d23 * d23);
                    x0 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(self + 0x58u));
                }
                else
                {
                    eax = t21;
                    loc_18_f = d23;
                    loc_10_f = d24;
                    x2 = fr(g, d24 * d24);
                    x1 = fr(g, d23 * d23);
                    x0 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(self + 0x58u));
                    wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
                    d25 = (double)(float)fr(g, atan2(x0, fr(g, sqrt(fr(g, x2 + x1)))));
                    wrf32(sp0 - 0x54u, (float)d25);
                    wr32(sp0 - 0x58u, ebp);
                    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    t26 = rd32(rd32(COW_IMG(0x1047cf7cu)));
                    g->esp = sp0 - 0x50u;
                    cow_thiscall(g, rd32(t26 + 0x68u), rd32(COW_IMG(0x1047cf7cu)), 2, ebp, cow_f2bits(d25));
                    t27 = g->edx;
                    edx = t27;
                }
                wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
                d28 = (double)(float)-fr(g, atan2(loc_10_f, loc_18_f));
                wrf32(sp0 - 0x54u, (float)d28);
                wr32(sp0 - 0x58u, edi);
                g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
                t29 = rd32(rd32(COW_IMG(0x1047cf7cu)));
                g->esp = sp0 - 0x50u;
                t30 = cow_thiscall(g, rd32(t29 + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, edi, cow_f2bits(d28));
                wr32(sp0 - 0x54u, edi);
                wr32(sp0 - 0x58u, ebp);
                wr32(sp0 - 0x5cu, ebp);
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, edi);
L_100457a0: ;
                wr32(sp0 - 0x54u, ebp);
                wr32(sp0 - 0x58u, self + 0x60u);
                wr32(sp0 - 0x5cu, self + 0x60u);
                g->esp = sp0 - 0x50u;
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x20u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x60u, self + 0x60u, ebp);
                wr8(self + 0x187u, 1u);
            }
L_100457b8: ;
            t116 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t117 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t117 + 0xa90u, t116);
            wr32(t116 * 4u + t117 + 0xa10u, edi);
            t118 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t119 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t119 + 0xa90u, t118);
            wr32(t118 * 4u + t119 + 0xa10u, ebp);
        }
    }
    return;
L_10045307: ;
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0xfcu);
        eax = rd32(eax);
    }
    if ((rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u == 3u)
    {
        edx = rd32(eax + 0x34u) & 0xfu;
        eax = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u;
        goto L_10045337;
    }
    ecx = (rd8(eax + 0x36u) & 1u) << 4u;
    edx = rd32(eax + 0x34u) & 0xfu;
    eax = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u;
    if (eax != 6u) goto L_100455fc;
L_10045337: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t45 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t46 = g->edx;
    if (t45 == 0u)
    {
        eax = t45;
        edx = t46;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
        t49 = g->edx;
        edx = t49;
    }
    else
    {
        eax = t45;
        edx = t46;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t47 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
        t48 = g->edx;
        esi = t47;
        edi = ebp;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        edx = t48;
        edi = rd32(sp0 - 0x40u);
    }
    wr32(ebp + 0x30u, 0u);
    wr32(ebp + 0x34u, 0u);
    wr32(ebp + 0x38u, 0u);
    wr32(ebp + 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x54u, ebp);
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, ebp);
    wr32(sp0 - 0x54u, ebp + 0x10u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, ebp + 0x10u);
    wr32(sp0 - 0x54u, ebp + 0x20u);
    g->eax = ebp + 0x20u;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t50 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t51 = cow_thiscall(g, rd32(t50 + 0xa4u), rd32(COW_IMG(0x1047cf7cu)), 1, ebp + 0x20u);
    t52 = g->edx;
    esi = ebp;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t53 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    if (t53 == 0u)
    {
        t84 = rd32(self + 0x54u);
        wr32(sp0 - 0x3cu, t84);
        t85 = rd32(sp0 + 4u);
        wr32(sp0 - 0x30u, t85);
        t86 = rd32(self + 0x58u);
        wr32(sp0 - 0x38u, t86);
        t87 = rd32(sp0 + 8u);
        wr32(sp0 - 0x2cu, t87);
        t88 = rd32(self + 0x5cu);
        wr32(sp0 - 0x34u, t88);
        t89 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x28u, t89);
        loc_3c = t84;
        loc_30 = t85;
        loc_38 = t86;
        loc_2c = t87;
        loc_34 = t88;
        loc_28 = t89;
    }
    else
    {
        t54 = rd32(self + 0x54u);
        wr32(sp0 - 0x3cu, t54);
        t55 = rd32(self + 0x58u);
        wr32(sp0 - 0x38u, t55);
        t56 = rd32(self + 0x5cu);
        wr32(sp0 - 0x34u, t56);
        g->eax = t55;
        g->edx = t54;
        g->esp = sp0 - 0x50u;
        t57 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t58 = g->edx;
        d59 = (double)(float)fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(t57));
        wrf32(sp0 - 0x3cu, (float)d59);
        g->edx = t58;
        t60 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t61 = g->edx;
        d62 = (double)(float)fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(t60 + 4u));
        wrf32(sp0 - 0x38u, (float)d62);
        t63 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        wr32(sp0 - 0x54u, sp0 - 0x3cu);
        d64 = (double)(float)fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(t63 + 8u));
        wrf32(sp0 - 0x34u, (float)d64);
        g->eax = sp0 - 0x3cu;
        g->edx = rd32(COW_IMG(0x1047cf7cu));
        t65 = rd32(COW_IMG(0x1047cf7cu));
        t66 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t67 = cow_thiscall_cdecl(g, COW_IMG(0x100473f0u), self, 1, sp0 - 0x3cu);
        t68 = g->edx;
        wr32(sp0 - 0x58u, t67);
        wr32(sp0 - 0x5cu, sp0 - 0x3cu);
        g->esp = sp0 - 0x54u;
        cow_thiscall(g, rd32(t66 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 2, sp0 - 0x3cu, t67);
        t69 = rd32(sp0 + 8u);
        wr32(sp0 - 0x2cu, t69);
        wr32(sp0 - 0x34u, rd32(sp0));
        t70 = rd32(sp0 + 4u);
        wr32(sp0 - 0x30u, t70);
        g->eax = t70;
        g->edx = rd32(sp0);
        t71 = rd32(sp0);
        t72 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t73 = g->edx;
        d74 = (double)(float)fr(g, (double)rdf32(sp0 - 0x34u) * (double)rdf32(t72));
        wrf32(sp0 - 0x34u, (float)d74);
        g->edx = t73;
        t75 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        t76 = g->edx;
        d77 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(t75 + 4u));
        wrf32(sp0 - 0x30u, (float)d77);
        t78 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
        wr32(sp0 - 0x58u, sp0 - 0x34u);
        d79 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(t78 + 8u));
        wrf32(sp0 - 0x2cu, (float)d79);
        g->eax = sp0 - 0x34u;
        g->edx = rd32(COW_IMG(0x1047cf7cu));
        t80 = rd32(COW_IMG(0x1047cf7cu));
        t81 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t82 = cow_thiscall_cdecl(g, COW_IMG(0x100473f0u), self, 1, sp0 - 0x34u);
        t83 = g->edx;
        wr32(sp0 - 0x5cu, t82);
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(t81 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 4, sp0 - 0x34u, t82, sp0 - 0x34u, sp0 - 0x3cu);
    }
    wr32(sp0 - 0x54u, ebp);
    d90 = (double)(float)fr(g, cow_bits2f(loc_3c) - cow_bits2f(loc_30));
    wrf32(sp0 - 0xcu, (float)d90);
    wr32(sp0 - 0x24u, cow_f2bits(d90));
    d91 = (double)(float)fr(g, cow_bits2f(loc_38) - cow_bits2f(loc_2c));
    wrf32(sp0 - 8u, (float)d91);
    wr32(sp0 - 0x20u, cow_f2bits(d91));
    d92 = (double)(float)fr(g, cow_bits2f(loc_34) - cow_bits2f(loc_28));
    wrf32(sp0 - 4u, (float)d92);
    wr32(sp0 - 0x1cu, cow_f2bits(d92));
    g->esp = sp0 - 0x10u;
    cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), loc_3c, loc_38, loc_34, loc_30, loc_2c, loc_28, cow_f2bits(d90), cow_f2bits(d91), cow_f2bits(d92), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, cow_f2bits(d90), 68u);
    wr32(sp0 - 0x54u, sp0 - 0x24u);
    wr32(sp0 - 0x58u, ebp);
    wr32(sp0 - 0x5cu, sp0 - 0x24u);
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->edx = sp0 - 0x24u;
    t93 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x50u;
    t94 = cow_thiscall(g, rd32(t93 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x24u, ebp, sp0 - 0x24u);
    t95 = g->edx;
    if (!(rd8(self + 0x10cu) & 1u))
    {
        eax = t94;
        edx = t95;
    }
    else
    {
        t96 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x54u, t96);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0xbf800000u);
        t97 = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
        wr32(sp0 - 0x58u, t97);
        wr32(sp0 - 0x5cu, ebp);
        g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->edx = t97;
        t98 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t99 = rd32(COW_IMG(0x1047cf7cu));
        g->esp = sp0 - 0x50u;
        t100 = cow_thiscall(g, rd32(t98 + 0x24u), t99, 3, ebp, t97, t96);
        t101 = g->ecx;
        t102 = g->edx;
        wr32(sp0 - 0x54u, ebp);
        g->esp = sp0 - 0x10u;
        cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), 0u, 0u}, g->ecx, g->edx, t100, 68u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x58u, ebp);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->edx = sp0 - 0x18u;
        t103 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x50u;
        t104 = cow_thiscall(g, rd32(t103 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x18u, ebp, sp0 - 0x18u);
        t105 = g->edx;
        eax = t104;
        edx = t105;
    }
    edi = rd32(sp0 - 0x40u);
L_1004558d: ;
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
    if (!(rd8(self + 0x10cu) & 1u))
    {
        d106 = (double)rdf32(sp0 - 0x24u);
        d107 = (double)rdf32(sp0 - 0x1cu);
        if ((rd32(self + 0x10cu) & 0x1c0u) == 0x80u)
        {
            eax = rd32(self + 0x10cu) & 0x1c0u;
            x1 = fr(g, d107 * d107);
            x0 = fr(g, d106 * d106);
        }
        else
        {
            eax = rd32(self + 0x10cu) & 0x1c0u;
            x1 = fr(g, d107 * d107);
            x0 = fr(g, d106 * d106);
            wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
            d108 = (double)(float)fr(g, atan2((double)rdf32(sp0 - 0x20u), fr(g, sqrt(fr(g, x0 + x1)))));
            wrf32(sp0 - 0x54u, (float)d108);
            wr32(sp0 - 0x58u, edi);
            g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t109 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            g->esp = sp0 - 0x50u;
            cow_thiscall(g, rd32(t109 + 0x68u), rd32(COW_IMG(0x1047cf7cu)), 2, edi, cow_f2bits(d108));
            t110 = g->edx;
            wr32(sp0 - 0x54u, edi);
            wr32(sp0 - 0x58u, ebp);
            wr32(sp0 - 0x5cu, ebp);
            g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t111 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t112 = cow_thiscall(g, rd32(t111 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, edi);
            eax = t112;
        }
        wr32(sp0 - 0x54u, rd32(COW_IMG(0x1047cf7cu)));
        d113 = (double)(float)-fr(g, atan2((double)rdf32(sp0 - 0x1cu), (double)rdf32(sp0 - 0x24u)));
        wrf32(sp0 - 0x54u, (float)d113);
        wr32(sp0 - 0x58u, edi);
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t114 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(t114 + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, edi, cow_f2bits(d113));
        t115 = g->edx;
        wr32(sp0 - 0x54u, edi);
        wr32(sp0 - 0x58u, ebp);
        wr32(sp0 - 0x5cu, ebp);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, edi);
    }
    else
    {
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x3cu), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, sp0 - 0x24u, sp0 - 0x18u);
        wr32(sp0 - 0x54u, sp0 - 0xcu);
        wr32(sp0 - 0x58u, ebp + 0x10u);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x9cu), rd32(COW_IMG(0x1047cf7cu)), 2, ebp + 0x10u, sp0 - 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        wr32(sp0 - 0x58u, ebp);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x9cu), rd32(COW_IMG(0x1047cf7cu)), 2, ebp, sp0 - 0x24u);
        wr32(sp0 - 0x54u, ebp);
        wr32(sp0 - 0x58u, ebp + 0x20u);
        wr32(sp0 - 0x5cu, ebp + 0x20u);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x3cu), rd32(COW_IMG(0x1047cf7cu)), 3, ebp + 0x20u, ebp + 0x20u, ebp);
    }
    goto L_100457a0;
L_100455fc: ;
    if (rd8(self + 0x10cu) & 1u)
    {
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0xbf800000u);
        if (rd32(self + 0xfcu) == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0xfcu);
            eax = rd32(eax);
        }
        if ((rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u == 0x14u) goto L_100456be;
        edx = rd32(eax + 0x34u) & 0xfu;
        eax = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u;
        if ((int32_t)eax < 1) goto L_10045652;
        if ((int32_t)eax < 14) goto L_10045657;
L_10045652: ;
        if ((int32_t)eax <= 15) goto L_100456be;
L_10045657: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t31 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
        t32 = g->edx;
        if (t31 == 0u)
        {
            eax = t31;
            edx = t32;
            g->esp = sp0 - 0x50u;
            cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
        }
        else
        {
            eax = t31;
            edx = t32;
            g->eax = eax;
            g->esp = sp0 - 0x50u;
            t33 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            esi = t33;
            edi = ebp;
            ecx = 0x10u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t34 = rd32(sp0 - 0x40u);
            wr32(ebp + 0x30u, 0u);
            wr32(ebp + 0x34u, 0u);
            wr32(ebp + 0x38u, 0u);
            wr32(ebp + 0x3cu, 0x3f800000u);
            edi = t34;
        }
        wr32(sp0 - 0x54u, ebp);
        t35 = rd32(COW_IMG(0x1047bfa8u)) + 0xb90u;
        wr32(sp0 - 0x58u, t35);
        wr32(sp0 - 0x5cu, ebp);
        g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->edx = t35;
        t36 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t37 = rd32(COW_IMG(0x1047cf7cu));
        g->esp = sp0 - 0x50u;
        t38 = cow_thiscall(g, rd32(t36 + 0x24u), t37, 3, ebp, t35, ebp);
        t39 = g->ecx;
        t40 = g->edx;
        wr32(sp0 - 0x54u, ebp);
        g->esp = sp0 - 0x10u;
        cow_bridge_indirect(g, COW_IMG(0x10045800u), 0u, 17u, (const uint32_t[]){ebp, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, t38, 68u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x58u, ebp);
        loc_58 = ebp;
L_100456d0: ;
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x18u, loc_58, sp0 - 0x18u);
    }
    d42 = (double)(float)fr(g, (double)rdf32(self + 0x54u) - (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 0xcu, (float)d42);
    wr32(sp0 - 0x24u, cow_f2bits(d42));
    d43 = (double)(float)fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 8u, (float)d43);
    wr32(sp0 - 0x20u, cow_f2bits(d43));
    d44 = (double)(float)fr(g, (double)rdf32(self + 0x5cu) - (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 - 4u, (float)d44);
    wr32(sp0 - 0x1cu, cow_f2bits(d44));
    eax = cow_f2bits(d42);
    edx = cow_f2bits(d44);
    loc_24 = cow_f2bits(d42);
    loc_20 = cow_f2bits(d43);
    loc_1c = cow_f2bits(d44);
    goto L_1004558d;
L_100456be: ;
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    t41 = rd32(COW_IMG(0x1047bfa8u)) + 0xc10u;
    wr32(sp0 - 0x58u, t41);
    loc_58 = t41;
    loc_44 = in_ebx;
    loc_48 = in_esi;
    loc_4c = in_ebp;
    loc_50 = in_edi;
    goto L_100456d0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10045190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10045190(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
