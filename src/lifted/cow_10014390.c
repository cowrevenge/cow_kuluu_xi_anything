/* f_0x10014390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10014390(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
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
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t t1;
    uint32_t t10;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
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
    uint32_t t61;
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
    uint32_t t8;
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
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x64u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x6cu;
    t1 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t2 = g->edx;
    if (t1 != 0xau)
    {
        eax = t1;
        edx = t2;
        goto L_100143de;
    }
    eax = t1;
    edx = t2;
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106631d4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x6cu;
        t3 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0x70u, esi);
        t6 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x106631d4u), 0u);
        eax = t6;
    }
    wr32(self + 0x44u, 0xcu);
    return (eax & 0xffffff00u) | 1u;
L_100143de: ;
    if (eax != 0xbu) goto L_10014434;
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106631d4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x6cu;
        t7 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x70u, esi);
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x106631d4u), 0u);
    }
    wr8(sp0 - 0x62u, 0u);
    wr8(sp0 - 0x63u, 0u);
    wr8(sp0 - 0x64u, 0u);
    wr8(sp0 - 0x61u, 0u);
    t10 = rd32(sp0 - 0x64u);
    wr32(self + 0x44u, 0xdu);
    wr32(self + 0x334u, t10);
    return (t10 & 0xffffff00u) | 1u;
L_10014434: ;
    if (eax != 0xeu) goto L_1001448a;
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106631d4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x6cu;
        t11 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x70u, esi);
        t14 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x106631d4u), 0u);
        eax = t14;
    }
    wr8(sp0 - 0x62u, 0u);
    wr8(sp0 - 0x63u, 0u);
    wr8(sp0 - 0x64u, 0u);
    wr8(sp0 - 0x61u, 0u);
    t15 = rd32(sp0 - 0x64u);
    wr32(self + 0x44u, 0xbu);
    wr32(self + 0x334u, t15);
    return (eax & 0xffffff00u) | 1u;
L_1001448a: ;
    wr32(sp0 - 0x70u, in_ebx);
    if (rd32(self + 0x50u) == 0u)
    {
        eax = rd32(self + 0x50u);
        loc_68 = in_ebp;
        loc_6c = in_esi;
        loc_64 = self;
        loc_70 = in_ebx;
    }
    else
    {
        eax = rd32(self + 0x50u);
        if (rd32(COW_IMG(0x10631f24u)) == 0u)
        {
            loc_68 = in_ebp;
            loc_6c = in_esi;
            loc_64 = self;
            loc_70 = in_ebx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10631f24u));
            wr32(sp0 - 0x74u, eax + 0x44u);
            wr32(sp0 - 0x78u, sp0 - 0x60u);
            g->esp = sp0 - 0x70u;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x60u, eax + 0x44u);
            wr32(sp0 - 0x74u, sp0 - 0x4cu);
            wr32(sp0 - 0x78u, 0x42c80000u);
            t16 = rd32(sp0 - 0x58u);
            wr32(sp0 - 0x7cu, t16);
            t17 = rd32(sp0 - 0x5cu);
            wr32(sp0 - 0x80u, t17);
            t18 = rd32(sp0 - 0x60u);
            wr32(sp0 - 0x84u, t18);
            g->eax = t18;
            g->edx = t17;
            t19 = cow_thiscall(g, COW_IMG(0x101813f0u), rd32(COW_IMG(0x10631f24u)), 5, t18, t17, t16, 0x42c80000u, sp0 - 0x4cu);
            t20 = g->edx;
            g->edx = t20;
            t21 = cow_thiscall(g, COW_IMG(0x10179390u), rd32(COW_IMG(0x10631f24u)), 0);
            t22 = g->edx;
            g->edx = t22;
            t23 = cow_thiscall(g, COW_IMG(0x10179420u), rd32(COW_IMG(0x10631f24u)), 0);
            t24 = g->edx;
            wr32(sp0 - 0x74u, t23);
            g->ebx = 1u;
            g->ebp = self;
            t25 = cow_fastcall(g, COW_IMG(0x1018b5e0u), rd32(COW_IMG(0x1065cb04u)), t24, 1, t23);
            t26 = g->edx;
            g->edx = t26;
            t27 = cow_thiscall(g, COW_IMG(0x10179410u), rd32(COW_IMG(0x10631f24u)), 0);
            t28 = g->edx;
            g->edx = t28;
            t29 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
            t30 = g->edx;
            if (t29 == 0u)
            {
                eax = t29;
                edx = t30;
                loc_68 = in_ebp;
                loc_6c = in_esi;
                loc_64 = self;
                loc_70 = in_ebx;
            }
            else
            {
                eax = t29;
                esi = t29;
                g->eax = eax;
                g->edx = rd32(esi);
                t31 = rd32(esi);
                g->esp = sp0 - 0x70u;
                t32 = cow_thiscall(g, rd32(t31 + 0x1bcu), esi, 0);
                t33 = g->edx;
                wr32(sp0 - 0x74u, t32);
                g->eax = rd32(esi);
                g->edx = t33;
                t34 = rd32(esi);
                g->esp = sp0 - 0x74u;
                t35 = cow_thiscall(g, rd32(t34 + 0x1bcu), esi, 0);
                t36 = g->edx;
                wr32(sp0 - 0x78u, t35);
                g->edx = t36;
                g->esp = sp0 - 0x70u;
                t37 = cow_thiscall(g, COW_IMG(0x10181540u), rd32(COW_IMG(0x10631f24u)), 2, t35, rd32(sp0 - 0x74u));
                t38 = g->edx;
                if ((int32_t)t37 < 0)
                {
                    eax = t37;
                    edx = t38;
                    loc_68 = rd32(sp0 - 0x68u);
                    loc_6c = rd32(sp0 - 0x6cu);
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_70 = rd32(sp0 - 0x70u);
                }
                else
                {
                    eax = t37;
                    edx = t38;
                    wr32(sp0 - 0x74u, eax);
                    wr32(sp0 - 0x78u, 1u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x70u;
                    t39 = cow_thiscall(g, COW_IMG(0x10178a20u), rd32(COW_IMG(0x10631f24u)), 2, 1u, eax);
                    t40 = g->edx;
                    eax = t39;
                    edx = t40;
                    loc_68 = rd32(sp0 - 0x68u);
                    loc_6c = rd32(sp0 - 0x6cu);
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_70 = rd32(sp0 - 0x70u);
                }
            }
        }
    }
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
        edi = in_edi;
        goto L_10014995;
    }
    ecx = rd32(COW_IMG(0x104568fcu));
    if (rd32(COW_IMG(0x1045697cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1045697cu));
        goto L_100145c2;
    }
    eax = rd32(COW_IMG(0x1045697cu));
    if (eax != 1u)
    {
        eax = eax - 1u;
        edi = in_edi;
        goto L_10014995;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t41 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t41 == 0u)
    {
        eax = t41;
        edi = in_edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        goto L_10014995;
    }
    eax = t41;
    esi = t41;
    g->eax = eax;
    g->edx = rd32(esi);
    t42 = rd32(esi);
    g->esp = sp0 - 0x70u;
    t43 = cow_thiscall(g, rd32(t42 + 0x1bcu), esi, 0);
    t44 = g->edx;
    wr32(sp0 - 0x74u, t43);
    g->eax = rd32(esi);
    g->edx = t44;
    t45 = rd32(esi);
    g->esp = sp0 - 0x74u;
    t46 = cow_thiscall(g, rd32(t45 + 0x1bcu), esi, 0);
    t47 = g->edx;
    wr32(sp0 - 0x78u, t46);
    g->edx = t47;
    g->esp = sp0 - 0x70u;
    t48 = cow_thiscall(g, COW_IMG(0x10181540u), rd32(COW_IMG(0x10631f24u)), 2, t46, rd32(sp0 - 0x74u));
    t49 = g->edx;
    if ((int32_t)t48 < 0)
    {
        eax = t48;
        edi = in_edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        goto L_10014995;
    }
    eax = t48;
    edx = t49;
    wr32(sp0 - 0x74u, eax);
    wr32(sp0 - 0x78u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t50 = cow_thiscall(g, COW_IMG(0x10178a20u), rd32(COW_IMG(0x10631f24u)), 2, 1u, eax);
    g->ebx = rd32(sp0 - 0x70u);
    g->esi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x68u);
    return t50 & 0xffffff00u;
L_100145c2: ;
    wr32(sp0 - 0x74u, 0x2acu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t51 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x2acu);
    t52 = g->edx;
    if (t51 == 0u)
    {
        eax = t51;
        wr32(COW_IMG(0x10480af0u), 0u);
    }
    else
    {
        eax = t51;
        edx = t52;
        g->eax = eax;
        g->esp = sp0 - 0x70u;
        t53 = cow_thiscall(g, COW_IMG(0x1008a120u), eax, 0);
        wr32(COW_IMG(0x10480af0u), t53);
        eax = t53;
    }
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x78u, COW_IMG(0x1035032cu));
    wr32(sp0 - 0x38u, 0u);
    wr16(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x34u, 0u);
    wr16(sp0 - 0x3eu, 1u);
    wr32(sp0 - 0x30u, 0u);
    wr16(sp0 - 0x3cu, 1u);
    wr16(sp0 - 0x2cu, 0u);
    wr16(sp0 - 0x3au, 1u);
    wr16(sp0 - 0x38u, 1u);
    wr16(sp0 - 0x36u, 1u);
    wr16(sp0 - 0x34u, 1u);
    wr16(sp0 - 0x32u, 1u);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, COW_IMG(0x100abc20u), sp0 - 0x28u, 2, COW_IMG(0x1035032cu), sp0 - 0x40u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0x3fc90fdbu);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0xc2c80000u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    t54 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x40u);
    wr32(sp0 - 0x50u, t54);
    t55 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x44u);
    wr32(sp0 - 0x4cu, t55);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, 0xcb8u);
    t56 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x48u);
    wr32(sp0 - 0x48u, t56);
    g->eax = t56;
    g->edx = t55;
    g->esp = sp0 - 0x74u;
    t57 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xcb8u, 4u);
    t58 = g->edx;
    g->esp = sp0 - 0x70u;
    cow_fastcall(g, COW_IMG(0x100748f0u), t57, t58, 0);
    t59 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t57 == 0u)
    {
        edx = t59;
        ebp = self;
        esi = 0u;
        edi = in_edi;
    }
    else
    {
        esi = t57;
        wr32(sp0 - 0x74u, 0u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        g->ebx = 1u;
        g->eax = sp0 - 0x50u;
        g->edx = sp0 - 0x60u;
        g->esp = sp0 - 0x70u;
        t60 = cow_thiscall(g, COW_IMG(0x100ab700u), esi, 4, sp0 - 0x50u, sp0 - 0x60u, sp0 - 0x28u, 0u);
        t61 = g->edx;
        if (t60 == 0u)
        {
            edx = t61;
            ebp = self;
            esi = t60;
            edi = in_edi;
        }
        else
        {
            eax = t60;
            esi = t60;
            wr32(sp0 - 0x74u, in_edi);
            g->eax = eax;
            g->edx = rd32(esi);
            t62 = rd32(esi);
            g->esp = sp0 - 0x74u;
            t63 = cow_thiscall(g, rd32(t62 + 0x1bcu), esi, 0);
            t64 = g->ecx;
            t65 = g->edx;
            wr32(sp0 - 0x78u, t63);
            wr32(sp0 - 0x7cu, esi + 0x34u);
            g->edx = t65;
            cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x34u, t63);
            t66 = g->edx;
            g->eax = rd32(esi);
            g->edx = t66;
            t67 = rd32(esi);
            t68 = cow_thiscall(g, rd32(t67 + 0x1c0u), esi, 0);
            t69 = g->ecx;
            t70 = g->edx;
            wr32(sp0 - 0x78u, t68);
            wr32(sp0 - 0x7cu, esi + 0x44u);
            t71 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x44u, t68);
            d72 = (double)rdf32(esi + 0x44u);
            if ((cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = esi + 0x34u;
                edi = esi + 0x44u;
            }
            else
            {
                eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = esi + 0x34u;
                edi = esi + 0x44u;
                d73 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d73);
            }
            if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d74 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d74);
            }
            d75 = (double)rdf32(esi + 0x48u);
            if ((cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d76 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x48u, (float)d76);
            }
            d77 = (double)rdf32(esi + 0x48u);
            if (!(d77 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                d78 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x48u, (float)d78);
            }
            d79 = (double)rdf32(esi + 0x4cu);
            if ((cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                d80 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x4cu, (float)d80);
            }
            d81 = (double)rdf32(esi + 0x4cu);
            if (d81 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
                d82 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x4cu, (float)d82);
            }
            wr32(sp0 - 0x78u, ebx);
            wr32(esi + 0xe4u, rd32(edi));
            t83 = rd32(edi + 4u);
            wr32(esi + 0xe8u, t83);
            t84 = rd32(edi + 8u);
            wr32(esi + 0xecu, t84);
            t85 = rd32(edi + 0xcu);
            wr32(esi + 0xf0u, t85);
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, COW_IMG(0x100a57c0u), esi, 1, ebx);
            wr32(sp0 - 0x78u, ebx);
            wr32(esi + 0xe4u, rd32(edi));
            t86 = rd32(edi + 4u);
            wr32(esi + 0xe8u, t86);
            t87 = rd32(edi + 8u);
            wr32(esi + 0xecu, t87);
            t88 = rd32(edi + 0xcu);
            wr32(esi + 0xf0u, t88);
            wr32(sp0 - 0x7cu, esi + 0x5c4u);
            g->eax = esi + 0x5c4u;
            t89 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x5c4u, ebx);
            g->edx = rd32(esi);
            t90 = rd32(esi);
            t91 = cow_thiscall(g, rd32(t90 + 0x318u), esi, 0);
            t92 = g->ecx;
            t93 = g->edx;
            if (t91 != 0u)
            {
                ecx = t92;
                edx = t93;
                ebp = self;
            }
            else
            {
                eax = t91;
                ecx = t92;
                edx = t93;
                wr32(sp0 - 0x78u, edi);
                wr32(sp0 - 0x7cu, esi + 0x61cu);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x74u;
                t94 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x61cu, edi);
                t95 = g->ecx;
                t96 = g->edx;
                d97 = (double)rdf32(esi + 0x61cu);
                if ((cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t95;
                    edx = t96;
                    ebp = esi + 0x61cu;
                }
                else
                {
                    eax = cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t95;
                    edx = t96;
                    ebp = esi + 0x61cu;
                    d98 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp, (float)d98);
                }
                if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d99 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp, (float)d99);
                }
                d100 = (double)rdf32(esi + 0x620u);
                if ((cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d101 = fr(g, (double)rdf32(esi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x620u, (float)d101);
                }
                d102 = (double)rdf32(esi + 0x620u);
                if (!(d102 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d102, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d102, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    d103 = fr(g, (double)rdf32(esi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x620u, (float)d103);
                }
                d104 = (double)rdf32(esi + 0x624u);
                if ((cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    d105 = fr(g, (double)rdf32(esi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x624u, (float)d105);
                }
                d106 = (double)rdf32(esi + 0x624u);
                if (!(d106 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    ebp = rd32(sp0 - 0x64u);
                }
                else
                {
                    ebp = rd32(sp0 - 0x64u);
                    d107 = fr(g, (double)rdf32(esi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x624u, (float)d107);
                }
            }
            wr32(sp0 - 0x78u, ebx);
            wr32(sp0 - 0x7cu, esi + 0x5fcu);
            g->eax = esi + 0x5fcu;
            g->edx = edx;
            g->esp = sp0 - 0x74u;
            t108 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x5fcu, ebx);
            t109 = g->edx;
            wr32(esi + 0x608u, 0x3f800000u);
            wr32(sp0 - 0x78u, 4u);
            g->edx = t109;
            cow_thiscall(g, COW_IMG(0x100749b0u), esi, 1, 4u);
            t110 = g->edx;
            edx = t110;
            edi = rd32(sp0 - 0x74u);
        }
    }
    t111 = rd32(rd32(COW_IMG(0x10480af0u)) + 0x120u) & 0xffefffffu;
    t112 = rd32(COW_IMG(0x10480af0u));
    wr32(t112 + 0x120u, t111);
    wr32(rd32(COW_IMG(0x10480af0u)) + 0xa0u, esi);
    if (rd8(COW_IMG(0x10358188u)) == 0u)
    {
        eax = (t112 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
    }
    else
    {
        eax = (t112 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
        wr32(sp0 - 0x74u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x70u;
        t113 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, esi);
        eax = t113;
    }
    wr8(sp0 - 0x62u, 0x80u);
    wr8(sp0 - 0x63u, 0x80u);
    wr8(sp0 - 0x64u, 0x80u);
    wr8(sp0 - 0x61u, 0x80u);
    t114 = rd32(sp0 - 0x64u);
    wr32(ebp + 0x334u, t114);
    wr32(ebp + 0x338u, t114);
    wr32(COW_IMG(0x1045697cu), rd32(COW_IMG(0x1045697cu)) + 1u);
    eax = t114;
    loc_68 = rd32(sp0 - 0x68u);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
L_10014995: ;
    g->ebx = loc_70;
    g->esi = loc_6c;
    g->edi = edi;
    g->ebp = loc_68;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10014390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
