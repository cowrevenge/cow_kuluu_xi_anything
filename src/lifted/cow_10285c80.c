/* f_0x10285c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10285c80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg2, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = t2;
        edx = t3;
        ebp = t1;
    }
    else
    {
        ecx = t2;
        edx = t3;
        ebp = t1;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
        t5 = g->ecx;
        t6 = g->edx;
        g->ecx = t5;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t6, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b7f38u), t4, arg2, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10285f20u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102860e0u), g->eax, g->ecx, t10, 1, 6, arg1, arg2, arg2, in_edi, in_esi, in_ebp);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10286170u), g->eax, g->ecx, t12, 1, 4, arg1, arg2, arg1, arg2);
    t13 = g->ecx;
    t14 = g->edx;
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, arg1, arg2, arg1, arg2, arg2);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, arg1, arg2, arg1);
    t17 = g->edx;
    t18 = rd32(arg1 + 0x24u);
    g->ecx = t18;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t18, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, arg1);
    t19 = g->ecx;
    t20 = rd32(arg1 + 0x28u);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t20, arg2, t18, arg2, 0xefbeddbau, arg2, 0xefbeddbau);
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, t20, arg2, t18, arg2, 0xefbeddbau);
    t23 = g->ecx;
    t24 = g->edx;
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, t20, arg2, t18);
    t25 = g->ecx;
    t26 = g->edx;
    t27 = rd32(arg1 + 0x34u);
    g->edx = t26;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 2, t27, arg2);
    t28 = g->edx;
    t29 = rd32(arg1 + 0x38u);
    g->ecx = t29;
    g->edx = t28;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t29, arg2, t27, arg2, in_edi, in_esi, in_ebp);
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->edx = t31;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, t29, arg2, t27, arg2, in_edi);
    t32 = g->ecx;
    t33 = g->edx;
    g->edx = t33;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, t29, arg2, t27);
    t34 = g->edx;
    t35 = rd32(arg1 + 0x48u);
    if ((int32_t)rd32(arg1 + 0x48u) > (int32_t)rd32(arg1 + 0x44u))
    {
        eax = rd32(arg1 + 0x44u);
        ecx = t35;
        edx = t34;
        ebx = t35;
    }
    else
    {
        eax = rd32(arg1 + 0x44u);
        ecx = t35;
        edx = t34;
        ebx = eax;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 2, eax, arg2);
    t36 = g->ecx;
    t37 = g->edx;
    g->ecx = t36;
    g->edx = t37;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, ebx + 0x10u, arg2, eax, arg2, in_edi, in_esi, in_ebp);
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, ebx + 0x10u, arg2, eax, arg2, in_edi);
    t40 = g->ecx;
    t41 = g->edx;
    g->ecx = t40;
    g->edx = t41;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, ebx + 0x10u, arg2, eax);
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, ebx + 0x10u);
    t44 = g->ecx;
    t45 = rd32(arg1 + 0x58u);
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t45, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau);
    t46 = g->ecx;
    t47 = g->edx;
    t48 = rd32(arg1 + 0x5cu);
    g->ecx = t46;
    g->edx = t47;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t48, arg2, t45, arg2, 0xefbeddbau, arg2, 0xefbeddbau);
    t49 = g->ecx;
    t50 = g->edx;
    g->ecx = t49;
    g->edx = t50;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, t48, arg2, t45, arg2, 0xefbeddbau);
    t51 = g->ecx;
    t52 = g->edx;
    g->edx = t52;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 2, 0xefbeddbau, arg2);
    t53 = g->edx;
    t54 = rd32(arg1 + 0x68u);
    g->ecx = t54;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t54, arg2, 0xefbeddbau, arg2, in_edi, in_esi, in_ebp);
    t55 = g->ecx;
    t56 = rd32(arg1 + 0x6cu);
    g->ecx = t55;
    g->edx = t56;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t56, arg2, t54, arg2, 0xefbeddbau, arg2, in_edi);
    t57 = g->ecx;
    t58 = g->edx;
    g->ecx = t57;
    g->edx = t58;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, t56, arg2, t54, arg2, 0xefbeddbau);
    t59 = g->ecx;
    t60 = g->edx;
    g->ecx = t59;
    g->edx = t60;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, t56, arg2, t54);
    t61 = g->ecx;
    t62 = g->edx;
    g->ecx = t61;
    g->edx = t62;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, t56);
    t63 = g->ecx;
    t64 = g->edx;
    t65 = rd32(arg1 + 0x7cu);
    g->edx = t64;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t65, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau);
    t66 = g->edx;
    t67 = rd32(arg1 + 0x80u);
    g->ecx = t67;
    g->edx = t66;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t67, arg2, t65, arg2, 0xefbeddbau, arg2, 0xefbeddbau);
    t68 = g->ecx;
    t69 = g->edx;
    g->ecx = t68;
    g->edx = t69;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 2, 0xefbeddbau, arg2);
    t70 = g->ecx;
    t71 = g->edx;
    g->ecx = t70;
    g->edx = t71;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, in_edi, in_esi, in_ebp);
    t72 = g->ecx;
    t73 = g->edx;
    g->ecx = t72;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, in_edi);
    t74 = g->ecx;
    t75 = rd32(arg1 + 0x90u);
    g->ecx = t74;
    g->edx = t75;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t75, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau);
    t76 = g->ecx;
    t77 = g->edx;
    t78 = rd32(arg1 + 0x94u);
    g->ecx = t76;
    g->edx = t77;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t78, arg2, t75, arg2, 0xefbeddbau, arg2, 0xefbeddbau);
    t79 = g->ecx;
    t80 = g->edx;
    g->ecx = t79;
    g->edx = t80;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, t78, arg2, t75, arg2, 0xefbeddbau);
    t81 = g->ecx;
    t82 = g->edx;
    g->ecx = t81;
    g->edx = t82;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, t78, arg2, t75);
    t83 = g->ecx;
    t84 = g->edx;
    g->edx = t84;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0xefbeddbau, arg2, 0xefbeddbau, arg2, 0xefbeddbau, arg2, t78);
    t85 = g->edx;
    t86 = rd32(arg1 + 0xa4u);
    g->ecx = t86;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 2, t86, arg2);
    t87 = g->ecx;
    t88 = rd32(arg1 + 0xa8u);
    g->ecx = t87;
    g->edx = t88;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t88, arg2, t86, arg2, in_edi, in_esi, in_ebp);
    t89 = g->ecx;
    t90 = g->edx;
    g->ecx = t89;
    g->esp = sp0 - 0x18u;
    t91 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t90, 1, 3, arg2, t88, arg2);
    t92 = g->ecx;
    t93 = g->edx;
    if (t91 - ebp == 0xacu)
    {
        ecx = t92;
        edx = t93;
        ebx = ebx + 0x10u;
        goto L_10285e8c;
    }
    eax = t91 - ebp;
    return eax & 0xffffff00u;
L_10285e8c: ;
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t94 = cow_call_regs(g, COW_IMG(0x102861e0u), g->eax, g->ecx, edx, 1, 2, arg1, arg2);
    t95 = g->ecx;
    t96 = g->edx;
    if ((uint8_t)t94 != 0u)
    {
        ecx = t95;
        edx = t96;
        goto L_10285e9f;
    }
    eax = t94;
    g->ebx = in_ebx;
    return eax;
L_10285e9f: ;
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t97 = cow_call_regs(g, COW_IMG(0x10286b90u), g->eax, g->ecx, edx, 1, 2, arg1, arg2);
    t98 = g->ecx;
    t99 = g->edx;
    if ((uint8_t)t97 != 0u)
    {
        ecx = t98;
        edx = t99;
        goto L_10285eb2;
    }
    eax = t97;
    g->ebx = in_ebx;
    return eax;
L_10285eb2: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t100 = cow_call_regs(g, COW_IMG(0x10286f00u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, in_edi, in_esi);
    t101 = g->ecx;
    t102 = g->edx;
    if ((uint8_t)t100 != 0u)
    {
        ecx = t101;
        edx = t102;
        goto L_10285ec5;
    }
    eax = t100;
    g->ebx = in_ebx;
    return eax;
L_10285ec5: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t103 = cow_call_regs(g, COW_IMG(0x10287640u), g->eax, g->ecx, edx, 1, 2, arg1, arg2);
    t104 = g->ecx;
    t105 = g->edx;
    if ((uint8_t)t103 != 0u)
    {
        ecx = t104;
        edx = t105;
        goto L_10285ed8;
    }
    eax = t103;
    g->ebx = in_ebx;
    return eax;
L_10285ed8: ;
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t106 = cow_call_regs(g, COW_IMG(0x10287740u), g->eax, g->ecx, edx, 1, 2, arg1, arg2);
    t107 = g->ecx;
    t108 = g->edx;
    if ((uint8_t)t106 != 0u)
    {
        ecx = t107;
        edx = t108;
        goto L_10285eeb;
    }
    eax = t106;
    g->ebx = in_ebx;
    return eax;
L_10285eeb: ;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
    }
    else
    {
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t109 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
        t110 = g->ecx;
        t111 = g->edx;
        g->ebx = ebx;
        t112 = rd32(COW_IMG(0x109a2788u));
        g->esp = sp0 - 0xcu;
        t113 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t111, 1, 5, t112, COW_IMG(0x103b7f0cu), t109, arg2, in_edi);
        eax = t113;
    }
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10285c80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
