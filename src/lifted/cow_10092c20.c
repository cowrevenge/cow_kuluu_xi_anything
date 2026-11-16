/* f_0x10092c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10092c20(Guest* g)
{
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
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
    double d47;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
    }
    else
    {
        eax = rd32(self + 0x120u);
        if (rd8(self + 0xeeu) == 0u) goto L_10092c54;
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        if ((uint8_t)eax == 1u) goto L_10092c54;
        if ((uint8_t)eax == 2u) goto L_10092c54;
        if ((uint8_t)eax == 6u) goto L_10092c54;
        if ((uint8_t)eax == 7u) goto L_10092c54;
        if ((uint8_t)eax != 8u) goto L_10092f83;
L_10092c54: ;
        t1 = rd32(self + 0xa0u) + 0x34u;
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t1, self + 4u);
        t3 = g->edx;
        t4 = rd32(self + 0xa0u) + 0x5fcu;
        g->ecx = t4;
        t5 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x18u;
        t6 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t4, self + 4u);
        t7 = g->ecx;
        wr32(t5 + 0x608u, 0x3f800000u);
        t8 = rd32(self + 0xa0u) + 0x5c4u;
        g->edx = t8;
        g->esp = sp0 - 0x20u;
        t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t8, self + 4u);
        t10 = g->edx;
        g->edx = t10;
        t11 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x100a57c0u), t11, 1, self + 4u);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = rd32(self + 0xa0u) + 0xc4u;
        g->eax = t14;
        g->ecx = t12;
        g->edx = t13;
        t15 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t14, self + 4u);
        t16 = g->ecx;
        t17 = g->edx;
        t18 = rd32(self + 0xa0u) + 0x44u;
        t19 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x18u;
        t20 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t18, self + 0x14u);
        if ((cow_fsw(g, (double)rdf32(t18), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t18), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t18;
            ebp = t19;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t18), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t18;
            ebp = t19;
            d21 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d21);
        }
        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d22 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d22);
        }
        d23 = (double)rdf32(ebp + 0x48u);
        if ((cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d24 = fr(g, (double)rdf32(ebp + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x48u, (float)d24);
        }
        d25 = (double)rdf32(ebp + 0x48u);
        if (!(d25 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d26 = fr(g, (double)rdf32(ebp + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x48u, (float)d26);
        }
        d27 = (double)rdf32(ebp + 0x4cu);
        if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d28 = fr(g, (double)rdf32(ebp + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x4cu, (float)d28);
        }
        d29 = (double)rdf32(ebp + 0x4cu);
        if (!(d29 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d30 = fr(g, (double)rdf32(ebp + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x4cu, (float)d30);
        }
        t31 = rd32(self + 0xa0u);
        g->eax = eax;
        g->edx = rd32(t31);
        t32 = rd32(t31);
        g->esp = sp0 - 0x10u;
        t33 = cow_thiscall(g, rd32(t32 + 0x318u), t31, 0);
        t34 = g->ecx;
        t35 = g->edx;
        if (t33 == 0u)
        {
            eax = t33;
            ecx = t34;
            edx = t35;
            ebx = t31;
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t36 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x61cu, self + 0x14u);
            d37 = (double)rdf32(ebx + 0x61cu);
            if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebp = ebx + 0x61cu;
            }
            else
            {
                eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebp = ebx + 0x61cu;
                d38 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebp, (float)d38);
            }
            if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d39 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebp, (float)d39);
            }
            d40 = (double)rdf32(ebx + 0x620u);
            if ((cow_fsw(g, d40, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d40, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d40, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d41 = fr(g, (double)rdf32(ebx + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x620u, (float)d41);
            }
            d42 = (double)rdf32(ebx + 0x620u);
            if (!(d42 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d43 = fr(g, (double)rdf32(ebx + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x620u, (float)d43);
            }
            d44 = (double)rdf32(ebx + 0x624u);
            if ((cow_fsw(g, d44, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d44, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d44, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d45 = fr(g, (double)rdf32(ebx + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x624u, (float)d45);
            }
            d46 = (double)rdf32(ebx + 0x624u);
            if (d46 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
                d47 = fr(g, (double)rdf32(ebx + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x624u, (float)d47);
            }
        }
        t48 = rd32(self + 0x14u);
        t49 = rd32(self + 0xa0u);
        wr32(t49 + 0xe4u, t48);
        t50 = rd32(self + 0x18u);
        wr32(t49 + 0xe8u, t50);
        t51 = rd32(self + 0x1cu);
        wr32(t49 + 0xecu, t51);
        t52 = rd32(self + 0x20u);
        wr32(t49 + 0xf0u, t52);
        t53 = rd32(self + 0x14u);
        t54 = rd32(self + 0xa0u);
        wr32(t54 + 0xe4u, t53);
        t55 = rd32(self + 0x18u);
        wr32(t54 + 0xe8u, t55);
        t56 = rd32(self + 0x1cu);
        wr32(t54 + 0xecu, t56);
        t57 = rd32(self + 0x20u);
        wr32(t54 + 0xf0u, t57);
        t58 = rd32(self + 0xa0u) + 0x44u;
        g->eax = t54;
        t59 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x10u;
        t60 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t58, self + 0x14u);
        if ((cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t58;
            edi = t59;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t58;
            edi = t59;
            d61 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d61);
        }
        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d62 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d62);
        }
        d63 = (double)rdf32(edi + 0x48u);
        if ((cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d64 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x48u, (float)d64);
        }
        d65 = (double)rdf32(edi + 0x48u);
        if (!(d65 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d66 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x48u, (float)d66);
        }
        d67 = (double)rdf32(edi + 0x4cu);
        if ((cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            d68 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x4cu, (float)d68);
        }
        d69 = (double)rdf32(edi + 0x4cu);
        if (!(d69 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            d70 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x4cu, (float)d70);
        }
    }
L_10092f83: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10092c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10092c20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
