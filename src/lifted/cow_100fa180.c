/* f_0x100fa180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100fa180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10c;
    int64_t q78;
    int64_t q79;
    int64_t q85;
    int64_t q90;
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
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 300u);

    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x118u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (arg1 == 0u)
    {
        eax = t1;
        goto L_100fa489;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    edi = t1;
    wr32(COW_IMG(0x104dfd98u), arg1);
    if (rd8(arg1 + 0xcu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0xcu);
        goto L_100fa1ba;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0xcu);
    return (eax & 0xffffff00u) | 1u;
L_100fa1ba: ;
    if ((uint8_t)eax != 4u) goto L_100fa1ca;
    return eax & 0xffffff00u;
L_100fa1ca: ;
    wr32(COW_IMG(0x104dfd98u), arg1);
    wr32(sp0 - 0x11cu, sp0 - 0x108u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t4 = cow_cdecl(g, COW_IMG(0x100f91c0u), 3, sp0 - 0x108u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(arg1 + 0xcu) != 3u)
    {
        eax = (t4 & 0xffffff00u) | rd8(arg1 + 0xcu);
        ecx = t5;
        edx = t6;
        goto L_100fa22f;
    }
    if (rd32(arg1 + 0x4188u) + rd32(arg1 + 0x41b0u) <= edi)
    {
        eax = rd32(arg1 + 0x4188u) + rd32(arg1 + 0x41b0u);
        ecx = rd32(arg1 + 0x41b0u);
        edx = rd32(arg1 + 0x4188u);
        eax = -(0x7fffffffu < edi - edx - ecx) + 1u;
        edx = 0x7fffffffu;
    }
    else
    {
        eax = rd32(arg1 + 0x4188u) + rd32(arg1 + 0x41b0u);
        edx = rd32(arg1 + 0x4188u);
        eax = 0x7fffffffu < eax - edi;
        ecx = 0x7fffffffu;
    }
    if (eax == 0u) goto L_100fa22f;
    wr32(sp0 - 0x11cu, 0xfa1u);
    wr8(arg1 + 0xcu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t7 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa1u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    loc_10c = rd32(sp0 - 0x10cu) & 0xff00ffffu;
L_100fa2a9: ;
    if (rd8(arg1 + 0xcu) == 3u)
    {
        if (rd32(arg1 + 0x418cu) == rd32(arg1 + 0x4188u))
        {
            ecx = rd32(arg1 + 0x418cu);
            goto L_100fa308;
        }
        ecx = rd32(arg1 + 0x418cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t59 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t60 = g->ecx;
        t61 = g->edx;
        if (rd32(arg1 + 0x418cu) <= t59)
        {
            ecx = t60;
            edx = t61;
            g->esp = sp0 - 0x118u;
            t65 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
            t66 = rd32(arg1 + 0x4188u);
            t67 = rd32(arg1 + 0x418cu);
            wr32(arg1 + 0x418cu, t66);
            eax = t67;
            ecx = t65;
            edx = t66;
        }
        else
        {
            ecx = t60;
            edx = t61;
            g->esp = sp0 - 0x118u;
            t62 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
            t63 = rd32(arg1 + 0x4188u);
            t64 = rd32(arg1 + 0x418cu);
            wr32(arg1 + 0x418cu, t63);
            eax = t62;
            ecx = t64;
            edx = t63;
        }
L_100fa342: ;
        wr32(arg1 + 0x4190u, ecx - eax);
    }
L_100fa34a: ;
    q78 = (uint64_t)cow_mulu(0x51eb851fu, rd32(arg1 + 0x4190u));
    if (cow_qhi(q78) >> 5u < 0x64u)
    {
        ecx = rd32(COW_IMG(0x10362328u));
        edx = cow_qhi(q78) >> 5u;
        wr32(sp0 - 0x11cu, edx);
        q85 = (int64_t)cow_muls(0x51eb851fu, ecx);
        t86 = (uint32_t)((int32_t)cow_qhi(q85) >> 5u);
        t87 = t86 + (t86 >> 0x1fu);
        wr32(sp0 - 0x120u, t87);
        wr32(sp0 - 0x124u, COW_IMG(0x10362338u));
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        g->ebx = (in_ebx & 0xffffff00u) | 3u;
        g->ecx = sp0 - 0x100u;
        g->esp = sp0 - 0x114u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10362338u), t87, edx, rd32(sp0 - 0x118u));
        t88 = g->ecx;
        if (rd32(arg1 + 0x4190u) >= 0x1f4u)
        {
            ecx = t88;
        }
        else
        {
            ecx = t88;
            wr32(COW_IMG(0x10362328u), rd32(COW_IMG(0x10362328u)) - 1u);
        }
        if ((int32_t)rd32(COW_IMG(0x10362328u)) < 9700)
        {
            wr32(COW_IMG(0x10362328u), 0x25e4u);
        }
    }
    else
    {
        ecx = rd32(COW_IMG(0x10362328u));
        edx = cow_qhi(q78) >> 5u;
        q79 = (int64_t)cow_muls(0x51eb851fu, ecx);
        t80 = (uint32_t)((int32_t)cow_qhi(q79) >> 5u);
        t81 = t80 + (t80 >> 0x1fu);
        wr32(sp0 - 0x11cu, t81);
        wr32(sp0 - 0x120u, COW_IMG(0x10362340u));
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        g->ebx = (in_ebx & 0xffffff00u) | 3u;
        g->ecx = sp0 - 0x100u;
        g->esp = sp0 - 0x110u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10362340u), t81, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
        t82 = g->ecx;
        t83 = rd32(COW_IMG(0x10362328u)) + 1u;
        t84 = rd32(COW_IMG(0x10362328u));
        wr32(COW_IMG(0x10362328u), t83);
        if ((int32_t)(t84 + 1u) < 12200)
        {
            ecx = t82;
        }
        else
        {
            ecx = t82;
            wr32(COW_IMG(0x10362328u), 0x2fa8u);
        }
    }
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    g->esp = sp0 - 0x118u;
    cow_call_regs(g, COW_IMG(0x100f0590u), g->eax, g->ecx, sp0 - 0x100u, 1, 1, sp0 - 0x100u);
    t89 = g->edx;
    if ((int32_t)rd32(arg1 + 0x20u) >= 10)
    {
        ecx = rd32(COW_IMG(0x1036232cu));
        edx = t89;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1036232cu));
        edx = t89;
        wr32(COW_IMG(0x1036232cu), ecx + 1u);
        ecx = ecx + 1u;
    }
    if ((int32_t)rd32(arg1 + 0x20u) > 15)
    {
        wr32(COW_IMG(0x1036232cu), ecx - 1u);
        ecx = ecx - 1u;
    }
    if ((int32_t)ecx <= 12200) goto L_100fa429;
    ecx = 0x2fa8u;
L_100fa42f: ;
    wr32(COW_IMG(0x1036232cu), ecx);
L_100fa435: ;
    q90 = (int64_t)cow_muls(0x51eb851fu, ecx);
    t91 = (uint32_t)((int32_t)cow_qhi(q90) >> 5u);
    wr32(sp0 - 0x11cu, sp0 - 0x109u);
    g->ecx = sp0 - 0x109u;
    t92 = rd32(sp0 - 0x10cu);
    g->esp = sp0 - 0x118u;
    t93 = cow_call_regs(g, COW_IMG(0x100f0570u), g->eax, g->ecx, t91 + (t91 >> 0x1fu), 1, 1, sp0 - 0x109u);
    t94 = g->ecx;
    t95 = g->edx;
    wr32(COW_IMG(0x104dfd98u), arg1);
    wr32(sp0 - 0x120u, arg1 + 0x4638u);
    g->esp = sp0 - 0x11cu;
    cow_call_regs(g, COW_IMG(0x100fcae0u), g->eax, g->ecx, t95, 1, 1, arg1 + 0x4638u);
    t96 = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bb0u) + 1u;
    t97 = rd32(COW_IMG(0x104dfd94u));
    t98 = rd32(sp0 - 0x114u);
    t99 = rd32(sp0 - 0x118u);
    wr32(t97 + 0x44bb0u, t96);
    g->ebx = rd32(sp0 - 0x110u);
    g->esi = t98;
    g->edi = t99;
    return (t97 & 0xffffff00u) | rd8(sp0 - 0x10au);
L_100fa22f: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t9 = cow_call_regs(g, COW_IMG(0x100e84a0u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    g->ecx = t10;
    g->edx = t11;
    t12 = cow_call_regs(g, COW_IMG(0x100e8b60u), t9, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->ecx = t13;
    g->edx = t14;
    t15 = cow_call_regs(g, COW_IMG(0x100f8910u), t12, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    cow_call_regs(g, COW_IMG(0x100eb090u), t15, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    g->edx = t19;
    t20 = cow_stdcall(g, COW_IMG(0x100e40a0u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x11cu, arg1);
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x110u;
    t23 = cow_call_regs(g, COW_IMG(0x100fb830u), t20, g->ecx, g->edx, 1, 3, arg1, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x11cu;
    t26 = cow_call_regs(g, COW_IMG(0x100e33e0u), t23, g->ecx, g->edx, 1, 0);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->edx = t28;
    cow_call_regs(g, COW_IMG(0x100e4320u), t26, g->ecx, g->edx, 1, 0);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    cow_stdcall(g, COW_IMG(0x100e5fc0u), 0);
    t31 = g->ecx;
    t32 = g->edx;
    g->ecx = t31;
    g->edx = t32;
    cow_stdcall(g, COW_IMG(0x100e61a0u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    g->ecx = t33;
    g->edx = t34;
    t35 = cow_stdcall(g, COW_IMG(0x100f0070u), 0);
    t36 = g->ecx;
    t37 = g->edx;
    g->ecx = t36;
    g->edx = t37;
    t38 = cow_call_regs(g, COW_IMG(0x100f9340u), t35, g->ecx, g->edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    g->ecx = t39;
    g->edx = t40;
    t41 = cow_call_regs(g, COW_IMG(0x100e00f0u), t38, g->ecx, g->edx, 1, 0);
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->edx = t43;
    cow_call_regs(g, COW_IMG(0x100f8ca0u), t41, g->ecx, g->edx, 1, 0);
    t44 = g->ecx;
    t45 = g->edx;
    g->ecx = t44;
    g->edx = t45;
    t46 = cow_stdcall(g, COW_IMG(0x100f10f0u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    g->ebx = (in_ebx & 0xffffff00u) | 3u;
    g->ecx = t47;
    g->edx = t48;
    cow_stdcall(g, COW_IMG(0x100e6300u), 0);
    t49 = g->ecx;
    t50 = g->edx;
    t51 = rd32(arg1 + 0x417cu);
    wr32(sp0 - 0x120u, t51);
    wr32(sp0 - 0x124u, 0u);
    g->ecx = t49;
    t52 = cow_call_regs(g, COW_IMG(0x100dbfe0u), g->eax, g->ecx, t50, 1, 2, 0u, t51);
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 == 0u)
    {
        ecx = t53;
        edx = t54;
    }
    else
    {
        eax = t52;
        ecx = t53;
        edx = t54;
        wr32(sp0 - 0x11cu, arg1);
        g->ebx = (in_ebx & 0xffffff00u) | 3u;
        g->edx = edx;
        g->esp = sp0 - 0x11cu;
        cow_thiscall(g, COW_IMG(0x100fa9f0u), ecx, 0);
        t55 = g->ecx;
        t56 = g->edx;
        ecx = t55;
        edx = t56;
    }
    wr32(sp0 - 0x11cu, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t57 = cow_thiscall_cdecl(g, COW_IMG(0x100fa5c0u), ecx, 5, arg1, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t58 = g->edx;
    eax = t57;
    edx = t58;
    loc_10c = (rd32(sp0 - 0x10cu) & 0xff00ffffu) | 0x10000u;
    goto L_100fa2a9;
L_100fa308: ;
    wr32(sp0 - 0x11cu, 0x3e8u);
    wr32(sp0 - 0x120u, 6u);
    g->ecx = ecx;
    g->esp = sp0 - 0x118u;
    t68 = cow_call_regs(g, COW_IMG(0x100dbfe0u), g->eax, g->ecx, edx, 1, 2, 6u, 0x3e8u);
    t69 = g->ecx;
    t70 = g->edx;
    if ((uint8_t)t68 == 0u)
    {
        edx = t70;
        goto L_100fa34a;
    }
    ecx = t69;
    edx = t70;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t71 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t72 = g->ecx;
    t73 = g->edx;
    if (rd32(arg1 + 0x418cu) <= t71)
    {
        ecx = t72;
        edx = t73;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t76 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t77 = g->edx;
        eax = rd32(arg1 + 0x418cu);
        ecx = t76;
        edx = t77;
    }
    else
    {
        ecx = t72;
        edx = t73;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t74 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t75 = g->edx;
        eax = t74;
        ecx = rd32(arg1 + 0x418cu);
        edx = t75;
    }
    goto L_100fa342;
L_100fa429: ;
    if ((int32_t)ecx >= 9700) goto L_100fa435;
    ecx = 0x25e4u;
    goto L_100fa42f;
L_100fa489: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fa180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fa180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
