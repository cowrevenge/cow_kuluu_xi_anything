/* f_0x1020ef00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1020ef00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664494u));
        edx = in_edx;
        goto L_1020f1c0;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_1020f1c0;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1020e4f0u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1020f1c0;
    }
    edx = t2;
    edi = t1;
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1020efd0;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_1020ef99;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        goto L_1020f1b8;
    }
    if (rd8(self + 0x6cu) == 2u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 8u & 0xffffff00u) | rd8(self + 0x6cu);
        goto L_1020f1b8;
    }
    eax = ((uint32_t)(int16_t)arg1 - 8u & 0xffffff00u) | rd8(self + 0x6cu);
    if ((uint8_t)eax == 3u) goto L_1020f1b8;
    if ((uint8_t)eax == 4u) goto L_1020f1b8;
    if (rd8(self + 0x5cu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x5cu);
        wr8(self + 0x5cu, 1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x5cu);
        wr8(self + 0x5cu, 0u);
        wr16(self + 0x58u, 0u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1020ebf0u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x101f7080u), t3, self, g->edx, 0, 2, 0u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037e90u), t6, 0);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_1020ef99: ;
    if (rd16(self + 0x58u) != 0u) goto L_1020efaf;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->esp = sp0 - 0xcu;
    t10 = cow_fastcall(g, COW_IMG(0x1020eed0u), self, edx, 0);
    t11 = g->edx;
    g->edx = t11;
    return (t10 & 0xffffff00u) | 1u;
L_1020efaf: ;
    wr16(self + 0x58u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1020ebf0u), self, 0);
    t12 = g->edx;
    t13 = (uint32_t)(int16_t)rd16(self + 0x5au);
    g->edx = t12;
    t14 = cow_call_regs(g, COW_IMG(0x101f7080u), t13, self, g->edx, 0, 2, t13, 0u);
    t15 = g->edx;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_1020efd0: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x1020f280u), (uint32_t)(int16_t)arg1 - 5u, self, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        edx = t18;
        goto L_1020eff3;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    t19 = (ecx & 0xffff0000u) | rd16(edi);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x1020f440u), eax, self, g->edx, 0, 1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10037b90u), t21, 0);
    t24 = g->edx;
    g->edx = t24;
    return (t23 & 0xffffff00u) | 1u;
L_1020eff3: ;
    if ((int32_t)rd32(edi) < 0)
    {
        eax = rd32(edi);
        goto L_1020f0c2;
    }
    eax = rd32(edi);
    wr16(self + 0x6eu, (uint16_t)eax);
    g->edx = (edx & 0xffff0000u) | (uint16_t)eax;
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x1020f250u), eax, self, g->edx, 1, 0);
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t27;
        goto L_1020f04d;
    }
    ecx = t26;
    edx = t27;
    t28 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10107b40u), 1, t28);
    t29 = g->ecx;
    t30 = g->edx;
    if ((int32_t)rd32(edi) <= 0)
    {
        ecx = t29;
        edx = t30;
        ebp = t28;
    }
    else
    {
        eax = rd32(edi);
        ecx = t29;
        edx = t30;
        ebp = t28;
        t31 = (ecx & 0xffff0000u) | (uint16_t)eax;
        g->ecx = t31;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10107b00u), 2, ebp, t31);
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10107ea0u), 1, ebp);
    t34 = g->ecx;
    t35 = g->edx;
    g->edx = t35;
    g->esp = sp0 - 0x10u;
    t36 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, ebp, 0x300000u);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    loc_14 = 1u;
L_1020f07e: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t47 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, ebp, 1u, 0u, loc_14, 0u);
    t48 = g->edx;
    eax = t47;
    edx = t48;
L_1020f090: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t49 = cow_call_regs(g, COW_IMG(0x1020f250u), eax, self, g->edx, 1, 0);
    t50 = g->ecx;
    t51 = g->edx;
    if ((uint8_t)t49 != 0u)
    {
        eax = t49;
        ecx = t50;
        edx = t51;
        goto L_1020f1b3;
    }
    eax = t49;
    edx = t51;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t52 = cow_fastcall(g, COW_IMG(0x1020eed0u), self, edx, 0);
    t53 = g->edx;
    g->edx = t53;
    t54 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t55 = g->ecx;
    t56 = g->edx;
    g->edx = t56;
    t57 = cow_thiscall(g, COW_IMG(0x10037b90u), t55, 0);
    t58 = g->edx;
    g->edx = t58;
    return (t57 & 0xffffff00u) | 1u;
L_1020f04d: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t38 = cow_call_regs(g, COW_IMG(0x1020f230u), eax, self, g->edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 != 0u)
    {
        eax = t38;
        edx = t40;
        goto L_1020f090;
    }
    ecx = t39;
    t41 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x10664494u));
    t42 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10107b40u), 1, t41);
    t43 = g->ecx;
    t44 = g->edx;
    if ((int32_t)rd32(edi) <= 0)
    {
        eax = rd32(edi);
        edx = t44;
        ebp = t41;
    }
    else
    {
        eax = rd32(edi);
        ecx = t43;
        edx = t44;
        ebp = t41;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t45 = cow_cdecl(g, COW_IMG(0x10107b00u), 2, ebp, eax);
        t46 = g->edx;
        eax = t45;
        edx = t46;
    }
    loc_14 = 0u;
    goto L_1020f07e;
L_1020f0c2: ;
    if (eax != 0xffffffffu) goto L_1020f18c;
    t59 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    g->edx = t59;
    g->esp = sp0 - 0xcu;
    t60 = cow_cdecl(g, COW_IMG(0x1020a680u), 1, t59);
    t61 = g->edx;
    if ((int32_t)t60 < 0)
    {
        eax = t60;
        edx = t61;
        goto L_1020f1c0;
    }
    eax = t60;
    edx = t61;
    ebp = t60;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t62 = cow_call_regs(g, COW_IMG(0x1020f250u), eax, self, g->edx, 1, 0);
    t63 = g->ecx;
    t64 = g->edx;
    if ((uint8_t)t62 == 0u)
    {
        eax = t62;
        edx = t64;
        goto L_1020f124;
    }
    ecx = t63;
    edx = t64;
    t65 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    g->ecx = ecx;
    g->edx = edx;
    t66 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 0xcu;
    t67 = cow_cdecl(g, COW_IMG(0x10107b40u), 1, t65);
    t68 = g->ecx;
    t69 = g->edx;
    g->edi = t65;
    g->ecx = t68;
    g->edx = t69;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1020a6e0u), 2, t65, ebp);
    t70 = g->ecx;
    t71 = g->edx;
    g->ecx = t70;
    g->edx = t71;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10107ea0u), 1, t65);
    t72 = g->ecx;
    t73 = g->edx;
    g->edx = t73;
    g->esp = sp0 - 0x1cu;
    t74 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, t65, 0x300000u);
    t75 = g->edx;
    eax = t74;
    edx = t75;
    edi = t65;
    loc_14 = 1u;
L_1020f14c: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t85 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, edi, 1u, 0u, loc_14, 0u);
    t86 = g->edx;
    eax = t85;
    edx = t86;
L_1020f15e: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t87 = cow_call_regs(g, COW_IMG(0x1020f250u), eax, self, g->edx, 1, 0);
    t88 = g->ecx;
    t89 = g->edx;
    if ((uint8_t)t87 != 0u)
    {
        eax = t87;
        ecx = t88;
        edx = t89;
        goto L_1020f1b3;
    }
    eax = t87;
    edx = t89;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t90 = cow_fastcall(g, COW_IMG(0x1020eed0u), self, edx, 0);
    t91 = g->edx;
    g->edx = t91;
    t92 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t93 = g->ecx;
    t94 = g->edx;
    g->edx = t94;
    t95 = cow_thiscall(g, COW_IMG(0x10037b90u), t93, 0);
    t96 = g->edx;
    g->edi = in_edi;
    g->edx = t96;
    return (t95 & 0xffffff00u) | 1u;
L_1020f124: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t76 = cow_call_regs(g, COW_IMG(0x1020f230u), eax, self, g->edx, 1, 0);
    t77 = g->edx;
    if ((uint8_t)t76 != 0u)
    {
        eax = t76;
        edx = t77;
        goto L_1020f15e;
    }
    edx = t77;
    t78 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    g->ecx = rd32(COW_IMG(0x10664494u));
    g->edx = edx;
    t79 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 0xcu;
    t80 = cow_cdecl(g, COW_IMG(0x10107b40u), 1, t78);
    t81 = g->ecx;
    t82 = g->edx;
    g->edi = t78;
    g->edx = t82;
    g->esp = sp0 - 0x10u;
    t83 = cow_cdecl(g, COW_IMG(0x1020a6e0u), 2, t78, ebp);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    edi = t78;
    loc_14 = 0u;
    goto L_1020f14c;
L_1020f18c: ;
    t97 = rd16(edi);
    wr16(self + 0x58u, (uint16_t)-t97);
    g->edx = (edx & 0xffff0000u) | (uint16_t)-t97;
    g->esp = sp0 - 0xcu;
    t98 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t99 = g->edx;
    wr16(self + 0x5au, (uint16_t)t98);
    g->edx = t99;
    t100 = cow_thiscall(g, COW_IMG(0x1020ebf0u), self, 0);
    t101 = g->edx;
    g->edx = t101;
    t102 = cow_call_regs(g, COW_IMG(0x101f7080u), t100, self, g->edx, 0, 2, 0u, 0u);
    t103 = g->ecx;
    t104 = g->edx;
    eax = t102;
    ecx = t103;
    edx = t104;
L_1020f1b3: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t105 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t106 = g->edx;
    eax = t105;
    edx = t106;
L_1020f1b8: ;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1020f1c0: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ef00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020ef00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
