/* f_0x102bd9e5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bd9e5(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, in_edx, 1, 5, arg1, 0u, in_edi, in_esi, in_ebx);
    t1 = g->edx;
    ecx = 0u;
    edx = t1;
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
L_102bd9fb: ;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, edx, 1, 3, arg1, sp0 + 4u, 4u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102c3647u), 1, arg1);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, arg1 + 0x11cu);
    wr32(sp0 - 0x30u, arg1);
    g->eax = arg1 + 0x11cu;
    g->ecx = t7;
    g->esp = sp0 - 0x1cu;
    t9 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t8, 1, 5, arg1, arg1 + 0x11cu, 4u, arg1, sp0 + 4u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t4 <= 0x7fffffffu)
    {
        ecx = t10;
        edx = t11;
        edi = t4;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = t4;
        wr32(sp0 - 0x14u, COW_IMG(0x103c7e40u));
        wr32(sp0 - 0x18u, arg1);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7e40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t12 = g->edx;
        ecx = COW_IMG(0x103c7e40u);
        edx = t12;
    }
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e04u));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e04u), 4u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        ecx = t14;
        edx = t15;
        goto L_102bda66;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c49bfu), g->eax, g->ecx, edx, 1, 3, arg1, arg2, edi);
    t16 = g->ecx;
    t17 = g->edx;
    ecx = t16;
    edx = t17;
L_102bddc7: ;
L_102bddca: ;
    if ((rd8(arg1 + 0x68u) & 0x10u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102bd9fb;
    }
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bda66: ;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e14u));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e14u), 4u);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 != 0u)
    {
        ecx = t19;
        edx = t20;
        goto L_102bda8d;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c4c1au), g->eax, g->ecx, edx, 1, 3, arg1, arg2, edi);
    t21 = g->ecx;
    t22 = g->edx;
    ecx = t21;
    edx = t22;
    goto L_102bddc7;
L_102bda8d: ;
    wr32(sp0 - 0x14u, arg1 + 0x11cu);
    wr32(sp0 - 0x18u, arg1);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t23 = cow_cdecl(g, COW_IMG(0x102c3bfau), 2, arg1, arg1 + 0x11cu);
    t24 = g->edx;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    if (t23 == 0u)
    {
        edx = t24;
        goto L_102bdb06;
    }
    edx = t24;
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), arg1 + 0x11cu, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 8u);
    }
    else
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        if (edi != 0u) goto L_102bdac4;
        if ((rd8(arg1 + 0x68u) & 8u) == 0u) goto L_102bdad7;
L_102bdac4: ;
        wr32(sp0 - 0x14u, COW_IMG(0x103c7f40u));
        wr32(sp0 - 0x18u, arg1);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t28 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7f40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t29 = g->edx;
        eax = t28;
        ecx = COW_IMG(0x103c7f40u);
        edx = t29;
    }
L_102bdad7: ;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, arg1, arg2, edi);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x28u, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = t31;
    g->esp = sp0 - 0x1cu;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), t30, 3, arg1 + 0x11cu, COW_IMG(0x10342e1cu), 4u);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 != 0u)
    {
        ecx = t33;
        edx = t34;
    }
    else
    {
        ecx = t33;
        edx = t34;
        wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 2u);
    }
    goto L_102bddca;
L_102bdb06: ;
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), arg1 + 0x11cu, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0u)
    {
        ecx = t36;
        edx = t37;
        goto L_102bdb37;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    if (edi != 0u) goto L_102bdb1c;
    if ((rd8(arg1 + 0x68u) & 8u) == 0u) goto L_102bdb29;
L_102bdb1c: ;
    wr32(sp0 - 0x14u, COW_IMG(0x103c7f40u));
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t38 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7f40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t39 = g->edx;
    eax = t38;
    ecx = COW_IMG(0x103c7f40u);
    edx = t39;
L_102bdb29: ;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, edi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t40 = g->edx;
    ecx = rd32(sp0 - 0x14u);
    edx = t40;
    goto L_102bddca;
L_102bdb37: ;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e1cu), 4u);
    t42 = g->ecx;
    t43 = g->edx;
    if (t41 != 0u)
    {
        ecx = t42;
        edx = t43;
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x10342e24u));
        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
        g->eax = arg1 + 0x11cu;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t46 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e24u), 4u);
        t47 = g->ecx;
        t48 = g->edx;
        if (t46 != 0u)
        {
            ecx = t47;
            edx = t48;
            wr32(sp0 - 0x14u, 4u);
            wr32(sp0 - 0x18u, COW_IMG(0x10342e2cu));
            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
            g->eax = arg1 + 0x11cu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t51 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e2cu), 4u);
            t52 = g->ecx;
            t53 = g->edx;
            if (t51 != 0u)
            {
                ecx = t52;
                edx = t53;
                wr32(sp0 - 0x14u, 4u);
                wr32(sp0 - 0x18u, COW_IMG(0x10342e34u));
                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                g->eax = arg1 + 0x11cu;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t56 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e34u), 4u);
                t57 = g->ecx;
                t58 = g->edx;
                if (t56 != 0u)
                {
                    ecx = t57;
                    edx = t58;
                    wr32(sp0 - 0x14u, 4u);
                    wr32(sp0 - 0x18u, COW_IMG(0x10342e3cu));
                    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                    g->eax = arg1 + 0x11cu;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t61 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e3cu), 4u);
                    t62 = g->ecx;
                    t63 = g->edx;
                    if (t61 != 0u)
                    {
                        ecx = t62;
                        edx = t63;
                        wr32(sp0 - 0x14u, 4u);
                        wr32(sp0 - 0x18u, COW_IMG(0x10342e54u));
                        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                        g->eax = arg1 + 0x11cu;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t66 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e54u), 4u);
                        t67 = g->ecx;
                        t68 = g->edx;
                        if (t66 != 0u)
                        {
                            ecx = t67;
                            edx = t68;
                            wr32(sp0 - 0x14u, 4u);
                            wr32(sp0 - 0x18u, COW_IMG(0x10342e5cu));
                            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                            g->eax = arg1 + 0x11cu;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t71 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e5cu), 4u);
                            t72 = g->ecx;
                            t73 = g->edx;
                            if (t71 != 0u)
                            {
                                ecx = t72;
                                edx = t73;
                                wr32(sp0 - 0x14u, 4u);
                                wr32(sp0 - 0x18u, COW_IMG(0x10342e64u));
                                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                g->eax = arg1 + 0x11cu;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t76 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e64u), 4u);
                                t77 = g->ecx;
                                t78 = g->edx;
                                if (t76 != 0u)
                                {
                                    ecx = t77;
                                    edx = t78;
                                    wr32(sp0 - 0x14u, 4u);
                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e6cu));
                                    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                    g->eax = arg1 + 0x11cu;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x10u;
                                    t81 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e6cu), 4u);
                                    t82 = g->ecx;
                                    t83 = g->edx;
                                    if (t81 != 0u)
                                    {
                                        ecx = t82;
                                        edx = t83;
                                        wr32(sp0 - 0x14u, 4u);
                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e74u));
                                        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                        g->eax = arg1 + 0x11cu;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x10u;
                                        t86 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e74u), 4u);
                                        t87 = g->ecx;
                                        t88 = g->edx;
                                        if (t86 != 0u)
                                        {
                                            ecx = t87;
                                            edx = t88;
                                            wr32(sp0 - 0x14u, 4u);
                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e84u));
                                            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                            g->eax = arg1 + 0x11cu;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x10u;
                                            t91 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e84u), 4u);
                                            t92 = g->ecx;
                                            t93 = g->edx;
                                            if (t91 != 0u)
                                            {
                                                ecx = t92;
                                                edx = t93;
                                                wr32(sp0 - 0x14u, 4u);
                                                wr32(sp0 - 0x18u, COW_IMG(0x10342e44u));
                                                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                g->eax = arg1 + 0x11cu;
                                                g->edx = edx;
                                                g->esp = sp0 - 0x10u;
                                                t96 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e44u), 4u);
                                                t97 = g->ecx;
                                                t98 = g->edx;
                                                if (t96 != 0u)
                                                {
                                                    ecx = t97;
                                                    edx = t98;
                                                    wr32(sp0 - 0x14u, 4u);
                                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e7cu));
                                                    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                    g->eax = arg1 + 0x11cu;
                                                    g->edx = edx;
                                                    g->esp = sp0 - 0x10u;
                                                    t101 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e7cu), 4u);
                                                    t102 = g->ecx;
                                                    t103 = g->edx;
                                                    if (t101 != 0u)
                                                    {
                                                        ecx = t102;
                                                        edx = t103;
                                                        wr32(sp0 - 0x14u, 4u);
                                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e8cu));
                                                        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                        g->eax = arg1 + 0x11cu;
                                                        g->edx = edx;
                                                        g->esp = sp0 - 0x10u;
                                                        t106 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e8cu), 4u);
                                                        t107 = g->ecx;
                                                        t108 = g->edx;
                                                        if (t106 != 0u)
                                                        {
                                                            ecx = t107;
                                                            edx = t108;
                                                            wr32(sp0 - 0x14u, 4u);
                                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e94u));
                                                            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                            g->eax = arg1 + 0x11cu;
                                                            g->edx = edx;
                                                            g->esp = sp0 - 0x10u;
                                                            t111 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e94u), 4u);
                                                            t112 = g->ecx;
                                                            t113 = g->edx;
                                                            if (t111 != 0u)
                                                            {
                                                                ecx = t112;
                                                                edx = t113;
                                                                wr32(sp0 - 0x14u, 4u);
                                                                wr32(sp0 - 0x18u, COW_IMG(0x10342e9cu));
                                                                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                                g->eax = arg1 + 0x11cu;
                                                                g->edx = edx;
                                                                g->esp = sp0 - 0x10u;
                                                                t116 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e9cu), 4u);
                                                                t117 = g->ecx;
                                                                t118 = g->edx;
                                                                if (t116 != 0u)
                                                                {
                                                                    ecx = t117;
                                                                    edx = t118;
                                                                    wr32(sp0 - 0x14u, 4u);
                                                                    wr32(sp0 - 0x18u, COW_IMG(0x10342ea4u));
                                                                    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                                    g->eax = arg1 + 0x11cu;
                                                                    g->edx = edx;
                                                                    g->esp = sp0 - 0x10u;
                                                                    t121 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342ea4u), 4u);
                                                                    t122 = g->ecx;
                                                                    t123 = g->edx;
                                                                    wr32(sp0 - 0x14u, edi);
                                                                    wr32(sp0 - 0x18u, arg2);
                                                                    wr32(sp0 - 0x1cu, arg1);
                                                                    if (t121 != 0u)
                                                                    {
                                                                        eax = t121;
                                                                        ecx = t122;
                                                                        edx = t123;
                                                                        loc_14 = edi;
                                                                        g->ebx = arg2;
                                                                        g->esp = sp0 - 0x10u;
                                                                        cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
                                                                        t126 = g->ecx;
                                                                        t127 = g->edx;
                                                                        ecx = t126;
                                                                        edx = t127;
                                                                    }
                                                                    else
                                                                    {
                                                                        eax = t121;
                                                                        ecx = t122;
                                                                        edx = t123;
                                                                        loc_14 = edi;
                                                                        g->esp = sp0 - 0x10u;
                                                                        cow_call_regs(g, COW_IMG(0x102c6136u), g->eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
                                                                        t124 = g->ecx;
                                                                        t125 = g->edx;
                                                                        ecx = t124;
                                                                        edx = t125;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    eax = t116;
                                                                    ecx = t117;
                                                                    edx = t118;
                                                                    wr32(sp0 - 0x14u, edi);
                                                                    wr32(sp0 - 0x18u, arg2);
                                                                    wr32(sp0 - 0x1cu, arg1);
                                                                    g->ecx = ecx;
                                                                    g->esp = sp0 - 0xcu;
                                                                    cow_call_regs(g, COW_IMG(0x102c5728u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
                                                                    t119 = g->ecx;
                                                                    t120 = g->edx;
                                                                    ecx = t119;
                                                                    edx = t120;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                eax = t111;
                                                                ecx = t112;
                                                                edx = t113;
                                                                wr32(sp0 - 0x14u, edi);
                                                                wr32(sp0 - 0x18u, arg2);
                                                                wr32(sp0 - 0x1cu, arg1);
                                                                g->ecx = ecx;
                                                                g->esp = sp0 - 0xcu;
                                                                cow_call_regs(g, COW_IMG(0x102c5f85u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
                                                                t114 = g->ecx;
                                                                t115 = g->edx;
                                                                ecx = t114;
                                                                edx = t115;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            eax = t106;
                                                            ecx = t107;
                                                            edx = t108;
                                                            wr32(sp0 - 0x14u, edi);
                                                            wr32(sp0 - 0x18u, arg2);
                                                            wr32(sp0 - 0x1cu, arg1);
                                                            g->esp = sp0 - 0x10u;
                                                            cow_call_regs(g, COW_IMG(0x102c6037u), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
                                                            t109 = g->ecx;
                                                            t110 = g->edx;
                                                            ecx = t109;
                                                            edx = t110;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        eax = t101;
                                                        ecx = t102;
                                                        edx = t103;
                                                        wr32(sp0 - 0x14u, edi);
                                                        wr32(sp0 - 0x18u, arg2);
                                                        wr32(sp0 - 0x1cu, arg1);
                                                        g->esp = sp0 - 0x10u;
                                                        cow_call_regs(g, COW_IMG(0x102c558au), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
                                                        t104 = g->ecx;
                                                        t105 = g->edx;
                                                        ecx = t104;
                                                        edx = t105;
                                                    }
                                                }
                                                else
                                                {
                                                    eax = t96;
                                                    ecx = t97;
                                                    edx = t98;
                                                    wr32(sp0 - 0x14u, edi);
                                                    wr32(sp0 - 0x18u, arg2);
                                                    wr32(sp0 - 0x1cu, arg1);
                                                    g->esp = sp0 - 0x10u;
                                                    cow_call_regs(g, COW_IMG(0x102c5423u), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
                                                    t99 = g->ecx;
                                                    t100 = g->edx;
                                                    ecx = t99;
                                                    edx = t100;
                                                }
                                            }
                                            else
                                            {
                                                eax = t91;
                                                ecx = t92;
                                                edx = t93;
                                                wr32(sp0 - 0x14u, edi);
                                                wr32(sp0 - 0x18u, arg2);
                                                wr32(sp0 - 0x1cu, arg1);
                                                g->ecx = ecx;
                                                g->esp = sp0 - 0xcu;
                                                cow_call_regs(g, COW_IMG(0x102c5254u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
                                                t94 = g->ecx;
                                                t95 = g->edx;
                                                ecx = t94;
                                                edx = t95;
                                            }
                                        }
                                        else
                                        {
                                            eax = t86;
                                            ecx = t87;
                                            edx = t88;
                                            wr32(sp0 - 0x14u, edi);
                                            wr32(sp0 - 0x18u, arg2);
                                            wr32(sp0 - 0x1cu, arg1);
                                            g->esp = sp0 - 0xcu;
                                            cow_call_regs(g, COW_IMG(0x102c4d70u), g->eax, ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
                                            t89 = g->ecx;
                                            t90 = g->edx;
                                            ecx = t89;
                                            edx = t90;
                                        }
                                    }
                                    else
                                    {
                                        eax = t81;
                                        ecx = t82;
                                        edx = t83;
                                        wr32(sp0 - 0x14u, edi);
                                        wr32(sp0 - 0x18u, arg2);
                                        wr32(sp0 - 0x1cu, arg1);
                                        g->ecx = ecx;
                                        g->esp = sp0 - 0xcu;
                                        cow_call_regs(g, COW_IMG(0x102c5b02u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
                                        t84 = g->ecx;
                                        t85 = g->edx;
                                        ecx = t84;
                                        edx = t85;
                                    }
                                }
                                else
                                {
                                    eax = t76;
                                    ecx = t77;
                                    edx = t78;
                                    wr32(sp0 - 0x14u, edi);
                                    wr32(sp0 - 0x18u, arg2);
                                    wr32(sp0 - 0x1cu, arg1);
                                    g->esp = sp0 - 0x10u;
                                    cow_call_regs(g, COW_IMG(0x102c5e30u), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
                                    t79 = g->ecx;
                                    t80 = g->edx;
                                    ecx = t79;
                                    edx = t80;
                                }
                            }
                            else
                            {
                                eax = t71;
                                ecx = t72;
                                edx = t73;
                                wr32(sp0 - 0x14u, edi);
                                wr32(sp0 - 0x18u, arg2);
                                wr32(sp0 - 0x1cu, arg1);
                                g->esp = sp0 - 0x10u;
                                cow_call_regs(g, COW_IMG(0x102c5c44u), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
                                t74 = g->ecx;
                                t75 = g->edx;
                                ecx = t74;
                                edx = t75;
                            }
                        }
                        else
                        {
                            eax = t66;
                            ecx = t67;
                            edx = t68;
                            wr32(sp0 - 0x14u, edi);
                            wr32(sp0 - 0x18u, arg2);
                            wr32(sp0 - 0x1cu, arg1);
                            g->ecx = ecx;
                            g->esp = sp0 - 0xcu;
                            cow_call_regs(g, COW_IMG(0x102c5ba3u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
                            t69 = g->ecx;
                            t70 = g->edx;
                            ecx = t69;
                            edx = t70;
                        }
                    }
                    else
                    {
                        eax = t61;
                        ecx = t62;
                        edx = t63;
                        wr32(sp0 - 0x14u, edi);
                        wr32(sp0 - 0x18u, arg2);
                        wr32(sp0 - 0x1cu, arg1);
                        g->ecx = ecx;
                        g->esp = sp0 - 0x10u;
                        cow_call_regs(g, COW_IMG(0x102c5a36u), g->eax, g->ecx, edx, 1, 3, arg1, arg2, edi);
                        t64 = g->ecx;
                        t65 = g->edx;
                        ecx = t64;
                        edx = t65;
                    }
                }
                else
                {
                    eax = t56;
                    ecx = t57;
                    edx = t58;
                    wr32(sp0 - 0x14u, edi);
                    wr32(sp0 - 0x18u, arg2);
                    wr32(sp0 - 0x1cu, arg1);
                    g->ecx = ecx;
                    g->esp = sp0 - 0xcu;
                    cow_call_regs(g, COW_IMG(0x102c4c5du), g->eax, g->ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
                    t59 = g->ecx;
                    t60 = g->edx;
                    ecx = t59;
                    edx = t60;
                }
            }
            else
            {
                eax = t51;
                ecx = t52;
                edx = t53;
                wr32(sp0 - 0x14u, edi);
                wr32(sp0 - 0x18u, arg2);
                wr32(sp0 - 0x1cu, arg1);
                g->ecx = ecx;
                g->esp = sp0 - 0x10u;
                cow_call_regs(g, COW_IMG(0x102c4e6eu), g->eax, g->ecx, edx, 1, 3, arg1, arg2, edi);
                t54 = g->ecx;
                t55 = g->edx;
                ecx = t54;
                edx = t55;
            }
        }
        else
        {
            eax = t46;
            ecx = t47;
            edx = t48;
            wr32(sp0 - 0x14u, edi);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1);
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x102c58bdu), g->eax, ecx, edx, 1, 4, arg1, arg2, edi, rd32(sp0 - 0x10u));
            t49 = g->ecx;
            t50 = g->edx;
            ecx = t49;
            edx = t50;
        }
    }
    else
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        wr32(sp0 - 0x14u, edi);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x102c4adbu), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
        t44 = g->ecx;
        t45 = g->edx;
        ecx = t44;
        edx = t45;
    }
    goto L_102bddc7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bd9e5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bd9e5(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
