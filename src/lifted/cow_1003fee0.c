/* f_0x1003fee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003fee0(Guest* g)
{
    double d10;
    double d32;
    double d33;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x30u, in_ebx);
    if ((rd16(self + 0x32u) & 0x8080u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x34u, in_ebp);
        t1 = (in_ebp & 0xffff0000u) | rd16(self + 0x30u);
        wr32(sp0 - 0x38u, in_esi);
        wr32(sp0 - 0x3cu, in_edi);
        if ((t1 & 0xfu) == 6u)
        {
            eax = t1 & 0xfu;
            ebp = t1;
            goto L_1003ff0e;
        }
        eax = t1 & 0xfu;
        ebp = t1;
        if ((uint16_t)eax != 5u)
        {
            edx = in_edx;
            goto L_10040017;
        }
L_1003ff0e: ;
        if (rd8(self + 0x34u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
            edx = in_edx;
            ebp = 0u;
L_1003ff5c: ;
            g->esp = sp0 - 0x3cu;
            t4 = cow_call_regs(g, COW_IMG(0x1003fd70u), eax, self, g->edx, 1, 0);
            esi = ebp + t4;
            edi = sp0 - 0x24u;
            ecx = 9u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x40u, sp0 - 0x18u);
            g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
            g->edx = sp0 - 0x18u;
            t5 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t6 = rd32(COW_IMG(0x1047cf7cu));
            t7 = cow_thiscall(g, rd32(t5 + 0x94u), t6, 1, sp0 - 0x18u);
            t8 = g->ecx;
            t9 = g->edx;
            d10 = cow_take_float(g);
            if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329990u)), 1u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329990u)), 1u) & 0x4100u;
                edx = t9;
                x0 = d10;
                goto L_10040004;
            }
            eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329990u)), 1u) & 0x4100u;
            ecx = t8;
            edx = t9;
            x0 = d10;
            if (x0 < (double)rdf32(COW_IMG(0x1032a378u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                goto L_10040006;
            }
            t11 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0x40u, t11);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t12 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t11, rd32(sp0 - 0x3cu));
            t13 = g->edx;
            if ((uint8_t)t12 == 0u)
            {
                eax = t12;
                edx = t13;
                goto L_10040006;
            }
            edx = t13;
            t14 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x40u, t14);
            g->ecx = t14;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t15 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t14, rd32(sp0 - 0x3cu));
            t16 = g->ecx;
            t17 = g->edx;
            if ((uint8_t)t15 == 0u)
            {
                eax = t15;
                edx = t17;
                goto L_10040006;
            }
            ecx = t16;
            t18 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x40u, t18);
            g->ecx = ecx;
            g->edx = t18;
            g->esp = sp0 - 0x38u;
            t19 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t18, rd32(sp0 - 0x3cu));
            t20 = g->ecx;
            t21 = g->edx;
            if ((uint8_t)t19 == 0u)
            {
                eax = t19;
                edx = t21;
                goto L_10040006;
            }
            ecx = t20;
            edx = t21;
            t22 = rd32(sp0 - 8u);
            wr32(sp0 - 0x40u, t22);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t23 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t22, rd32(sp0 - 0x3cu));
            t24 = g->edx;
            if ((uint8_t)t23 == 0u)
            {
                eax = t23;
                edx = t24;
                goto L_10040006;
            }
            edx = t24;
            t25 = rd32(sp0 - 4u);
            wr32(sp0 - 0x40u, t25);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t26 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t25, rd32(sp0 - 0x3cu));
            t27 = g->edx;
            if ((uint8_t)t26 == 0u)
            {
                eax = t26;
                edx = t27;
                goto L_10040006;
            }
            eax = t26;
            edx = t27;
            if ((int32_t)(ebp + 0x24u) < 108)
            {
                ebp = ebp + 0x24u;
                goto L_1003ff5c;
            }
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
            if ((int32_t)(uint8_t)eax <= 0)
            {
                edi = 0u;
            }
            else
            {
                esi = (uint8_t)eax;
                g->edx = 0u;
                g->esp = sp0 - 0x3cu;
                t2 = cow_thiscall(g, COW_IMG(0x1003fce0u), self, 0);
                t3 = g->edx;
                eax = t2;
                edx = t3;
                edi = 0u;
L_1003ff2a: ;
                if ((int32_t)(edx + 1u) < (int32_t)esi)
                {
                    edi = edi + rd16(eax + edx * 2u);
                    edx = edx + 1u;
                    goto L_1003ff2a;
                }
                edi = edi + rd16(eax + edx * 2u);
            }
            if ((int32_t)edi <= (int32_t)(rd16(self + 0x36u) * 3u))
            {
                eax = rd16(self + 0x36u);
                edx = rd16(self + 0x36u) * 3u;
            }
            else
            {
                eax = rd16(self + 0x36u);
                edx = rd16(self + 0x36u) * 3u;
                wr16(self + 0x30u, (ebp & 0xfff7u) | 7u);
            }
        }
L_10040017: ;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t29 = cow_call_regs(g, COW_IMG(0x1003fda0u), eax, self, g->edx, 1, 0);
        t30 = g->ecx;
        t31 = g->edx;
        d32 = cow_take_float(g);
        d33 = fr(g, d32 + (double)rdf32(COW_IMG(0x1032961cu)));
        if ((cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032ad18u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032ad18u)), 1u) & 0x4100u;
            ecx = t30;
            edx = t31;
            x0 = d33;
        }
        else
        {
            eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032ad18u)), 1u) & 0x4100u;
            ecx = t30;
            edx = t31;
            x0 = d33;
            x0 = (double)rdf32(COW_IMG(0x1032ad18u));
        }
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x3cu;
        t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t35 = g->ecx;
        t36 = g->edx;
        wr16(self + 0x30u, (uint16_t)((rd8(self + 0x30u) & 0xfu) ^ t34 << 4u));
        g->edx = t36;
        t37 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t34 << 4u, self, g->edx, 1, 0);
        t38 = g->ecx;
        t39 = g->edx;
        if (rd8(self + 0x34u) == 0u)
        {
            eax = t37;
            edx = t39;
        }
        else
        {
            eax = t37;
            ecx = (t38 & 0xffffff00u) | rd8(self + 0x34u);
            edx = t39;
            if ((uint8_t)ecx != 0u)
            {
                esi = 0u;
                edi = eax;
L_10040067: ;
                wr32(sp0 - 0x40u, self);
                g->ebx = self;
                g->eax = eax;
                g->esp = sp0 - 0x3cu;
                t40 = cow_thiscall(g, COW_IMG(0x10075520u), edi, 1, self);
                if ((int32_t)(esi + 1u) < (int32_t)rd8(self + 0x34u))
                {
                    eax = t40;
                    edx = rd8(self + 0x34u);
                    esi = esi + 1u;
                    edi = edi + 0x10u;
                    goto L_10040067;
                }
                eax = t40;
                edx = rd8(self + 0x34u);
            }
        }
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t41 = cow_call_regs(g, COW_IMG(0x1003fd70u), eax, self, g->edx, 1, 0);
        t42 = g->ecx;
        t43 = g->edx;
        wr32(sp0 - 0x2cu, t41);
        t44 = rd16(self + 0x36u) * 3u;
        wr32(sp0 - 0x28u, t44);
        if (rd32(COW_IMG(0x10631f24u)) == 0u)
        {
            ecx = t42;
            edx = t43;
            esi = t41;
            edi = t44;
        }
        else
        {
            eax = rd32(COW_IMG(0x10631f24u));
            edx = t43;
            esi = t41;
            edi = t44;
            loc_2c = t41;
            loc_28 = t44;
            if (rd32(eax + 0x54u) == 0u)
            {
                ecx = rd32(eax + 0x54u);
            }
            else
            {
                ecx = rd32(eax + 0x54u);
                if ((int32_t)edi > 0)
                {
                    ebp = edi;
                    esi = esi + 0x18u;
L_100400bb: ;
                    if ((uint8_t)rd32(esi) * 2u <= 0xffu)
                    {
                        eax = rd32(esi) >> 0x17u & 0x1feu;
                        ecx = (uint8_t)rd32(esi) * 2u;
                        edx = rd32(esi) >> 0xfu & 0x1feu;
                        edi = rd32(esi) >> 7u & 0x1feu;
                    }
                    else
                    {
                        eax = rd32(esi) >> 0x17u & 0x1feu;
                        edx = rd32(esi) >> 0xfu & 0x1feu;
                        edi = rd32(esi) >> 7u & 0x1feu;
                        ecx = 0xffu;
                    }
                    if (edi > 0xffu)
                    {
                        edi = 0xffu;
                    }
                    if (edx > 0xffu)
                    {
                        edx = 0xffu;
                    }
                    if (eax > 0xffu)
                    {
                        eax = 0xffu;
                    }
                    t45 = ((eax << 8u | edx) << 8u | edi) << 8u | ecx;
                    wr32(esi, t45);
                    if (ebp != 1u)
                    {
                        ebp = ebp - 1u;
                        esi = esi + 0x24u;
                        goto L_100400bb;
                    }
                    esi = loc_2c;
                    edi = loc_28;
                }
            }
        }
        wr32(sp0 - 0x40u, 0x48u);
        g->esp = sp0 - 0x34u;
        t46 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x48u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
        t47 = g->edx;
        if (t46 == 0u)
        {
            eax = t46;
            edx = t47;
        }
        else
        {
            eax = t46;
            edx = t47;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t48 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
            t49 = g->edx;
            if (t48 == 0u)
            {
                eax = t48;
                edx = t49;
            }
            else
            {
                eax = t48;
                edx = t49;
                ebp = t48;
                wr32(sp0 - 0x40u, 0u);
                wr32(sp0 - 0x44u, 0x152u);
                wr32(sp0 - 0x48u, edi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t50 = cow_thiscall(g, COW_IMG(0x10043e50u), ebp, 3, edi, 0x152u, 0u);
                t51 = g->edx;
                wr32(sp0 - 0x40u, edi);
                g->edx = t51;
                cow_stdcall(g, COW_IMG(0x10044010u), 1, edi);
                t52 = g->edx;
                g->edx = t52;
                t53 = cow_thiscall(g, COW_IMG(0x10044130u), ebp, 0);
                t54 = g->edx;
                if (t53 == 0u)
                {
                    eax = t53;
                    edx = t54;
                    g->edx = edx;
                    g->esp = sp0 - 0x3cu;
                    t57 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, self, g->edx, 1, 0);
                    t58 = g->edx;
                    wr32(t57 + 4u, 0u);
                    eax = t57;
                    edx = t58;
                }
                else
                {
                    eax = t53;
                    edx = t54;
                    edi = eax;
                    ecx = edi * 0x24u >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = edi * 0x24u & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    g->edx = edx;
                    g->esp = sp0 - 0x3cu;
                    t55 = cow_call_regs(g, COW_IMG(0x1003fcf0u), edi * 0x24u, self, g->edx, 1, 0);
                    t56 = g->edx;
                    wr32(t55 + 4u, ebp);
                    eax = t55;
                    edx = t56;
                }
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                t59 = cow_stdcall(g, COW_IMG(0x100441a0u), 0);
                t60 = g->edx;
                eax = t59;
                edx = t60;
            }
        }
        wr16(self + 0x32u, rd16(self + 0x32u) | 0x8080u);
        ebp = rd32(sp0 - 0x34u);
        esi = rd32(sp0 - 0x38u);
        edi = rd32(sp0 - 0x3cu);
    }
    g->ebx = in_ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10040004: ;
L_10040006: ;
    t28 = rd16(self + 0x30u);
    wr16(self + 0x30u, (t28 & 0xfff7u) | 7u);
    edx = (t28 & 0xfff7u) | 7u;
    goto L_10040017;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003fee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003fee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
