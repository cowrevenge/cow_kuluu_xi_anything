/* f_0x102a1b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a1b20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 344u);

    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, sp0 - 0x10cu);
    wr32(sp0 - 0x108u, 1u);
    g->eax = sp0 - 0x10cu;
    g->esp = sp0 - 0x114u;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 0x10cu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_102a1b70;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x118u, 0x51du);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x124u, COW_IMG(0x103bd430u));
    wr32(sp0 - 0x128u, COW_IMG(0x103bcb40u));
    g->edx = t6;
    g->esp = sp0 - 0x120u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd430u));
    t8 = g->edx;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_102a1b70: ;
    wr32(sp0 - 0x118u, 3u);
    t9 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x11cu, t9);
    wr32(sp0 - 0x120u, arg1);
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 0xfcu;
    t10 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t9, 3u, in_esi, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), 1u, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_102a1bc9;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0x118u, 0x51du);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x118u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t14 = g->ecx;
    t15 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x118u, t15);
    wr32(sp0 - 0x11cu, 3u);
    g->ecx = t14;
    g->edx = t15;
    t16 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, 3u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x11cu, t16);
    wr32(sp0 - 0x120u, COW_IMG(0x103bcbe8u));
    g->edx = t18;
    t19 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), t16);
    t20 = g->edx;
    g->esi = rd32(sp0 - 0x114u);
    g->edx = t20;
    return t19 & 0xffffff00u;
L_102a1bc9: ;
    wr32(sp0 - 0x118u, sp0 - 0x110u);
    g->eax = sp0 - 0x110u;
    g->esp = sp0 - 0x114u;
    t21 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x110u);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        ecx = t22;
        edx = t23;
        goto L_102a1c27;
    }
    eax = t21;
    edx = t23;
L_102a1bda: ;
    wr32(sp0 - 0x118u, COW_IMG(0x103bd428u));
    t24 = rd32(sp0 - 0x110u);
    wr32(sp0 - 0x11cu, t24);
    g->eax = eax;
    g->esp = sp0 - 0x100u;
    t25 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t24, edx, 1, 7, t24, COW_IMG(0x103bd428u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        goto L_102a1c8e;
    }
    eax = t25;
    ecx = t26;
    wr32(sp0 - 0x118u, sp0 - 0x108u);
    g->eax = eax;
    g->esp = sp0 - 0x114u;
    t28 = cow_call_regs(g, COW_IMG(0x102afcb0u), g->eax, ecx, sp0 - 0x108u, 1, 1, sp0 - 0x108u);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        goto L_102a1c5e;
    }
    ecx = t29;
    edx = t30;
L_102a1c05: ;
    wr32(sp0 - 0x118u, sp0 - 0x110u);
    g->eax = sp0 - 0x110u;
    g->esp = sp0 - 0x114u;
    t31 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x110u);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        ecx = t32;
        edx = t33;
        goto L_102a1c05;
    }
    eax = t31;
    edx = t33;
    wr32(sp0 - 0x118u, sp0 - 0x110u);
    g->eax = eax;
    g->esp = sp0 - 0x114u;
    t34 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x110u, edx, 1, 1, sp0 - 0x110u);
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 != 0u)
    {
        eax = t34;
        edx = t36;
        goto L_102a1bda;
    }
    ecx = t35;
    edx = t36;
L_102a1c27: ;
    if (rd32(sp0 - 0x108u) != 0u) goto L_102a1cbe;
    eax = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x118u, 0x52bu);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0x124u, COW_IMG(0x103bd3f4u));
    g->edx = t49;
    g->esp = sp0 - 0x11cu;
    t50 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd3f4u), COW_IMG(0x103b379cu));
    t51 = g->edx;
    g->esi = rd32(sp0 - 0x114u);
    g->edx = t51;
    return t50 & 0xffffff00u;
L_102a1c5e: ;
    wr32(sp0 - 0x118u, 0x520u);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t37 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x124u, COW_IMG(0x103bd3e8u));
    wr32(sp0 - 0x128u, COW_IMG(0x103bca3cu));
    g->edx = t39;
    g->esp = sp0 - 0x120u;
    t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd3e8u));
    t41 = g->edx;
    g->esi = rd32(sp0 - 0x114u);
    g->edx = t41;
    return t40 & 0xffffff00u;
L_102a1c8e: ;
    wr32(sp0 - 0x118u, 0x525u);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x118u;
    t42 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t43 = g->ecx;
    t44 = rd32(sp0 - 0x110u);
    wr32(sp0 - 0x124u, t44);
    wr32(sp0 - 0x128u, COW_IMG(0x103bd3c8u));
    g->edx = t44;
    g->esp = sp0 - 0x120u;
    t45 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd3c8u), t44);
    t46 = g->edx;
    g->esi = rd32(sp0 - 0x114u);
    g->edx = t46;
    return t45 & 0xffffff00u;
L_102a1cbe: ;
    wr32(sp0 - 0x118u, sp0 - 0x104u);
    t52 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x11cu, t52);
    wr32(sp0 - 0x120u, arg1);
    g->eax = sp0 - 0x104u;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    t53 = cow_cdecl(g, COW_IMG(0x10279d90u), 3, arg1, t52, sp0 - 0x104u);
    t54 = g->edx;
    if (rd32(t53) == 0xa0009u)
    {
        eax = t53;
        goto L_102a1d06;
    }
    eax = t53;
    ecx = rd32(t53);
    edx = t54;
    wr32(sp0 - 0x118u, 0x530u);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t55 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t56 = g->ecx;
    t57 = g->edx;
    wr32(sp0 - 0x124u, COW_IMG(0x103bd39cu));
    g->edx = t57;
    g->esp = sp0 - 0x11cu;
    t58 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd39cu), COW_IMG(0x103b379cu));
    t59 = g->edx;
    g->esi = rd32(sp0 - 0x114u);
    g->edx = t59;
    return t58 & 0xffffff00u;
L_102a1d06: ;
    wr32(sp0 - 0x118u, in_edi);
    wr32(sp0 - 0x11cu, 0u);
    t60 = rd32(rd32(arg1 + 0x50u) + rd32(sp0 - 0x104u) * 4u);
    wr32(sp0 - 0x120u, t60);
    t61 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x124u, t61);
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->ecx = t61;
    g->esp = sp0 - 0x118u;
    t62 = cow_cdecl(g, COW_IMG(0x1029b3c0u), 4, eax, t61, t60, 0u);
    t63 = g->ecx;
    t64 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, t64);
    wr32(sp0 - 0x130u, COW_IMG(0x103b3b4cu));
    wr32(sp0 - 0x134u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0x120u;
    t65 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103b3b4cu), t64, rd32(sp0 - 0x128u), rd32(sp0 - 0x124u));
    t66 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x138u, t66);
    wr32(sp0 - 0x13cu, 2u);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    wr32(sp0 - 0x144u, arg1);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x134u;
    t67 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t66, 4, arg1, sp0 - 0x100u, 2u, t66);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x148u, t62);
    wr32(sp0 - 0x14cu, arg1);
    g->edx = t69;
    g->esp = sp0 - 0x138u;
    t70 = cow_thiscall_cdecl(g, COW_IMG(0x10279550u), t68, 5, arg1, t62, arg1, sp0 - 0x100u, 2u);
    t71 = g->ecx;
    t72 = g->edx;
    wr32(sp0 - 0x150u, t62);
    wr32(sp0 - 0x154u, arg1);
    g->edx = t72;
    g->esp = sp0 - 0x148u;
    cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), t71, 3, arg1, t62, arg1);
    t73 = g->edx;
    t74 = (rd32(rd32(arg1 + 0x54u) + rd32(sp0 - 0x104u) * 4u) & 0xffff00ffu) | (uint8_t)(rd32(rd32(arg1 + 0x54u) + rd32(sp0 - 0x104u) * 4u) >> 8u | 0x40u) << 8u;
    t75 = rd32(arg1 + 0x54u);
    t76 = rd32(sp0 - 0x104u);
    t77 = rd32(sp0 - 0x114u);
    wr32(t75 + t76 * 4u, t74);
    g->esi = t77;
    g->edx = t73;
    return (t75 + t76 * 4u & 0xffffff00u) | (uint8_t)(t75 + t76 * 4u | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a1b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
