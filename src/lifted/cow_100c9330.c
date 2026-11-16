/* f_0x100c9330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100c9330(Guest* g)
{
    double d110;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d60;
    double d61;
    double d62;
    double d78;
    double d92;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
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
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t27;
    uint32_t t3;
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
    uint32_t t6;
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
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    if (rd32(self + 0x768u) == 0u)
    {
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        ebx = rd32(self + 0x768u);
        wr32(sp0 - 0x30u, in_esi);
        wr32(sp0 - 0x34u, in_edi);
        wr32(sp0 - 0x38u, self + 0x5fcu);
        wr32(sp0 - 0x3cu, ebx + 0x34u);
        g->eax = ebx + 0x34u;
        g->edx = in_edx;
        g->esp = sp0 - 0x34u;
        t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x34u, self + 0x5fcu);
        t2 = g->edx;
        wr32(sp0 - 0x40u, self + 0x5fcu);
        wr32(sp0 - 0x44u, ebx + 0xc4u);
        g->edx = t2;
        g->esp = sp0 - 0x3cu;
        t3 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0xc4u, self + 0x5fcu);
        t4 = g->edx;
        wr32(sp0 - 0x38u, self + 0x5fcu);
        g->esp = sp0 - 0x34u;
        t5 = cow_thiscall(g, COW_IMG(0x100a57c0u), ebx, 1, self + 0x5fcu);
        t6 = g->ecx;
        wr32(sp0 - 0x38u, self + 0x5fcu);
        wr32(sp0 - 0x3cu, ebx + 0x5c4u);
        g->ecx = t6;
        g->edx = ebx + 0x5c4u;
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5c4u, self + 0x5fcu);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x40u, self + 0x5fcu);
        wr32(sp0 - 0x44u, ebx + 0x5fcu);
        g->eax = ebx + 0x5fcu;
        g->esp = sp0 - 0x3cu;
        t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5fcu, self + 0x5fcu);
        wr32(sp0 - 0x48u, self + 0x9d8u);
        wr32(sp0 - 0x4cu, ebx + 0x9d8u);
        wr32(ebx + 0x608u, 0x3f800000u);
        g->ecx = self + 0x9d8u;
        g->edx = ebx + 0x9d8u;
        g->esp = sp0 - 0x44u;
        t10 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x9d8u, self + 0x9d8u);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(ebx + 0x9e4u, 0x3f800000u);
        wr32(sp0 - 0x50u, self + 0x61cu);
        wr32(sp0 - 0x54u, ebx + 0x44u);
        g->ecx = t11;
        g->edx = t12;
        g->esp = sp0 - 0x4cu;
        t13 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x44u, self + 0x61cu);
        t14 = g->ecx;
        t15 = g->edx;
        d16 = (double)rdf32(ebx + 0x44u);
        if ((cow_fsw(g, d16, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t14;
            edx = t15;
            esi = ebx + 0x44u;
        }
        else
        {
            eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ecx = t14;
            edx = t15;
            esi = ebx + 0x44u;
            d17 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi, (float)d17);
        }
        if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d18 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi, (float)d18);
        }
        d19 = (double)rdf32(ebx + 0x48u);
        if ((cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d20 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x48u, (float)d20);
        }
        d21 = (double)rdf32(ebx + 0x48u);
        if (!(d21 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d22 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x48u, (float)d22);
        }
        d23 = (double)rdf32(ebx + 0x4cu);
        if ((cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d24 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x4cu, (float)d24);
        }
        d25 = (double)rdf32(ebx + 0x4cu);
        if (!(d25 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d26 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x4cu, (float)d26);
        }
        wr32(sp0 - 0x38u, self + 0x61cu);
        wr32(sp0 - 0x3cu, esi);
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t27 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi, self + 0x61cu);
        if ((cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d28 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi, (float)d28);
        }
        if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d29 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(esi, (float)d29);
        }
        d30 = (double)rdf32(ebx + 0x48u);
        if ((cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d31 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x48u, (float)d31);
        }
        d32 = (double)rdf32(ebx + 0x48u);
        if (!(d32 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d33 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x48u, (float)d33);
        }
        d34 = (double)rdf32(ebx + 0x4cu);
        if ((cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d35 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x4cu, (float)d35);
        }
        d36 = (double)rdf32(ebx + 0x4cu);
        if (d36 < (double)rdf32(COW_IMG(0x10329d28u)))
        {
            d37 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx + 0x4cu, (float)d37);
        }
        t38 = rd32(self + 0x61cu);
        wr32(ebx + 0xe4u, t38);
        t39 = rd32(self + 0x620u);
        wr32(ebx + 0xe8u, t39);
        t40 = rd32(self + 0x624u);
        wr32(ebx + 0xecu, t40);
        t41 = rd32(self + 0x628u);
        wr32(ebx + 0xf0u, t41);
        t42 = rd32(self + 0x61cu);
        wr32(ebx + 0xe4u, t42);
        t43 = rd32(self + 0x620u);
        wr32(ebx + 0xe8u, t43);
        t44 = rd32(self + 0x624u);
        t45 = rd32(ebx);
        wr32(ebx + 0xecu, t44);
        t46 = rd32(self + 0x628u);
        wr32(ebx + 0xf0u, t46);
        g->eax = t44;
        g->edx = t45;
        g->esp = sp0 - 0x34u;
        t47 = cow_thiscall(g, rd32(t45 + 0x318u), ebx, 0);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 != 0u)
        {
            edx = t49;
        }
        else
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            wr32(sp0 - 0x38u, self + 0x61cu);
            wr32(sp0 - 0x3cu, ebx + 0x61cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t50 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x61cu, self + 0x61cu);
            t51 = g->edx;
            d52 = (double)rdf32(ebx + 0x61cu);
            if ((cow_fsw(g, d52, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d52, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                edx = t51;
                esi = ebx + 0x61cu;
            }
            else
            {
                eax = cow_fsw(g, d52, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                edx = t51;
                esi = ebx + 0x61cu;
                d53 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi, (float)d53);
            }
            if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d54 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi, (float)d54);
            }
            d55 = (double)rdf32(ebx + 0x620u);
            if ((cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d55, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d56 = fr(g, (double)rdf32(ebx + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x620u, (float)d56);
            }
            d57 = (double)rdf32(ebx + 0x620u);
            if (!(d57 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d58 = fr(g, (double)rdf32(ebx + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x620u, (float)d58);
            }
            d59 = (double)rdf32(ebx + 0x624u);
            if ((cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d60 = fr(g, (double)rdf32(ebx + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x624u, (float)d60);
            }
            d61 = (double)rdf32(ebx + 0x624u);
            if (d61 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
                d62 = fr(g, (double)rdf32(ebx + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x624u, (float)d62);
            }
        }
        g->eax = rd32(self);
        g->edx = edx;
        t63 = rd32(self);
        t64 = rd32(ebx);
        g->esp = sp0 - 0x34u;
        t65 = cow_thiscall(g, rd32(t63 + 0x210u), self, 0);
        t66 = g->edx;
        wr32(sp0 - 0x38u, t65);
        t67 = cow_thiscall(g, rd32(t64 + 0x20cu), ebx, 1, t65);
        g->edx = rd32(self);
        t68 = rd32(self);
        t69 = rd32(ebx);
        t70 = cow_thiscall(g, rd32(t68 + 0x218u), self, 0);
        t71 = g->edx;
        wr32(sp0 - 0x38u, t70);
        g->edx = t71;
        cow_thiscall(g, rd32(t69 + 0x214u), ebx, 1, t70);
        t72 = g->edx;
        g->eax = rd32(self);
        g->edx = t72;
        t73 = rd32(self);
        t74 = rd32(ebx);
        t75 = cow_thiscall(g, rd32(t73 + 0x220u), self, 0);
        t76 = g->ecx;
        t77 = g->edx;
        d78 = cow_take_float(g);
        wr32(sp0 - 0x38u, t76);
        wrf32(sp0 - 0x38u, (float)(double)(float)d78);
        t79 = cow_thiscall(g, rd32(t74 + 0x21cu), ebx, 1, cow_f2bits((double)(float)d78));
        g->edx = rd32(self);
        t80 = rd32(self);
        t81 = rd32(ebx);
        t82 = cow_thiscall(g, rd32(t80 + 0x188u), self, 0);
        t83 = g->edx;
        wr32(sp0 - 0x38u, t82);
        cow_thiscall(g, rd32(t81 + 0x184u), ebx, 1, t82);
        wr32(sp0 - 0x24u, 5u);
        eax = ebx + 0x388u;
        edx = self - ebx;
        loc_24 = 5u;
L_100c96bb: ;
        esi = eax + edx;
        edi = eax;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x24u, loc_24 - 1u);
        if (loc_24 != 1u)
        {
            eax = eax + 0x68u;
            loc_24 = loc_24 - 1u;
            goto L_100c96bb;
        }
        ecx = loc_24 - 1u;
        t84 = rd32(self + 0x590u);
        wr32(ebx + 0x590u, t84);
        t85 = (ecx & 0xffffff00u) | rd8(self + 0x17cu);
        wr32(sp0 - 0x38u, t85);
        g->esp = sp0 - 0x34u;
        t86 = cow_call_regs(g, COW_IMG(0x100aaee0u), t84, ebx, g->edx, 0, 1, t85);
        g->edx = rd32(self);
        t87 = rd32(self);
        t88 = rd32(ebx);
        t89 = cow_thiscall(g, rd32(t87 + 0x204u), self, 0);
        t90 = g->ecx;
        t91 = g->edx;
        d92 = cow_take_float(g);
        wr32(sp0 - 0x38u, t90);
        wrf32(sp0 - 0x38u, (float)(double)(float)d92);
        g->edx = t91;
        cow_thiscall(g, rd32(t88 + 0x208u), ebx, 1, cow_f2bits((double)(float)d92));
        t93 = g->edx;
        g->eax = rd32(self);
        t94 = rd32(self);
        t95 = cow_thiscall(g, rd32(t94 + 0x198u), self, 0);
        wr8(ebx + 0x5e0u, (uint8_t)t95);
        wr32(sp0 - 0x20u, rd32(COW_IMG(0x1035d720u)));
        wr32(sp0 - 0x1cu, rd32(COW_IMG(0x1035d724u)));
        wr32(sp0 - 0x18u, rd32(COW_IMG(0x1035d728u)));
        wr32(sp0 - 0x14u, rd32(COW_IMG(0x1035d72cu)));
        if (rd16(self + 0xb2u) != 0u)
        {
            eax = rd32(COW_IMG(0x1035d728u));
        }
        else
        {
            eax = rd32(COW_IMG(0x1035d728u));
            if (rd16(ebx + 0xb2u) == 0u)
            {
                wr32(sp0 - 0x38u, sp0 - 0x10u);
                wr32(sp0 - 0x3cu, 0x6bu);
                g->eax = sp0 - 0x10u;
                g->edx = rd32(self);
                t96 = rd32(self);
                g->esp = sp0 - 0x34u;
                t97 = cow_thiscall(g, rd32(t96 + 0x1c8u), self, 2, 0x6bu, sp0 - 0x10u);
                t98 = g->edx;
                if ((uint8_t)t97 == 0u)
                {
                    eax = t97;
                }
                else
                {
                    eax = t97;
                    edx = t98;
                    wr32(sp0 - 0x38u, sp0 - 0x20u);
                    g->eax = eax;
                    t99 = rd32(ebx);
                    g->esp = sp0 - 0x34u;
                    t100 = cow_call_regs(g, COW_IMG(0x10084420u), g->eax, self, edx, 1, 1, sp0 - 0x20u);
                    t101 = g->edx;
                    wr32(sp0 - 0x3cu, t100);
                    t102 = cow_thiscall(g, rd32(t99 + 0x1d4u), ebx, 2, t100, sp0 - 0x20u);
                    t103 = g->ecx;
                    if ((uint8_t)t102 == 0u)
                    {
                        eax = t102;
                    }
                    else
                    {
                        ecx = t103;
                        wr32(sp0 - 0x38u, sp0 - 0x10u);
                        wr32(sp0 - 0x3cu, sp0 - 0x20u);
                        g->eax = sp0 - 0x20u;
                        g->esp = sp0 - 0x34u;
                        t104 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x20u, sp0 - 0x10u);
                        wr32(sp0 - 0x14u, 0x3f800000u);
                        eax = t104;
                    }
                }
            }
        }
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, self + 0x60cu);
        g->eax = eax;
        g->edx = self + 0x60cu;
        g->esp = sp0 - 0x34u;
        t105 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x60cu, sp0 - 0x20u);
        t106 = g->edx;
        wr32(self + 0x618u, 0x3f800000u);
        t107 = cow_fastcall(g, COW_IMG(0x10084420u), self, t106, 0);
        t108 = g->edx;
        wr32(sp0 - 0x38u, t107);
        g->edx = t108;
        cow_stdcall(g, COW_IMG(0x100222b0u), 1, t107);
        t109 = g->edx;
        d110 = cow_take_float(g);
        wrf32(sp0 - 0x1cu, (float)(double)(float)d110);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, self + 0x62cu);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 0x3f800000u);
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x62cu, sp0 - 0x20u);
        wr32(self + 0x638u, 0x3f800000u);
        esi = rd32(sp0 - 0x30u);
        edi = rd32(sp0 - 0x34u);
    }
    g->esi = esi;
    g->edi = edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c9330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c9330(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
