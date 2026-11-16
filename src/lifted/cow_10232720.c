/* f_0x10232720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10232720(Guest* g)
{
    double d105;
    double d106;
    double d107;
    double d108;
    double d21;
    double d22;
    double d23;
    double d24;
    double d30;
    double d31;
    double d32;
    double d33;
    double d64;
    double d65;
    double d66;
    double d67;
    double d73;
    double d74;
    double d75;
    double d76;
    double d95;
    double d96;
    double d97;
    double d98;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
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
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
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
    uint32_t t99;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    double x5;
    double x6;
    double x7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    if (rd32(self + 0x68u) > 6u)
    {
        eax = rd32(self + 0x68u);
        goto L_1023273e;
    }
    eax = rd32(self + 0x68u);
    t1 = rd32(COW_IMG(0x10232740u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1023272fu: goto L_1023272f;
    case 0x10232734u: goto L_10232734;
    case 0x10232739u: goto L_10232739;
    default: rt_fatal(g, COW_IMG(0x10232728u), "switch");
    }
    return 0;
L_102317a0: ;
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x18cu);
    wr32(sp0 - 0x18u, 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x18cu);
    t26 = g->edx;
    wr32(sp0 - 0x14u, t25);
    g->edx = t26;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t25, 2u);
    t27 = g->edx;
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->edx = t27;
    cow_thiscall(g, COW_IMG(0x10221be0u), self, 2, sp0 - 4u, sp0 - 8u);
    t28 = g->ecx;
    t29 = g->edx;
    d30 = cow_take_float(g);
    d31 = cow_take_float(g);
    d32 = cow_take_float(g);
    d33 = cow_take_float(g);
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 0x10u, 0u);
    if (rd32(self + 0x68u) != 5u)
    {
        eax = rd32(self + 0x68u);
        ecx = t28;
        edx = t29;
        x7 = d33;
        x6 = d32;
        x5 = d31;
        x4 = d30;
        goto L_10231810;
    }
    eax = rd32(self + 0x68u);
    ecx = t28;
    edx = t29;
    x7 = d33;
    x6 = d32;
    x5 = d31;
    x4 = d30;
    wr32(sp0 - 0x14u, 0x190u);
    wr32(sp0 - 0x18u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x190u);
    t35 = g->ecx;
    wr32(sp0 - 0x14u, t34);
    t36 = rd32(sp0 - 8u) + 0xau;
    wr32(sp0 - 0x18u, t36);
    t37 = rd32(sp0 - 4u) + 0x3cu;
    wr32(sp0 - 0x1cu, t37);
    g->eax = t37;
    g->edx = t36;
    t38 = cow_cdecl(g, COW_IMG(0x10129f00u), 3, t37, t36, t34);
    t39 = g->edx;
    g->edi = edi;
    g->edx = t39;
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    fpush(g, x4);
    fpush(g, x5);
    fpush(g, x6);
    fpush(g, x7);
    return t38;
L_10231810: ;
    wr32(sp0 - 0x14u, 0x191u);
    wr32(sp0 - 0x18u, 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t40 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x191u);
    wr32(sp0 - 0x14u, t40);
    t41 = rd32(sp0 - 8u) + 0xau;
    wr32(sp0 - 0x18u, t41);
    t42 = rd32(sp0 - 4u) + 0x3cu;
    wr32(sp0 - 0x1cu, t42);
    g->edx = t42;
    t43 = cow_cdecl(g, COW_IMG(0x10129f00u), 3, t42, t41, t40);
    t44 = g->edx;
    g->edi = edi;
    g->edx = t44;
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    fpush(g, x4);
    fpush(g, x5);
    fpush(g, x6);
    fpush(g, x7);
    return t43;
L_10231930: ;
    wr32(sp0 - 4u, in_edi);
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
        ecx = self;
        edx = in_edx;
        goto L_10231958;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
    wr32(sp0 - 8u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10087c90u), self, 1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_10231958;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    wr32(sp0 - 8u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10087c90u), ecx, 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        edx = t7;
        loc_8 = 1u;
        goto L_102319a6;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
L_10231958: ;
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 0x10u, 0x61u);
    wr32(sp0 - 0x14u, 9u);
    g->eax = eax;
    g->edx = edx;
    t8 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x61u);
    t10 = g->edx;
    wr32(sp0 - 0x10u, t9);
    wr32(sp0 - 0x14u, 0x2du);
    wr32(sp0 - 0x18u, 0x14u);
    g->edi = self;
    g->edx = t10;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x101171b0u), t8 + 0xc4u, 4, 0x14u, 0x2du, t9, 0x80808080u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 0x10u, 0x62u);
    wr32(sp0 - 0x14u, 9u);
    g->edx = t13;
    t14 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x62u);
    t16 = g->edx;
    wr32(sp0 - 0x10u, t15);
    wr32(sp0 - 0x14u, 0x49u);
    wr32(sp0 - 0x18u, 0x14u);
    g->edi = self;
    g->edx = t16;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x101171b0u), t14 + 0xc4u, 4, 0x14u, 0x49u, t15, 0x80808080u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    loc_8 = in_esi;
L_102319a6: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t19 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t20 = g->edx;
    d21 = cow_take_float(g);
    d22 = cow_take_float(g);
    d23 = cow_take_float(g);
    d24 = cow_take_float(g);
    eax = t19;
    edx = t20;
    edi = rd32(sp0 - 4u);
    x3 = d24;
    x2 = d23;
    x1 = d22;
    x0 = d21;
    goto L_102317a0;
L_10232530: ;
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0x63u);
    wr32(sp0 - 0x1cu, 9u);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t45 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x63u);
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp0 - 0x20u, 0x64u);
    wr32(sp0 - 0x24u, 9u);
    wr32(sp0 - 0x10u, t45);
    g->ecx = t46;
    g->edx = t47;
    g->esp = sp0 - 0x1cu;
    t48 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x64u);
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp0 - 0x28u, 0x72u);
    wr32(sp0 - 0x2cu, 0xcu);
    wr32(sp0 - 0xcu, t48);
    g->ecx = t49;
    g->edx = t50;
    g->esp = sp0 - 0x24u;
    t51 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x72u);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp0 - 0x30u, 0x87u);
    wr32(sp0 - 0x34u, 0xcu);
    wr32(sp0 - 8u, t51);
    g->ecx = t52;
    g->edx = t53;
    g->esp = sp0 - 0x2cu;
    t54 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x87u);
    t55 = g->ecx;
    t56 = g->edx;
    wr32(sp0 - 4u, t54);
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, 0x85u);
    wr32(sp0 - 0x20u, 0xcu);
    t57 = rd32(COW_IMG(0x10668edcu)) + 1u;
    wr32(COW_IMG(0x10668edcu), t57);
    g->eax = t57;
    g->edx = t56;
    g->esp = sp0 - 0x18u;
    t58 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x85u);
    t59 = g->edx;
    wr32(sp0 - 0x1cu, t58);
    g->edx = t59;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t58, 2u);
    t60 = g->edx;
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        edx = t60;
        goto L_102325f2;
    }
    eax = rd32(self + 0x64u);
    edx = t60;
    if (rd32(self + 0x68u) == 3u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t61 = cow_call_regs(g, COW_IMG(0x102305e0u), eax, self + 0x70u, g->edx, 1, 0);
        t62 = g->edx;
        eax = t61;
        edx = t62;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10231fa0u), eax, self, g->edx, 1, 0);
    t63 = g->edx;
    d64 = cow_take_float(g);
    d65 = cow_take_float(g);
    d66 = cow_take_float(g);
    d67 = cow_take_float(g);
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
        edx = t63;
        x3 = d67;
        x2 = d66;
        x1 = d65;
        x0 = d64;
    }
    else
    {
        edx = t63;
        x3 = d67;
        x2 = d66;
        x1 = d65;
        x0 = d64;
        if (rd32(self + 0x68u) == 4u)
        {
            eax = rd32(self + 0x68u);
        }
        else
        {
            eax = rd32(self + 0x68u);
            wr32(sp0 - 0x18u, 0x80808080u);
            t68 = rd32(eax * 4u + sp0 - 0x10u);
            wr32(sp0 - 0x1cu, t68);
            wr32(sp0 - 0x20u, 0x28u);
            wr32(sp0 - 0x24u, 0x14u);
            g->edi = in_edi;
            g->eax = t68;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t69 = cow_thiscall(g, COW_IMG(0x101171b0u), rd32(self + 8u) + 0xc4u, 4, 0x14u, 0x28u, t68, 0x80808080u);
            t70 = g->edx;
            eax = t69;
            edx = t70;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t71 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t72 = g->edx;
    d73 = cow_take_float(g);
    d74 = cow_take_float(g);
    d75 = cow_take_float(g);
    d76 = cow_take_float(g);
    g->edx = t72;
    t77 = cow_call_regs(g, COW_IMG(0x102324f0u), t71, self, g->edx, 1, 0);
    t78 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = t78;
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    fpush(g, d73);
    fpush(g, d74);
    fpush(g, d75);
    fpush(g, d76);
    return t77;
L_102325f2: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t79 = cow_call_regs(g, COW_IMG(0x102323d0u), eax, self, g->edx, 1, 0);
    t80 = g->edx;
    g->edx = t80;
    t81 = cow_call_regs(g, COW_IMG(0x102324f0u), t79, self, g->edx, 1, 0);
    t82 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = t82;
    return t81;
L_10232610: ;
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0x63u);
    wr32(sp0 - 0x1cu, 9u);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t83 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x63u);
    t84 = g->ecx;
    t85 = g->edx;
    wr32(sp0 - 0x20u, 0x64u);
    wr32(sp0 - 0x24u, 9u);
    wr32(sp0 - 0x10u, t83);
    g->ecx = t84;
    g->edx = t85;
    g->esp = sp0 - 0x1cu;
    t86 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x64u);
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x28u, 0x72u);
    wr32(sp0 - 0x2cu, 0xcu);
    wr32(sp0 - 0xcu, t86);
    g->ecx = t87;
    g->edx = t88;
    g->esp = sp0 - 0x24u;
    t89 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x72u);
    t90 = g->ecx;
    t91 = g->edx;
    wr32(sp0 - 0x30u, 0x87u);
    wr32(sp0 - 0x34u, 0xcu);
    wr32(sp0 - 8u, t89);
    g->edx = t91;
    g->esp = sp0 - 0x2cu;
    t92 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x87u);
    t93 = g->edx;
    wr32(sp0 - 4u, t92);
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        edx = t93;
        goto L_10232690;
    }
    eax = rd32(self + 0x64u);
    edx = t93;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10231c60u), self, 0);
    t94 = g->edx;
    d95 = cow_take_float(g);
    d96 = cow_take_float(g);
    d97 = cow_take_float(g);
    d98 = cow_take_float(g);
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
        edx = t94;
        x3 = d98;
        x2 = d97;
        x1 = d96;
        x0 = d95;
    }
    else
    {
        edx = t94;
        x3 = d98;
        x2 = d97;
        x1 = d96;
        x0 = d95;
        wr32(sp0 - 0x18u, 0x80808080u);
        t99 = rd32(sp0 + rd32(self + 0x68u) * 4u - 0x10u);
        wr32(sp0 - 0x1cu, t99);
        wr32(sp0 - 0x20u, 0x28u);
        wr32(sp0 - 0x24u, 0x14u);
        g->edi = in_edi;
        g->eax = rd32(self + 0x68u);
        g->edx = edx;
        t100 = rd32(self + 0x68u);
        g->esp = sp0 - 0x14u;
        t101 = cow_thiscall(g, COW_IMG(0x101171b0u), rd32(self + 8u) + 0xc4u, 4, 0x14u, 0x28u, t99, 0x80808080u);
        t102 = g->edx;
        eax = t101;
        edx = t102;
    }
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t103 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t104 = g->edx;
    d105 = cow_take_float(g);
    d106 = cow_take_float(g);
    d107 = cow_take_float(g);
    d108 = cow_take_float(g);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = t104;
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    fpush(g, d105);
    fpush(g, d106);
    fpush(g, d107);
    fpush(g, d108);
    return t103;
L_10232690: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t109 = cow_thiscall(g, COW_IMG(0x10231e10u), self, 0);
    t110 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = t110;
    return t109;
L_1023272f: ;
    goto L_10232610;
L_10232734: ;
    goto L_10232530;
L_10232739: ;
    goto L_10231930;
L_1023273e: ;
    g->edi = in_edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10232720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10232720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
