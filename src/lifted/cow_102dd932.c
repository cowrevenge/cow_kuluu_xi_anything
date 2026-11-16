/* f_0x102dd932 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dd932(Guest* g)
{
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103281a3u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102dd93cu));
    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x6cu, in_edi);
    t2 = rd32(self + 8u);
    t3 = ~(t2 >> 0x12u) & 1u;
    wr32(sp0 - 0x58u, t3);
    t4 = ~(t2 >> 0x10u) & 1u;
    wr32(sp0 - 0x70u, t4);
    t5 = rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0x74u, t5);
    t6 = rd32(rd32(self) + 0x1058u);
    wr32(sp0 - 0x78u, t6);
    g->eax = rd32(self);
    t7 = rd32(self);
    g->esp = sp0 - 0x6cu;
    t8 = cow_call_regs(g, COW_IMG(0x102dd629u), g->eax, t4, in_edx, 1, 3, t6, t5, t4);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x48u, t8);
    if (t8 == 0u)
    {
        eax = t8;
        edx = t10;
        loc_30 = 0u;
        loc_2c = 0u;
        loc_48 = t8;
        goto L_102ddd58;
    }
    ecx = t9;
    edx = t10;
    edi = ~(t2 >> 0x11u) & 1u;
    loc_48 = t8;
    wr32(sp0 - 0x70u, edi);
    t11 = rd32(rd32(self + 4u) + 0x105cu);
    wr32(sp0 - 0x74u, t11);
    t12 = rd32(rd32(self) + 0x105cu);
    wr32(sp0 - 0x78u, t12);
    g->eax = rd32(self);
    t13 = rd32(self);
    g->esp = sp0 - 0x6cu;
    t14 = cow_call_regs(g, COW_IMG(0x102dd629u), g->eax, ecx, edx, 1, 3, t12, t11, edi);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x30u, t14);
    if (t14 == 0u)
    {
        eax = t14;
        edx = t16;
        loc_30 = t14;
        loc_2c = 0u;
        goto L_102ddd58;
    }
    ecx = t15;
    edx = t16;
    loc_30 = t14;
    t17 = rd32(sp0 - 0x58u);
    wr32(sp0 - 0x70u, t17);
    t18 = rd32(rd32(self + 4u) + 0x1060u);
    wr32(sp0 - 0x74u, t18);
    t19 = rd32(rd32(self) + 0x1060u);
    wr32(sp0 - 0x78u, t19);
    g->eax = rd32(self);
    t20 = rd32(self);
    g->esp = sp0 - 0x6cu;
    t21 = cow_call_regs(g, COW_IMG(0x102dd629u), g->eax, ecx, edx, 1, 3, t19, t18, t17);
    t22 = g->edx;
    wr32(sp0 - 0x2cu, t21);
    if (t21 == 0u)
    {
        eax = t21;
        edx = t22;
        loc_2c = t21;
        goto L_102ddd58;
    }
    edx = t22;
    loc_2c = t21;
    t23 = rd32(sp0 - 0x48u) + rd32(rd32(sp0 - 0x48u));
    wr32(sp0 - 0x50u, t23);
    t24 = rd32(sp0 - 0x30u) + rd32(rd32(sp0 - 0x30u));
    wr32(sp0 - 0x54u, t24);
    t25 = loc_2c + rd32(loc_2c);
    wr32(sp0 - 0x28u, t25);
    t26 = rd32(rd32(self + 4u) + 0x1060u) * 0xcu + 4u;
    wr32(sp0 - 0x70u, t26);
    g->eax = t26;
    t27 = rd32(rd32(self + 4u) + 0x1060u);
    g->esp = sp0 - 0x64u;
    t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, loc_2c, edx, 1, 3, t26, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t29 = g->edx;
    wr32(sp0 - 0x58u, t28);
    wr32(sp0 - 8u, 0u);
    if (t28 == 0u)
    {
        ecx = rd32(sp0 - 0x70u);
        edx = t29;
        wr32(sp0 - 0x18u, 0u);
        eax = 0u;
        loc_18 = 0u;
    }
    else
    {
        eax = t28;
        ecx = rd32(sp0 - 0x70u);
        edx = t29;
        edi = t27;
        wr32(sp0 - 0x70u, COW_IMG(0x102dd620u));
        wr32(sp0 - 0x74u, COW_IMG(0x102dd613u));
        wr32(sp0 - 0x78u, edi);
        wr32(eax, edi);
        wr32(sp0 - 0x7cu, 0xcu);
        wr32(sp0 - 0x80u, eax + 4u);
        wr32(sp0 - 0x5cu, eax + 4u);
        g->esp = sp0 - 0x6cu;
        cow_fastcall(g, COW_IMG(0x10317843u), ecx, edx, 5, eax + 4u, 0xcu, edi, COW_IMG(0x102dd613u), COW_IMG(0x102dd620u));
        t30 = g->ecx;
        t31 = g->edx;
        t32 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0x18u, t32);
        eax = t32;
        ecx = t30;
        edx = t31;
        loc_18 = t32;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0x5cu, eax);
    if (eax == 0u)
    {
        ebx = 1u;
        loc_5c = eax;
        goto L_102ddd51;
    }
    loc_5c = eax;
    t33 = rd32(rd32(self) + 0x1058u);
    wr32(sp0 - 0x70u, t33 << 4u);
    g->eax = t33 << 4u;
    g->esp = sp0 - 0x64u;
    t34 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t33 << 4u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t35 = g->edx;
    wr32(sp0 - 0x60u, t34);
    wr32(sp0 - 8u, 1u);
    if (t34 == 0u)
    {
        edx = t35;
        wr32(sp0 - 0x20u, 0u);
        eax = 0u;
        loc_20 = 0u;
    }
    else
    {
        eax = t34;
        ecx = rd32(sp0 - 0x70u);
        edx = t35;
        edi = t33;
        loc_60 = t34;
        wr32(sp0 - 0x70u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x74u, edi);
        wr32(sp0 - 0x78u, 0x10u);
        wr32(sp0 - 0x7cu, eax);
        g->esp = sp0 - 0x6cu;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
        t36 = g->edx;
        t37 = rd32(sp0 - 0x60u);
        wr32(sp0 - 0x20u, t37);
        eax = t37;
        edx = t36;
        loc_20 = t37;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0x60u, eax);
    if (eax == 0u)
    {
        ebx = 1u;
        loc_60 = eax;
        goto L_102ddd51;
    }
    loc_60 = eax;
    t38 = rd32(sp0 - 0x2cu) + 4u;
    if (t38 >= rd32(sp0 - 0x28u))
    {
        ebx = 1u;
        edi = t38;
        goto L_102ddae0;
    }
    ecx = t38;
    ebx = 1u;
    edi = t38;
L_102ddabb: ;
    edx = ecx + rd32(ecx);
    ecx = ecx + 4u;
L_102ddad5: ;
    if (ecx < edx) goto L_102ddac4;
    if (edx < rd32(sp0 - 0x28u))
    {
        ecx = edx;
        goto L_102ddabb;
    }
L_102ddae0: ;
    wr32(sp0 - 0x44u, 0u);
    if (edi >= rd32(sp0 - 0x28u))
    {
        eax = edi;
        goto L_102ddd4d;
    }
    eax = edi;
    loc_44 = 0u;
L_102ddaef: ;
    t40 = eax + rd32(eax);
    wr32(sp0 - 0x1cu, t40);
    wr32(sp0 - 0x58u, eax + 4u);
    wr32(sp0 - 0x14u, eax + 4u);
    if (eax + 4u >= eax + rd32(eax))
    {
        edx = t40;
        loc_1c = t40;
        loc_58 = eax + 4u;
        loc_14 = eax + 4u;
        goto L_102ddbb6;
    }
    edx = t40;
    loc_1c = t40;
    loc_58 = eax + 4u;
    loc_14 = eax + 4u;
L_102ddb07: ;
    if (rd32(rd32(loc_14) * 0xcu + rd32(sp0 - 0x18u)) != 0u) goto L_102ddba9;
    ecx = rd32(sp0 - 0x18u);
    ebx = rd32(loc_14) * 0xcu + rd32(sp0 - 0x18u);
    if (loc_24 == 0u) goto L_102ddb34;
    eax = loc_24;
    wr32(ebx, rd32(eax));
    wr32(eax, 0u);
    t41 = rd32(eax + 4u);
    wr32(sp0 - 0x24u, t41);
    loc_24 = t41;
L_102ddb84: ;
    t46 = rd32(rd32(self + 4u) + 0x105cu) * rd32(rd32(self + 4u) + 0x1058u) * 0x10u;
    t47 = rd32(ebx);
    edi = t47;
    eax = 0u;
    ecx = t46 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t46 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
L_102ddba9: ;
    wr32(sp0 - 0x14u, loc_14 + 8u);
    if (loc_14 + 8u < edx)
    {
        loc_14 = loc_14 + 8u;
        goto L_102ddb07;
    }
    loc_14 = loc_14 + 8u;
L_102ddbb6: ;
    wr32(sp0 - 0x3cu, 0u);
    t48 = rd32(sp0 - 0x30u) + 4u;
    wr32(sp0 - 0x40u, t48);
    if (rd32(sp0 - 0x30u) + 4u >= rd32(sp0 - 0x54u))
    {
        loc_3c = 0u;
        goto L_102ddcdc;
    }
    loc_3c = 0u;
    loc_40 = t48;
L_102ddbcc: ;
    wr32(sp0 - 0x70u, loc_20);
    wr32(sp0 - 0x74u, loc_44);
    wr32(sp0 - 0x78u, loc_3c);
    t49 = loc_40 + rd32(loc_40);
    wr32(sp0 - 0x4cu, t49);
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, loc_3c, loc_44, loc_20);
    t50 = g->edx;
    t51 = rd32(sp0 - 0x48u) + 4u;
    wr32(sp0 - 0x38u, t51);
    if (rd32(sp0 - 0x48u) + 4u >= rd32(sp0 - 0x50u))
    {
        edx = t50;
        edi = t49;
    }
    else
    {
        edi = t49;
        loc_38 = t51;
        edx = rd32(sp0 - 0x20u) + 8u;
L_102ddbfe: ;
        t52 = loc_38 + rd32(loc_38);
        wr32(sp0 - 0x34u, t52);
        eax = t52;
        ecx = rd32(sp0 - 0x58u);
        loc_34 = t52;
L_102ddcaf: ;
        wr32(sp0 - 0x14u, ecx);
        if (ecx < rd32(sp0 - 0x1cu))
        {
            loc_14 = ecx;
            goto L_102ddc10;
        }
        loc_14 = ecx;
        wr32(sp0 - 0x38u, eax);
        if (eax < rd32(sp0 - 0x50u))
        {
            edx = edx + 0x10u;
            loc_38 = eax;
            goto L_102ddbfe;
        }
        edx = edx + 0x10u;
    }
    t58 = rd32(sp0 - 0x3cu) + 1u;
    wr32(sp0 - 0x3cu, t58);
    wr32(sp0 - 0x40u, edi);
    if (edi < rd32(sp0 - 0x54u))
    {
        loc_3c = t58;
        loc_40 = edi;
        goto L_102ddbcc;
    }
    loc_3c = t58;
    edx = rd32(sp0 - 0x1cu);
L_102ddcdc: ;
    ebx = loc_58;
L_102ddd3b: ;
    if (ebx < edx) goto L_102ddce1;
    wr32(sp0 - 0x44u, loc_44 + 1u);
    if (edx < rd32(sp0 - 0x28u))
    {
        eax = edx;
        loc_44 = loc_44 + 1u;
        goto L_102ddaef;
    }
    eax = edx;
L_102ddd4d: ;
    esi = 0u;
L_102ddd5d: ;
    if (loc_5c == 0u)
    {
        ecx = loc_5c;
    }
    else
    {
        ecx = loc_5c;
        wr32(sp0 - 0x70u, 3u);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x6cu;
        t63 = cow_fastcall(g, COW_IMG(0x102dd8e6u), ecx, edx, 1, 3u);
        t64 = g->ecx;
        t65 = g->edx;
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    wr32(sp0 - 0x70u, loc_2c);
    g->eax = eax;
    g->esp = sp0 - 0x6cu;
    t66 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_2c);
    t67 = g->ecx;
    t68 = g->edx;
    t69 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x74u, t69);
    g->esp = sp0 - 0x70u;
    t70 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t67, t68, 1, 1, t69);
    t71 = g->ecx;
    t72 = g->edx;
    t73 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x78u, t73);
    g->esp = sp0 - 0x74u;
    t74 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t71, t72, 1, 1, t73);
    t75 = g->ecx;
    t76 = g->edx;
    t77 = rd32(sp0 - 0x60u);
    wr32(sp0 - 0x7cu, t77);
    g->esp = sp0 - 0x78u;
    t78 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t75, t76, 1, 1, t77);
    t79 = g->ecx;
    t80 = g->edx;
    wr32(sp0 - 0x80u, 0u);
    g->esp = sp0 - 0x7cu;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t79, t80, 1, 1, 0u);
    t81 = g->edx;
    t82 = rd32(sp0 - 0x10u);
    t83 = rd32(sp0 - 0x64u);
    t84 = rd32(sp0 - 0x68u);
    t85 = rd32(sp0 - 0x6cu);
    wr32(g->fs_base, t82);
    g->ebx = t83;
    g->esi = t84;
    g->edi = t85;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t81;
    return esi;
L_102ddac4: ;
    t39 = rd32(sp0 - 0x18u);
    wr32(rd32(ecx) * 0xcu + t39 + 8u, rd32(rd32(ecx) * 0xcu + t39 + 8u) + 1u);
    ecx = ecx + 8u;
    ebx = t39;
    goto L_102ddad5;
L_102ddb34: ;
    t42 = rd32(rd32(self + 4u) + 0x105cu) * rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0x70u, t42 << 4u);
    g->eax = t42 << 4u;
    g->esp = sp0 - 0x64u;
    t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t42 << 4u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t44 = g->edx;
    wr32(sp0 - 0x4cu, t43);
    wr32(sp0 - 8u, 2u);
    if (t43 == 0u)
    {
        edx = t44;
        eax = 0u;
    }
    else
    {
        eax = t43;
        ecx = rd32(sp0 - 0x70u);
        edx = t44;
        edi = t42;
        loc_4c = t43;
        wr32(sp0 - 0x70u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x74u, edi);
        wr32(sp0 - 0x78u, 0x10u);
        wr32(sp0 - 0x7cu, eax);
        g->esp = sp0 - 0x6cu;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
        t45 = g->edx;
        eax = rd32(sp0 - 0x4cu);
        edx = t45;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(ebx, eax);
    if (eax == 0u) goto L_102ddd51;
    edx = rd32(sp0 - 0x1cu);
    goto L_102ddb84;
L_102ddc10: ;
    if (rd32(sp0 - 0x40u) + 4u >= edi) goto L_102ddcac;
    ebx = rd32(sp0 - 0x40u) + 4u;
L_102ddc1e: ;
    eax = rd32(rd32(self + 4u) + 0x1058u) * rd32(ebx) * 0x10u + rd32(rd32(ecx) * 0xcu + rd32(sp0 - 0x18u));
    ecx = loc_38 + 4u;
L_102ddc92: ;
    if (ecx < loc_34) goto L_102ddc40;
    if (ebx + 8u < rd32(sp0 - 0x4cu))
    {
        ecx = loc_14;
        ebx = ebx + 8u;
        goto L_102ddc1e;
    }
    ecx = loc_14;
    eax = loc_34;
    edi = rd32(sp0 - 0x4cu);
L_102ddcac: ;
    ecx = ecx + 8u;
    goto L_102ddcaf;
L_102ddc40: ;
    d53 = fr(g, fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(ebx + 4u)) * (double)rdf32(loc_14 + 4u));
    d54 = fr(g, fr(g, d53 * (double)rdf32(edx - 8u)) + (double)rdf32(eax + rd32(ecx) * 0x10u));
    wrf32(eax + rd32(ecx) * 0x10u, (float)d54);
    d55 = fr(g, fr(g, d53 * (double)rdf32(edx - 4u)) + (double)rdf32(eax + rd32(ecx) * 0x10u + 4u));
    wrf32(eax + rd32(ecx) * 0x10u + 4u, (float)d55);
    d56 = fr(g, fr(g, d53 * (double)rdf32(edx)) + (double)rdf32(eax + rd32(ecx) * 0x10u + 8u));
    wrf32(eax + rd32(ecx) * 0x10u + 8u, (float)d56);
    d57 = fr(g, fr(g, d53 * (double)rdf32(edx + 4u)) + (double)rdf32(eax + rd32(ecx) * 0x10u + 0xcu));
    wrf32(eax + rd32(ecx) * 0x10u + 0xcu, (float)d57);
    ecx = ecx + 8u;
    goto L_102ddc92;
L_102ddce1: ;
    t59 = rd32(ebx);
    t60 = rd32(sp0 - 0x18u);
    wr32(t59 * 0xcu + t60 + 8u, rd32(t59 * 0xcu + t60 + 8u) - 1u);
    if (rd32(rd32(ebx) * 0xcu + rd32(sp0 - 0x18u) + 8u) == 1u)
    {
        edi = t59 * 0xcu + t60;
        wr32(sp0 - 0x14u, 0u);
        if (rd32(rd32(self + 4u) + 0x105cu) == 0u)
        {
            loc_14 = 0u;
            goto L_102ddd2f;
        }
        ecx = rd32(self + 4u);
        loc_14 = 0u;
L_102ddd01: ;
        t61 = rd32(edi) + rd32(ecx + 0x1058u) * loc_14 * 0x10u;
        wr32(sp0 - 0x70u, t61);
        wr32(sp0 - 0x74u, rd32(ebx));
        wr32(sp0 - 0x78u, loc_14);
        g->esp = sp0 - 0x6cu;
        cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 3, loc_14, rd32(ebx), t61);
        t62 = rd32(sp0 - 0x14u) + 1u;
        wr32(sp0 - 0x14u, t62);
        if (t62 < rd32(rd32(self + 4u) + 0x105cu))
        {
            ecx = rd32(self + 4u);
            loc_14 = t62;
            goto L_102ddd01;
        }
        loc_14 = t62;
        edx = rd32(sp0 - 0x1cu);
L_102ddd2f: ;
        wr32(edi + 4u, loc_24);
        wr32(sp0 - 0x24u, edi);
        loc_24 = edi;
    }
    ebx = ebx + 8u;
    goto L_102ddd3b;
L_102ddd51: ;
    esi = 0x8007000eu;
    goto L_102ddd5d;
L_102ddd58: ;
    ebx = 1u;
    esi = 0x80004005u;
    loc_60 = 0u;
    loc_5c = 0u;
    loc_4 = in_ebp;
    loc_64 = in_ebx;
    loc_68 = in_esi;
    loc_6c = in_edi;
    goto L_102ddd5d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dd932(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dd932(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
