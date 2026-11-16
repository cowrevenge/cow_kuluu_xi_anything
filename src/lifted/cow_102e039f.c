/* f_0x102e039f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e039f(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d108;
    double d109;
    double d110;
    double d111;
    double d112;
    double d113;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d119;
    double d120;
    double d121;
    double d122;
    double d123;
    double d124;
    double d125;
    double d127;
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
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d93;
    double d94;
    double d95;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_54;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t126;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 460u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1032827fu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e03a9u));
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x1acu, in_esi);
    wr32(sp0 - 0x58u, self);
    if ((uint8_t)rd32(self + 8u) == 3u)
    {
        eax = rd32(self + 8u);
        loc_10 = t1;
        wr32(sp0 - 0x1b0u, in_ebx);
        wr32(sp0 - 0x1b4u, in_edi);
        t2 = ~(eax >> 0x12u) & 1u;
        wr32(sp0 - 0x24u, t2);
        t3 = ~(eax >> 0x10u) & 1u;
        wr32(sp0 - 0x1b8u, t3);
        t4 = ~(eax >> 0x11u) & 1u;
        wr32(sp0 - 0x40u, t4);
        g->ebx = rd32(rd32(self + 4u) + 0x1058u);
        g->edi = rd32(rd32(self) + 0x1058u);
        g->eax = rd32(self + 4u);
        t5 = rd32(self + 4u);
        g->esp = sp0 - 0x1b4u;
        t6 = cow_call_regs(g, COW_IMG(0x102dfeb9u), g->eax, rd32(self), t4, 1, 1, t3);
        t7 = g->edx;
        t8 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x1bcu, t8);
        wr32(sp0 - 0x4cu, t6);
        g->ebx = rd32(rd32(self + 4u) + 0x105cu);
        g->edi = rd32(rd32(self) + 0x105cu);
        g->eax = rd32(self + 4u);
        t9 = rd32(self + 4u);
        g->esp = sp0 - 0x1b8u;
        t10 = cow_call_regs(g, COW_IMG(0x102dfeb9u), g->eax, rd32(self), t7, 1, 1, t8);
        t11 = g->edx;
        t12 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x1c0u, t12);
        wr32(sp0 - 0x50u, t10);
        g->ebx = rd32(rd32(self + 4u) + 0x1060u);
        g->edi = rd32(rd32(self) + 0x1060u);
        g->eax = rd32(self + 4u);
        t13 = rd32(self + 4u);
        t14 = rd32(self);
        g->esp = sp0 - 0x1bcu;
        t15 = cow_call_regs(g, COW_IMG(0x102dfeb9u), g->eax, t14, t11, 1, 1, t12);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x40u, t15);
        if (rd32(sp0 - 0x4cu) == 0u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            loc_40 = t15;
            loc_48 = 0u;
            loc_34 = 0u;
            goto L_102e0a8f;
        }
        eax = t15;
        ecx = t16;
        edx = t17;
        loc_40 = t15;
        if (rd32(sp0 - 0x50u) == 0u) goto L_102e0a8f;
        if (eax == 0u) goto L_102e0a8f;
        t18 = rd32(rd32(self + 4u) + 0x1058u);
        wr32(sp0 - 0x1b8u, t18 << 4u);
        g->eax = t18 << 4u;
        g->esp = sp0 - 0x1acu;
        t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t18 << 4u, rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u));
        t20 = g->edx;
        wr32(sp0 - 0x48u, t19);
        wr32(sp0 - 8u, 0u);
        if (t19 == 0u)
        {
            ecx = rd32(sp0 - 0x1b8u);
            edx = t20;
            wr32(sp0 - 0x38u, 0u);
            eax = 0u;
            loc_38 = 0u;
        }
        else
        {
            eax = t19;
            ecx = rd32(sp0 - 0x1b8u);
            edx = t20;
            edi = t18;
            loc_48 = t19;
            wr32(sp0 - 0x1b8u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0x1bcu, edi);
            wr32(sp0 - 0x1c0u, 0x10u);
            wr32(sp0 - 0x1c4u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0x1b4u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
            t21 = g->ecx;
            t22 = g->edx;
            t23 = rd32(sp0 - 0x48u);
            wr32(sp0 - 0x38u, t23);
            eax = t23;
            ecx = t21;
            edx = t22;
            loc_38 = t23;
        }
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x48u, eax);
        if (eax == 0u)
        {
            loc_48 = eax;
            goto L_102e0a8f;
        }
        loc_48 = eax;
        t24 = rd32(rd32(self) + 0x1058u) << 2u;
        wr32(sp0 - 0x1b8u, t24 << 4u);
        g->eax = t24 << 4u;
        g->esp = sp0 - 0x1acu;
        t25 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t24 << 4u, rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u));
        t26 = g->edx;
        wr32(sp0 - 0x34u, t25);
        wr32(sp0 - 8u, 1u);
        if (t25 == 0u)
        {
            ecx = rd32(sp0 - 0x1b8u);
            edx = t26;
            eax = 0u;
        }
        else
        {
            eax = t25;
            ecx = rd32(sp0 - 0x1b8u);
            edx = t26;
            edi = t24;
            loc_34 = t25;
            wr32(sp0 - 0x1b8u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0x1bcu, edi);
            wr32(sp0 - 0x1c0u, 0x10u);
            wr32(sp0 - 0x1c4u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0x1b4u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
            t27 = g->ecx;
            t28 = g->edx;
            eax = rd32(sp0 - 0x34u);
            ecx = t27;
            edx = t28;
        }
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x34u, eax);
        if (eax == 0u)
        {
            loc_34 = eax;
            goto L_102e0a8f;
        }
        loc_34 = eax;
        wr32(sp0 - 0x3cu, 0u);
        t29 = rd32(rd32(self) + 0x1058u);
        t30 = eax + t29 * 0x10u;
        wr32(sp0 - 0x20u, t30);
        wr32(sp0 - 0x2cu, eax);
        t31 = eax + t29 * 0x20u;
        wr32(sp0 - 0x44u, t31);
        t32 = eax + t29 * 0x30u;
        wr32(sp0 - 0x30u, t32);
        if (rd32(rd32(self + 4u) + 0x1060u) == 0u)
        {
            eax = rd32(self + 4u);
            ecx = t31;
        }
        else
        {
            edi = t32;
            loc_20 = t30;
            loc_2c = eax;
            eax = rd32(self + 4u);
            loc_44 = t31;
            loc_30 = t32;
            t33 = rd32(sp0 - 0x40u) + 8u;
            wr32(sp0 - 0x14u, t33);
            esi = self;
            loc_3c = 0u;
            loc_14 = t33;
L_102e053b: ;
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x1cu, 0xffffffffu);
            wr32(sp0 - 0x18u, 0xffffffffu);
            if (rd32(eax + 0x105cu) == 0u)
            {
                loc_28 = 0u;
            }
            else
            {
                ebx = rd32(sp0 - 0x50u) + 8u;
                loc_28 = 0u;
L_102e055a: ;
                wr32(sp0 - 0x24u, 0u);
                if (rd32(ebx - 8u) != 0xffffffffu)
                {
                    eax = rd32(ebx - 8u);
                    if (eax == 0xffffffffu)
                    {
                        wr32(sp0 - 0x18u, 0xffffffffu);
                        wr32(sp0 - 0x1cu, 0xffffffffu);
                        wr32(sp0 - 0x20u, loc_2c);
                        wr32(sp0 - 0x44u, edi);
                        wr32(sp0 - 0x2cu, loc_20);
                        wr32(sp0 - 0x30u, loc_44);
                        loc_30 = loc_44;
                        t40 = edi;
                        edi = loc_44;
                        loc_44 = t40;
                        t41 = loc_20;
                        loc_20 = loc_2c;
                        loc_2c = t41;
                    }
                    else
                    {
                        wr32(sp0 - 0x1b8u, loc_2c);
                        t34 = rd32(loc_14 - 8u);
                        wr32(sp0 - 0x1bcu, t34);
                        wr32(sp0 - 0x1cu, eax);
                        wr32(sp0 - 0x1c0u, eax);
                        g->esp = sp0 - 0x1b4u;
                        cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, eax, t34, loc_2c);
                        t35 = rd32(sp0 - 0x44u);
                        wr32(sp0 - 0x1b8u, t35);
                        t36 = rd32(rd32(sp0 - 0x14u));
                        wr32(sp0 - 0x1bcu, t36);
                        t37 = rd32(sp0 - 0x1cu);
                        wr32(sp0 - 0x1c0u, t37);
                        g->edx = rd32(sp0 - 0x14u);
                        t38 = rd32(sp0 - 0x14u);
                        cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, t37, t36, t35);
                        t39 = g->edx;
                        edx = t39;
                    }
                }
                if (rd32(ebx) != 0xffffffffu)
                {
                    eax = rd32(ebx);
                    wr32(sp0 - 0x1b8u, loc_20);
                    t42 = rd32(loc_14 - 8u);
                    wr32(sp0 - 0x1bcu, t42);
                    wr32(sp0 - 0x18u, eax);
                    wr32(sp0 - 0x1c0u, eax);
                    g->esp = sp0 - 0x1b4u;
                    cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, eax, t42, loc_20);
                    wr32(sp0 - 0x1b8u, edi);
                    t43 = rd32(rd32(sp0 - 0x14u));
                    wr32(sp0 - 0x1bcu, t43);
                    t44 = rd32(sp0 - 0x18u);
                    wr32(sp0 - 0x1c0u, t44);
                    g->edx = rd32(sp0 - 0x14u);
                    t45 = rd32(sp0 - 0x14u);
                    cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, t44, t43, edi);
                    t46 = g->edx;
                    edx = t46;
                }
                if (rd32(rd32(esi + 4u) + 0x1058u) == 0u)
                {
                    loc_24 = 0u;
                }
                else
                {
                    t47 = rd32(sp0 - 0x38u);
                    wr32(sp0 - 0x54u, t47);
                    eax = rd32(sp0 - 0x4cu) + 8u;
                    loc_24 = 0u;
                    loc_54 = t47;
L_102e05fe: ;
                    d48 = (double)rdf32(eax + 4u);
                    d49 = (double)(float)fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u));
                    wrf32(sp0 - 0x118u, (float)d49);
                    d50 = (double)(float)fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0x114u, (float)d50);
                    d51 = (double)(float)fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0x110u, (float)d51);
                    d52 = (double)rdf32(eax - 4u);
                    d53 = (double)(float)fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u + 4u));
                    wrf32(sp0 - 0x64u, (float)d53);
                    d54 = (double)(float)fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0x60u, (float)d54);
                    d55 = (double)(float)fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0x5cu, (float)d55);
                    d56 = (double)(float)fr(g, fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u)) + d49);
                    wrf32(sp0 - 0x98u, (float)d56);
                    d57 = (double)(float)fr(g, d53 + d50);
                    wrf32(sp0 - 0x94u, (float)d57);
                    d58 = (double)(float)fr(g, d54 + d51);
                    wrf32(sp0 - 0x90u, (float)d58);
                    d59 = (double)(float)fr(g, d56 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x178u, (float)d59);
                    d60 = (double)(float)fr(g, d57 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x174u, (float)d60);
                    d61 = (double)(float)fr(g, d58 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x170u, (float)d61);
                    d62 = fr(g, d55 + fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u + 0xcu)));
                    d63 = (double)rdf32(eax + 4u);
                    d64 = (double)(float)fr(g, d63 * (double)rdf32(loc_44 + rd32(eax) * 0x10u));
                    wrf32(sp0 - 0x198u, (float)d64);
                    d65 = (double)(float)fr(g, d63 * (double)rdf32(loc_44 + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0x194u, (float)d65);
                    d66 = (double)(float)fr(g, d63 * (double)rdf32(loc_44 + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0x190u, (float)d66);
                    d67 = (double)rdf32(eax - 4u);
                    d68 = (double)(float)fr(g, d67 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u + 4u));
                    wrf32(sp0 - 0xb4u, (float)d68);
                    d69 = (double)(float)fr(g, d67 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0xb0u, (float)d69);
                    d70 = (double)(float)fr(g, d67 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0xacu, (float)d70);
                    d71 = (double)(float)fr(g, fr(g, d67 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u)) + d64);
                    wrf32(sp0 - 0x138u, (float)d71);
                    d72 = (double)(float)fr(g, d68 + d65);
                    wrf32(sp0 - 0x134u, (float)d72);
                    d73 = (double)(float)fr(g, d69 + d66);
                    wrf32(sp0 - 0x130u, (float)d73);
                    d74 = (double)(float)fr(g, d71 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0xd8u, (float)d74);
                    d75 = (double)(float)fr(g, d72 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0xd4u, (float)d75);
                    d76 = (double)(float)fr(g, d73 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0xd0u, (float)d76);
                    d77 = fr(g, d70 + fr(g, d63 * (double)rdf32(loc_44 + rd32(eax) * 0x10u + 0xcu)));
                    d78 = (double)(float)fr(g, d74 + d59);
                    wrf32(sp0 - 0xf8u, (float)d78);
                    d79 = (double)(float)fr(g, d75 + d60);
                    wrf32(sp0 - 0xf4u, (float)d79);
                    d80 = (double)(float)fr(g, d76 + d61);
                    wrf32(sp0 - 0xf0u, (float)d80);
                    d81 = (double)(float)fr(g, d78 * (double)rdf32(loc_14 + 4u));
                    wrf32(sp0 - 0x188u, (float)d81);
                    d82 = (double)(float)fr(g, d79 * (double)rdf32(loc_14 + 4u));
                    wrf32(sp0 - 0x184u, (float)d82);
                    d83 = (double)(float)fr(g, d80 * (double)rdf32(loc_14 + 4u));
                    wrf32(sp0 - 0x180u, (float)d83);
                    d84 = fr(g, fr(g, d77 * (double)rdf32(ebx - 4u)) + fr(g, d62 * (double)rdf32(ebx + 4u)));
                    d85 = (double)rdf32(eax + 4u);
                    d86 = (double)(float)fr(g, d85 * (double)rdf32(loc_20 + rd32(eax) * 0x10u));
                    wrf32(sp0 - 0x158u, (float)d86);
                    d87 = (double)(float)fr(g, d85 * (double)rdf32(loc_20 + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0x154u, (float)d87);
                    d88 = (double)(float)fr(g, d85 * (double)rdf32(loc_20 + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0x150u, (float)d88);
                    d89 = (double)rdf32(eax - 4u);
                    d90 = (double)(float)fr(g, d89 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u + 4u));
                    wrf32(sp0 - 0x74u, (float)d90);
                    d91 = (double)(float)fr(g, d89 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0x70u, (float)d91);
                    d92 = (double)(float)fr(g, d89 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0x6cu, (float)d92);
                    d93 = (double)(float)fr(g, fr(g, d89 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u)) + d86);
                    wrf32(sp0 - 0x88u, (float)d93);
                    d94 = (double)(float)fr(g, d90 + d87);
                    wrf32(sp0 - 0x84u, (float)d94);
                    d95 = (double)(float)fr(g, d91 + d88);
                    wrf32(sp0 - 0x80u, (float)d95);
                    d96 = (double)(float)fr(g, d93 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x128u, (float)d96);
                    d97 = (double)(float)fr(g, d94 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x124u, (float)d97);
                    d98 = (double)(float)fr(g, d95 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x120u, (float)d98);
                    d99 = fr(g, d92 + fr(g, d85 * (double)rdf32(loc_20 + rd32(eax) * 0x10u + 0xcu)));
                    d100 = (double)rdf32(eax + 4u);
                    d101 = (double)(float)fr(g, d100 * (double)rdf32(loc_2c + rd32(eax) * 0x10u));
                    wrf32(sp0 - 0xa8u, (float)d101);
                    d102 = (double)(float)fr(g, d100 * (double)rdf32(loc_2c + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0xa4u, (float)d102);
                    d103 = (double)(float)fr(g, d100 * (double)rdf32(loc_2c + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0xa0u, (float)d103);
                    d104 = (double)rdf32(eax - 4u);
                    d105 = (double)(float)fr(g, d104 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u + 4u));
                    wrf32(sp0 - 0xc4u, (float)d105);
                    d106 = (double)(float)fr(g, d104 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0xc0u, (float)d106);
                    d107 = (double)(float)fr(g, d104 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0xbcu, (float)d107);
                    d108 = (double)(float)fr(g, fr(g, d104 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u)) + d101);
                    wrf32(sp0 - 0xe8u, (float)d108);
                    d109 = (double)(float)fr(g, d105 + d102);
                    wrf32(sp0 - 0xe4u, (float)d109);
                    d110 = (double)(float)fr(g, d106 + d103);
                    wrf32(sp0 - 0xe0u, (float)d110);
                    d111 = (double)(float)fr(g, d108 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0x108u, (float)d111);
                    d112 = (double)(float)fr(g, d109 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0x104u, (float)d112);
                    d113 = (double)(float)fr(g, d110 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0x100u, (float)d113);
                    d114 = fr(g, d107 + fr(g, d100 * (double)rdf32(loc_2c + rd32(eax) * 0x10u + 0xcu)));
                    d115 = (double)(float)fr(g, d111 + d96);
                    wrf32(sp0 - 0x148u, (float)d115);
                    d116 = (double)(float)fr(g, d112 + d97);
                    wrf32(sp0 - 0x144u, (float)d116);
                    d117 = (double)(float)fr(g, d113 + d98);
                    wrf32(sp0 - 0x140u, (float)d117);
                    d118 = (double)(float)fr(g, d115 * (double)rdf32(loc_14 - 4u));
                    wrf32(sp0 - 0x168u, (float)d118);
                    d119 = (double)(float)fr(g, d116 * (double)rdf32(loc_14 - 4u));
                    wrf32(sp0 - 0x164u, (float)d119);
                    d120 = (double)(float)fr(g, d117 * (double)rdf32(loc_14 - 4u));
                    wrf32(sp0 - 0x160u, (float)d120);
                    d121 = fr(g, fr(g, d114 * (double)rdf32(ebx - 4u)) + fr(g, d99 * (double)rdf32(ebx + 4u)));
                    wr32(sp0 - 0x54u, loc_54 + 0x10u);
                    d122 = (double)(float)fr(g, d118 + d81);
                    wrf32(sp0 - 0x1a8u, (float)d122);
                    wr32(sp0 - 0x24u, loc_24 + 1u);
                    d123 = (double)(float)fr(g, d119 + d82);
                    wrf32(sp0 - 0x1a4u, (float)d123);
                    d124 = (double)(float)fr(g, d120 + d83);
                    wrf32(sp0 - 0x1a0u, (float)d124);
                    d125 = (double)(float)fr(g, fr(g, d121 * (double)rdf32(loc_14 - 4u)) + fr(g, d84 * (double)rdf32(loc_14 + 4u)));
                    wrf32(sp0 - 0x19cu, (float)d125);
                    t126 = rd32(sp0 - 0x58u);
                    d127 = fr(g, d84 * (double)rdf32(loc_14 + 4u));
                    esi = sp0 - 0x1a8u;
                    edi = loc_54;
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    if (loc_24 + 1u < rd32(rd32(t126 + 4u) + 0x1058u))
                    {
                        eax = eax + 0x10u;
                        edi = loc_30;
                        loc_24 = loc_24 + 1u;
                        loc_54 = loc_54 + 0x10u;
                        goto L_102e05fe;
                    }
                    edx = loc_24 + 1u;
                    edi = loc_30;
                    loc_24 = loc_24 + 1u;
                    esi = rd32(sp0 - 0x58u);
                }
                t128 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x1b8u, t128);
                wr32(sp0 - 0x1bcu, loc_3c);
                wr32(sp0 - 0x1c0u, loc_28);
                g->edx = edx;
                g->esp = sp0 - 0x1b4u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 4u)) + 8u), rd32(esi + 4u), 3, loc_28, loc_3c, t128);
                t129 = g->edx;
                t130 = rd32(sp0 - 0x28u) + 1u;
                wr32(sp0 - 0x28u, t130);
                if (t130 < rd32(rd32(esi + 4u) + 0x105cu))
                {
                    edx = t129;
                    ebx = ebx + 0x10u;
                    loc_28 = t130;
                    goto L_102e055a;
                }
                edx = t129;
                loc_28 = t130;
            }
            wr32(sp0 - 0x14u, loc_14 + 0x10u);
            wr32(sp0 - 0x3cu, loc_3c + 1u);
            if (loc_3c + 1u < rd32(rd32(esi + 4u) + 0x1060u))
            {
                eax = rd32(esi + 4u);
                loc_3c = loc_3c + 1u;
                loc_14 = loc_14 + 0x10u;
                loc_1c = 0xffffffffu;
                loc_18 = 0xffffffffu;
                goto L_102e053b;
            }
            eax = rd32(esi + 4u);
            ecx = loc_3c + 1u;
        }
        esi = 0u;
L_102e0a94: ;
        t131 = rd32(sp0 - 0x4cu);
        wr32(sp0 - 0x1b8u, t131);
        g->eax = eax;
        g->esp = sp0 - 0x1b4u;
        t132 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t131);
        t133 = g->ecx;
        t134 = g->edx;
        t135 = rd32(sp0 - 0x50u);
        wr32(sp0 - 0x1bcu, t135);
        g->esp = sp0 - 0x1b8u;
        t136 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t133, t134, 1, 1, t135);
        t137 = g->ecx;
        t138 = g->edx;
        t139 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x1c0u, t139);
        g->esp = sp0 - 0x1bcu;
        t140 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t137, t138, 1, 1, t139);
        t141 = g->ecx;
        t142 = g->edx;
        t143 = rd32(sp0 - 0x48u);
        wr32(sp0 - 0x1c4u, t143);
        g->esp = sp0 - 0x1c0u;
        t144 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t141, t142, 1, 1, t143);
        t145 = g->ecx;
        t146 = g->edx;
        t147 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x1c8u, t147);
        g->esp = sp0 - 0x1c4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t145, t146, 1, 1, t147);
        t148 = g->edx;
        eax = esi;
        edx = t148;
        ebx = rd32(sp0 - 0x1b0u);
        edi = rd32(sp0 - 0x1b4u);
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
L_102e0a8f: ;
    esi = 0x8007000eu;
    goto L_102e0a94;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e039f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e039f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
