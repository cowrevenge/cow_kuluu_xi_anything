/* f_0x1005fb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005fb30(Guest* g)
{
    double d1;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d5;
    double d51;
    double d6;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t29;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 0x7cu) == 0u) goto L_1005fb61;
    d1 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x74u, (float)d1);
    if (!(d1 < d3))
    {
        x0 = d1;
        goto L_1005fcdc;
    }
    x0 = d1;
L_1005fb61: ;
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
L_1005fb67: ;
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 4u, 0x3f800000u);
    d4 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(self + 0x90u) - (double)rdf32(self + 0x80u)) * x0) + (double)rdf32(self + 0x80u));
    wrf32(sp0 - 0x10u, (float)d4);
    d5 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(self + 0x94u) - (double)rdf32(self + 0x84u)) * x0) + (double)rdf32(self + 0x84u));
    wrf32(sp0 - 0xcu, (float)d5);
    d6 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(self + 0x98u) - (double)rdf32(self + 0x88u)) * x0) + (double)rdf32(self + 0x88u));
    wrf32(sp0 - 8u, (float)d6);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t7 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        edx = t8;
        edi = t7;
        if (rd32(self + 0x7cu) == 0u)
        {
            eax = rd32(self + 0x7cu);
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            wr32(sp0 - 0x24u, edi + 0x44u);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t29 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, sp0 - 0x10u);
            d30 = (double)rdf32(edi + 0x44u);
            if ((cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = edi + 0x44u;
            }
            else
            {
                eax = cow_fsw(g, d30, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = edi + 0x44u;
                d31 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx, (float)d31);
            }
            if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d32 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx, (float)d32);
            }
            d33 = (double)rdf32(edi + 0x48u);
            if ((cow_fsw(g, d33, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d34 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi + 0x48u, (float)d34);
            }
            d35 = (double)rdf32(edi + 0x48u);
            if (!(d35 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d36 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi + 0x48u, (float)d36);
            }
            d37 = (double)rdf32(edi + 0x4cu);
            if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d38 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi + 0x4cu, (float)d38);
            }
            d39 = (double)rdf32(edi + 0x4cu);
            if (d39 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
                d40 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi + 0x4cu, (float)d40);
            }
            wr32(sp0 - 0x20u, COW_IMG(0x10330684u));
            t41 = rd32(sp0 - 0x10u);
            wr32(edi + 0xe4u, t41);
            t42 = rd32(sp0 - 0xcu);
            wr32(edi + 0xe8u, t42);
            t43 = rd32(sp0 - 8u);
            wr32(edi + 0xecu, t43);
            t44 = rd32(sp0 - 4u);
            wr32(edi + 0xf0u, t44);
            g->esp = sp0 - 0x1cu;
            t45 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, t44, 1, COW_IMG(0x10330684u));
            t46 = g->edx;
            if ((uint8_t)t45 == 0u)
            {
                eax = t45;
                edx = t46;
            }
            else
            {
                t47 = rd32(sp0 - 0x10u);
                wr32(edi + 0x744u, t47);
                t48 = rd32(sp0 - 0xcu);
                wr32(edi + 0x748u, t48);
                t49 = rd32(sp0 - 8u);
                wr32(edi + 0x74cu, t49);
                t50 = rd32(sp0 - 4u);
                wr32(edi + 0x750u, t50);
                eax = t50;
                edx = t49;
            }
        }
        else
        {
            eax = rd32(self + 0x7cu);
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                g->esp = sp0 - 0x1cu;
                t9 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t10 = rd32(sp0 - 0x10u);
                wr32(t9 + 0xe4u, t10);
                t11 = rd32(sp0 - 0xcu);
                wr32(t9 + 0xe8u, t11);
                t12 = rd32(sp0 - 8u);
                wr32(t9 + 0xecu, t12);
                wr32(t9 + 0xf0u, 0x3f800000u);
                g->edx = 0x3f800000u;
                t13 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t14 = g->ecx;
                t15 = g->edx;
                wr32(sp0 - 0x20u, sp0 - 0x10u);
                wr32(sp0 - 0x24u, t13 + 0x44u);
                g->eax = sp0 - 0x10u;
                g->edx = t15;
                t16 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t13 + 0x44u, sp0 - 0x10u);
                t17 = g->edx;
                d18 = (double)rdf32(t13 + 0x44u);
                if ((cow_fsw(g, d18, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    edx = t17;
                    ebx = t13 + 0x44u;
                    edi = t13;
                }
                else
                {
                    eax = cow_fsw(g, d18, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    edx = t17;
                    ebx = t13 + 0x44u;
                    edi = t13;
                    d19 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx, (float)d19);
                }
                if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d20 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx, (float)d20);
                }
                d21 = (double)rdf32(edi + 0x48u);
                if ((cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d22 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x48u, (float)d22);
                }
                d23 = (double)rdf32(edi + 0x48u);
                if (!(d23 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d24 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x48u, (float)d24);
                }
                d25 = (double)rdf32(edi + 0x4cu);
                if ((cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d26 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x4cu, (float)d26);
                }
                d27 = (double)rdf32(edi + 0x4cu);
                if (!(d27 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d28 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(edi + 0x4cu, (float)d28);
                }
            }
        }
    }
    d51 = (double)rdf32(self + 0x74u);
    if (!(d51 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebx = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
        goto L_1005fe25;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ebx = rd32(sp0 - 0x18u);
    edi = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t52 = rd32(self);
    g->esp = sp0 - 0x14u;
    t53 = cow_thiscall(g, rd32(t52 + 0x18u), self, 1, 1u);
    t54 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = edi;
    g->edx = t54;
    return (t53 & 0xffffff00u) | 1u;
L_1005fcdc: ;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)));
    goto L_1005fb67;
L_1005fe25: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = edi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005fb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005fb30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
