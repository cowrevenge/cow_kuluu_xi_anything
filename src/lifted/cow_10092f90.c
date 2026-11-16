/* f_0x10092f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10092f90(Guest* g)
{
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
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
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
    uint32_t t7;
    uint32_t t71;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x120u);
        if ((int8_t)eax < 0)
        {
            if (rd8(self + 0xeeu) == 0u) goto L_10092fcc;
            eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
            if ((uint8_t)eax == 1u) goto L_10092fcc;
            if ((uint8_t)eax == 2u) goto L_10092fcc;
            if ((uint8_t)eax == 6u) goto L_10092fcc;
            if ((uint8_t)eax == 7u) goto L_10092fcc;
            if ((uint8_t)eax != 8u) goto L_100933be;
L_10092fcc: ;
            t1 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
            t2 = rd32(self + 0xa0u) + 0x34u;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10026e90u), 2, t2, t1);
            t3 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
            t4 = rd32(self + 0xa0u) + 0x5fcu;
            t5 = rd32(self + 0xa0u);
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10026e90u), 2, t4, t3);
            wr32(t5 + 0x608u, 0x3f800000u);
            t6 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
            t7 = rd32(self + 0xa0u) + 0x5c4u;
            g->edx = t7;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10026e90u), 2, t7, t6);
            t8 = g->edx;
            t9 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0xa0u), 1, t9);
            t10 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
            t11 = rd32(self + 0xa0u) + 0xc4u;
            g->ecx = t11;
            cow_cdecl(g, COW_IMG(0x10026e90u), 2, t11, t10);
            t12 = g->ecx;
            t13 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u;
            t14 = rd32(self + 0xa0u) + 0x44u;
            g->eax = t13;
            t15 = rd32(self + 0xa0u);
            g->esp = sp0 - 0x14u;
            t16 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t14, t13);
            if ((cow_fsw(g, (double)rdf32(t14), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, (double)rdf32(t14), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = t15;
                edi = t14;
            }
            else
            {
                eax = cow_fsw(g, (double)rdf32(t14), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = t15;
                edi = t14;
                d17 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d17);
            }
            if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d18 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d18);
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
            t27 = rd32(self + 0xa0u);
            g->eax = eax;
            g->edx = rd32(rd32(self + 0xa0u));
            t28 = rd32(rd32(self + 0xa0u));
            t29 = rd32(rd32(self + 0xd4u) + 0x260u);
            g->esp = sp0 - 0xcu;
            t30 = cow_thiscall(g, rd32(t28 + 0x318u), t27, 0);
            t31 = g->ecx;
            t32 = g->edx;
            if (t30 == 0u)
            {
                eax = t30;
                ecx = t31;
                edx = t32;
                ebx = t29 + 0x150u;
                edi = t27;
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t33 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, ebx);
                d34 = (double)rdf32(edi + 0x61cu);
                if ((cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ebp = edi + 0x61cu;
                }
                else
                {
                    eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ebp = edi + 0x61cu;
                    d35 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp, (float)d35);
                }
                if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d36 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp, (float)d36);
                }
                d37 = (double)rdf32(edi + 0x620u);
                if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d38 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x620u, (float)d38);
                }
                d39 = (double)rdf32(edi + 0x620u);
                if (!(d39 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d40 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x620u, (float)d40);
                }
                d41 = (double)rdf32(edi + 0x624u);
                if ((cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d42 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x624u, (float)d42);
                }
                d43 = (double)rdf32(edi + 0x624u);
                if (d43 < (double)rdf32(COW_IMG(0x10329d28u)))
                {
                    d44 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x624u, (float)d44);
                }
            }
            t45 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u);
            t46 = rd32(rd32(self + 0xd4u) + 0x260u);
            t47 = rd32(self + 0xa0u);
            wr32(t47 + 0xe4u, t45);
            t48 = rd32(t46 + 0x154u);
            wr32(t47 + 0xe8u, t48);
            t49 = rd32(t46 + 0x158u);
            wr32(t47 + 0xecu, t49);
            t50 = rd32(t46 + 0x15cu);
            wr32(t47 + 0xf0u, t50);
            t51 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u);
            t52 = rd32(rd32(self + 0xd4u) + 0x260u);
            t53 = rd32(self + 0xa0u);
            wr32(t53 + 0xe4u, t51);
            t54 = rd32(t52 + 0x154u);
            wr32(t53 + 0xe8u, t54);
            t55 = rd32(t52 + 0x158u);
            wr32(t53 + 0xecu, t55);
            t56 = rd32(t52 + 0x15cu);
            wr32(t53 + 0xf0u, t56);
            t57 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u;
            t58 = rd32(self + 0xa0u) + 0x44u;
            g->eax = t56;
            t59 = rd32(self + 0xa0u);
            g->esp = sp0 - 0xcu;
            t60 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t58, t57);
            if ((cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = t59;
                edi = t58;
            }
            else
            {
                eax = cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = t59;
                edi = t58;
                d61 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d61);
            }
            if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d62 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d62);
            }
            d63 = (double)rdf32(ebx + 0x48u);
            if ((cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d64 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x48u, (float)d64);
            }
            d65 = (double)rdf32(ebx + 0x48u);
            if (!(d65 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d66 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x48u, (float)d66);
            }
            d67 = (double)rdf32(ebx + 0x4cu);
            if ((cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d68 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x4cu, (float)d68);
            }
            d69 = (double)rdf32(ebx + 0x4cu);
            if (d69 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
                d70 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x4cu, (float)d70);
            }
            t71 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x154u);
            wr32(self + 0xe4u, t71);
        }
    }
L_100933be: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10092f90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10092f90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
