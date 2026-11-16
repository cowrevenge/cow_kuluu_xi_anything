/* f_0x1007adc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007adc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x80u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1007adec;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x77u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_1007adfe;
    }
    edx = t6;
    g->edx = edx;
    return arg3;
L_1007adec: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x7fu, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t9;
        goto L_1007b08b;
    }
    ecx = t8;
    edx = t9;
L_1007adfe: ;
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        goto L_1007ae13;
    }
    g->edx = edx;
    return -arg3;
L_1007ae13: ;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 3u, eax, 1u);
    if ((int8_t)t10 >= 0)
    {
        ecx = rd32(COW_IMG(0x103551e0u));
        esi = (uint32_t)(int8_t)t10;
        goto L_1007b039;
    }
    ecx = rd32(COW_IMG(0x103551e0u));
    t11 = rd32(ecx + 4u);
    g->ecx = ecx;
    g->edx = t11;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0u, t11, 1u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int8_t)t12 < 0)
    {
        ecx = t13;
        goto L_1007ae68;
    }
    edx = t14;
    esi = (uint32_t)(int8_t)t12;
    t15 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = t15;
    g->edx = edx;
    t16 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 0u, esi, t15);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        edi = 0u;
        goto L_1007b055;
    }
    ecx = t18;
L_1007ae68: ;
    t20 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t21 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t22 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 8u, t20, 1u);
    t23 = g->edx;
    if ((int8_t)t22 < 0)
    {
        edx = t23;
        goto L_1007aea5;
    }
    esi = (uint32_t)(int8_t)t22;
    t24 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = t24;
    t25 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 8u, esi, t24);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        edi = 8u;
        goto L_1007b055;
    }
    edx = t28;
L_1007aea5: ;
    t29 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t29;
    t30 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t31 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0xau, t29, 1u);
    t32 = g->ecx;
    if ((int8_t)t31 < 0) goto L_1007aee1;
    ecx = t32;
    esi = (uint32_t)(int8_t)t31;
    t33 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x103551e0u));
    t34 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t35 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 0xau, esi, t33);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        edi = 0xau;
        goto L_1007b055;
    }
L_1007aee1: ;
    t38 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = t38;
    t39 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t40 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0xbu, t38, 1u);
    t41 = g->ecx;
    t42 = g->edx;
    if ((int8_t)t40 < 0)
    {
        ecx = t41;
        goto L_1007af1d;
    }
    edx = t42;
    esi = (uint32_t)(int8_t)t40;
    t43 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = t43;
    g->edx = edx;
    t44 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t45 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 0xbu, esi, t43);
    t46 = g->ecx;
    t47 = g->edx;
    if ((uint8_t)t45 != 0u)
    {
        eax = t45;
        ecx = t46;
        edx = t47;
        edi = 0xbu;
        goto L_1007b055;
    }
    ecx = t46;
L_1007af1d: ;
    t48 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t49 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t50 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0xcu, t48, 1u);
    t51 = g->edx;
    if ((int8_t)t50 < 0)
    {
        edx = t51;
        goto L_1007af5a;
    }
    esi = (uint32_t)(int8_t)t50;
    t52 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = t52;
    t53 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t54 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 0xcu, esi, t52);
    t55 = g->ecx;
    t56 = g->edx;
    if ((uint8_t)t54 != 0u)
    {
        eax = t54;
        ecx = t55;
        edx = t56;
        edi = 0xcu;
        goto L_1007b055;
    }
    edx = t56;
L_1007af5a: ;
    t57 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t57;
    t58 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t59 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0xdu, t57, 1u);
    t60 = g->ecx;
    if ((int8_t)t59 < 0) goto L_1007af96;
    ecx = t60;
    esi = (uint32_t)(int8_t)t59;
    t61 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x103551e0u));
    t62 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t63 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 0xdu, esi, t61);
    t64 = g->ecx;
    t65 = g->edx;
    if ((uint8_t)t63 != 0u)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
        edi = 0xdu;
        goto L_1007b055;
    }
L_1007af96: ;
    t66 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = t66;
    t67 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t68 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0xeu, t66, 1u);
    t69 = g->ecx;
    t70 = g->edx;
    if ((int8_t)t68 < 0)
    {
        ecx = t69;
        goto L_1007afd2;
    }
    edx = t70;
    esi = (uint32_t)(int8_t)t68;
    t71 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = t71;
    g->edx = edx;
    t72 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t73 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 0xeu, esi, t71);
    t74 = g->ecx;
    t75 = g->edx;
    if ((uint8_t)t73 != 0u)
    {
        eax = t73;
        ecx = t74;
        edx = t75;
        edi = 0xeu;
        goto L_1007b055;
    }
    ecx = t74;
L_1007afd2: ;
    t76 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t77 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t78 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0xfu, t76, 1u);
    t79 = g->edx;
    if ((int8_t)t78 < 0)
    {
        edx = t79;
        goto L_1007b00b;
    }
    esi = (uint32_t)(int8_t)t78;
    t80 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->ecx = rd32(COW_IMG(0x103551e0u));
    g->edx = t80;
    t81 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t82 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, 0xfu, esi, t80);
    t83 = g->ecx;
    t84 = g->edx;
    if ((uint8_t)t82 != 0u)
    {
        eax = t82;
        ecx = t83;
        edx = t84;
        edi = 0xfu;
        goto L_1007b055;
    }
    edx = t84;
L_1007b00b: ;
    t85 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t85;
    g->edx = edx;
    t86 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t87 = cow_cdecl(g, COW_IMG(0x101efd00u), 3, 0x10u, t85, 1u);
    t88 = g->ecx;
    t89 = g->edx;
    if ((int8_t)t87 < 0)
    {
        edx = t89;
        goto L_1007b04c;
    }
    ecx = t88;
    esi = (uint32_t)(int8_t)t87;
    t90 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    edx = rd32(COW_IMG(0x103551e0u));
    edi = 0x10u;
    loc_c = t90;
    loc_10 = esi;
    loc_14 = 0x10u;
L_1007b040: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t92 = cow_cdecl(g, COW_IMG(0x1007ad70u), 3, loc_14, loc_10, loc_c);
    t93 = g->ecx;
    t94 = g->edx;
    if ((uint8_t)t92 != 0u)
    {
        eax = t92;
        ecx = t93;
        edx = t94;
        goto L_1007b055;
    }
    edx = t94;
L_1007b04c: ;
    g->edx = edx;
    return -arg3;
L_1007b039: ;
    t91 = rd32(ecx + 8u);
    edx = t91;
    edi = 3u;
    loc_c = t91;
    loc_10 = esi;
    loc_14 = 3u;
    goto L_1007b040;
L_1007b055: ;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        goto L_1007b081;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t95 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, edi, esi);
    t96 = g->edx;
    if (t95 == 0u)
    {
        edx = t96;
        goto L_1007b08b;
    }
    eax = t95;
    edx = t96;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101f3570u), 1, rd16(eax));
    t97 = g->edx;
    g->edx = t97;
    return arg3;
L_1007b081: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101f3570u), 1, 0xffffffffu);
    t98 = g->edx;
    edx = t98;
L_1007b08b: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007adc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007adc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
