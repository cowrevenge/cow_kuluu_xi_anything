/* f_0x1022dfa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1022dfa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
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

    if (rd32(self + 0x6cu) > 0xeu) goto L_1022e34b;
    eax = rd32(self + 0x6cu);
    t1 = rd32(COW_IMG(0x1022e364u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1022dfbau: goto L_1022dfba;
    case 0x1022dff7u: goto L_1022dff7;
    case 0x1022e02fu: goto L_1022e02f;
    case 0x1022e0d1u: goto L_1022e0d1;
    case 0x1022e0e3u: goto L_1022e0e3;
    case 0x1022e0fdu: goto L_1022e0fd;
    case 0x1022e128u: goto L_1022e128;
    case 0x1022e142u: goto L_1022e142;
    case 0x1022e179u: goto L_1022e179;
    case 0x1022e19bu: goto L_1022e19b;
    case 0x1022e1d5u: goto L_1022e1d5;
    case 0x1022e253u: goto L_1022e253;
    case 0x1022e2d1u: goto L_1022e2d1;
    default: rt_fatal(g, COW_IMG(0x1022dfb3u), "switch");
    }
    return 0;
L_1022dfba: ;
    if (eax == (uint32_t)(int8_t)rd8(COW_IMG(0x1047fe8eu)))
    {
        esi = (uint16_t)rd32(COW_IMG(0x1047fe8cu));
        goto L_1022dfde;
    }
    return 0xfffffffdu;
L_1022dfde: ;
    if (esi != 0xffffu)
    {
        loc_4 = self;
        goto L_1022e359;
    }
    return 0xfffffffcu;
L_1022dff7: ;
    if (rd32(COW_IMG(0x1047fe88u)) != 0xffffu)
    {
        esi = rd32(COW_IMG(0x1047fe88u));
        goto L_1022e00c;
    }
    esi = 0xfffffffcu;
L_1022e015: ;
    g->esp = sp0 - 0x14u;
    t102 = cow_stdcall(g, COW_IMG(0x10098800u), 0);
    if (!(t102 & 1u))
    {
        loc_4 = self;
        goto L_1022e359;
    }
    return 0x3fu;
L_1022e00c: ;
    if ((int32_t)esi >= 4)
    {
        loc_4 = self;
        goto L_1022e359;
    }
    goto L_1022e015;
L_1022e02f: ;
    g->ecx = self;
    g->esp = sp0 - 0x14u;
    t82 = cow_call_regs(g, COW_IMG(0x100987d0u), eax, g->ecx, g->edx, 1, 0);
    t83 = g->ecx;
    if ((uint8_t)t82 == 0u) goto L_1022e355;
    ecx = t83;
    g->ecx = ecx;
    g->edx = rd32(self + 0x6cu) * 9u;
    t84 = rd32(self + 0x6cu);
    g->esp = sp0 - 0x14u;
    t85 = cow_stdcall(g, COW_IMG(0x100987e0u), 0);
    t86 = g->ecx;
    t87 = g->edx;
    if (t85 != 0u)
    {
        edx = t87;
        ebx = COW_IMG(0x10667a90u) + t84 * 0x94u;
        ebp = t85;
    }
    else
    {
        ecx = t86;
        edx = t87;
        ebx = COW_IMG(0x10667a90u) + t84 * 0x94u;
        ebp = t85;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t88 = cow_stdcall(g, COW_IMG(0x10098800u), 0);
        t89 = g->edx;
        if ((t88 & 8u) == 0u)
        {
            edx = t89;
        }
        else
        {
            edx = t89;
            ebp = 0x3e8u;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t90 = cow_thiscall(g, COW_IMG(0x1022ee80u), ebx, 0);
    t91 = g->edx;
    if ((int32_t)t90 <= 0)
    {
        esi = 0xfffffffcu;
        loc_4 = 0u;
        goto L_1022e359;
    }
    edx = t91;
    esi = 0xfffffffcu;
    edi = 0u;
    loc_4 = 0u;
L_1022e07f: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t92 = cow_thiscall(g, COW_IMG(0x1022f0f0u), ebx, 1, edi);
    t93 = g->edx;
    if ((int32_t)t92 > (int32_t)ebp)
    {
        edx = t93;
        goto L_1022e0b3;
    }
    edx = t93;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t94 = cow_thiscall(g, COW_IMG(0x1022f0f0u), ebx, 1, edi);
    t95 = g->edx;
    if (t94 == ebp) goto L_1022e0c7;
    edx = t95;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t96 = cow_thiscall(g, COW_IMG(0x1022f0f0u), ebx, 1, edi);
    t97 = g->edx;
    if ((int32_t)t96 < (int32_t)loc_4)
    {
        edx = t97;
    }
    else
    {
        edx = t97;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t98 = cow_thiscall(g, COW_IMG(0x1022f0f0u), ebx, 1, edi);
        t99 = g->edx;
        edx = t99;
        esi = edi;
        loc_4 = t98;
    }
L_1022e0b3: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t100 = cow_thiscall(g, COW_IMG(0x1022ee80u), ebx, 0);
    t101 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)t100)
    {
        edx = t101;
        edi = edi + 1u;
        goto L_1022e07f;
    }
    return esi;
L_1022e0c7: ;
    return edi;
L_1022e0d1: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t78 = cow_call_regs(g, COW_IMG(0x10098810u), eax, g->ecx, g->edx, 1, 0);
    t79 = g->ecx;
    t80 = g->edx;
    if ((uint8_t)t78 == 0u) goto L_1022e10f;
    ecx = t79;
    edx = t80;
    g->esp = sp0 - 0x14u;
    t81 = cow_stdcall(g, COW_IMG(0x10098860u), 0);
    esi = t81;
L_1022e113: ;
    if (esi != 0u)
    {
        loc_4 = self;
        goto L_1022e359;
    }
    return 0xfffffffcu;
L_1022e0e3: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t74 = cow_call_regs(g, COW_IMG(0x10098810u), eax, g->ecx, g->edx, 1, 0);
    t75 = g->ecx;
    t76 = g->edx;
    if ((uint8_t)t74 == 0u) goto L_1022e355;
    ecx = t75;
    edx = t76;
    g->esp = sp0 - 0x14u;
    t77 = cow_stdcall(g, COW_IMG(0x10098870u), 0);
    return t77;
L_1022e0fd: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t70 = cow_call_regs(g, COW_IMG(0x10098900u), eax, g->ecx, g->edx, 1, 0);
    t71 = g->ecx;
    t72 = g->edx;
    if ((uint8_t)t70 == 0u) goto L_1022e10f;
    ecx = t71;
    edx = t72;
    g->esp = sp0 - 0x14u;
    t73 = cow_stdcall(g, COW_IMG(0x100989a0u), 0);
    esi = t73;
    goto L_1022e113;
L_1022e10f: ;
    esi = self;
    goto L_1022e113;
L_1022e128: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t66 = cow_call_regs(g, COW_IMG(0x10098900u), eax, g->ecx, g->edx, 1, 0);
    t67 = g->ecx;
    t68 = g->edx;
    if ((uint8_t)t66 == 0u) goto L_1022e355;
    ecx = t67;
    edx = t68;
    g->esp = sp0 - 0x14u;
    t69 = cow_stdcall(g, COW_IMG(0x10098950u), 0);
    return t69;
L_1022e142: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t59 = cow_call_regs(g, COW_IMG(0x100989f0u), eax, g->ecx, g->edx, 1, 0);
    t60 = g->ecx;
    t61 = g->edx;
    if ((uint8_t)t59 == 0u) goto L_1022e355;
    ecx = t60;
    edx = t61;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t62 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    t63 = g->ecx;
    t64 = g->edx;
    if ((t62 & 0xfu) != 0u)
    {
        esi = t62 & 0xfu;
        loc_4 = self;
        goto L_1022e359;
    }
    ecx = t63;
    edx = t64;
    esi = t62 & 0xfu;
    g->esp = sp0 - 0x14u;
    t65 = cow_stdcall(g, COW_IMG(0x10098800u), 0);
    if ((t65 & 2u) == 0u)
    {
        loc_4 = self;
        goto L_1022e359;
    }
    return 0xcu;
L_1022e179: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t54 = cow_call_regs(g, COW_IMG(0x100989f0u), eax, g->ecx, g->edx, 1, 0);
    t55 = g->ecx;
    t56 = g->edx;
    if ((uint8_t)t54 == 0u) goto L_1022e355;
    ecx = t55;
    edx = t56;
    g->esp = sp0 - 0x14u;
    t57 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    t58 = t57 >> 4u & 0xfu;
    return t58;
L_1022e19b: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t47 = cow_call_regs(g, COW_IMG(0x100989f0u), eax, g->ecx, g->edx, 1, 0);
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint8_t)t47 == 0u) goto L_1022e355;
    ecx = t48;
    edx = t49;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t50 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    t51 = g->ecx;
    t52 = g->edx;
    if ((t50 >> 8u & 0xfu) != 0u)
    {
        esi = t50 >> 8u & 0xfu;
        loc_4 = self;
        goto L_1022e359;
    }
    ecx = t51;
    edx = t52;
    esi = t50 >> 8u & 0xfu;
    g->esp = sp0 - 0x14u;
    t53 = cow_stdcall(g, COW_IMG(0x10098800u), 0);
    if ((t53 & 4u) == 0u)
    {
        loc_4 = self;
        goto L_1022e359;
    }
    return 0xfu;
L_1022e1d5: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t32 = cow_call_regs(g, COW_IMG(0x10098a60u), eax, g->ecx, g->edx, 1, 0);
    t33 = g->ecx;
    t34 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        esi = 0xfffffffcu;
        loc_4 = self;
        goto L_1022e359;
    }
    ecx = t33;
    edx = t34;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t35 = cow_stdcall(g, COW_IMG(0x10098a70u), 0);
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 != 0x3e7u)
    {
        ecx = t36;
        edx = t37;
        ebp = t35;
        goto L_1022e1fe;
    }
    return 0xfffffffcu;
L_1022e1fe: ;
    if (ebp == 0u)
    {
        g->esp = sp0 - 0x14u;
        t38 = cow_stdcall(g, COW_IMG(0x10098800u), 0);
        if ((t38 & 0x20u) != 0u)
        {
            ebp = 0x3e8u;
        }
    }
    t39 = COW_IMG(0x10667a90u) + rd32(self + 0x6cu) * 0x94u;
    g->edx = rd32(self + 0x6cu) * 0x25u;
    t40 = rd32(self + 0x6cu);
    g->esp = sp0 - 0x14u;
    t41 = cow_thiscall(g, COW_IMG(0x1022ee80u), t39, 0);
    t42 = g->edx;
    if ((int32_t)t41 <= 0)
    {
        esi = 0xfffffffcu;
        loc_4 = self;
        goto L_1022e359;
    }
    edx = t42;
    ebx = t39;
    esi = 0xfffffffcu;
    edi = 0u;
L_1022e231: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t43 = cow_thiscall(g, COW_IMG(0x1022f0f0u), ebx, 1, edi);
    t44 = g->edx;
    if ((int32_t)ebp < (int32_t)t43)
    {
        edx = t44;
    }
    else
    {
        edx = t44;
        esi = edi;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t45 = cow_thiscall(g, COW_IMG(0x1022ee80u), ebx, 0);
    t46 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)t45)
    {
        edx = t46;
        edi = edi + 1u;
        goto L_1022e231;
    }
    return esi;
L_1022e253: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t17 = cow_call_regs(g, COW_IMG(0x10098a80u), eax, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        esi = 0xfffffffcu;
        loc_4 = self;
        goto L_1022e359;
    }
    ecx = t18;
    edx = t19;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t20 = cow_stdcall(g, COW_IMG(0x10098a90u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0x3e7u)
    {
        ecx = t21;
        edx = t22;
        ebp = t20;
        goto L_1022e27c;
    }
    return 0xfffffffcu;
L_1022e27c: ;
    if (ebp == 0u)
    {
        g->esp = sp0 - 0x14u;
        t23 = cow_stdcall(g, COW_IMG(0x10098800u), 0);
        if ((t23 & 0x40u) != 0u)
        {
            ebp = 0x3e8u;
        }
    }
    t24 = COW_IMG(0x10667a90u) + rd32(self + 0x6cu) * 0x94u;
    g->edx = rd32(self + 0x6cu) * 0x25u;
    t25 = rd32(self + 0x6cu);
    g->esp = sp0 - 0x14u;
    t26 = cow_thiscall(g, COW_IMG(0x1022ee80u), t24, 0);
    t27 = g->edx;
    if ((int32_t)t26 <= 0)
    {
        esi = 0xfffffffcu;
        loc_4 = self;
        goto L_1022e359;
    }
    edx = t27;
    ebx = t24;
    esi = 0xfffffffcu;
    edi = 0u;
L_1022e2af: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t28 = cow_thiscall(g, COW_IMG(0x1022f0f0u), ebx, 1, edi);
    t29 = g->edx;
    if ((int32_t)ebp < (int32_t)t28)
    {
        edx = t29;
    }
    else
    {
        edx = t29;
        esi = edi;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t30 = cow_thiscall(g, COW_IMG(0x1022ee80u), ebx, 0);
    t31 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)t30)
    {
        edx = t31;
        edi = edi + 1u;
        goto L_1022e2af;
    }
    return esi;
L_1022e2d1: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x10098aa0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        esi = 0xfffffffcu;
        loc_4 = self;
        goto L_1022e359;
    }
    ecx = t3;
    edx = t4;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_stdcall(g, COW_IMG(0x10098ab0u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0x3e7u)
    {
        ecx = t6;
        edx = t7;
        ebp = t5;
        goto L_1022e2f6;
    }
    return 0xfffffffcu;
L_1022e2f6: ;
    g->esp = sp0 - 0x14u;
    t8 = cow_stdcall(g, COW_IMG(0x10098ac0u), 0);
    if ((uint8_t)t8 == 0u) goto L_1022e30c;
    return 0xfffffffcu;
L_1022e30c: ;
    t9 = COW_IMG(0x10667a90u) + rd32(self + 0x6cu) * 0x94u;
    g->edx = rd32(self + 0x6cu) * 0x25u;
    t10 = rd32(self + 0x6cu);
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x1022ee80u), t9, 0);
    t12 = g->edx;
    if ((int32_t)t11 <= 0)
    {
        esi = 0xfffffffcu;
        loc_4 = self;
        goto L_1022e359;
    }
    edx = t12;
    ebx = t9;
    esi = 0xfffffffcu;
    edi = 0u;
L_1022e329: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, COW_IMG(0x1022f0f0u), ebx, 1, edi);
    t14 = g->edx;
    if ((int32_t)ebp < (int32_t)t13)
    {
        edx = t14;
    }
    else
    {
        edx = t14;
        esi = edi;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_thiscall(g, COW_IMG(0x1022ee80u), ebx, 0);
    t16 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)t15)
    {
        edx = t16;
        edi = edi + 1u;
        goto L_1022e329;
    }
    return esi;
L_1022e34b: ;
    return 0u;
L_1022e355: ;
    esi = self;
    loc_4 = self;
L_1022e359: ;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022dfa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022dfa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
