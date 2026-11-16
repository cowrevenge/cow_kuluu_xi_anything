/* f_0x100d5b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d5b10(Guest* g)
{
    double d61;
    double d74;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d85;
    double d86;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
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
    uint32_t t62;
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
    uint32_t t75;
    uint32_t t8;
    uint32_t t84;
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
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x68u, in_ebx);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (rd32(t1) == 0u) goto L_100d5ee5;
    eax = t1;
    edx = t2;
    ebx = rd32(t1);
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t3 = cow_thiscall(g, COW_IMG(0x10084670u), self, 0);
    if ((uint8_t)t3 == 0u) goto L_100d5b49;
    wr32(self + 0x854u, 0xbf800000u);
    g->ebx = rd32(sp0 - 0x68u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    return;
L_100d5b49: ;
    t4 = rd32(self + 0x840u);
    if ((t4 & 1u) != 1u)
    {
        eax = t4;
        goto L_100d5b6c;
    }
    eax = t4;
    if ((eax & 2u) != 0u) goto L_100d5b6c;
    wr32(self + 0x854u, 0x3f800000u);
L_100d5cae: ;
    t44 = rd32(self + 0x848u);
    wr32(sp0 - 0x60u, t44);
    t45 = rd32(self + 0x84cu);
    wr32(sp0 - 0x5cu, t45);
    t46 = rd32(self + 0x854u);
    wr32(sp0 - 0x54u, t46);
    t47 = rd32(self + 0x850u);
    wr32(sp0 - 0x58u, t47);
    g->eax = t47;
    g->edx = rd32(self);
    t48 = rd32(self);
    g->esp = sp0 - 0x70u;
    t49 = cow_thiscall(g, rd32(t48 + 0x1bcu), self, 0);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0x74u, t49);
    wr32(sp0 - 0x78u, sp0 - 0x60u);
    g->eax = sp0 - 0x60u;
    g->edx = t51;
    t52 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x60u, t49);
    t53 = g->edx;
    g->edx = t53;
    t54 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t55 = g->edx;
    t56 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    g->edx = rd32(self);
    t57 = rd32(self);
    t58 = cow_thiscall(g, rd32(t57 + 0x1c0u), self, 0);
    t59 = g->ecx;
    t60 = g->edx;
    wr32(sp0 - 0x74u, t59);
    d61 = (double)(float)-(double)rdf32(t58 + 4u);
    wrf32(sp0 - 0x74u, (float)d61);
    g->edx = t60;
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, cow_f2bits(d61));
    t62 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x60u);
    g->eax = sp0 - 0x60u;
    g->edx = t62;
    t63 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x60u);
    t64 = g->edx;
    g->ecx = sp0 - 0x40u;
    g->edx = t64;
    t65 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t66 = g->ecx;
    t67 = g->edx;
    wr32(sp0 - 0x64u, 0x3d23d70au);
    t68 = cow_stdcall(g, COW_IMG(0x10087060u), 0);
    if ((uint8_t)t68 == 0u)
    {
        eax = t68;
    }
    else
    {
        eax = t68;
        g->eax = eax;
        g->edx = rd32(self);
        t69 = rd32(self);
        g->esp = sp0 - 0x70u;
        t70 = cow_thiscall(g, rd32(t69 + 0x144u), self, 0);
        t71 = g->edx;
        if (t70 == 0u)
        {
            eax = t70;
        }
        else
        {
            edx = t71;
            g->eax = rd32(self);
            t72 = rd32(self);
            g->esp = sp0 - 0x70u;
            t73 = cow_thiscall(g, rd32(t72 + 0x144u), self, 0);
            wr32(sp0 - 0x64u, t73);
            d74 = (double)(float)fr(g, fr(g, (double)(int32_t)t73 * (double)rdf32(COW_IMG(0x10329a18u))) * (double)rdf32(COW_IMG(0x1032a85cu)));
            wrf32(sp0 - 0x64u, (float)d74);
            eax = t73;
        }
    }
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    wr32(sp0 - 0x78u, sp0 - 0x60u);
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t75 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x60u, sp0 - 0x50u);
    d76 = cow_take_float(g);
    d77 = (double)rdf32(self + 0x854u);
    if (d77 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t75 & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d76;
        goto L_100d5e32;
    }
    eax = (t75 & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = d76;
    d78 = (double)rdf32(sp0 - 0x60u);
    if (d78 < (double)rdf32(COW_IMG(0x1032a3d0u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d78, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u);
        goto L_100d5e32;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d78, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u);
    if (x0 < (double)rdf32(COW_IMG(0x103313a8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103313a8u)), 0u);
        goto L_100d5e34;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103313a8u)), 0u);
    d79 = (double)rdf32(sp0 - 0x58u);
    d80 = (double)rdf32(sp0 - 0x60u);
    d81 = fr(g, sqrt(fr(g, fr(g, d79 * d79) + fr(g, d80 * d80))));
    if (d81 < (double)rdf32(COW_IMG(0x1032b15cu)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x1032b15cu)), 0u);
        goto L_100d5e34;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, (double)rdf32(COW_IMG(0x1032b15cu)), 0u);
    d82 = fr(g, (double)rdf32(sp0 - 0x64u) + (double)rdf32(ebx + 0xbcu));
    wrf32(ebx + 0xbcu, (float)d82);
    d83 = (double)rdf32(ebx + 0xbcu);
    if ((cow_fsw(g, d83, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u) goto L_100d5ee5;
    t84 = rd32(sp0 - 0x70u);
    wr32(ebx + 0xbcu, 0x3f800000u);
    g->ebx = rd32(sp0 - 0x68u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = t84;
    return;
L_100d5b6c: ;
    g->eax = eax;
    g->edx = rd32(self);
    t5 = rd32(self);
    g->esp = sp0 - 0x70u;
    t6 = cow_thiscall(g, rd32(t5 + 0x304u), self, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0x70u;
        t10 = cow_call_regs(g, COW_IMG(0x100845e0u), eax, self, g->edx, 1, 0);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    else
    {
        eax = t6;
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0x70u;
        t8 = cow_call_regs(g, COW_IMG(0x10157cf0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    if ((rd8(self + 0x840u) & 2u) == 0u)
    {
        edi = eax;
        eax = (eax & 0xffffff00u) | rd8(self + 0x840u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x840u);
        edi = 0u;
    }
    wr32(self + 0x854u, 0xbf800000u);
    if (edi != 0u)
    {
        if (edi != self)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t12 = cow_thiscall(g, COW_IMG(0x10084400u), edi, 0);
            t13 = g->edx;
            if (t12 == 0u)
            {
                eax = t12;
                edx = t13;
                goto L_100d5c01;
            }
            eax = t12;
            edx = t13;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t14 = cow_thiscall(g, COW_IMG(0x10084400u), edi, 0);
            t15 = g->edx;
            if (t14 == 1u)
            {
                eax = t14;
                edx = t15;
                goto L_100d5c01;
            }
            eax = t14;
            edx = t15;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t16 = cow_thiscall(g, COW_IMG(0x10084400u), edi, 0);
            t17 = g->edx;
            if (t16 == 2u)
            {
                eax = t16;
                edx = t17;
                goto L_100d5c01;
            }
            eax = t16;
            edx = t17;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t18 = cow_thiscall(g, COW_IMG(0x10084400u), edi, 0);
            t19 = g->edx;
            if (t18 == 6u)
            {
                eax = t18;
                edx = t19;
                goto L_100d5c01;
            }
            eax = t18;
            edx = t19;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t20 = cow_thiscall(g, COW_IMG(0x10084400u), edi, 0);
            t21 = g->edx;
            if (t20 == 7u)
            {
                eax = t20;
                edx = t21;
                goto L_100d5c01;
            }
            eax = t20;
            edx = t21;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t22 = cow_thiscall(g, COW_IMG(0x10084400u), edi, 0);
            t23 = g->edx;
            if (t22 != 8u) goto L_100d5cae;
            eax = t22;
            edx = t23;
L_100d5c01: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t24 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t25 = g->edx;
            if (t24 == 0u)
            {
                edx = t25;
                goto L_100d5c5d;
            }
            eax = t24;
            edx = t25;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t26 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t27 = g->edx;
            if (t26 == 0x2fu)
            {
                edx = t27;
                goto L_100d5c5d;
            }
            eax = t26;
            edx = t27;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t28 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t29 = g->edx;
            wr32(sp0 - 0x74u, t28);
            g->edx = t29;
            t30 = cow_thiscall(g, COW_IMG(0x10084330u), self, 1, t28);
            t31 = g->edx;
            if ((uint8_t)t30 != 0u)
            {
                edx = t31;
                goto L_100d5c5d;
            }
            eax = t30;
            edx = t31;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t32 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t33 = g->edx;
            if (t32 == 0x30u)
            {
                edx = t33;
                goto L_100d5c5d;
            }
            eax = t32;
            edx = t33;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t34 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t35 = g->edx;
            wr32(sp0 - 0x74u, t34);
            g->edx = t35;
            t36 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t34);
            t37 = g->edx;
            if ((uint8_t)t36 != 0u)
            {
                edx = t37;
                goto L_100d5c5d;
            }
            eax = t36;
            edx = t37;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            t38 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
            t39 = g->edx;
            wr32(sp0 - 0x74u, t38);
            g->edx = t39;
            t40 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t38);
            t41 = g->edx;
            if ((uint8_t)t40 == 0u) goto L_100d5cae;
            edx = t41;
L_100d5c5d: ;
            wr32(sp0 - 0x74u, sp0 - 0x60u);
            wr32(sp0 - 0x78u, 3u);
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, rd32(rd32(edi) + 0x1c4u), edi, 2, 3u, sp0 - 0x60u);
            wr32(sp0 - 0x54u, 0u);
            if (rd16(edi + 0xb2u) == 0u)
            {
                x0 = (double)rdf32(sp0 - 0x5cu);
            }
            else
            {
                x0 = (double)rdf32(sp0 - 0x5cu);
                x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032a404u)));
            }
            t42 = rd32(sp0 - 0x58u);
            t43 = rd32(sp0 - 0x60u);
            wrf32(self + 0x84cu, (float)x0);
            wr32(self + 0x848u, t43);
            wr32(self + 0x850u, t42);
            wr32(self + 0x854u, 0u);
        }
    }
    goto L_100d5cae;
L_100d5e32: ;
L_100d5e34: ;
    d85 = fr(g, (double)rdf32(ebx + 0xbcu) - (double)rdf32(sp0 - 0x64u));
    wrf32(ebx + 0xbcu, (float)d85);
    d86 = (double)rdf32(ebx + 0xbcu);
    if (d86 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(ebx + 0xb0u, rd32(COW_IMG(0x1035f5fcu)));
        wr32(ebx + 0xb4u, rd32(COW_IMG(0x1035f600u)));
        t87 = rd32(COW_IMG(0x1035f604u));
        wr32(ebx + 0xb8u, t87);
        t88 = rd32(COW_IMG(0x1035f608u));
        wr32(ebx + 0xbcu, t88);
        g->eax = t88;
        g->edx = t87;
        g->esp = sp0 - 0x70u;
        t89 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
        t90 = g->edx;
        t91 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
        g->edx = rd32(self);
        t92 = rd32(self);
        t93 = cow_thiscall(g, rd32(t92 + 0x1c0u), self, 0);
        t94 = g->edx;
        t95 = rd32(t93 + 4u);
        wr32(sp0 - 0x74u, t95);
        g->eax = t95;
        t96 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t95);
        g->edx = rd32(self);
        t97 = rd32(self);
        t98 = cow_thiscall(g, rd32(t97 + 0x1bcu), self, 0);
        t99 = g->edx;
        wr32(sp0 - 0x74u, t98);
        g->edx = t99;
        t100 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, t98);
        t101 = g->edx;
        wr32(sp0 - 0x74u, ebx + 0xb0u);
        g->edx = t101;
        t102 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, ebx + 0xb0u);
        t103 = g->edx;
        wr32(ebx + 0xbcu, 0u);
        cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    }
L_100d5ee5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d5b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d5b10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
