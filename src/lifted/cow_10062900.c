/* f_0x10062900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10062900(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(sp0 + 8u) != 0x3cu)
    {
        esi = rd32(sp0 + 8u);
        goto L_1006295d;
    }
    esi = rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10062a57;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t4 = g->edx;
    if (rd32(t3 + 0x70u) == 0u)
    {
        eax = rd32(t3 + 0x70u);
        edx = t4;
        goto L_10062a57;
    }
    eax = rd32(t3 + 0x70u);
    edx = t4;
    t5 = rd32(eax + 0x124u);
    wr8(sp0 + 8u, t5 >> 8u & 0xfu);
    if ((t5 >> 8u & 0xfu) != 8u)
    {
        eax = (t5 >> 8u & 0xffffff00u) | (t5 >> 8u & 0xfu);
        wr8(sp0 + 8u, eax & 3u);
    }
    t6 = (uint8_t)rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t6);
    eax = t6;
    loc_18 = t6;
L_10062cf8: ;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10068300u), arg1, 1, loc_18);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return arg1;
L_1006295d: ;
    if (esi != 0x3bu) goto L_1006299c;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_10062a57;
    }
    edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    g->edx = rd32(t9);
    t10 = rd32(t9);
    t11 = cow_thiscall(g, rd32(t10 + 0x254u), t9, 0);
    t12 = g->edx;
    wr32(sp0 - 0x18u, t11);
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t11);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return arg1;
L_1006299c: ;
    if (esi != 0x3au) goto L_100629cd;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t14 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_10062a57;
    }
    edx = t14;
    g->esp = sp0 - 0x14u;
    t15 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    g->edx = rd32(t15);
    t16 = rd32(t15);
    t17 = cow_thiscall(g, rd32(t16 + 0xa4u), t15, 0);
    t18 = g->edx;
    wr32(sp0 - 0x18u, t17 & 3u);
    eax = t17 & 3u;
    edx = t18;
    loc_18 = t17 & 3u;
    goto L_10062cf8;
L_100629cd: ;
    if (esi != 0x3du) goto L_10062a21;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
        goto L_10062a57;
    }
    edx = t20;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t22 = g->edx;
    if (rd32(t21 + 0x70u) == 0u)
    {
        eax = t21;
        edx = t22;
        goto L_10062a57;
    }
    eax = t21;
    edx = t22;
    ebx = rd32(t21 + 0x70u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_call_regs(g, COW_IMG(0x10098340u), eax, ebx, g->edx, 1, 0);
    t24 = g->edx;
    if ((uint8_t)t23 != 0u)
    {
        eax = t23;
        edx = t24;
        goto L_10062a57;
    }
    eax = t23;
    edx = t24;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t25 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, ebx, g->edx, 1, 0);
    t26 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        eax = t25;
        edx = t26;
        goto L_10062a1a;
    }
    eax = t25;
    edx = t26;
    if ((rd32(ebx + 0x78u) & 0xff000000u) == 0u) goto L_10062a57;
    if (!(rd32(ebx + 0x12cu) >> 0xdu & 1u))
    {
        eax = rd32(ebx + 0x12cu) >> 0xdu;
        goto L_10062a57;
    }
    eax = rd32(ebx + 0x12cu) >> 0xdu;
L_10062a1a: ;
    wr32(sp0 - 0x18u, 1u);
    loc_18 = 1u;
    goto L_10062cf8;
L_10062a21: ;
    if (esi != 0x3eu)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10062a57;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t27 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t28 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        edx = t28;
        goto L_10062a57;
    }
    edx = t28;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t29 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t30 = g->edx;
    if (rd32(t29 + 0x70u) == 0u)
    {
        eax = rd32(t29 + 0x70u);
        edx = t30;
        goto L_10062a57;
    }
    eax = rd32(t29 + 0x70u);
    edx = t30;
    if (!(rd32(eax + 0x12cu) >> 0x16u & 1u)) goto L_10062a57;
    wr32(sp0 - 0x18u, 1u);
    loc_18 = 1u;
    goto L_10062cf8;
L_10062a57: ;
    if (rd32(self + 0x90u) == 0u) goto L_10062cf6;
    ecx = rd32(self + 0x90u);
    if (esi != 0x38u) goto L_10062a96;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t31 = cow_thiscall(g, COW_IMG(0x1018c940u), ecx, 0);
    t32 = g->edx;
    if (t31 == 0u)
    {
        eax = t31;
        edx = t32;
        goto L_10062cf6;
    }
    eax = t31;
    edx = t32;
    if (rd32(eax + 0x70u) == 0u)
    {
        eax = rd32(eax + 0x70u);
        goto L_10062cf6;
    }
    eax = rd32(eax + 0x70u);
    if ((rd32(eax + 0x78u) & 0xff000000u) != 0u) goto L_10062cf6;
    wr32(sp0 - 0x18u, 1u);
    loc_18 = 1u;
    goto L_10062cf8;
L_10062a96: ;
    if (esi != 0x39u) goto L_10062adb;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t33 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t34 = g->edx;
    if (t33 == 0u)
    {
        eax = t33;
        edx = t34;
        goto L_10062cf6;
    }
    edx = t34;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t35 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t36 = g->edx;
    if (rd32(t35 + 0x70u) == 0u)
    {
        eax = rd32(t35 + 0x70u);
        edx = t36;
        goto L_10062cf6;
    }
    eax = rd32(t35 + 0x70u);
    if ((rd32(eax + 0x78u) & 0xff000000u) != 0x1000000u)
    {
        edx = rd32(eax + 0x78u) & 0xff000000u;
        goto L_10062cf6;
    }
    edx = rd32(eax + 0x78u) & 0xff000000u;
    wr32(sp0 - 0x18u, 1u);
    loc_18 = 1u;
    goto L_10062cf8;
L_10062adb: ;
    if (esi != 4u) goto L_10062af3;
    wr32(sp0 - 0x18u, 0xau);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_cdecl(g, COW_IMG(0x1006bf60u), 3, 0xau, in_edi, in_esi);
    t38 = g->edx;
    wr32(sp0 - 0x18u, t37 - 5u);
    eax = t37 - 5u;
    edx = t38;
    loc_18 = t37 - 5u;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062af3: ;
    if ((int32_t)esi < 17) goto L_10062b30;
    if ((int32_t)esi > 32) goto L_10062b30;
    t39 = rd32(esi * 8u + self + 0x38u);
    wr32(sp0 - 8u, t39);
    t40 = rd32(esi * 8u + self + 0x3cu);
    wr32(arg1, t39);
    wr32(sp0 - 4u, t40);
    t41 = rd32(esi * 8u + self + 0x3cu);
    wr32(arg1 + 4u, t41);
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x100683d0u), sp0 - 8u, t39, 0);
    return arg1;
L_10062b30: ;
    if (esi != 0x21u) goto L_10062b52;
    t42 = rd32(rd32(ecx + 0xcu) + 0xcu);
    wr32(sp0 - 0x18u, t42);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t42);
    return arg1;
L_10062b52: ;
    if ((int32_t)esi < 34) goto L_10062b7a;
    if ((int32_t)esi > 37) goto L_10062b7a;
    t43 = rd32(esi * 4u + rd32(ecx + 0xcu) - 0x78u);
    wr32(sp0 - 0x18u, t43);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t43);
    return arg1;
L_10062b7a: ;
    if ((int32_t)esi <= 38) goto L_10062cf6;
    if ((int32_t)esi >= 55) goto L_10062cf6;
    if (esi != 0x27u) goto L_10062b9e;
    t44 = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1cu);
    wr32(sp0 - 0x18u, t44);
    eax = t44;
    edx = rd32(ecx + 0xcu);
    loc_18 = t44;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062b9e: ;
    if (esi - 0x28u > 0xeu) goto L_10062cf6;
    esi = esi - 0x28u;
    t45 = rd32(COW_IMG(0x10062d10u) + esi * 4u);
    switch (t45 - RD)
    {
    case 0x10062bb1u: goto L_10062bb1;
    case 0x10062bcfu: goto L_10062bcf;
    case 0x10062be3u: goto L_10062be3;
    case 0x10062bf7u: goto L_10062bf7;
    case 0x10062c0bu: goto L_10062c0b;
    case 0x10062c1fu: goto L_10062c1f;
    case 0x10062c3eu: goto L_10062c3e;
    case 0x10062c5du: goto L_10062c5d;
    case 0x10062c71u: goto L_10062c71;
    case 0x10062c82u: goto L_10062c82;
    case 0x10062ca1u: goto L_10062ca1;
    case 0x10062cb2u: goto L_10062cb2;
    case 0x10062cc3u: goto L_10062cc3;
    case 0x10062cd4u: goto L_10062cd4;
    case 0x10062ce5u: goto L_10062ce5;
    default: rt_fatal(g, COW_IMG(0x10062baau), "switch");
    }
    return 0;
L_10062bb1: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t88 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t89 = g->edx;
    wr32(sp0 - 0x18u, rd32(t88));
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, rd32(t88));
    return arg1;
L_10062bcf: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t85 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t86 = g->edx;
    t87 = rd16(t85 + 4u);
    wr32(sp0 - 0x18u, t87);
    eax = t87;
    edx = t86;
    loc_18 = t87;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062be3: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t82 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t83 = g->edx;
    t84 = rd16(t82 + 6u);
    wr32(sp0 - 0x18u, t84);
    eax = t84;
    edx = t83;
    loc_18 = t84;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062bf7: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t79 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t80 = g->edx;
    t81 = rd16(t79 + 8u);
    wr32(sp0 - 0x18u, t81);
    eax = t81;
    edx = t80;
    loc_18 = t81;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062c0b: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t76 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t77 = g->edx;
    t78 = rd16(t76 + 0xau);
    wr32(sp0 - 0x18u, t78);
    eax = t78;
    edx = t77;
    loc_18 = t78;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062c1f: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t73 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t74 = g->edx;
    t75 = rd32(t73 + 0xcu);
    wr32(sp0 - 0x18u, t75);
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t75);
    return arg1;
L_10062c3e: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t70 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t71 = g->edx;
    t72 = rd32(t70 + 0x10u);
    wr32(sp0 - 0x18u, t72);
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t72);
    return arg1;
L_10062c5d: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t67 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t68 = g->edx;
    t69 = rd16(t67 + 0x18u);
    wr32(sp0 - 0x18u, t69);
    eax = t69;
    edx = t68;
    loc_18 = t69;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062c71: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t64 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t65 = g->edx;
    t66 = rd16(t64 + 0x1au);
    wr32(sp0 - 0x18u, t66);
    eax = t66;
    edx = t65;
    loc_18 = t66;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062c82: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t61 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t62 = g->edx;
    t63 = rd32(t61 + 0x1cu);
    wr32(sp0 - 0x18u, t63);
    cow_thiscall(g, COW_IMG(0x10068340u), arg1, 1, t63);
    return arg1;
L_10062ca1: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t58 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t59 = g->edx;
    t60 = rd16(t58 + 0x20u);
    wr32(sp0 - 0x18u, t60);
    eax = t60;
    edx = t59;
    loc_18 = t60;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062cb2: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t55 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t56 = g->edx;
    t57 = rd16(t55 + 0x22u);
    wr32(sp0 - 0x18u, t57);
    eax = t57;
    edx = t56;
    loc_18 = t57;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062cc3: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t52 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t53 = g->edx;
    t54 = rd16(t52 + 0x24u);
    wr32(sp0 - 0x18u, t54);
    eax = t54;
    edx = t53;
    loc_18 = t54;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062cd4: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t49 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t50 = g->edx;
    t51 = rd16(t49 + 0x26u);
    wr32(sp0 - 0x18u, t51);
    eax = t51;
    edx = t50;
    loc_18 = t51;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062ce5: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t46 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t47 = g->edx;
    t48 = rd16(t46 + 0x28u);
    wr32(sp0 - 0x18u, t48);
    eax = t48;
    edx = t47;
    loc_18 = t48;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
L_10062cf6: ;
    wr32(sp0 - 0x18u, 0u);
    loc_18 = 0u;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_10062cf8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10062900(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
