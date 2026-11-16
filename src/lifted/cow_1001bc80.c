/* f_0x1001bc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001bc80(Guest* g)
{
    double d2;
    double d31;
    double d35;
    double d39;
    double d4;
    double d43;
    double d47;
    double d51;
    double d56;
    double d65;
    double d66;
    double d67;
    double d68;
    double d7;
    double d71;
    double d72;
    double d73;
    double d75;
    double d76;
    double d77;
    double d79;
    double d8;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d87;
    double d88;
    double d9;
    double d91;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_74_f;
    double loc_78_f;
    uint32_t loc_7c;
    uint32_t loc_90;
    double loc_90_f;
    uint32_t loc_94;
    double loc_94_f;
    double loc_98_f;
    uint32_t loc_9c;
    double loc_9c_f;
    uint32_t loc_a0;
    double loc_a0_f;
    uint32_t loc_a4;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t69;
    uint32_t t70;
    uint32_t t74;
    uint32_t t78;
    uint32_t t86;
    uint32_t t89;
    uint32_t t90;
    uint32_t t92;
    uint32_t t93;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 248u);

    wr32(sp0 - 0xa8u, in_ebx);
    wr32(sp0 - 0xacu, in_ebp);
    wr32(sp0 - 0xb0u, in_esi);
    wr32(sp0 - 0xb4u, in_edi);
    if (rd32(self + 0x14c0u) == 0u)
    {
        eax = rd32(self + 0x14c0u);
        ebp = 0u;
    }
    else
    {
        eax = rd32(self + 0x14c0u);
        ebp = rd32(eax);
    }
    g->edx = in_edx;
    g->esp = sp0 - 0xb4u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t1 = g->edx;
    d2 = cow_take_float(g);
    t3 = rd32(self + 0x14a0u);
    wr32(sp0 - 0xa4u, t3);
    wr32(sp0 - 0x90u, ebp + 0x30u);
    d4 = fr(g, fr(g, d2 * (double)rdf32(self + 0x14bcu)) + (double)rdf32(self + 0x14b8u));
    wrf32(self + 0x14b8u, (float)d4);
    if ((int32_t)t3 >= (int32_t)rd8(ebp + 0x30u))
    {
        edx = t1;
        x0 = d4;
        goto L_1001bf98;
    }
    edi = ebp + 0x30u;
    loc_a4 = t3;
    loc_90 = ebp + 0x30u;
    x0 = d4;
    t5 = rd8(ebp + 0x31u);
    wr32(sp0 - 0xa0u, t5);
    t6 = rd8(ebp + 0x40u);
    wr32(sp0 - 0xa0u, t6);
    d7 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10329fd8u)) / (double)(int32_t)t5);
    wrf32(sp0 - 0x9cu, (float)d7);
    wrf32(sp0 - 0x98u, (float)(double)(float)(double)(int32_t)t6);
    d8 = fr(g, fr(g, (double)(int32_t)loc_a4 * d7) + (double)(float)(double)(int32_t)t6);
    if (!(d8 <= x0))
    {
        edx = t5;
        goto L_1001bf98;
    }
    edx = t5;
    ebx = 0u;
    loc_9c_f = d7;
    loc_98_f = (double)(float)(double)(int32_t)t6;
L_1001bd13: ;
    wr32(sp0 - 0xa4u, loc_a4 + 1u);
    d9 = fr(g, fr(g, (double)(int32_t)(loc_a4 + 1u) * loc_9c_f) + loc_98_f);
    if (d9 <= x0)
    {
        ebx = ebx + 1u;
        loc_a4 = loc_a4 + 1u;
        goto L_1001bd13;
    }
    eax = (loc_a4 + 1u & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, x0, 1u);
    ebx = ebx + 1u;
    if (ebx == 0u) goto L_1001bf9a;
    if (ebx == 1u) goto L_1001bf9a;
    ebx = ebx - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t10 = cow_thiscall(g, COW_IMG(0x10081550u), self + 0x34u, 0);
    t11 = g->edx;
    wr32(sp0 - 0xa0u, t10);
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1002b5a0u), t10 + 0x674u, 0);
    t13 = g->edx;
    if (rd32(t12) == 0u)
    {
        eax = rd32(t12);
        edx = t13;
        goto L_1001c250;
    }
    eax = rd32(t12);
    edx = t13;
    ebp = t10;
    g->eax = eax;
    g->esp = sp0 - 0xb4u;
    t14 = cow_thiscall(g, COW_IMG(0x1001b1a0u), eax + 0x24u, 0);
    eax = t14;
L_1001bd6e: ;
    wr32(sp0 - 0xb8u, sp0 - 0x60u);
    t15 = rd32(self + 0x14a0u);
    wr32(sp0 - 0xbcu, t15);
    g->edx = t15;
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, COW_IMG(0x1001d000u), edi, 2, t15, sp0 - 0x60u);
    t16 = g->edx;
    wr32(sp0 - 0xb8u, sp0 - 0x50u);
    t17 = rd32(self + 0x14a0u);
    wr32(sp0 - 0xbcu, t17);
    g->eax = sp0 - 0x50u;
    g->edx = t16;
    t18 = cow_thiscall(g, COW_IMG(0x1001d050u), edi, 2, t17, sp0 - 0x50u);
    t19 = g->edx;
    t20 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    wr32(sp0 - 0xb8u, sp0 - 0x40u);
    wr32(sp0 - 0xbcu, 0u);
    g->ebx = ebx;
    g->edx = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x100d4a20u), ebp, 2, 0u, sp0 - 0x40u);
    t21 = g->edx;
    wr32(sp0 - 0xb8u, sp0 - 0x60u);
    g->eax = sp0 - 0x60u;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x60u);
    t23 = g->edx;
    wr32(sp0 - 0xb8u, sp0 - 0x50u);
    cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x50u);
    wr32(sp0 - 0xb8u, sp0 - 0x50u);
    wr32(sp0 - 0xbcu, sp0 - 0x60u);
    cow_thiscall(g, COW_IMG(0x1001baf0u), self, 2, sp0 - 0x60u, sp0 - 0x50u);
    t24 = rd32(self + 0x14a0u) + 1u;
    t25 = rd32(self + 0x14acu);
    t26 = rd32(self + 0x14b4u);
    wr32(self + 0x14a0u, t24);
    wr32(sp0 - 0x94u, ebx - 1u);
    if ((int32_t)t26 < 3)
    {
        eax = t25;
        edx = t24;
        ebx = ebx - 1u;
        if (eax != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, COW_IMG(0x1001c260u), self, 0);
            t59 = g->edx;
            edx = t59;
        }
    }
    else
    {
        eax = t25;
        loc_94 = ebx - 1u;
        if (eax == 0u)
        {
            wr32(sp0 - 0xb8u, self + 0x14dcu);
            wr32(sp0 - 0xbcu, self + 0x14ccu);
            wr32(sp0 - 0xc0u, self + 0x1470u);
            wr32(sp0 - 0xc4u, self + 0x1440u);
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, COW_IMG(0x1001b990u), self, 4, self + 0x1440u, self + 0x1470u, self + 0x14ccu, self + 0x14dcu);
        }
        wr32(sp0 - 0xa4u, 0x3e800000u);
        wr32(sp0 - 0x64u, 0x3f800000u);
        wr32(sp0 - 0x80u, 0x3f800000u);
        ebx = 4u;
L_1001be49: ;
        t27 = rd32(self + 0x1460u);
        wr32(sp0 - 0xb8u, t27);
        t28 = rd32(self + 0x1450u);
        wr32(sp0 - 0xbcu, t28);
        t29 = rd32(self + 0x1440u);
        wr32(sp0 - 0xc0u, t29);
        t30 = rd32(sp0 - 0xa4u);
        wr32(sp0 - 0xc4u, t30);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, t30, t29, t28, t27);
        d31 = cow_take_float(g);
        t32 = rd32(self + 0x1464u);
        wr32(sp0 - 0xc8u, t32);
        wrf32(sp0 - 0x70u, (float)(double)(float)d31);
        t33 = rd32(self + 0x1454u);
        wr32(sp0 - 0xccu, t33);
        t34 = rd32(self + 0x1444u);
        wr32(sp0 - 0xd0u, t34);
        wr32(sp0 - 0xd4u, t30);
        g->esp = sp0 - 0xc4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, t30, t34, t33, t32);
        d35 = cow_take_float(g);
        t36 = rd32(self + 0x1468u);
        wr32(sp0 - 0xd8u, t36);
        wrf32(sp0 - 0x6cu, (float)(double)(float)d35);
        t37 = rd32(self + 0x1458u);
        wr32(sp0 - 0xdcu, t37);
        t38 = rd32(self + 0x1448u);
        wr32(sp0 - 0xe0u, t38);
        wr32(sp0 - 0xe4u, t30);
        g->esp = sp0 - 0xd4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, t30, t38, t37, t36);
        d39 = cow_take_float(g);
        t40 = rd32(self + 0x1490u);
        wr32(sp0 - 0xe8u, t40);
        wrf32(sp0 - 0x68u, (float)(double)(float)d39);
        t41 = rd32(self + 0x1480u);
        wr32(sp0 - 0xecu, t41);
        t42 = rd32(self + 0x1470u);
        wr32(sp0 - 0xf0u, t42);
        wr32(sp0 - 0xf4u, t30);
        g->esp = sp0 - 0xe4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, t30, t42, t41, t40);
        d43 = cow_take_float(g);
        wrf32(sp0 - 0x8cu, (float)(double)(float)d43);
        t44 = rd32(self + 0x1494u);
        wr32(sp0 - 0xb8u, t44);
        t45 = rd32(self + 0x1484u);
        wr32(sp0 - 0xbcu, t45);
        t46 = rd32(self + 0x1474u);
        wr32(sp0 - 0xc0u, t46);
        wr32(sp0 - 0xc4u, t30);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, t30, t46, t45, t44);
        d47 = cow_take_float(g);
        t48 = rd32(self + 0x1498u);
        wr32(sp0 - 0xc8u, t48);
        wrf32(sp0 - 0x88u, (float)(double)(float)d47);
        t49 = rd32(self + 0x1488u);
        wr32(sp0 - 0xccu, t49);
        t50 = rd32(self + 0x1478u);
        wr32(sp0 - 0xd0u, t50);
        wr32(sp0 - 0xd4u, t30);
        g->esp = sp0 - 0xc4u;
        cow_cdecl(g, COW_IMG(0x1001c8e0u), 4, t30, t50, t49, t48);
        d51 = cow_take_float(g);
        wrf32(sp0 - 0x84u, (float)(double)(float)d51);
        wr32(sp0 - 0xb8u, self + 0x14dcu);
        wr32(sp0 - 0xbcu, self + 0x14ccu);
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        wr32(sp0 - 0xc4u, sp0 - 0x70u);
        g->eax = sp0 - 0x70u;
        g->edx = sp0 - 0x8cu;
        g->esp = sp0 - 0xb4u;
        t52 = cow_thiscall(g, COW_IMG(0x1001b990u), self, 4, sp0 - 0x70u, sp0 - 0x8cu, self + 0x14ccu, self + 0x14dcu);
        t53 = g->ecx;
        t54 = g->edx;
        g->edx = t54;
        cow_thiscall(g, COW_IMG(0x1001c260u), t53, 0);
        t55 = g->edx;
        d56 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa4u) + rdf64(COW_IMG(0x1032a338u)));
        wrf32(sp0 - 0xa4u, (float)d56);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_1001be49;
        }
        edx = t55;
        t57 = rd32(self + 0x14b4u) - 1u;
        wr32(self + 0x14b4u, t57);
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x1001bbb0u), self, 0);
        t58 = g->edx;
        edx = t58;
        ebx = rd32(sp0 - 0x94u);
        ebp = rd32(sp0 - 0xa0u);
        edi = rd32(sp0 - 0x90u);
    }
    if ((int32_t)rd32(self + 0x14a0u) >= (int32_t)rd8(edi))
    {
        eax = rd32(self + 0x14a0u);
        goto L_1001bf91;
    }
    eax = rd32(self + 0x14a0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t60 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t61 = g->edx;
    if (ebx != 0u)
    {
        eax = t60;
        goto L_1001bd6e;
    }
    edx = t61;
L_1001bfb9: ;
    if (rd32(self + 0x14acu) != 0u)
    {
        if ((int32_t)(rd32(self + 0x14a8u) - 1u) >= 0)
        {
            ebx = rd32(self + 0x14a8u) - 1u;
        }
        else
        {
            ebx = rd32(self + 0x14a8u) - 1u;
            ebx = ebx + 0x50u;
        }
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        d65 = (double)(float)fr(g, (double)rdf32(ebx * 0x10u + self + 0x40u) - (double)rdf32(ebx * 0x10u + self + 0x540u));
        wrf32(sp0 - 0x8cu, (float)d65);
        wr32(sp0 - 0xbcu, sp0 - 0x8cu);
        d66 = (double)(float)fr(g, (double)rdf32(ebx * 0x10u + self + 0x44u) - (double)rdf32(ebx * 0x10u + self + 0x544u));
        wrf32(sp0 - 0x88u, (float)d66);
        d67 = (double)(float)fr(g, (double)rdf32(ebx * 0x10u + self + 0x48u) - (double)rdf32(ebx * 0x10u + self + 0x548u));
        wrf32(sp0 - 0x84u, (float)d67);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x8cu, sp0 - 0x8cu);
        d68 = cow_take_float(g);
        t69 = rd32(ebx * 0x10u + self + 0xa4cu);
        wr32(sp0 - 0x9cu, t69);
        t70 = rd32(ebx * 0x10u + self + 0xf4cu);
        wr32(sp0 - 0x7cu, t70);
        d71 = (double)(float)fr(g, sqrt(d68));
        wrf32(sp0 - 0x98u, (float)d71);
        d72 = (double)(float)fr(g, fr(g, (double)rdf32(ebx * 0x10u + self + 0xa40u) + (double)rdf32(ebx * 0x10u + self + 0xa48u)) + (double)rdf32(ebx * 0x10u + self + 0xa44u));
        wrf32(sp0 - 0x94u, (float)d72);
        d73 = (double)(float)fr(g, fr(g, (double)rdf32(ebx * 0x10u + self + 0xf40u) + (double)rdf32(ebx * 0x10u + self + 0xf48u)) + (double)rdf32(ebx * 0x10u + self + 0xf44u));
        wrf32(sp0 - 0xa0u, (float)d73);
        if ((int32_t)(ebx - 1u) >= 0)
        {
            eax = ebx * 0x10u + 0xa40u;
            ebx = ebx - 1u;
            loc_9c = t69;
            loc_7c = t70;
            loc_98_f = d71;
            loc_94_f = d72;
            loc_a0_f = d73;
        }
        else
        {
            eax = ebx * 0x10u + 0xa40u;
            ebx = ebx - 1u;
            loc_9c = t69;
            loc_7c = t70;
            loc_98_f = d71;
            loc_94_f = d72;
            loc_a0_f = d73;
            ebx = ebx + 0x50u;
        }
        t74 = rd32(self + 0x14acu);
        wr32(sp0 - 0xa4u, t74);
        if ((int32_t)(t74 - 1u) <= 0)
        {
            ecx = t74;
            edx = t74 - 1u;
        }
        else
        {
            edx = t74 - 1u;
            loc_a4 = t74;
            ebp = 0u;
            edi = ebx << 4u;
L_1001c095: ;
            wr32(sp0 - 0xb8u, sp0 - 0x8cu);
            wr32(sp0 - 0xbcu, sp0 - 0x8cu);
            d75 = (double)(float)fr(g, (double)rdf32(edi + self + 0x40u) - (double)rdf32(edi + self + 0x540u));
            wrf32(sp0 - 0x8cu, (float)d75);
            d76 = (double)(float)fr(g, (double)rdf32(edi + self + 0x44u) - (double)rdf32(edi + self + 0x544u));
            wrf32(sp0 - 0x88u, (float)d76);
            d77 = (double)(float)fr(g, (double)rdf32(edi + self + 0x48u) - (double)rdf32(edi + self + 0x548u));
            wrf32(sp0 - 0x84u, (float)d77);
            g->eax = sp0 - 0x8cu;
            g->esp = sp0 - 0xb4u;
            t78 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x8cu, sp0 - 0x8cu);
            d79 = cow_take_float(g);
            d80 = (double)(float)(double)rdf32(edi + self + 0xf4cu);
            wrf32(sp0 - 0x78u, (float)d80);
            d81 = (double)(float)fr(g, fr(g, (double)rdf32(edi + self + 0xa40u) + (double)rdf32(edi + self + 0xa48u)) + (double)rdf32(edi + self + 0xa44u));
            wrf32(sp0 - 0x74u, (float)d81);
            d82 = (double)(float)fr(g, fr(g, (double)rdf32(edi + self + 0xf40u) + (double)rdf32(edi + self + 0xf48u)) + (double)rdf32(edi + self + 0xf44u));
            wrf32(sp0 - 0x90u, (float)d82);
            if (!(fr(g, sqrt(d79)) < (double)rdf32(COW_IMG(0x1032a334u))))
            {
                eax = (t78 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d79)), (double)rdf32(COW_IMG(0x1032a334u)), 2u);
                loc_78_f = d80;
                loc_74_f = d81;
                loc_90_f = d82;
                x1 = (double)rdf32(edi + self + 0xa4cu);
                x0 = fr(g, sqrt(d79));
                goto L_1001c13a;
            }
            eax = (t78 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d79)), (double)rdf32(COW_IMG(0x1032a334u)), 2u);
            loc_78_f = d80;
            loc_74_f = d81;
            loc_90_f = d82;
            x1 = (double)rdf32(edi + self + 0xa4cu);
            x0 = fr(g, sqrt(d79));
            d83 = (double)rdf32(sp0 - 0x98u);
            if (d83 < (double)rdf32(COW_IMG(0x1032a334u))) goto L_1001c172;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x1032a334u)), 2u);
L_1001c13a: ;
            d84 = fr(g, fr(g, fr(g, loc_78_f + x1) + (double)rdf32(sp0 - 0x7cu)) + (double)rdf32(sp0 - 0x9cu));
            if (d84 <= (double)rdf32(COW_IMG(0x103295d8u))) goto L_1001c172;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d84, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
            d85 = fr(g, fr(g, fr(g, loc_90_f + loc_74_f) + (double)rdf32(sp0 - 0xa0u)) + (double)rdf32(sp0 - 0x94u));
            if (!(d85 <= (double)rdf32(COW_IMG(0x103295d8u)))) goto L_1001c176;
L_1001c172: ;
            t86 = rd32(sp0 - 0xa4u) - 1u;
            wr32(sp0 - 0xa4u, t86);
            loc_a4 = t86;
L_1001c176: ;
            wr32(sp0 - 0x94u, cow_f2bits(loc_74_f));
            wrf32(sp0 - 0x98u, (float)(double)(float)x0);
            wrf32(sp0 - 0x9cu, (float)(double)(float)x1);
            wr32(sp0 - 0x7cu, cow_f2bits(loc_78_f));
            wr32(sp0 - 0xa0u, cow_f2bits(loc_90_f));
            if ((int32_t)(ebx - 1u) >= 0)
            {
                eax = ebx - 1u;
                ebp = ebp + 1u;
                loc_94 = cow_f2bits(loc_74_f);
                loc_98_f = (double)(float)x0;
                loc_9c_f = (double)(float)x1;
                loc_7c = cow_f2bits(loc_78_f);
                loc_a0 = cow_f2bits(loc_90_f);
                ebx = eax;
                edi = edi - 0x10u;
            }
            else
            {
                eax = ebx - 1u;
                ebp = ebp + 1u;
                loc_94 = cow_f2bits(loc_74_f);
                loc_98_f = (double)(float)x0;
                loc_9c_f = (double)(float)x1;
                loc_7c = cow_f2bits(loc_78_f);
                loc_a0 = cow_f2bits(loc_90_f);
                ebx = eax + 0x50u;
                edi = edi + 0x4f0u;
            }
            if ((int32_t)ebp < (int32_t)(rd32(self + 0x14acu) - 1u))
            {
                edx = rd32(self + 0x14acu) - 1u;
                goto L_1001c095;
            }
            edx = rd32(self + 0x14acu) - 1u;
            ecx = loc_a4;
        }
        d87 = (double)rdf32(self + 0x14c4u);
        d88 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(self + 0x14acu, ecx);
        if (d87 <= d88)
        {
            if ((int32_t)ecx <= 1)
            {
                wr8(self + 0x14a4u, 1u);
            }
        }
    }
L_1001c1e8: ;
    if ((int32_t)rd32(self + 0x14acu) <= (int32_t)rd32(self + 0x14b0u))
    {
        eax = rd32(self + 0x14acu);
        ecx = rd32(self + 0x14b0u);
    }
    else
    {
        eax = rd32(self + 0x14acu);
        ecx = rd32(self + 0x14b0u);
        wr32(self + 0x14b0u, eax);
    }
    if (eax != 0u)
    {
        if ((int32_t)(rd32(self + 0x14a8u) - 1u) >= 0)
        {
            eax = rd32(self + 0x14a8u) - 1u;
        }
        else
        {
            eax = rd32(self + 0x14a8u) - 1u;
            eax = eax + 0x50u;
        }
        t89 = eax * 0x10u + self + 0x40u;
        wr32(sp0 - 0xb8u, t89);
        wr32(sp0 - 0xbcu, sp0 - 0x70u);
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x70u, t89);
        t90 = g->edx;
        d91 = fr(g, (double)rdf32(sp0 - 0x68u) * (double)rdf32(sp0 - 0x64u));
        wr32(self + 0x153cu, self);
        wr32(self + 0x1538u, COW_IMG(0x1001c930u));
        wr32(sp0 - 0xb8u, self + 0x1530u);
        wrf32(self + 0x1530u, (float)d91);
        g->eax = self + 0x1530u;
        g->edx = t90;
        t92 = cow_thiscall(g, COW_IMG(0x100553c0u), rd32(COW_IMG(0x1047bc94u)), 1, self + 0x1530u);
        t93 = g->edx;
        eax = t92;
        edx = t93;
    }
L_1001c250: ;
    g->ebx = rd32(sp0 - 0xa8u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = rd32(sp0 - 0xb4u);
    g->ebp = rd32(sp0 - 0xacu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1001bf91: ;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t62 = g->edx;
    edx = t62;
    goto L_1001bfb9;
L_1001bf98: ;
L_1001bf9a: ;
    t63 = rd32(self + 0x14acu);
    wr32(self + 0x14c4u, 0u);
    if (t63 == 0u) goto L_1001c1e8;
    eax = t63;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, COW_IMG(0x1001c260u), self, 0);
    t64 = g->edx;
    edx = t64;
    goto L_1001bfb9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001bc80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001bc80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
