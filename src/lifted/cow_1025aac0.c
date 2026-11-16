/* f_0x1025aac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025aac0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
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
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1025aab0u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1025ae80;
    }
    eax = t1;
    edx = t2;
    if (rd32(sp0 + 4u) == 0u) goto L_1025ae80;
    ebx = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1018d3d0u), ebx, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        edx = t4;
        goto L_1025ae71;
    }
    ecx = t3;
    edx = t4;
    esi = rd32(self + 4u);
    loc_4 = 0u;
    loc_8 = rd32(sp0 - 8u);
L_1025aafe: ;
    if (rd32(esi + 8u) - 1u > 8u) goto L_1025ae64;
    eax = rd32(esi + 8u) - 1u;
    t5 = rd32(COW_IMG(0x1025ae8cu) + eax * 4u);
    switch (t5 - RD)
    {
    case 0x1025ab12u: goto L_1025ab12;
    case 0x1025ab23u: goto L_1025ab23;
    case 0x1025ab33u: goto L_1025ab33;
    case 0x1025ab63u: goto L_1025ab63;
    case 0x1025ab73u: goto L_1025ab73;
    case 0x1025abc3u: goto L_1025abc3;
    case 0x1025ac02u: goto L_1025ac02;
    case 0x1025ac92u: goto L_1025ac92;
    case 0x1025addfu: goto L_1025addf;
    default: rt_fatal(g, COW_IMG(0x1025ab0bu), "switch");
    }
    return 0;
L_1025ab12: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, COW_IMG(0x1034f2b8u));
    t106 = g->ecx;
    t107 = g->edx;
    ecx = t106;
    edx = t107;
L_1025ae64: ;
    if (rd32(esi + 4u) != 0u)
    {
        esi = rd32(esi + 4u);
        goto L_1025aafe;
    }
L_1025ae71: ;
    g->edx = edx;
    return 1u;
L_1025ab23: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1018d450u), ebx, 1, esi + 0xcu);
    t104 = g->ecx;
    t105 = g->edx;
    ecx = t104;
    edx = t105;
    goto L_1025ae64;
L_1025ab33: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t88 = cow_thiscall(g, COW_IMG(0x1025a950u), self, 1, esi);
    t89 = g->edx;
    t90 = rd32(esi + 0xcu);
    g->edx = t89;
    t91 = cow_cdecl(g, COW_IMG(0x1025a6e0u), 2, t90, t88);
    t92 = g->edx;
    g->edx = t92;
    cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t91);
    t93 = g->ecx;
    t94 = g->edx;
    if (t88 == 0u)
    {
        ecx = t93;
        edx = t94;
        loc_4 = t88;
        goto L_1025ae64;
    }
    edx = t94;
    loc_4 = t88;
L_1025ae27: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t95 = cow_stdcall(g, COW_IMG(0x1025a8b0u), 1, esi);
    t96 = g->edx;
    if (rd32(t95 + 8u) != 8u)
    {
        eax = t95;
        ecx = rd32(t95 + 8u);
        edx = t96;
        if (ecx == 1u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t97 = cow_thiscall(g, COW_IMG(0x1018d470u), eax + 0xcu, 0);
            t98 = g->ecx;
            t99 = g->edx;
            if (rd8(t97) != 0x20u)
            {
                ecx = t98;
                edx = t99;
            }
            else
            {
                edx = t99;
                edi = eax + 0xcu;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t100 = cow_thiscall(g, COW_IMG(0x1018d470u), edi, 0);
                t101 = g->edx;
                g->edx = t101;
                cow_thiscall(g, COW_IMG(0x1018d430u), edi, 1, t100 + 1u);
                t102 = g->ecx;
                t103 = g->edx;
                ecx = t102;
                edx = t103;
            }
        }
    }
    else
    {
        eax = t95;
        ecx = rd32(t95 + 8u);
        edx = t96;
        wr32(eax + 8u, 0u);
    }
    goto L_1025ae64;
L_1025ab63: ;
    g->edx = esi + 0xcu;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1018d450u), ebx, 1, esi + 0xcu);
    t86 = g->ecx;
    t87 = g->edx;
    ecx = t86;
    edx = t87;
    goto L_1025ae64;
L_1025ab73: ;
    if (rd32(esi + 0xcu) != 0u)
    {
        eax = rd32(esi + 0xcu);
        if (rd32(eax + 0xcu) != 0u)
        {
            eax = rd32(eax + 0xcu);
            if (eax != 1u)
            {
                g->edx = edx;
                t76 = rd32(esi + 0xcu);
                g->esp = sp0 - 0x18u;
                t77 = cow_thiscall(g, COW_IMG(0x1025a950u), self, 1, esi);
                t78 = g->edx;
                t79 = rd32(t76 + 0x10u);
                t80 = rd32(t76 + 0xcu) == 4u;
                g->edx = t78;
                t81 = rd32(t76 + 0xcu);
                t82 = cow_cdecl(g, COW_IMG(0x1025a750u), 3, t80, t79, t77);
                t83 = g->edx;
                g->edx = t83;
                cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t82);
                t84 = g->ecx;
                t85 = g->edx;
                ecx = t84;
                edx = t85;
            }
        }
    }
    goto L_1025ae64;
L_1025abc3: ;
    if (rd32(esi + 0xcu) != 0u)
    {
        eax = rd32(esi + 0xcu);
        g->esp = sp0 - 0x18u;
        t67 = cow_thiscall(g, COW_IMG(0x1025a950u), self, 1, esi);
        t68 = rd32(eax + 0x10u);
        t69 = rd32(eax + 0xcu) == 4u;
        t70 = rd32(esi + 0x10u);
        g->edx = rd32(eax + 0xcu);
        t71 = rd32(eax + 0xcu);
        t72 = cow_cdecl(g, COW_IMG(0x1025a780u), 4, t70, t69, t68, t67);
        t73 = g->edx;
        g->edx = t73;
        cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t72);
        t74 = g->ecx;
        t75 = g->edx;
        ecx = t74;
        edx = t75;
    }
    goto L_1025ae64;
L_1025ac02: ;
    t49 = rd32(esi + 0xcu);
    wr32(sp0 + 4u, 0u);
    g->ecx = self;
    g->edx = t49;
    g->esp = sp0 - 0x18u;
    t50 = cow_stdcall(g, COW_IMG(0x1025a8b0u), 1, esi);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 == 0u)
    {
        ecx = t51;
        edx = t52;
        loc_8 = t49;
        goto L_1025ac3a;
    }
    eax = t50;
    edx = t52;
    loc_8 = t49;
    if (rd32(eax + 8u) != 1u)
    {
        ecx = rd32(eax + 8u);
        goto L_1025ac61;
    }
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t53 = cow_thiscall(g, COW_IMG(0x1018d470u), eax + 0xcu, 0);
    t54 = g->ecx;
    t55 = g->edx;
    if (rd8(t53) != 0x20u)
    {
        ecx = t54;
        edx = t55;
        goto L_1025ac3a;
    }
    edx = t55;
L_1025ac2e: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t59 = cow_thiscall(g, COW_IMG(0x1025a950u), self, 1, esi);
    t60 = g->ecx;
    t61 = g->edx;
    ecx = t60;
    edx = t61;
    loc_4 = t59;
L_1025ac3a: ;
    if (rd32(esi + 0xcu) != 0u)
    {
        eax = rd32(esi + 0xcu);
        goto L_1025ac4b;
    }
    eax = rd32(esi + 0xcu);
    if (loc_4 != 0u) goto L_1025ae1b;
L_1025ac4b: ;
    loc_1c = eax;
L_1025ac4c: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t63 = cow_cdecl(g, COW_IMG(0x1025a710u), 1, loc_1c);
    t64 = g->edx;
    g->edx = t64;
    cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t63);
    t65 = g->ecx;
    t66 = g->edx;
    ecx = t65;
    edx = t66;
    goto L_1025ae64;
L_1025ac61: ;
    if (ecx != 8u) goto L_1025ac3a;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t56 = cow_stdcall(g, COW_IMG(0x1025a8b0u), 1, eax);
    t57 = g->ecx;
    t58 = g->edx;
    if (t56 == 0u)
    {
        ecx = t57;
        edx = t58;
        goto L_1025ac3a;
    }
    eax = t56;
    edx = t58;
    if (rd32(eax + 8u) != 2u) goto L_1025ac2e;
    if (rd32(eax + 0xcu) != 2u)
    {
        ecx = 2u;
        goto L_1025ac3a;
    }
    wr32(sp0 + 4u, 1u);
    loc_8 = edx;
    goto L_1025ae27;
L_1025ac92: ;
    if (rd32(esi + 0x10u) == 0u) goto L_1025ae64;
    eax = rd32(esi + 0x10u);
    if (rd32(eax + 0xcu) != 0u)
    {
        eax = rd32(eax + 0xcu);
        goto L_1025acd0;
    }
    if (rd32(sp0 + 4u) == 0u) goto L_1025ae27;
    wr32(sp0 + 4u, 0u);
    if (loc_8 != 0u)
    {
        edi = loc_8;
        goto L_1025acca;
    }
    edi = loc_8;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, COW_IMG(0x1025a950u), self, 1, esi);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        edx = t16;
        goto L_1025ae1b;
    }
    ecx = t15;
    edx = t16;
L_1025acca: ;
    loc_1c = edi;
    goto L_1025ac4c;
L_1025acd0: ;
    if (eax != 2u) goto L_1025acf2;
    if (rd32(esi + 0xcu) != 1u) goto L_1025acf2;
    wr32(sp0 + 4u, 1u);
    wr32(esi + 0xcu, 2u);
    edi = 0u;
    loc_8 = 0u;
L_1025acf6: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, COW_IMG(0x1025a950u), self, 1, esi);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        ecx = t18;
        edx = t19;
        goto L_1025ad54;
    }
    t20 = rd32(rd32(esi + 0x10u) + 0x10u);
    t21 = rd32(rd32(esi + 0x10u) + 0xcu) == 4u;
    t22 = rd32(esi + 0xcu);
    g->ecx = t21;
    g->edx = t22;
    t23 = rd32(esi + 0x10u);
    g->esp = sp0 - 0x1cu;
    t24 = cow_cdecl(g, COW_IMG(0x1025a5a0u), 2, t22, t21);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        ecx = t25;
        edx = t26;
        goto L_1025ad54;
    }
    ecx = t25;
    edx = t26;
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t27 = cow_cdecl(g, COW_IMG(0x1025a710u), 1, edi);
        t28 = g->edx;
        g->edx = t28;
        t29 = cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t27);
        t30 = g->edx;
        g->edx = t30;
        t31 = cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, COW_IMG(0x1034f2b8u));
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    loc_1c = COW_IMG(0x1038a364u);
L_1025ae20: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, loc_1c);
    t62 = g->edx;
    edx = t62;
    goto L_1025ae27;
L_1025acf2: ;
    edi = loc_8;
    goto L_1025acf6;
L_1025ad54: ;
    if (rd32(sp0 + 4u) == 0u) goto L_1025adb3;
    if (rd32(esi + 0xcu) != 2u) goto L_1025ad96;
    if (rd32(rd32(esi + 0x10u) + 0xcu) == 4u)
    {
        eax = rd32(esi + 0x10u);
        ecx = rd32(rd32(esi + 0x10u) + 0xcu);
        goto L_1025ad73;
    }
    eax = rd32(esi + 0x10u);
    ecx = rd32(rd32(esi + 0x10u) + 0xcu);
    if (rd32(eax + 0x10u) == 1u) goto L_1025ad96;
L_1025ad73: ;
    t33 = rd32(eax + 0x10u);
    g->edx = t33;
    g->esp = sp0 - 0x18u;
    t34 = cow_cdecl(g, COW_IMG(0x1025a630u), 3, edi, ecx == 4u, t33);
    t35 = g->edx;
    g->edx = t35;
    cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t34);
    t36 = g->ecx;
    t37 = g->edx;
    ecx = t36;
    edx = t37;
    goto L_1025ae64;
L_1025ad96: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t38 = cow_cdecl(g, COW_IMG(0x1025a710u), 1, edi);
    t39 = g->edx;
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t38);
    t41 = g->edx;
    cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, COW_IMG(0x1034f2b8u));
L_1025adb3: ;
    t42 = rd32(rd32(esi + 0x10u) + 0x10u);
    t43 = rd32(rd32(esi + 0x10u) + 0xcu) == 4u;
    t44 = rd32(esi + 0xcu);
    g->edx = t43;
    g->esp = sp0 - 0x18u;
    t45 = cow_cdecl(g, COW_IMG(0x1025a5c0u), 3, t44, t43, t42);
    t46 = g->edx;
    g->edx = t46;
    cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t45);
    t47 = g->ecx;
    t48 = g->edx;
    ecx = t47;
    edx = t48;
    goto L_1025ae64;
L_1025addf: ;
    if (rd32(esi + 0xcu) == 0u)
    {
        eax = rd32(esi + 0xcu);
        goto L_1025ae0e;
    }
    eax = rd32(esi + 0xcu);
    if (eax == 1u) goto L_1025ae0e;
    if (rd32(esi + 0x24u) != 0u)
    {
        ecx = rd32(esi + 0x24u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t8 = cow_thiscall(g, COW_IMG(0x10258af0u), ecx, 0);
        t9 = g->edx;
        g->edx = t9;
        cow_thiscall(g, COW_IMG(0x1018d440u), ebx, 1, t8);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x1018d450u), ebx, 1, esi + 0x18u);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    goto L_1025ae64;
L_1025ae0e: ;
    g->edx = esi + 0x18u;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1018d450u), ebx, 1, esi + 0x18u);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    goto L_1025ae64;
L_1025ae1b: ;
    loc_1c = COW_IMG(0x1038a37cu);
    goto L_1025ae20;
L_1025ae80: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025aac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025aac0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
