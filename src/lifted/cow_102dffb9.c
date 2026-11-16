/* f_0x102dffb9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dffb9(Guest* g)
{
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
    double d48;
    double d49;
    double d50;
    double d51;
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
    double d63;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t62;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 244u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328261u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102dffc3u));
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0xd8u, in_esi);
    wr32(sp0 - 0x44u, self);
    if ((uint8_t)rd32(self + 8u) == 3u)
    {
        eax = rd32(self + 8u);
        loc_10 = t1;
        wr32(sp0 - 0xdcu, in_ebx);
        wr32(sp0 - 0xe0u, in_edi);
        t2 = ~(eax >> 0x11u) & 1u;
        wr32(sp0 - 0x14u, t2);
        t3 = ~(eax >> 0x10u) & 1u;
        wr32(sp0 - 0xe4u, t3);
        g->ebx = rd32(rd32(self + 4u) + 0x1058u);
        g->edi = rd32(rd32(self) + 0x1058u);
        g->eax = rd32(self + 4u);
        t4 = rd32(self + 4u);
        g->esp = sp0 - 0xe0u;
        t5 = cow_call_regs(g, COW_IMG(0x102dfeb9u), g->eax, rd32(self), in_edx, 1, 1, t3);
        t6 = g->edx;
        t7 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0xe8u, t7);
        wr32(sp0 - 0x34u, t5);
        g->ebx = rd32(rd32(self + 4u) + 0x105cu);
        g->edi = rd32(rd32(self) + 0x105cu);
        g->eax = rd32(self + 4u);
        t8 = rd32(self + 4u);
        g->esp = sp0 - 0xe4u;
        t9 = cow_call_regs(g, COW_IMG(0x102dfeb9u), g->eax, rd32(self), t6, 1, 1, t7);
        t10 = g->edx;
        wr32(sp0 - 0x14u, t9);
        if (rd32(sp0 - 0x34u) == 0u)
        {
            eax = t9;
            ecx = rd32(sp0 - 0xe4u);
            edx = t10;
            loc_14 = t9;
            loc_18 = 0u;
            loc_20 = 0u;
            goto L_102e0366;
        }
        eax = t9;
        ecx = rd32(sp0 - 0xe4u);
        edx = t10;
        loc_14 = t9;
        if (eax == 0u) goto L_102e0366;
        t11 = rd32(rd32(self + 4u) + 0x1058u);
        wr32(sp0 - 0xe4u, t11 << 4u);
        g->eax = t11 << 4u;
        g->esp = sp0 - 0xd8u;
        t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t11 << 4u, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
        t13 = g->edx;
        wr32(sp0 - 0x18u, t12);
        wr32(sp0 - 8u, 0u);
        if (t12 == 0u)
        {
            ecx = rd32(sp0 - 0xe4u);
            edx = t13;
            wr32(sp0 - 0x24u, 0u);
            eax = 0u;
            loc_24 = 0u;
        }
        else
        {
            eax = t12;
            ecx = rd32(sp0 - 0xe4u);
            edx = t13;
            ebx = t11;
            loc_18 = t12;
            wr32(sp0 - 0xe4u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0xe8u, ebx);
            wr32(sp0 - 0xecu, 0x10u);
            wr32(sp0 - 0xf0u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0xe0u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, ebx, COW_IMG(0x102d2a17u));
            t14 = g->ecx;
            t15 = g->edx;
            t16 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x24u, t16);
            eax = t16;
            ecx = t14;
            edx = t15;
            loc_24 = t16;
        }
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x18u, eax);
        if (eax == 0u)
        {
            loc_18 = eax;
            goto L_102e0366;
        }
        loc_18 = eax;
        t17 = rd32(rd32(self) + 0x1058u) << 1u;
        wr32(sp0 - 0xe4u, t17 << 4u);
        g->eax = t17 << 4u;
        g->esp = sp0 - 0xd8u;
        t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t17 << 4u, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
        t19 = g->edx;
        wr32(sp0 - 0x20u, t18);
        wr32(sp0 - 8u, 1u);
        if (t18 == 0u)
        {
            ecx = rd32(sp0 - 0xe4u);
            edx = t19;
            eax = 0u;
        }
        else
        {
            eax = t18;
            ecx = rd32(sp0 - 0xe4u);
            edx = t19;
            ebx = t17;
            loc_20 = t18;
            wr32(sp0 - 0xe4u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0xe8u, ebx);
            wr32(sp0 - 0xecu, 0x10u);
            wr32(sp0 - 0xf0u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0xe0u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, ebx, COW_IMG(0x102d2a17u));
            t20 = g->ecx;
            t21 = g->edx;
            eax = rd32(sp0 - 0x20u);
            ecx = t20;
            edx = t21;
        }
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x20u, eax);
        if (eax == 0u)
        {
            loc_20 = eax;
            goto L_102e0366;
        }
        loc_20 = eax;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0xffffffffu);
        wr32(sp0 - 0x1cu, 0xffffffffu);
        wr32(sp0 - 0x30u, eax);
        if (rd32(rd32(self + 4u) + 0x105cu) == 0u)
        {
            eax = rd32(self + 4u);
            ecx = rd32(self);
        }
        else
        {
            ebx = eax + rd32(rd32(self) + 0x1058u) * 0x10u;
            loc_30 = eax;
            t22 = rd32(sp0 - 0x14u) + 8u;
            wr32(sp0 - 0x3cu, t22);
            esi = self;
            edi = t22;
            loc_2c = 0u;
            loc_3c = t22;
L_102e010f: ;
            wr32(sp0 - 0x38u, 0u);
            if (rd32(edi - 8u) != 0xffffffffu)
            {
                eax = rd32(edi - 8u);
                if (eax == 0xffffffffu)
                {
                    wr32(sp0 - 0x1cu, 0xffffffffu);
                    wr32(sp0 - 0x30u, ebx);
                    wr32(sp0 - 0x28u, 0xffffffffu);
                    t24 = ebx;
                    ebx = loc_30;
                    loc_30 = t24;
                }
                else
                {
                    wr32(sp0 - 0xe4u, loc_30);
                    wr32(sp0 - 0x28u, eax);
                    wr32(sp0 - 0xe8u, 0u);
                    wr32(sp0 - 0xecu, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0xe0u;
                    cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, eax, 0u, loc_30);
                    t23 = g->edx;
                    edx = t23;
                }
            }
            if (rd32(edi) != 0xffffffffu)
            {
                eax = rd32(edi);
                wr32(sp0 - 0xe4u, ebx);
                wr32(sp0 - 0xe8u, 0u);
                wr32(sp0 - 0xecu, eax);
                wr32(sp0 - 0x1cu, eax);
                g->edx = rd32(rd32(esi));
                t25 = rd32(rd32(esi));
                g->esp = sp0 - 0xe0u;
                cow_thiscall(g, rd32(t25 + 4u), rd32(esi), 3, eax, 0u, ebx);
                t26 = g->edx;
                edx = t26;
            }
            if (rd32(rd32(esi + 4u) + 0x1058u) == 0u)
            {
                loc_38 = 0u;
            }
            else
            {
                t27 = rd32(sp0 - 0x24u);
                wr32(sp0 - 0x40u, t27);
                eax = rd32(sp0 - 0x34u) + 8u;
                loc_38 = 0u;
                loc_40 = t27;
L_102e0176: ;
                d28 = (double)rdf32(eax + 4u);
                d29 = (double)(float)fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u));
                wrf32(sp0 - 0x54u, (float)d29);
                d30 = (double)(float)fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u + 4u));
                wrf32(sp0 - 0x50u, (float)d30);
                d31 = (double)(float)fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u + 8u));
                wrf32(sp0 - 0x4cu, (float)d31);
                d32 = (double)rdf32(eax - 4u);
                d33 = (double)(float)fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u + 4u));
                wrf32(sp0 - 0xa0u, (float)d33);
                d34 = (double)(float)fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u + 8u));
                wrf32(sp0 - 0x9cu, (float)d34);
                d35 = (double)(float)fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u + 0xcu));
                wrf32(sp0 - 0x98u, (float)d35);
                d36 = (double)(float)fr(g, fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u)) + d29);
                wrf32(sp0 - 0x84u, (float)d36);
                d37 = (double)(float)fr(g, d33 + d30);
                wrf32(sp0 - 0x80u, (float)d37);
                d38 = (double)(float)fr(g, d34 + d31);
                wrf32(sp0 - 0x7cu, (float)d38);
                d39 = (double)(float)fr(g, d36 * (double)rdf32(edi + 4u));
                wrf32(sp0 - 0xb4u, (float)d39);
                d40 = (double)(float)fr(g, d37 * (double)rdf32(edi + 4u));
                wrf32(sp0 - 0xb0u, (float)d40);
                d41 = (double)(float)fr(g, d38 * (double)rdf32(edi + 4u));
                wrf32(sp0 - 0xacu, (float)d41);
                d42 = fr(g, d35 + fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u + 0xcu)));
                d43 = (double)rdf32(eax + 4u);
                d44 = (double)(float)fr(g, d43 * (double)rdf32(loc_30 + rd32(eax) * 0x10u));
                wrf32(sp0 - 0xc4u, (float)d44);
                d45 = (double)(float)fr(g, d43 * (double)rdf32(loc_30 + rd32(eax) * 0x10u + 4u));
                wrf32(sp0 - 0xc0u, (float)d45);
                d46 = (double)(float)fr(g, d43 * (double)rdf32(loc_30 + rd32(eax) * 0x10u + 8u));
                wrf32(sp0 - 0xbcu, (float)d46);
                d47 = (double)rdf32(eax - 4u);
                wr32(sp0 - 0x38u, loc_38 + 1u);
                d48 = (double)(float)fr(g, d47 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u + 4u));
                wrf32(sp0 - 0x60u, (float)d48);
                d49 = (double)(float)fr(g, d47 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u + 8u));
                wrf32(sp0 - 0x5cu, (float)d49);
                d50 = (double)(float)fr(g, d47 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u + 0xcu));
                wrf32(sp0 - 0x58u, (float)d50);
                d51 = (double)(float)fr(g, fr(g, d47 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u)) + d44);
                wrf32(sp0 - 0x74u, (float)d51);
                d52 = (double)(float)fr(g, d48 + d45);
                wrf32(sp0 - 0x70u, (float)d52);
                d53 = (double)(float)fr(g, d49 + d46);
                wrf32(sp0 - 0x6cu, (float)d53);
                wr32(sp0 - 0x40u, loc_40 + 0x10u);
                d54 = (double)(float)fr(g, d51 * (double)rdf32(edi - 4u));
                wrf32(sp0 - 0x94u, (float)d54);
                d55 = (double)(float)fr(g, d52 * (double)rdf32(edi - 4u));
                wrf32(sp0 - 0x90u, (float)d55);
                d56 = (double)(float)fr(g, d53 * (double)rdf32(edi - 4u));
                wrf32(sp0 - 0x8cu, (float)d56);
                d57 = fr(g, d50 + fr(g, d43 * (double)rdf32(loc_30 + rd32(eax) * 0x10u + 0xcu)));
                d58 = (double)(float)fr(g, d54 + d39);
                wrf32(sp0 - 0xd4u, (float)d58);
                d59 = (double)(float)fr(g, d55 + d40);
                wrf32(sp0 - 0xd0u, (float)d59);
                d60 = (double)(float)fr(g, d56 + d41);
                wrf32(sp0 - 0xccu, (float)d60);
                d61 = (double)(float)fr(g, fr(g, d57 * (double)rdf32(edi - 4u)) + fr(g, d42 * (double)rdf32(edi + 4u)));
                wrf32(sp0 - 0xc8u, (float)d61);
                t62 = rd32(sp0 - 0x44u);
                d63 = fr(g, d42 * (double)rdf32(edi + 4u));
                esi = sp0 - 0xd4u;
                edi = loc_40;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                if (loc_38 + 1u < rd32(rd32(t62 + 4u) + 0x1058u))
                {
                    eax = eax + 0x10u;
                    edi = loc_3c;
                    loc_38 = loc_38 + 1u;
                    loc_40 = loc_40 + 0x10u;
                    goto L_102e0176;
                }
                edx = loc_38 + 1u;
                edi = loc_3c;
                loc_38 = loc_38 + 1u;
                esi = rd32(sp0 - 0x44u);
            }
            t64 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0xe4u, t64);
            wr32(sp0 - 0xe8u, 0u);
            wr32(sp0 - 0xecu, loc_2c);
            g->edx = edx;
            g->esp = sp0 - 0xe0u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 4u)) + 8u), rd32(esi + 4u), 3, loc_2c, 0u, t64);
            t65 = g->edx;
            t66 = rd32(sp0 - 0x2cu) + 1u;
            wr32(sp0 - 0x2cu, t66);
            wr32(sp0 - 0x3cu, edi + 0x10u);
            if (t66 < rd32(rd32(esi + 4u) + 0x105cu))
            {
                edx = t65;
                loc_2c = t66;
                loc_3c = edi + 0x10u;
                edi = edi + 0x10u;
                goto L_102e010f;
            }
            eax = rd32(esi + 4u);
            ecx = t66;
            edx = t65;
        }
        esi = 0u;
L_102e036b: ;
        t67 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0xe4u, t67);
        g->eax = eax;
        g->esp = sp0 - 0xe0u;
        t68 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t67);
        t69 = g->ecx;
        t70 = g->edx;
        t71 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0xe8u, t71);
        g->esp = sp0 - 0xe4u;
        t72 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t69, t70, 1, 1, t71);
        t73 = g->ecx;
        t74 = g->edx;
        t75 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0xecu, t75);
        g->esp = sp0 - 0xe8u;
        t76 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t73, t74, 1, 1, t75);
        t77 = g->ecx;
        t78 = g->edx;
        t79 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0xf0u, t79);
        g->esp = sp0 - 0xecu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t77, t78, 1, 1, t79);
        t80 = g->edx;
        eax = esi;
        edx = t80;
        ebx = rd32(sp0 - 0xdcu);
        edi = rd32(sp0 - 0xe0u);
    }
    else
    {
        loc_10 = t1;
        eax = 0x80004005u;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
    }
    wr32(g->fs_base, loc_10);
    g->ebx = ebx;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_102e0366: ;
    esi = 0x8007000eu;
    goto L_102e036b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dffb9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dffb9(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
