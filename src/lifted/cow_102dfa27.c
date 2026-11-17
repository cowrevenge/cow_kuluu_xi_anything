/* f_0x102dfa27 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dfa27(Guest* g)
{
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
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_cc;
    uint32_t loc_d0;
    uint32_t loc_d4;
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
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 232u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328243u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102dfa31u));
    wr32(sp0 - 0xccu, in_ebx);
    if (rd8(self + 8u) == 5u)
    {
        loc_10 = t1;
        wr32(sp0 - 0xd0u, in_esi);
        wr32(sp0 - 0xd4u, in_edi);
        t2 = rd32(rd32(self) + 0x1058u);
        if (rd32(rd32(self + 4u) + 0x1058u) == t2 >> 1u)
        {
            eax = t2;
            ecx = rd32(self);
            edx = rd32(self + 4u);
            goto L_102dfa78;
        }
        eax = t2;
        ecx = rd32(self);
        edx = rd32(self + 4u);
        esi = rd32(rd32(self + 4u) + 0x1058u);
        if (esi != 1u) goto L_102dfa6e;
        if (eax == esi) goto L_102dfa78;
L_102dfa6e: ;
        eax = 0x80004005u;
        loc_4 = in_ebp;
        loc_cc = in_ebx;
        loc_d0 = in_esi;
        loc_d4 = in_edi;
L_102dfeaa: ;
        esi = loc_d0;
        edi = loc_d4;
    }
    else
    {
        loc_10 = t1;
        eax = 0x80004005u;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_cc = in_ebx;
    }
    wr32(g->fs_base, loc_10);
    g->ebx = loc_cc;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102dfa78: ;
    if (rd32(edx + 0x105cu) == rd32(ecx + 0x105cu) >> 1u) goto L_102dfa97;
    esi = rd32(edx + 0x105cu);
    if (esi != 1u) goto L_102dfa6e;
    if (rd32(ecx + 0x105cu) != esi) goto L_102dfa6e;
L_102dfa97: ;
    if (rd32(edx + 0x1060u) != rd32(ecx + 0x1060u) >> 1u) goto L_102dfa6e;
    if (eax > 1u)
    {
        if (eax & 1u)
        {
            wr32(ecx + 0x1058u, eax & 0xfffffffeu);
            wr32(rd32(self) + 0x1064u, rd32(rd32(self) + 0x1064u) - rd32(rd32(self) + 0x1068u));
        }
    }
    if (rd32(rd32(self) + 0x105cu) > 1u)
    {
        eax = rd32(rd32(self) + 0x105cu);
        ecx = rd32(self) + 0x105cu;
        wr32(ecx, eax & 0xfffffffeu);
    }
    if (rd32(rd32(self) + 0x1060u) <= 1u)
    {
        ecx = rd32(self) + 0x1060u;
    }
    else
    {
        eax = rd32(rd32(self) + 0x1060u);
        ecx = rd32(self) + 0x1060u;
        wr32(ecx, eax & 0xfffffffeu);
    }
    t3 = rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0xd8u, t3 << 4u);
    g->eax = t3 << 4u;
    g->esp = sp0 - 0xccu;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t3 << 4u, in_edi, in_esi);
    t5 = g->edx;
    wr32(sp0 - 0x18u, t4);
    wr32(sp0 - 8u, 0u);
    if (t4 == 0u)
    {
        ecx = rd32(sp0 - 0xd8u);
        edx = t5;
        wr32(sp0 - 0x24u, 0u);
        loc_24 = 0u;
    }
    else
    {
        eax = t4;
        ecx = rd32(sp0 - 0xd8u);
        edx = t5;
        esi = t3;
        loc_18 = t4;
        wr32(sp0 - 0xd8u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0xdcu, esi);
        wr32(sp0 - 0xe0u, 0x10u);
        wr32(sp0 - 0xe4u, eax);
        g->ecx = ecx;
        g->esp = sp0 - 0xd4u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0x24u, t8);
        ecx = t6;
        edx = t7;
        loc_24 = t8;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    if (loc_24 != 0u)
    {
        if (rd32(rd32(self) + 0x105cu) != 1u)
        {
            esi = rd32(rd32(self) + 0x1058u);
            t14 = esi << 2u << 4u;
            wr32(sp0 - 0xd8u, t14);
            g->eax = t14;
            g->esp = sp0 - 0xccu;
            t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t14, rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
            t16 = g->edx;
            wr32(sp0 - 0x18u, t15);
            wr32(sp0 - 8u, 2u);
            if (t15 == 0u)
            {
                edx = 0u;
            }
            else
            {
                eax = t15;
                ecx = rd32(sp0 - 0xd8u);
                edx = t16;
                esi = esi << 2u;
                loc_18 = t15;
                wr32(sp0 - 0xd8u, COW_IMG(0x102d2a17u));
                wr32(sp0 - 0xdcu, esi);
                wr32(sp0 - 0xe0u, 0x10u);
                wr32(sp0 - 0xe4u, eax);
                g->esp = sp0 - 0xd4u;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
                edx = rd32(sp0 - 0x18u);
            }
            wr32(sp0 - 8u, 0xffffffffu);
            t17 = rd32(rd32(self) + 0x1058u);
            t18 = edx + t17 * 0x10u;
            wr32(sp0 - 0x34u, t18);
            t19 = edx + t17 * 0x20u;
            wr32(sp0 - 0x20u, t19);
            t20 = edx + t17 * 0x30u;
            wr32(sp0 - 0x2cu, t20);
            wr32(sp0 - 0x3cu, edx);
            wr32(sp0 - 0x1cu, edx);
            eax = t17;
            ecx = t19;
            esi = t18;
            loc_3c = edx;
            loc_1c = edx;
            edx = t20;
            loc_34 = t18;
            loc_20 = t19;
            loc_2c = t20;
        }
        else
        {
            esi = rd32(rd32(self) + 0x1058u);
            t9 = esi << 1u << 4u;
            wr32(sp0 - 0xd8u, t9);
            g->eax = t9;
            g->esp = sp0 - 0xccu;
            t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t9, rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
            t11 = g->edx;
            wr32(sp0 - 0x18u, t10);
            wr32(sp0 - 8u, 1u);
            if (t10 == 0u)
            {
                ecx = 0u;
            }
            else
            {
                eax = t10;
                ecx = rd32(sp0 - 0xd8u);
                edx = t11;
                esi = esi << 1u;
                loc_18 = t10;
                wr32(sp0 - 0xd8u, COW_IMG(0x102d2a17u));
                wr32(sp0 - 0xdcu, esi);
                wr32(sp0 - 0xe0u, 0x10u);
                wr32(sp0 - 0xe4u, eax);
                g->esp = sp0 - 0xd4u;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
                ecx = rd32(sp0 - 0x18u);
            }
            wr32(sp0 - 8u, 0xffffffffu);
            t12 = rd32(rd32(self) + 0x1058u);
            t13 = ecx + t12 * 0x10u;
            wr32(sp0 - 0x3cu, ecx);
            wr32(sp0 - 0x1cu, ecx);
            wr32(sp0 - 0x34u, t13);
            wr32(sp0 - 0x20u, ecx);
            wr32(sp0 - 0x2cu, t13);
            eax = t12;
            edx = t13;
            esi = t13;
            loc_3c = ecx;
            loc_1c = ecx;
            loc_34 = t13;
            loc_20 = ecx;
            loc_2c = t13;
        }
        if (loc_3c != 0u)
        {
            if (eax != 1u)
            {
                eax = loc_1c;
                wr32(sp0 - 0x40u, eax + 0x10u);
                wr32(sp0 - 0x44u, esi + 0x10u);
                ecx = ecx + 0x10u;
                edx = edx + 0x10u;
                loc_40 = eax + 0x10u;
                loc_44 = esi + 0x10u;
            }
            else
            {
                eax = loc_1c;
                wr32(sp0 - 0x40u, eax);
                wr32(sp0 - 0x44u, esi);
                loc_40 = eax;
                loc_44 = esi;
            }
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x48u, ecx);
            wr32(sp0 - 0x18u, edx);
            if (rd32(rd32(self + 4u) + 0x1060u) == 0u)
            {
                eax = rd32(self + 4u);
                goto L_102dfe94;
            }
            eax = rd32(self + 4u);
            loc_18 = edx;
            loc_28 = 0u;
            loc_48 = ecx;
            loc_14 = rd32(sp0 - 0x14u);
L_102dfc56: ;
            wr32(sp0 - 0x14u, 0u);
            if (rd32(eax + 0x105cu) == 0u)
            {
                loc_14 = 0u;
                goto L_102dfe7f;
            }
            loc_14 = 0u;
L_102dfc67: ;
            wr32(sp0 - 0xd8u, loc_1c);
            wr32(sp0 - 0xdcu, loc_28 * 2u);
            wr32(sp0 - 0xe0u, loc_14 * 2u);
            g->edx = rd32(rd32(self));
            t21 = rd32(rd32(self));
            g->esp = sp0 - 0xd4u;
            cow_thiscall(g, rd32(t21 + 4u), rd32(self), 3, loc_14 * 2u, loc_28 * 2u, loc_1c);
            t22 = g->edx;
            if (esi == rd32(sp0 - 0x1cu))
            {
                edx = t22;
                edi = loc_28 * 2u;
            }
            else
            {
                edi = loc_28 * 2u;
                wr32(sp0 - 0xd8u, esi);
                wr32(sp0 - 0xdcu, edi + 1u);
                t23 = rd32(sp0 - 0x14u) * 2u;
                wr32(sp0 - 0xe0u, t23);
                g->edx = rd32(rd32(self));
                t24 = rd32(rd32(self));
                g->esp = sp0 - 0xd4u;
                cow_thiscall(g, rd32(t24 + 4u), rd32(self), 3, t23, edi + 1u, esi);
                t25 = g->edx;
                edx = t25;
            }
            if (rd32(sp0 - 0x20u) != rd32(sp0 - 0x1cu))
            {
                eax = rd32(sp0 - 0x20u);
                wr32(sp0 - 0xd8u, eax);
                wr32(sp0 - 0xdcu, edi);
                t26 = rd32(sp0 - 0x14u) * 2u + 1u;
                wr32(sp0 - 0xe0u, t26);
                g->edx = rd32(rd32(self));
                t27 = rd32(rd32(self));
                g->esp = sp0 - 0xd4u;
                cow_thiscall(g, rd32(t27 + 4u), rd32(self), 3, t26, edi, eax);
                t28 = g->edx;
                edx = t28;
            }
            if (rd32(sp0 - 0x2cu) != esi)
            {
                eax = rd32(sp0 - 0x2cu);
                if (eax != rd32(sp0 - 0x20u))
                {
                    wr32(sp0 - 0xd8u, eax);
                    wr32(sp0 - 0xdcu, edi + 1u);
                    t29 = rd32(sp0 - 0x14u) * 2u + 1u;
                    wr32(sp0 - 0xe0u, t29);
                    g->edx = rd32(rd32(self));
                    t30 = rd32(rd32(self));
                    g->esp = sp0 - 0xd4u;
                    cow_thiscall(g, rd32(t30 + 4u), rd32(self), 3, t29, edi + 1u, eax);
                    t31 = g->edx;
                    edx = t31;
                }
            }
            wr32(sp0 - 0x30u, 0u);
            if (rd32(rd32(self + 4u) + 0x1058u) == 0u)
            {
                loc_30 = 0u;
            }
            else
            {
                t32 = rd32(sp0 - 0x24u);
                wr32(sp0 - 0x38u, t32);
                loc_30 = 0u;
                loc_38 = t32;
                x0 = (double)rdf32(COW_IMG(0x1032a3bcu));
L_102dfce9: ;
                d33 = (double)(float)fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u) + 8u) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu) + 8u));
                wrf32(sp0 - 0x90u, (float)d33);
                d34 = (double)(float)fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u) + 0xcu) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu) + 0xcu));
                wrf32(sp0 - 0x8cu, (float)d34);
                d35 = fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u)) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu)));
                d36 = (double)(float)fr(g, d35 + (double)rdf32(esi + loc_30 * 0x20u));
                wrf32(sp0 - 0xb8u, (float)d36);
                d37 = (double)(float)fr(g, d34 + (double)rdf32(esi + loc_30 * 0x20u + 0xcu));
                wrf32(sp0 - 0xacu, (float)d37);
                d38 = (double)(float)fr(g, d36 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u)));
                wrf32(sp0 - 0x88u, (float)d38);
                d39 = fr(g, fr(g, (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x40u) + 4u) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x1cu) + 4u)) + (double)rdf32(esi + loc_30 * 0x20u + 4u));
                d40 = (double)(float)fr(g, d39 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u) + 4u));
                wrf32(sp0 - 0x84u, (float)d40);
                d41 = (double)(float)fr(g, d38 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u)));
                wrf32(sp0 - 0x58u, (float)d41);
                d42 = (double)(float)fr(g, d40 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u) + 4u));
                wrf32(sp0 - 0x54u, (float)d42);
                d43 = fr(g, fr(g, d33 + (double)rdf32(esi + loc_30 * 0x20u + 8u)) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u) + 8u));
                d44 = (double)(float)fr(g, d43 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u) + 8u));
                wrf32(sp0 - 0x50u, (float)d44);
                d45 = (double)(float)fr(g, d42 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u) + 4u));
                wrf32(sp0 - 0x64u, (float)d45);
                d46 = (double)(float)fr(g, d44 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u) + 8u));
                wrf32(sp0 - 0x60u, (float)d46);
                d47 = fr(g, fr(g, d37 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x44u) + 0xcu)) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x20u) + 0xcu));
                d48 = (double)(float)fr(g, d47 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u) + 0xcu));
                wrf32(sp0 - 0x5cu, (float)d48);
                wr32(sp0 - 0x38u, loc_38 + 0x10u);
                d49 = (double)(float)fr(g, d46 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu) + 8u));
                wrf32(sp0 - 0xa0u, (float)d49);
                wr32(sp0 - 0x30u, loc_30 + 1u);
                d50 = (double)(float)fr(g, d48 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu) + 0xcu));
                wrf32(sp0 - 0x9cu, (float)d50);
                d51 = fr(g, fr(g, d41 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x48u))) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu)));
                d52 = (double)(float)fr(g, d51 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u)));
                wrf32(sp0 - 0xc8u, (float)d52);
                d53 = (double)(float)fr(g, d50 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u) + 0xcu));
                wrf32(sp0 - 0xbcu, (float)d53);
                d54 = (double)(float)fr(g, d52 * x0);
                wrf32(sp0 - 0x78u, (float)d54);
                d55 = fr(g, fr(g, d45 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x2cu) + 4u)) + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u) + 4u));
                d56 = (double)(float)fr(g, d55 * x0);
                wrf32(sp0 - 0x74u, (float)d56);
                d57 = (double)(float)fr(g, fr(g, d49 + (double)rdf32(loc_30 * 0x20u + rd32(sp0 - 0x18u) + 8u)) * x0);
                wrf32(sp0 - 0x70u, (float)d57);
                d58 = (double)(float)fr(g, d53 * x0);
                wrf32(sp0 - 0x6cu, (float)d58);
                t59 = rd32(sp0 - 0x1cu);
                esi = sp0 - 0x78u;
                edi = loc_38;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                if (loc_30 + 1u < rd32(rd32(self + 4u) + 0x1058u))
                {
                    esi = rd32(sp0 - 0x34u);
                    loc_30 = loc_30 + 1u;
                    loc_38 = loc_38 + 0x10u;
                    goto L_102dfce9;
                }
                edx = loc_30 * 0x20u + t59;
                esi = rd32(sp0 - 0x34u);
                loc_30 = loc_30 + 1u;
            }
            t60 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0xd8u, t60);
            t61 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0xdcu, t61);
            t62 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0xe0u, t62);
            g->edx = edx;
            g->esp = sp0 - 0xd4u;
            cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 8u), rd32(self + 4u), 3, t62, t61, t60);
            t63 = g->edx;
            t64 = rd32(sp0 - 0x14u) + 1u;
            wr32(sp0 - 0x14u, t64);
            if (t64 < rd32(rd32(self + 4u) + 0x105cu))
            {
                loc_18 = rd32(sp0 - 0x18u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_34 = rd32(sp0 - 0x34u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_14 = t64;
                goto L_102dfc67;
            }
            edx = t63;
            loc_18 = rd32(sp0 - 0x18u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_34 = rd32(sp0 - 0x34u);
            loc_20 = rd32(sp0 - 0x20u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_14 = t64;
L_102dfe7f: ;
            wr32(sp0 - 0x28u, loc_28 + 1u);
            if (loc_28 + 1u < rd32(rd32(self + 4u) + 0x1060u))
            {
                eax = rd32(self + 4u);
                loc_28 = loc_28 + 1u;
                goto L_102dfc56;
            }
            eax = rd32(self + 4u);
            ecx = loc_28 + 1u;
L_102dfe94: ;
            wr32(sp0 - 0xd8u, loc_3c);
            g->eax = eax;
            g->esp = sp0 - 0xd4u;
            t65 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_3c);
            t66 = g->edx;
            eax = t65;
            ecx = rd32(sp0 - 0xd8u);
            edx = t66;
            esi = 0u;
        }
        else
        {
            esi = 0x8007000eu;
        }
        t67 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0xd8u, t67);
        g->esp = sp0 - 0xd4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t67);
        t68 = g->edx;
        eax = esi;
        edx = t68;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
    }
    else
    {
        eax = 0x8007000eu;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_d4 = rd32(sp0 - 0xd4u);
    }
    goto L_102dfeaa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dfa27(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dfa27(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
