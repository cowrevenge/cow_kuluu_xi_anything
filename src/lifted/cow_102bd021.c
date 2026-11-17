/* f_0x102bd021 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bd021(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
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
    if (rd8(arg1 + 0x12cu) >= 8u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0x12cu);
        wr32(sp0 - 0x14u, 8u);
        t1 = 8u - (uint8_t)eax;
        wr32(sp0 - 0x14u, t1);
        t2 = arg2 + (uint8_t)eax + 0x20u;
        wr32(sp0 - 0x18u, t2);
        wr32(sp0 - 0x1cu, arg1);
        g->ecx = self;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, in_edx, 1, 3, arg1, t2, t1);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x20u, t1);
        wr32(sp0 - 0x24u, (uint8_t)eax);
        wr32(sp0 - 0x28u, arg2 + 0x20u);
        wr8(arg1 + 0x12cu, 8u);
        g->eax = arg2 + 0x20u;
        g->edx = t4;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall_cdecl(g, COW_IMG(0x102c354eu), t3, 5, arg2 + 0x20u, (uint8_t)eax, t1, arg1, rd32(sp0 - 0x18u));
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 == 0u)
        {
            ecx = t6;
            edx = t7;
            ebx = (uint8_t)eax;
        }
        else
        {
            ecx = t6;
            edx = t7;
            ebx = (uint8_t)eax;
            eax = t5;
            edi = t1;
            if (ebx >= 4u) goto L_102bd08b;
            wr32(sp0 - 0x14u, edi - 4u);
            wr32(sp0 - 0x18u, ebx);
            wr32(sp0 - 0x1cu, arg2 + 0x20u);
            g->eax = arg2 + 0x20u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t8 = cow_thiscall_cdecl(g, COW_IMG(0x102c354eu), ecx, 5, arg2 + 0x20u, ebx, edi - 4u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t9 = g->ecx;
            t10 = g->edx;
            if (t8 == 0u)
            {
                eax = t8;
                ecx = t9;
                edx = t10;
                goto L_102bd08b;
            }
            eax = t8;
            ecx = t9;
            edx = t10;
            wr32(sp0 - 0x14u, COW_IMG(0x103c7e80u));
            loc_14 = COW_IMG(0x103c7e80u);
L_102bd090: ;
            wr32(sp0 - 0x18u, arg1);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t11 = g->edx;
            ecx = rd32(sp0 - 0x14u);
            edx = t11;
        }
        if (ebx >= 3u)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
            wr8(arg1 + 0x69u, rd8(arg1 + 0x69u) | 0x10u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
L_102bd0a1: ;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, edx, 1, 3, arg1, sp0 + 4u, 4u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x1cu;
    t14 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102c3647u), 1, arg1);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, arg1 + 0x11cu);
    wr32(sp0 - 0x30u, arg1);
    g->eax = arg1 + 0x11cu;
    g->ecx = t17;
    g->esp = sp0 - 0x1cu;
    t19 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t18, 1, 5, arg1, arg1 + 0x11cu, 4u, arg1, sp0 + 4u);
    t20 = g->ecx;
    t21 = g->edx;
    if (t14 <= 0x7fffffffu)
    {
        ecx = t20;
        edx = t21;
        ebx = t14;
    }
    else
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        ebx = t14;
        wr32(sp0 - 0x14u, COW_IMG(0x103c7e40u));
        wr32(sp0 - 0x18u, arg1);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7e40u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t22 = g->edx;
        ecx = COW_IMG(0x103c7e40u);
        edx = t22;
    }
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e04u));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e04u), 4u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        ecx = t24;
        edx = t25;
        goto L_102bd10e;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c49bfu), g->eax, g->ecx, edx, 1, 3, arg1, arg2, ebx);
    t26 = g->ecx;
    t27 = g->edx;
    ecx = t26;
    edx = t27;
L_102bd475: ;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102bd0a1;
L_102bd08b: ;
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e58u));
    loc_14 = COW_IMG(0x103c7e58u);
    goto L_102bd090;
L_102bd10e: ;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e14u));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e14u), 4u);
    t29 = g->ecx;
    t30 = g->edx;
    if (t28 != 0u)
    {
        ecx = t29;
        edx = t30;
        goto L_102bd136;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c4c1au), g->eax, g->ecx, edx, 1, 3, arg1, arg2, ebx);
    t31 = g->ecx;
    t32 = g->edx;
    ecx = t31;
    edx = t32;
    goto L_102bd475;
L_102bd136: ;
    wr32(sp0 - 0x14u, arg1 + 0x11cu);
    wr32(sp0 - 0x18u, arg1);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_cdecl(g, COW_IMG(0x102c3bfau), 2, arg1, arg1 + 0x11cu);
    t34 = g->edx;
    wr32(sp0 - 0x14u, 4u);
    if (t33 == 0u)
    {
        edx = t34;
        goto L_102bd1c5;
    }
    edx = t34;
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), arg1 + 0x11cu, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
    }
    else
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 4u);
    }
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    t38 = cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, arg1, arg2, ebx);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x28u, arg1 + 0x11cu);
    g->edx = t40;
    g->esp = sp0 - 0x1cu;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), t39, 3, arg1 + 0x11cu, COW_IMG(0x10342e1cu), 4u);
    t42 = g->ecx;
    t43 = g->edx;
    if (t41 != 0u)
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        goto L_102bd191;
    }
    ecx = t42;
    edx = t43;
    wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 2u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102bd0a1;
L_102bd191: ;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 != 0u)
    {
        ecx = t45;
        edx = t46;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102bd0a1;
    }
    ecx = t45;
    edx = t46;
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102bd484;
    }
    eax = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e24u));
    loc_14 = COW_IMG(0x103c7e24u);
L_102bd1b8: ;
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
L_102bd4cc: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bd1c5: ;
    wr32(sp0 - 0x18u, COW_IMG(0x10342e1cu));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), arg1 + 0x11cu, 3, arg1 + 0x11cu, COW_IMG(0x10342e1cu), 4u);
    t48 = g->ecx;
    t49 = g->edx;
    if (t47 != 0u)
    {
        ecx = t48;
        edx = t49;
        goto L_102bd1e6;
    }
    eax = t47;
    ecx = t48;
    edx = t49;
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102c4adbu), g->eax, ecx, edx, 1, 3, arg1, arg2, ebx);
    t50 = g->ecx;
    t51 = g->edx;
    ecx = t50;
    edx = t51;
    goto L_102bd475;
L_102bd1e6: ;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e0cu));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t52 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
    t53 = g->ecx;
    t54 = g->edx;
    if (t52 == 0u)
    {
        ecx = t53;
        edx = t54;
        goto L_102bd49b;
    }
    ecx = t53;
    edx = t54;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, COW_IMG(0x10342e24u));
    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
    g->eax = arg1 + 0x11cu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t55 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e24u), 4u);
    t56 = g->ecx;
    t57 = g->edx;
    if (t55 != 0u)
    {
        ecx = t56;
        edx = t57;
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x10342e2cu));
        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
        g->eax = arg1 + 0x11cu;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t60 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e2cu), 4u);
        t61 = g->ecx;
        t62 = g->edx;
        if (t60 != 0u)
        {
            ecx = t61;
            edx = t62;
            wr32(sp0 - 0x14u, 4u);
            wr32(sp0 - 0x18u, COW_IMG(0x10342e34u));
            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
            g->eax = arg1 + 0x11cu;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t65 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e34u), 4u);
            t66 = g->ecx;
            t67 = g->edx;
            if (t65 != 0u)
            {
                ecx = t66;
                edx = t67;
                wr32(sp0 - 0x14u, 4u);
                wr32(sp0 - 0x18u, COW_IMG(0x10342e3cu));
                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                g->eax = arg1 + 0x11cu;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t70 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e3cu), 4u);
                t71 = g->ecx;
                t72 = g->edx;
                if (t70 != 0u)
                {
                    ecx = t71;
                    edx = t72;
                    wr32(sp0 - 0x14u, 4u);
                    wr32(sp0 - 0x18u, COW_IMG(0x10342e54u));
                    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                    g->eax = arg1 + 0x11cu;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t75 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e54u), 4u);
                    t76 = g->ecx;
                    t77 = g->edx;
                    if (t75 != 0u)
                    {
                        ecx = t76;
                        edx = t77;
                        wr32(sp0 - 0x14u, 4u);
                        wr32(sp0 - 0x18u, COW_IMG(0x10342e5cu));
                        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                        g->eax = arg1 + 0x11cu;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t80 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e5cu), 4u);
                        t81 = g->ecx;
                        t82 = g->edx;
                        if (t80 != 0u)
                        {
                            ecx = t81;
                            edx = t82;
                            wr32(sp0 - 0x14u, 4u);
                            wr32(sp0 - 0x18u, COW_IMG(0x10342e64u));
                            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                            g->eax = arg1 + 0x11cu;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t85 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e64u), 4u);
                            t86 = g->ecx;
                            t87 = g->edx;
                            if (t85 != 0u)
                            {
                                ecx = t86;
                                edx = t87;
                                wr32(sp0 - 0x14u, 4u);
                                wr32(sp0 - 0x18u, COW_IMG(0x10342e6cu));
                                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                g->eax = arg1 + 0x11cu;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t90 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e6cu), 4u);
                                t91 = g->ecx;
                                t92 = g->edx;
                                if (t90 != 0u)
                                {
                                    ecx = t91;
                                    edx = t92;
                                    wr32(sp0 - 0x14u, 4u);
                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e74u));
                                    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                    g->eax = arg1 + 0x11cu;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x10u;
                                    t95 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e74u), 4u);
                                    t96 = g->ecx;
                                    t97 = g->edx;
                                    if (t95 != 0u)
                                    {
                                        ecx = t96;
                                        edx = t97;
                                        wr32(sp0 - 0x14u, 4u);
                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e84u));
                                        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                        g->eax = arg1 + 0x11cu;
                                        g->edx = edx;
                                        g->esp = sp0 - 0x10u;
                                        t100 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e84u), 4u);
                                        t101 = g->ecx;
                                        t102 = g->edx;
                                        if (t100 != 0u)
                                        {
                                            ecx = t101;
                                            edx = t102;
                                            wr32(sp0 - 0x14u, 4u);
                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e44u));
                                            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                            g->eax = arg1 + 0x11cu;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x10u;
                                            t105 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e44u), 4u);
                                            t106 = g->ecx;
                                            t107 = g->edx;
                                            if (t105 != 0u)
                                            {
                                                ecx = t106;
                                                edx = t107;
                                                wr32(sp0 - 0x14u, 4u);
                                                wr32(sp0 - 0x18u, COW_IMG(0x10342e7cu));
                                                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                g->eax = arg1 + 0x11cu;
                                                g->edx = edx;
                                                g->esp = sp0 - 0x10u;
                                                t110 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e7cu), 4u);
                                                t111 = g->ecx;
                                                t112 = g->edx;
                                                if (t110 != 0u)
                                                {
                                                    ecx = t111;
                                                    edx = t112;
                                                    wr32(sp0 - 0x14u, 4u);
                                                    wr32(sp0 - 0x18u, COW_IMG(0x10342e8cu));
                                                    wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                    g->eax = arg1 + 0x11cu;
                                                    g->edx = edx;
                                                    g->esp = sp0 - 0x10u;
                                                    t115 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e8cu), 4u);
                                                    t116 = g->ecx;
                                                    t117 = g->edx;
                                                    if (t115 != 0u)
                                                    {
                                                        ecx = t116;
                                                        edx = t117;
                                                        wr32(sp0 - 0x14u, 4u);
                                                        wr32(sp0 - 0x18u, COW_IMG(0x10342e94u));
                                                        wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                        g->eax = arg1 + 0x11cu;
                                                        g->edx = edx;
                                                        g->esp = sp0 - 0x10u;
                                                        t120 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e94u), 4u);
                                                        t121 = g->ecx;
                                                        t122 = g->edx;
                                                        if (t120 != 0u)
                                                        {
                                                            ecx = t121;
                                                            edx = t122;
                                                            wr32(sp0 - 0x14u, 4u);
                                                            wr32(sp0 - 0x18u, COW_IMG(0x10342e9cu));
                                                            wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                            g->eax = arg1 + 0x11cu;
                                                            g->edx = edx;
                                                            g->esp = sp0 - 0x10u;
                                                            t125 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342e9cu), 4u);
                                                            t126 = g->ecx;
                                                            t127 = g->edx;
                                                            if (t125 != 0u)
                                                            {
                                                                ecx = t126;
                                                                edx = t127;
                                                                wr32(sp0 - 0x14u, 4u);
                                                                wr32(sp0 - 0x18u, COW_IMG(0x10342ea4u));
                                                                wr32(sp0 - 0x1cu, arg1 + 0x11cu);
                                                                g->eax = arg1 + 0x11cu;
                                                                g->edx = edx;
                                                                g->esp = sp0 - 0x10u;
                                                                t130 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg1 + 0x11cu, COW_IMG(0x10342ea4u), 4u);
                                                                t131 = g->ecx;
                                                                t132 = g->edx;
                                                                wr32(sp0 - 0x14u, ebx);
                                                                wr32(sp0 - 0x18u, arg2);
                                                                wr32(sp0 - 0x1cu, arg1);
                                                                if (t130 != 0u)
                                                                {
                                                                    eax = t130;
                                                                    ecx = t131;
                                                                    edx = t132;
                                                                    loc_14 = ebx;
                                                                    g->ebx = ebx;
                                                                    g->esp = sp0 - 0x10u;
                                                                    cow_call_regs(g, COW_IMG(0x102c627du), eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
                                                                    t135 = g->ecx;
                                                                    t136 = g->edx;
                                                                    ecx = t135;
                                                                    edx = t136;
                                                                }
                                                                else
                                                                {
                                                                    eax = t130;
                                                                    ecx = t131;
                                                                    edx = t132;
                                                                    loc_14 = ebx;
                                                                    g->esp = sp0 - 0x10u;
                                                                    cow_call_regs(g, COW_IMG(0x102c6136u), g->eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
                                                                    t133 = g->ecx;
                                                                    t134 = g->edx;
                                                                    ecx = t133;
                                                                    edx = t134;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                eax = t125;
                                                                ecx = t126;
                                                                edx = t127;
                                                                wr32(sp0 - 0x14u, ebx);
                                                                wr32(sp0 - 0x18u, arg2);
                                                                wr32(sp0 - 0x1cu, arg1);
                                                                g->ecx = ecx;
                                                                g->esp = sp0 - 0xcu;
                                                                cow_call_regs(g, COW_IMG(0x102c5728u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
                                                                t128 = g->ecx;
                                                                t129 = g->edx;
                                                                ecx = t128;
                                                                edx = t129;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            eax = t120;
                                                            ecx = t121;
                                                            edx = t122;
                                                            wr32(sp0 - 0x14u, ebx);
                                                            wr32(sp0 - 0x18u, arg2);
                                                            wr32(sp0 - 0x1cu, arg1);
                                                            g->ecx = ecx;
                                                            g->esp = sp0 - 0xcu;
                                                            cow_call_regs(g, COW_IMG(0x102c5f85u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
                                                            t123 = g->ecx;
                                                            t124 = g->edx;
                                                            ecx = t123;
                                                            edx = t124;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        eax = t115;
                                                        ecx = t116;
                                                        edx = t117;
                                                        wr32(sp0 - 0x14u, ebx);
                                                        wr32(sp0 - 0x18u, arg2);
                                                        wr32(sp0 - 0x1cu, arg1);
                                                        g->esp = sp0 - 0x10u;
                                                        cow_call_regs(g, COW_IMG(0x102c6037u), g->eax, ecx, edx, 1, 3, arg1, arg2, ebx);
                                                        t118 = g->ecx;
                                                        t119 = g->edx;
                                                        ecx = t118;
                                                        edx = t119;
                                                    }
                                                }
                                                else
                                                {
                                                    eax = t110;
                                                    ecx = t111;
                                                    edx = t112;
                                                    wr32(sp0 - 0x14u, ebx);
                                                    wr32(sp0 - 0x18u, arg2);
                                                    wr32(sp0 - 0x1cu, arg1);
                                                    g->esp = sp0 - 0x10u;
                                                    cow_call_regs(g, COW_IMG(0x102c558au), g->eax, ecx, edx, 1, 3, arg1, arg2, ebx);
                                                    t113 = g->ecx;
                                                    t114 = g->edx;
                                                    ecx = t113;
                                                    edx = t114;
                                                }
                                            }
                                            else
                                            {
                                                eax = t105;
                                                ecx = t106;
                                                edx = t107;
                                                wr32(sp0 - 0x14u, ebx);
                                                wr32(sp0 - 0x18u, arg2);
                                                wr32(sp0 - 0x1cu, arg1);
                                                g->esp = sp0 - 0x10u;
                                                cow_call_regs(g, COW_IMG(0x102c5423u), g->eax, ecx, edx, 1, 3, arg1, arg2, ebx);
                                                t108 = g->ecx;
                                                t109 = g->edx;
                                                ecx = t108;
                                                edx = t109;
                                            }
                                        }
                                        else
                                        {
                                            eax = t100;
                                            ecx = t101;
                                            edx = t102;
                                            wr32(sp0 - 0x14u, ebx);
                                            wr32(sp0 - 0x18u, arg2);
                                            wr32(sp0 - 0x1cu, arg1);
                                            g->ecx = ecx;
                                            g->esp = sp0 - 0xcu;
                                            cow_call_regs(g, COW_IMG(0x102c5254u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
                                            t103 = g->ecx;
                                            t104 = g->edx;
                                            ecx = t103;
                                            edx = t104;
                                        }
                                    }
                                    else
                                    {
                                        eax = t95;
                                        ecx = t96;
                                        edx = t97;
                                        wr32(sp0 - 0x14u, ebx);
                                        wr32(sp0 - 0x18u, arg2);
                                        wr32(sp0 - 0x1cu, arg1);
                                        g->esp = sp0 - 0xcu;
                                        cow_call_regs(g, COW_IMG(0x102c4d70u), g->eax, ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
                                        t98 = g->ecx;
                                        t99 = g->edx;
                                        ecx = t98;
                                        edx = t99;
                                    }
                                }
                                else
                                {
                                    eax = t90;
                                    ecx = t91;
                                    edx = t92;
                                    wr32(sp0 - 0x14u, ebx);
                                    wr32(sp0 - 0x18u, arg2);
                                    wr32(sp0 - 0x1cu, arg1);
                                    g->ecx = ecx;
                                    g->esp = sp0 - 0xcu;
                                    cow_call_regs(g, COW_IMG(0x102c5b02u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
                                    t93 = g->ecx;
                                    t94 = g->edx;
                                    ecx = t93;
                                    edx = t94;
                                }
                            }
                            else
                            {
                                eax = t85;
                                ecx = t86;
                                edx = t87;
                                wr32(sp0 - 0x14u, ebx);
                                wr32(sp0 - 0x18u, arg2);
                                wr32(sp0 - 0x1cu, arg1);
                                g->esp = sp0 - 0x10u;
                                cow_call_regs(g, COW_IMG(0x102c5e30u), g->eax, ecx, edx, 1, 3, arg1, arg2, ebx);
                                t88 = g->ecx;
                                t89 = g->edx;
                                ecx = t88;
                                edx = t89;
                            }
                        }
                        else
                        {
                            eax = t80;
                            ecx = t81;
                            edx = t82;
                            wr32(sp0 - 0x14u, ebx);
                            wr32(sp0 - 0x18u, arg2);
                            wr32(sp0 - 0x1cu, arg1);
                            g->esp = sp0 - 0x10u;
                            cow_call_regs(g, COW_IMG(0x102c5c44u), g->eax, ecx, edx, 1, 3, arg1, arg2, ebx);
                            t83 = g->ecx;
                            t84 = g->edx;
                            ecx = t83;
                            edx = t84;
                        }
                    }
                    else
                    {
                        eax = t75;
                        ecx = t76;
                        edx = t77;
                        wr32(sp0 - 0x14u, ebx);
                        wr32(sp0 - 0x18u, arg2);
                        wr32(sp0 - 0x1cu, arg1);
                        g->ecx = ecx;
                        g->esp = sp0 - 0xcu;
                        cow_call_regs(g, COW_IMG(0x102c5ba3u), g->eax, g->ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
                        t78 = g->ecx;
                        t79 = g->edx;
                        ecx = t78;
                        edx = t79;
                    }
                }
                else
                {
                    eax = t70;
                    ecx = t71;
                    edx = t72;
                    wr32(sp0 - 0x14u, ebx);
                    wr32(sp0 - 0x18u, arg2);
                    wr32(sp0 - 0x1cu, arg1);
                    g->ecx = ecx;
                    g->esp = sp0 - 0x10u;
                    cow_call_regs(g, COW_IMG(0x102c5a36u), g->eax, g->ecx, edx, 1, 3, arg1, arg2, ebx);
                    t73 = g->ecx;
                    t74 = g->edx;
                    ecx = t73;
                    edx = t74;
                }
            }
            else
            {
                eax = t65;
                ecx = t66;
                edx = t67;
                wr32(sp0 - 0x14u, ebx);
                wr32(sp0 - 0x18u, arg2);
                wr32(sp0 - 0x1cu, arg1);
                g->ecx = ecx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x102c4c5du), g->eax, g->ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
                t68 = g->ecx;
                t69 = g->edx;
                ecx = t68;
                edx = t69;
            }
        }
        else
        {
            eax = t60;
            ecx = t61;
            edx = t62;
            wr32(sp0 - 0x14u, ebx);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1);
            g->ecx = ecx;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x102c4e6eu), g->eax, g->ecx, edx, 1, 3, arg1, arg2, ebx);
            t63 = g->ecx;
            t64 = g->edx;
            ecx = t63;
            edx = t64;
        }
    }
    else
    {
        eax = t55;
        ecx = t56;
        edx = t57;
        wr32(sp0 - 0x14u, ebx);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102c58bdu), g->eax, ecx, edx, 1, 4, arg1, arg2, ebx, rd32(sp0 - 0x10u));
        t58 = g->ecx;
        t59 = g->edx;
        ecx = t58;
        edx = t59;
    }
    goto L_102bd475;
L_102bd484: ;
    if (rd8(arg1 + 0x126u) != 3u) goto L_102bd4cc;
    if ((eax & 2u) != 0u) goto L_102bd4cc;
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e08u));
    loc_14 = COW_IMG(0x103c7e08u);
    goto L_102bd1b8;
L_102bd49b: ;
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102bd4a9;
    }
    eax = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e24u));
    loc_14 = COW_IMG(0x103c7e24u);
L_102bd4bb: ;
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
L_102bd4c3: ;
    wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 4u);
    wr32(arg1 + 0x10cu, ebx);
    goto L_102bd4cc;
L_102bd4a9: ;
    if (rd8(arg1 + 0x126u) != 3u) goto L_102bd4c3;
    if ((eax & 2u) != 0u) goto L_102bd4c3;
    wr32(sp0 - 0x14u, COW_IMG(0x103c7e08u));
    loc_14 = COW_IMG(0x103c7e08u);
    goto L_102bd4bb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bd021(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bd021(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
