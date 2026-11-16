/* f_0x102a6fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a6fa0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x54u, COW_IMG(0x1036bf68u));
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x58u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, t1, COW_IMG(0x1036bf68u));
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        ebx = t1;
        esi = t2;
        goto L_102a6fea;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    ebx = t1;
    wr32(sp0 - 0x54u, 0x6cu);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x60u, ebx);
    wr32(sp0 - 0x64u, COW_IMG(0x103be41cu));
    g->esp = sp0 - 0x5cu;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be41cu), ebx);
    return t8 & 0xffffff00u;
L_102a6fea: ;
    eax = ebx;
    edx = COW_IMG(0x109aa8a8u) - ebx;
L_102a6ff3: ;
    t9 = rd8(eax);
    wr8(eax + edx, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        goto L_102a6ff3;
    }
    ecx = (ecx & 0xffffff00u) | t9;
    wr32(sp0 - 0x54u, 0x74u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, 0x63cu);
    wr32(sp0 - 0x60u, 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t10 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 1u, 0x63cu, COW_IMG(0x103be434u), 0x74u, in_edi);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x64u, sp0 - 0x3eu);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 2u);
    wr32(t10 + 0x620u, 1u);
    wr32(t10 + 0x61cu, 1u);
    wr16(t10 + 0x604u, 0u);
    wr32(t10 + 0x608u, 0u);
    wr32(t10 + 0x638u, 1u);
    wr32(sp0 - 0x70u, esi);
    wr32(COW_IMG(0x109a286cu), 0u);
    wr16(COW_IMG(0x109aa89cu), 0u);
    g->eax = sp0 - 0x3eu;
    g->esp = sp0 - 0x54u;
    t13 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, t12, 1, 7, esi, 2u, 3u, sp0 - 0x3eu, 1u, 0x63cu, COW_IMG(0x103be434u));
    t14 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    wr32(sp0 - 0x78u, 3u);
    wr32(sp0 - 0x7cu, 2u);
    wr32(sp0 - 0x80u, esi);
    g->ecx = sp0 - 0x40u;
    g->esp = sp0 - 0x64u;
    t15 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, t14, 1, 7, esi, 2u, 3u, sp0 - 0x40u, rd32(sp0 - 0x70u), 2u, 3u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x84u, COW_IMG(0x109a286cu));
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, esi);
    g->ecx = t16;
    g->esp = sp0 - 0x74u;
    t18 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, t17, 1, 7, esi, 4u, 4u, COW_IMG(0x109a286cu), rd32(sp0 - 0x80u), 2u, 3u);
    t19 = g->ecx;
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    wr32(sp0 - 0x58u, 3u);
    wr32(sp0 - 0x5cu, 2u);
    wr32(sp0 - 0x60u, esi);
    g->ecx = t19;
    g->esp = sp0 - 0x44u;
    t20 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 0x18u, 1, 7, esi, 2u, 3u, sp0 - 0x18u, in_edi, in_esi, in_ebp);
    t21 = g->ecx;
    t22 = g->edx;
    if (rd16(sp0 - 0x40u) == 0x2au)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        ebx = t10;
        goto L_102a70d2;
    }
    ecx = t21;
    edx = t22;
    ebx = t10;
    wr32(sp0 - 0x54u, esi);
    g->edi = 0u;
    g->ecx = ecx;
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x58u, 0x85u);
    wr32(sp0 - 0x5cu, COW_IMG(0x103be434u));
    wr32(sp0 - 0x60u, ebx);
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0x54u;
    t25 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0x85u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x64u, 0x86u);
    wr32(sp0 - 0x68u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x6cu, COW_IMG(0x103b379cu));
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t28 = g->ecx;
    t29 = g->edx;
    t30 = rd32(sp0 + 8u);
    wr32(sp0 - 0x70u, t30);
    wr32(sp0 - 0x74u, COW_IMG(0x103be404u));
    g->eax = t30;
    g->esp = sp0 - 0x6cu;
    t31 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be404u), t30);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return t31 & 0xffffff00u;
L_102a70d2: ;
    if (rd16(sp0 - 0x18u) == 0u)
    {
        edi = 0u;
        goto L_102a70f4;
    }
    edi = 0u;
L_102a70db: ;
    wr32(sp0 - 0x54u, ebx);
    wr32(sp0 - 0x58u, esi);
    g->ebp = 1u;
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t32 = cow_call_regs(g, COW_IMG(0x102a7880u), g->eax, g->ecx, edx, 1, 2, esi, ebx);
    t33 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)(uint16_t)rd32(sp0 - 0x18u))
    {
        eax = t32;
        ecx = (uint16_t)rd32(sp0 - 0x18u);
        edx = t33;
        edi = edi + 1u;
        goto L_102a70db;
    }
    edx = t33;
    edi = edi + 1u;
L_102a70f4: ;
    t34 = rd32(COW_IMG(0x109a286cu)) + 4u;
    wr32(COW_IMG(0x109a286cu), t34);
    if (rd16(ebx + 0x604u) != 0u)
    {
        ecx = t34;
    }
    else
    {
        ecx = t34;
        wr32(sp0 - 0x54u, 0x93u);
        wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x5cu, 1u);
        t35 = rd32(ebx + 0x630u);
        wr32(sp0 - 0x60u, t35);
        g->ecx = ecx;
        g->edx = t35;
        g->esp = sp0 - 0x4cu;
        t36 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t35, 1u, COW_IMG(0x103be434u), 0x93u, rd32(sp0 - 0x50u));
        t37 = g->ecx;
        t38 = g->edx;
        wr32(ebx, t36);
        wr32(sp0 - 0x64u, 0u);
        t39 = rd32(ebx + 0x634u);
        wr32(sp0 - 0x68u, t39);
        wr32(sp0 - 0x6cu, esi);
        g->esp = sp0 - 0x60u;
        cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t38, 1, 3, esi, t39, 0u);
        wr32(sp0 - 0x70u, esi);
        wr32(sp0 - 0x74u, 1u);
        t40 = rd32(ebx + 0x630u);
        wr32(sp0 - 0x78u, t40);
        wr32(sp0 - 0x7cu, rd32(ebx));
        g->ecx = t40;
        t41 = rd32(ebx);
        g->esp = sp0 - 0x64u;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t41, 1, 6, t41, t40, 1u, esi, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
        t42 = g->ecx;
        t43 = g->edx;
        wr32(sp0 - 0x80u, 0x98u);
        wr32(sp0 - 0x84u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x88u, 2u);
        wr32(sp0 - 0x8cu, 1u);
        wr16(ebx + 0x604u, 1u);
        g->ecx = t42;
        g->edx = t43;
        g->esp = sp0 - 0x78u;
        t44 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 1u, 2u, COW_IMG(0x103be434u), 0x98u, rd32(sp0 - 0x7cu));
        t45 = g->ecx;
        t46 = g->edx;
        t47 = rd16(ebx + 0x630u);
        wr32(ebx + 0x608u, t44);
        wr16(t44, (uint16_t)t47);
        ecx = (t45 & 0xffff0000u) | t47;
        edx = t46;
    }
    wr32(sp0 - 0x54u, esi);
    g->edi = edi;
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t48 = g->edx;
    t49 = rd32(ebx + 0x614u);
    wr32(sp0 - 0x28u, t49);
    t50 = rd32(ebx + 0x628u);
    wr32(sp0 - 0x30u, t50);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    if (rd32(ebx + 0x614u) > 3u)
    {
        ecx = t50;
        edx = t48;
        esi = t49;
        goto L_102a7657;
    }
    eax = rd32(ebx + 0x624u);
    ecx = t50;
    edx = t48;
    ebp = rd32(ebx + 0x618u);
    esi = t49;
    loc_28 = t49;
    loc_30 = t50;
    t51 = rd32(COW_IMG(0x102a769cu) + esi * 4u);
    switch (t51 - RD)
    {
    case 0x102a71b5u: goto L_102a71b5;
    case 0x102a71ecu: goto L_102a71ec;
    case 0x102a7207u: goto L_102a7207;
    default: rt_fatal(g, COW_IMG(0x102a71aeu), "switch");
    }
    return 0;
L_102a71b5: ;
    t54 = cow_divu(g, 8u, ecx);
    t55 = cow_modu(g, 8u, ecx);
    t56 = cow_divu(g, rd32(ebx + 0x60cu), t54);
    t57 = cow_modu(g, rd32(ebx + 0x60cu), t54);
    wr32(ebx + 0x62cu, t56);
    if (t57 == 0u)
    {
        eax = t56;
        edx = t57;
    }
    else
    {
        eax = t56;
        edx = t57;
        wr32(ebx + 0x62cu, eax + 1u);
    }
    wr32(sp0 - 0x24u, edx);
    wr32(sp0 - 0x3cu, eax);
    edi = 3u;
    loc_24 = edx;
    loc_3c = eax;
L_102a7218: ;
    t58 = rd32(ebx + 0x610u) * rd32(ebx + 0x62cu);
    wr32(ebx + 0x630u, t58);
    if (ebp == 1u)
    {
        ecx = t58;
        goto L_102a72ab;
    }
    eax = ebp - 1u;
    ecx = t58;
    if (eax == 4u)
    {
        eax = eax - 4u;
        goto L_102a72a2;
    }
    eax = eax - 4u;
    if (eax == 0x8000u)
    {
        eax = eax - 0x8000u;
        goto L_102a729a;
    }
    eax = eax - 0x8000u;
    wr32(sp0 - 0x54u, 0xebu);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t60 = g->ecx;
    t61 = g->edx;
    wr32(sp0 - 0x60u, (uint16_t)ebp);
    wr32(sp0 - 0x64u, COW_IMG(0x103be3e8u));
    g->ecx = t60;
    g->edx = t61;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be3e8u), (uint16_t)ebp);
    t62 = g->ecx;
    t63 = g->edx;
    if (rd32(ebx) == 0u)
    {
        ecx = t62;
        edx = t63;
    }
    else
    {
        eax = rd32(ebx);
        ecx = t62;
        edx = t63;
        wr32(sp0 - 0x54u, 0xedu);
        wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x5cu, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be434u), 0xedu);
        t64 = g->ecx;
        t65 = g->edx;
        ecx = t64;
        edx = t65;
    }
    wr32(sp0 - 0x54u, 0xeeu);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, ebx);
    g->esp = sp0 - 0x50u;
    t66 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0xeeu);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return t66 & 0xffffff00u;
L_102a71ec: ;
    wr32(sp0 - 0x30u, 8u);
    t53 = rd32(ebx + 0x60cu) * eax;
    wr32(ebx + 0x62cu, t53);
    edx = t53;
    edi = eax;
    loc_30 = 8u;
    loc_24 = 0u;
    loc_3c = 0u;
    goto L_102a7218;
L_102a7207: ;
    t52 = rd32(ebx + 0x60cu);
    wr32(ebx + 0x62cu, t52);
    edi = 1u;
    loc_24 = 0u;
    loc_3c = 0u;
    goto L_102a7218;
L_102a729a: ;
    wr32(sp0 - 0x54u, ebx);
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102a7e50u), 9, ebx, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t67 = g->ecx;
    ecx = t67;
L_102a72a8: ;
L_102a72ab: ;
    t69 = rd32(ebx + 0x60cu);
    t70 = rd32(ebx);
    wr32(sp0 + 8u, t69);
    wr32(arg1 + 0x1cu, t69);
    t71 = rd32(ebx + 0x610u);
    wr32(sp0 - 0x38u, t71);
    wr32(arg1 + 0x20u, t71);
    wr32(sp0 - 0x54u, 0x105u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    t72 = t71 * t69 * edi;
    wr32(sp0 - 0x5cu, t72);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x34u, t70);
    wr32(arg1 + 0x24u, edi);
    g->edx = t70;
    g->esp = sp0 - 0x3cu;
    t73 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t72, COW_IMG(0x103be434u), 0x105u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t74 = g->edx;
    t75 = rd32(sp0 - 0x28u);
    wr32(arg1 + 0x28u, t73);
    t76 = rd32(COW_IMG(0x102a76acu) + t75 * 4u);
    switch (t76 - RD)
    {
    case 0x102a72ffu: esi = t73; goto L_102a72ff;
    case 0x102a74dbu: edx = t74; ebp = t71 * t69; esi = t73; goto L_102a74db;
    case 0x102a7555u: ecx = t75; edx = t74; ebp = t71 * t69; esi = t73; goto L_102a7555;
    default: rt_fatal(g, COW_IMG(0x102a72f8u), "switch");
    }
    return 0;
L_102a72a2: ;
    wr32(sp0 - 0x54u, ebx);
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102a8010u), 9, ebx, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t68 = g->ecx;
    ecx = t68;
    goto L_102a72a8;
L_102a72ff: ;
    t83 = cow_divu(g, 8u, rd32(sp0 - 0x30u));
    t84 = cow_modu(g, 8u, rd32(sp0 - 0x30u));
    wr32(sp0 - 4u, t83);
    if (rd32(sp0 - 0x30u) != 8u)
    {
        ecx = rd32(sp0 - 0x30u);
        edx = t84;
        loc_4 = t83;
        t85 = (-(ecx != 4u) & 3u) + 4u;
        wr32(sp0 - 0x2cu, t85);
        t86 = ((-(ecx != 4u) & 0xffffff00u) | (-(ecx != 4u) & 0x90u)) + 0xf0u;
        wr32(sp0 - 0x20u, t86);
        ecx = t85;
        loc_20 = t86;
        loc_2c = t85;
    }
    else
    {
        edx = t84;
        loc_4 = t83;
        wr32(sp0 - 0x20u, 0xffu);
        wr32(sp0 - 0x2cu, 0u);
        ecx = 0u;
        loc_20 = 0xffu;
        loc_2c = 0u;
    }
    wr32(sp0 - 0x1cu, 0u);
    if (rd32(sp0 - 0x38u) != 0u)
    {
        t87 = (uint16_t)rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x14u, t87);
        loc_1c = 0u;
        loc_14 = t87;
L_102a7371: ;
        t88 = (rd32(sp0 - 0x38u) - loc_1c - 1u) * loc_14;
        wr32(sp0 - 0x3cu, t88);
        if (loc_14 == 0u)
        {
            loc_3c = t88;
        }
        else
        {
            edx = loc_14;
            loc_3c = t88;
            wr32(sp0 - 8u, edx);
            wr32(sp0 - 0x10u, (uint16_t)loc_4);
            loc_8 = edx;
            loc_10 = (uint16_t)loc_4;
L_102a73a0: ;
            if (rd32(sp0 - 0x28u) != 0u)
            {
                eax = (loc_3c & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
            }
            else
            {
                eax = (loc_3c & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
                eax = (eax & 0xffffff00u) | (uint8_t)~(uint8_t)eax;
            }
            if (loc_10 != 0u)
            {
                edx = loc_10;
                wr8(sp0 + 8u, (uint8_t)(8u - (uint8_t)ecx));
                wr32(sp0 - 0xcu, loc_10);
                ebp = (uint16_t)ecx;
                edi = (uint16_t)loc_20;
                loc_c = loc_10;
L_102a73df: ;
                if (rd32(sp0 - 0x30u) == 1u)
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
                    cf = (uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) != 0u;
                    edx = ((uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) & 0xffffff00u) | (uint8_t)-(uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
                else
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
                    cf = (ecx & 0x1fu) != 0u ? (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu) - ((ecx & 0x1fu) < 0x20u)) & 1u : cf;
                    edx = (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
                t89 = rd8(sp0 + 8u);
                wr8(esi, (uint8_t)edx);
                wr8(esi + 1u, (uint8_t)edx);
                wr8(esi + 2u, (uint8_t)edx);
                wr32(sp0 - 0xcu, loc_c - 1u);
                if (loc_c != 1u)
                {
                    eax = (eax & 0xffffff00u) | (uint8_t)((t89 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (t89 & 0x1fu)) : (uint8_t)eax);
                    esi = esi + 3u;
                    loc_c = loc_c - 1u;
                    goto L_102a73df;
                }
                esi = esi + 3u;
                ecx = loc_2c;
            }
            wr32(sp0 - 0x3cu, loc_3c + 1u);
            wr32(sp0 - 8u, loc_8 - 1u);
            if (loc_8 != 1u)
            {
                loc_3c = loc_3c + 1u;
                loc_8 = loc_8 - 1u;
                goto L_102a73a0;
            }
            loc_3c = loc_3c + 1u;
        }
        if (rd16(sp0 - 0x24u) != 0u)
        {
            if (rd32(sp0 - 0x28u) != 0u)
            {
                eax = (rd32(sp0 - 0x34u) & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
            }
            else
            {
                eax = (rd32(sp0 - 0x34u) & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
                eax = (eax & 0xffffff00u) | (uint8_t)~(uint8_t)eax;
            }
            t90 = (uint16_t)rd32(sp0 - 0x24u);
            wr32(sp0 - 8u, t90);
            if ((uint16_t)rd32(sp0 - 0x24u) != 0u)
            {
                edx = t90;
                loc_8 = t90;
                wr8(sp0 + 8u, (uint8_t)(8u - (uint8_t)ecx));
                wr32(sp0 - 8u, loc_8);
                ebp = (uint16_t)ecx;
                edi = (uint16_t)loc_20;
L_102a747c: ;
                if (rd32(sp0 - 0x30u) == 1u)
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
                    cf = (uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) != 0u;
                    edx = ((uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) & 0xffffff00u) | (uint8_t)-(uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
                else
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
                    cf = (ecx & 0x1fu) != 0u ? (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu) - ((ecx & 0x1fu) < 0x20u)) & 1u : cf;
                    edx = (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
                t91 = rd8(sp0 + 8u);
                wr8(esi, (uint8_t)edx);
                wr8(esi + 1u, (uint8_t)edx);
                wr8(esi + 2u, (uint8_t)edx);
                wr32(sp0 - 8u, loc_8 - 1u);
                if (loc_8 != 1u)
                {
                    eax = (eax & 0xffffff00u) | (uint8_t)((t91 & 0x1fu) != 0u ? (uint8_t)((uint8_t)eax << (t91 & 0x1fu)) : (uint8_t)eax);
                    esi = esi + 3u;
                    loc_8 = loc_8 - 1u;
                    goto L_102a747c;
                }
                esi = esi + 3u;
                ecx = loc_2c;
            }
        }
        wr32(sp0 - 0x1cu, loc_1c + 1u);
        if (loc_1c + 1u < rd32(sp0 - 0x38u))
        {
            loc_1c = loc_1c + 1u;
            goto L_102a7371;
        }
        edx = rd32(sp0 - 0x38u);
    }
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    ecx = 0u;
L_102a7612: ;
    wr32(sp0 - 0x54u, 0x195u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, rd32(ebx));
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, rd32(ebx), COW_IMG(0x103be434u), 0x195u);
    t92 = g->edx;
    wr32(sp0 - 0x60u, 0x196u);
    wr32(sp0 - 0x64u, COW_IMG(0x103be434u));
    t93 = rd32(ebx + 0x608u);
    wr32(sp0 - 0x68u, t93);
    g->ecx = t93;
    g->edx = t92;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t93, COW_IMG(0x103be434u), 0x196u);
    t94 = g->ecx;
    t95 = g->edx;
    wr32(sp0 - 0x6cu, 0x197u);
    wr32(sp0 - 0x70u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x74u, ebx);
    g->esp = sp0 - 0x68u;
    t96 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0x197u);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return (t96 & 0xffffff00u) | (uint8_t)(t96 | 0xffu);
L_102a74db: ;
    if (rd32(sp0 - 0x38u) != 0u)
    {
        eax = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x1cu, ebp);
        t82 = -rd32(sp0 + 8u);
        wr32(sp0 - 4u, t82);
        wr32(sp0 - 8u, eax);
        edx = t82;
        loc_1c = ebp;
        loc_4 = t82;
        loc_8 = eax;
L_102a74f5: ;
        if (rd32(sp0 + 8u) == 0u) goto L_102a752c;
        ecx = 0u;
L_102a74ff: ;
        if (edi != 0u)
        {
            eax = 0u;
            ebp = (ecx + loc_1c) * edi;
L_102a750f: ;
            wr8(esi, rd8(eax + ebp + rd32(ebx)));
            if (eax + 1u < edi)
            {
                eax = eax + 1u;
                esi = esi + 1u;
                goto L_102a750f;
            }
            esi = esi + 1u;
        }
        if (ecx + 1u < rd32(sp0 + 8u))
        {
            ecx = ecx + 1u;
            goto L_102a74ff;
        }
        edx = loc_4;
L_102a752c: ;
        wr32(sp0 - 0x1cu, edx + loc_1c);
        wr32(sp0 - 8u, loc_8 - 1u);
        if (loc_8 != 1u)
        {
            loc_1c = edx + loc_1c;
            loc_8 = loc_8 - 1u;
            goto L_102a74f5;
        }
    }
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    ecx = 0u;
    goto L_102a7612;
L_102a7555: ;
    if (rd32(sp0 - 0x38u) != 0u)
    {
        wr32(sp0 - 0x1cu, ebp);
        t77 = -rd32(sp0 + 8u);
        wr32(sp0 - 4u, t77);
        t78 = rd32(sp0 - 0x38u);
        wr32(sp0 - 8u, t78);
        eax = t77;
        loc_1c = ebp;
        loc_4 = t77;
        loc_8 = t78;
L_102a7573: ;
        if (rd32(sp0 + 8u) == 0u) goto L_102a75aa;
        ecx = 0u;
L_102a757d: ;
        if (edi != 0u)
        {
            eax = 0u;
            ebp = (ecx + loc_1c) * edi;
L_102a758d: ;
            wr8(esi, rd8(eax + ebp + rd32(ebx)));
            if (eax + 1u < edi)
            {
                eax = eax + 1u;
                esi = esi + 1u;
                goto L_102a758d;
            }
            esi = esi + 1u;
        }
        if (ecx + 1u < rd32(sp0 + 8u))
        {
            ecx = ecx + 1u;
            goto L_102a757d;
        }
        eax = loc_4;
L_102a75aa: ;
        wr32(sp0 - 0x1cu, eax + loc_1c);
        wr32(sp0 - 8u, loc_8 - 1u);
        if (loc_8 != 1u)
        {
            loc_1c = eax + loc_1c;
            loc_8 = loc_8 - 1u;
            goto L_102a7573;
        }
        ecx = loc_8 - 1u;
        edx = eax + loc_1c;
    }
    wr32(sp0 - 0x54u, 0x142u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, 1u);
    wr32(sp0 - 0x60u, 0x300u);
    wr32(arg1 + 0x30u, 3u);
    wr32(arg1 + 0x34u, 0x100u);
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t79 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 0x300u, 1u, COW_IMG(0x103be434u), 0x142u, rd32(sp0 - 0x50u));
    t80 = g->edx;
    t81 = rd32(arg1 + 0x34u);
    wr32(arg1 + 0x38u, t79);
    if (t81 * 3u == 0u)
    {
        ecx = t81 * 3u;
        edx = t80;
    }
    else
    {
        ecx = t81 * 3u;
        eax = 0u;
        edi = ebx + 4u;
L_102a75fc: ;
        wr8(eax + rd32(arg1 + 0x38u), rd8(edi));
        if (eax + 1u < rd32(arg1 + 0x34u) * 3u)
        {
            eax = eax + 1u;
            ecx = rd32(arg1 + 0x34u);
            edi = edi + 2u;
            goto L_102a75fc;
        }
        ecx = rd32(arg1 + 0x34u);
        edx = rd32(arg1 + 0x34u) * 3u;
    }
    goto L_102a7612;
L_102a7657: ;
    wr32(sp0 - 0x54u, 0xd4u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, ebx);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t97 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0xd4u);
    t98 = g->ecx;
    t99 = g->edx;
    wr32(sp0 - 0x60u, 0xd5u);
    wr32(sp0 - 0x64u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x68u, COW_IMG(0x103b379cu));
    g->ecx = t98;
    g->edx = t99;
    g->esp = sp0 - 0x60u;
    t100 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t101 = g->ecx;
    t102 = g->edx;
    wr32(sp0 - 0x6cu, (uint16_t)esi);
    wr32(sp0 - 0x70u, COW_IMG(0x103be3c4u));
    g->esp = sp0 - 0x68u;
    t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be3c4u), (uint16_t)esi);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return t103 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a6fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a6fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
