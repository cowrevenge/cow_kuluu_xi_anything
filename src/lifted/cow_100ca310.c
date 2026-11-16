/* f_0x100ca310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ca310(Guest* g)
{
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d71;
    double d73;
    double d83;
    double d97;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t36;
    uint32_t t4;
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
    uint32_t t7;
    uint32_t t70;
    uint32_t t72;
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
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x790u) == 0u)
    {
        loc_4 = self;
    }
    else
    {
        ebx = rd32(self + 0x790u);
        if (rd32(ebx + 0x70u) == 0u)
        {
            loc_4 = self;
        }
        else
        {
            ecx = rd32(ebx + 0x70u);
            g->esp = sp0 - 0xcu;
            t1 = cow_call_regs(g, COW_IMG(0x100983a0u), in_eax, ecx, in_edx, 1, 0);
            t2 = g->edx;
            if (t1 == 0u)
            {
                loc_4 = self;
            }
            else
            {
                edx = t2;
                ebp = t1;
                g->eax = rd32(ebp);
                t3 = rd32(ebp);
                g->esp = sp0 - 0x14u;
                t4 = cow_thiscall(g, rd32(t3 + 0x1bcu), ebp, 0);
                g->edx = rd32(ebp);
                t5 = rd32(ebp);
                t6 = cow_thiscall(g, rd32(t5 + 0x1c0u), ebp, 0);
                t7 = g->ecx;
                t8 = g->edx;
                g->eax = ebx + 0x34u;
                g->edx = t8;
                t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x34u, t4);
                t10 = g->edx;
                g->edx = t10;
                g->esp = sp0 - 0x1cu;
                t11 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0xc4u, t4);
                t12 = g->edx;
                g->esp = sp0 - 0x14u;
                t13 = cow_thiscall(g, COW_IMG(0x100a57c0u), ebx, 1, t4);
                t14 = g->ecx;
                g->ecx = t14;
                g->edx = ebx + 0x5c4u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5c4u, t4);
                t15 = g->ecx;
                t16 = g->edx;
                g->eax = ebx + 0x5fcu;
                g->edx = t16;
                g->esp = sp0 - 0x1cu;
                t17 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5fcu, t4);
                t18 = g->edx;
                wr32(ebx + 0x608u, 0x3f800000u);
                g->ecx = ebx + 0x9d8u;
                g->edx = t18;
                g->esp = sp0 - 0x24u;
                t19 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x9d8u, t4);
                t20 = g->ecx;
                t21 = g->edx;
                wr32(ebx + 0x9e4u, 0x3f800000u);
                g->ecx = t20;
                g->edx = t21;
                g->esp = sp0 - 0x2cu;
                t22 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x44u, t6);
                t23 = g->ecx;
                t24 = g->edx;
                d25 = (double)rdf32(ebx + 0x44u);
                if ((cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t23;
                    edx = t24;
                    esi = ebx + 0x44u;
                    edi = t6;
                }
                else
                {
                    eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t23;
                    edx = t24;
                    esi = ebx + 0x44u;
                    edi = t6;
                    d26 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d26);
                }
                if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d27 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d27);
                }
                d28 = (double)rdf32(ebx + 0x48u);
                if ((cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d29 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d29);
                }
                d30 = (double)rdf32(ebx + 0x48u);
                if (!(d30 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d31 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d31);
                }
                d32 = (double)rdf32(ebx + 0x4cu);
                if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d33 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d33);
                }
                d34 = (double)rdf32(ebx + 0x4cu);
                if (!(d34 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d35 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d35);
                }
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t36 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi, edi);
                if ((cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d37 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d37);
                }
                if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d38 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d38);
                }
                d39 = (double)rdf32(ebx + 0x48u);
                if ((cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d40 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d40);
                }
                d41 = (double)rdf32(ebx + 0x48u);
                if (!(d41 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d42 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d42);
                }
                d43 = (double)rdf32(ebx + 0x4cu);
                if ((cow_fsw(g, d43, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d44 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d44);
                }
                d45 = (double)rdf32(ebx + 0x4cu);
                if (d45 < (double)rdf32(COW_IMG(0x10329d28u)))
                {
                    d46 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d46);
                }
                wr32(ebx + 0xe4u, rd32(edi));
                t47 = rd32(edi + 4u);
                wr32(ebx + 0xe8u, t47);
                t48 = rd32(edi + 8u);
                wr32(ebx + 0xecu, t48);
                t49 = rd32(edi + 0xcu);
                wr32(ebx + 0xf0u, t49);
                wr32(ebx + 0xe4u, rd32(edi));
                t50 = rd32(edi + 4u);
                wr32(ebx + 0xe8u, t50);
                t51 = rd32(edi + 8u);
                wr32(ebx + 0xecu, t51);
                t52 = rd32(edi + 0xcu);
                t53 = rd32(ebx);
                wr32(ebx + 0xf0u, t52);
                g->eax = t52;
                g->edx = t53;
                g->esp = sp0 - 0x14u;
                t54 = cow_thiscall(g, rd32(t53 + 0x318u), ebx, 0);
                t55 = g->ecx;
                t56 = g->edx;
                if (t54 != 0u)
                {
                    edx = t56;
                }
                else
                {
                    eax = t54;
                    ecx = t55;
                    edx = t56;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t57 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x61cu, edi);
                    t58 = g->edx;
                    d59 = (double)rdf32(ebx + 0x61cu);
                    if ((cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        edx = t58;
                        esi = ebx + 0x61cu;
                    }
                    else
                    {
                        eax = cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        edx = t58;
                        esi = ebx + 0x61cu;
                        d60 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(esi, (float)d60);
                    }
                    if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        d61 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(esi, (float)d61);
                    }
                    d62 = (double)rdf32(ebx + 0x620u);
                    if ((cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d62, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        d63 = fr(g, (double)rdf32(ebx + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x620u, (float)d63);
                    }
                    d64 = (double)rdf32(ebx + 0x620u);
                    if (!(d64 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d64, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d64, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        d65 = fr(g, (double)rdf32(ebx + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x620u, (float)d65);
                    }
                    d66 = (double)rdf32(ebx + 0x624u);
                    if ((cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d66, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        d67 = fr(g, (double)rdf32(ebx + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x624u, (float)d67);
                    }
                    d68 = (double)rdf32(ebx + 0x624u);
                    if (d68 < (double)rdf32(COW_IMG(0x10329d28u)))
                    {
                        d69 = fr(g, (double)rdf32(ebx + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x624u, (float)d69);
                    }
                }
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, COW_IMG(0x10084540u), ebx, 0);
                t70 = g->edx;
                d71 = cow_take_float(g);
                wrf32(ebx + 0x754u, (float)d71);
                t72 = rd32(ebx);
                d73 = fr(g, fr(g, d71 * (double)rdf32(COW_IMG(0x1032ae5cu))) + (double)rdf32(COW_IMG(0x1032961cu)));
                wrf32(ebx + 0x75cu, (float)d73);
                g->eax = rd32(ebp);
                g->edx = t70;
                t74 = rd32(ebp);
                t75 = cow_thiscall(g, rd32(t74 + 0x218u), ebp, 0);
                t76 = g->edx;
                t77 = cow_thiscall(g, rd32(t72 + 0x214u), ebx, 1, t75);
                g->edx = rd32(ebp);
                t78 = rd32(ebp);
                t79 = rd32(ebx);
                t80 = cow_thiscall(g, rd32(t78 + 0x220u), ebp, 0);
                t81 = g->ecx;
                t82 = g->edx;
                d83 = cow_take_float(g);
                g->edx = t82;
                cow_thiscall(g, rd32(t79 + 0x21cu), ebx, 1, cow_f2bits((double)(float)d83));
                t84 = g->edx;
                g->eax = rd32(ebp);
                g->edx = t84;
                t85 = rd32(ebp);
                t86 = rd32(ebx);
                t87 = cow_thiscall(g, rd32(t85 + 0x188u), ebp, 0);
                t88 = g->edx;
                cow_thiscall(g, rd32(t86 + 0x184u), ebx, 1, t87);
                eax = ebx + 0x388u;
                edx = ebp - ebx;
                loc_4 = 5u;
L_100ca6c5: ;
                esi = eax + edx;
                edi = eax;
                ecx = 0x1au;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if (loc_4 != 1u)
                {
                    eax = eax + 0x68u;
                    loc_4 = loc_4 - 1u;
                    goto L_100ca6c5;
                }
                eax = eax + 0x68u;
                loc_4 = loc_4 - 1u;
                t89 = rd32(ebp + 0x590u);
                wr32(ebx + 0x590u, t89);
                t90 = (edx & 0xffffff00u) | rd8(ebp + 0x17cu);
                g->edx = t90;
                g->esp = sp0 - 0x14u;
                cow_call_regs(g, COW_IMG(0x100aaee0u), eax, ebx, g->edx, 0, 1, t90);
                t91 = g->edx;
                g->eax = rd32(ebp);
                g->edx = t91;
                t92 = rd32(ebp);
                t93 = rd32(ebx);
                t94 = cow_thiscall(g, rd32(t92 + 0x204u), ebp, 0);
                t95 = g->ecx;
                t96 = g->edx;
                d97 = cow_take_float(g);
                t98 = cow_thiscall(g, rd32(t93 + 0x208u), ebx, 1, cow_f2bits((double)(float)d97));
                t99 = cow_thiscall(g, rd32(rd32(ebp) + 0x198u), ebp, 0);
                wr8(ebx + 0x5e0u, (uint8_t)t99);
            }
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ca310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ca310(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
