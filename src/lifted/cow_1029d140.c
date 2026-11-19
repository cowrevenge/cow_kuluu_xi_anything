/* f_0x1029d140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029d140(Guest* g)
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029d154u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d154;
    case 0x1029d180u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d180;
    case 0x1029d191u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d191;
    case 0x1029d1bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d1bd;
    case 0x1029d1d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d1d7;
    case 0x1029d1f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d1f1;
    case 0x1029d20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d20b;
    case 0x1029d225u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d225;
    case 0x1029d23fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d23f;
    case 0x1029d259u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d259;
    case 0x1029d273u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d273;
    case 0x1029d28du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d28d;
    case 0x1029d2a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d2a7;
    case 0x1029d2c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d2c1;
    case 0x1029d2d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d2d7;
    case 0x1029d2edu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d2ed;
    case 0x1029d303u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d303;
    case 0x1029d31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d31b;
    case 0x1029d347u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d347;
    case 0x1029d35fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d35f;
    case 0x1029d377u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d377;
    case 0x1029d38fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d38f;
    case 0x1029d3a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d3a7;
    case 0x1029d3bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029d3bf;
    default: break;
    }
#endif

    COW_AT(1029d140)
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), self, 1, sp0 - 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1029d180;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1029d154)
    wr32(sp0 - 0xcu, 0x17bu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bca5cu));
    wr32(sp0 - 0x1cu, COW_IMG(0x103bca3cu));
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bca5cu));
    t8 = g->edx;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_1029d180: ;
    COW_AT(1029d180)
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 8u, edx, 1, 1, sp0 - 8u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        goto L_1029d1bd;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1029d191)
    wr32(sp0 - 0xcu, 0x17cu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bca2cu));
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc94cu));
    g->edx = t14;
    g->esp = sp0 - 0x14u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bca2cu));
    t16 = g->edx;
    g->edx = t16;
    return t15 & 0xffffff00u;
L_1029d1bd: ;
    COW_AT(1029d1bd)
    wr32(sp0 - 0xcu, COW_IMG(0x103b3ee4u));
    t17 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t17);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t17, 1, 2, t17, COW_IMG(0x103b3ee4u));
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        goto L_1029d3bf;
    }
    ecx = t19;
    edx = t20;
    COW_AT(1029d1d7)
    wr32(sp0 - 0xcu, COW_IMG(0x103bca20u));
    t21 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t21);
    g->eax = t21;
    g->esp = sp0 - 8u;
    t22 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 2, t21, COW_IMG(0x103bca20u));
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        goto L_1029d3bf;
    }
    eax = t22;
    edx = t23;
    COW_AT(1029d1f1)
    wr32(sp0 - 0xcu, COW_IMG(0x103b3edcu));
    t24 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t24);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t25 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t24, edx, 1, 2, t24, COW_IMG(0x103b3edcu));
    t26 = g->ecx;
    if (t25 == 0u)
    {
        ecx = t26;
        goto L_1029d3a7;
    }
    eax = t25;
    ecx = t26;
    COW_AT(1029d20b)
    wr32(sp0 - 0xcu, COW_IMG(0x103bca18u));
    t27 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t27);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t28 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t27, 1, 2, t27, COW_IMG(0x103bca18u));
    t29 = g->ecx;
    t30 = g->edx;
    if (t28 == 0u)
    {
        ecx = t29;
        goto L_1029d3a7;
    }
    ecx = t29;
    edx = t30;
    COW_AT(1029d225)
    wr32(sp0 - 0xcu, COW_IMG(0x103b3eccu));
    t31 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t31);
    g->eax = t31;
    g->esp = sp0 - 8u;
    t32 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 2, t31, COW_IMG(0x103b3eccu));
    t33 = g->edx;
    if (t32 == 0u)
    {
        edx = t33;
        goto L_1029d38f;
    }
    eax = t32;
    edx = t33;
    COW_AT(1029d23f)
    wr32(sp0 - 0xcu, COW_IMG(0x103bca10u));
    t34 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t34);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t35 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t34, edx, 1, 2, t34, COW_IMG(0x103bca10u));
    t36 = g->ecx;
    t37 = g->edx;
    if (t35 == 0u)
    {
        edx = t37;
        goto L_1029d38f;
    }
    eax = t35;
    ecx = t36;
    COW_AT(1029d259)
    wr32(sp0 - 0xcu, COW_IMG(0x103b3ed4u));
    t38 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t38);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t39 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t38, 1, 2, t38, COW_IMG(0x103b3ed4u));
    t40 = g->ecx;
    t41 = g->edx;
    if (t39 == 0u)
    {
        eax = t39;
        goto L_1029d377;
    }
    ecx = t40;
    edx = t41;
    COW_AT(1029d273)
    wr32(sp0 - 0xcu, COW_IMG(0x103bca04u));
    t42 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t42);
    g->eax = t42;
    g->esp = sp0 - 8u;
    t43 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 2, t42, COW_IMG(0x103bca04u));
    t44 = g->edx;
    if (t43 == 0u)
    {
        eax = t43;
        goto L_1029d377;
    }
    eax = t43;
    edx = t44;
    COW_AT(1029d28d)
    wr32(sp0 - 0xcu, COW_IMG(0x103bca00u));
    t45 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t45);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t46 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t45, edx, 1, 2, t45, COW_IMG(0x103bca00u));
    t47 = g->ecx;
    if (t46 == 0u)
    {
        ecx = t47;
        goto L_1029d35f;
    }
    eax = t46;
    ecx = t47;
    COW_AT(1029d2a7)
    wr32(sp0 - 0xcu, COW_IMG(0x103bc9f8u));
    t48 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t48);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t49 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t48, 1, 2, t48, COW_IMG(0x103bc9f8u));
    t50 = g->ecx;
    t51 = g->edx;
    if (t49 == 0u)
    {
        ecx = t50;
        goto L_1029d35f;
    }
    ecx = t50;
    edx = t51;
    COW_AT(1029d2c1)
    wr32(sp0 - 0xcu, COW_IMG(0x103905fcu));
    t52 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t52);
    g->eax = t52;
    g->esp = sp0 - 8u;
    t53 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 2, t52, COW_IMG(0x103905fcu));
    t54 = g->edx;
    if (t53 == 0u)
    {
        edx = t54;
        goto L_1029d347;
    }
    eax = t53;
    edx = t54;
    COW_AT(1029d2d7)
    wr32(sp0 - 0xcu, COW_IMG(0x103bc9f0u));
    t55 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t55);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t56 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t55, edx, 1, 2, t55, COW_IMG(0x103bc9f0u));
    t57 = g->ecx;
    t58 = g->edx;
    if (t56 == 0u)
    {
        edx = t58;
        goto L_1029d347;
    }
    eax = t56;
    ecx = t57;
    COW_AT(1029d2ed)
    wr32(sp0 - 0xcu, COW_IMG(0x1038a350u));
    t59 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t59);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t60 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t59, 1, 2, t59, COW_IMG(0x1038a350u));
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 != 0u)
    {
        eax = t60;
        ecx = t61;
        edx = t62;
        goto L_1029d31b;
    }
    edx = t62;
    COW_AT(1029d303)
    t63 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t63);
    wr32(sp0 - 0x10u, arg1);
    g->eax = t63;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t64 = cow_cdecl(g, COW_IMG(0x10279330u), 2, arg1, t63);
    t65 = g->edx;
    g->edx = t65;
    return (t64 & 0xffffff00u) | (uint8_t)(t64 | 0xffu);
L_1029d31b: ;
    COW_AT(1029d31b)
    wr32(sp0 - 0xcu, 0x192u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t66 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t67 = g->ecx;
    t68 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t68);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc9ccu));
    g->edx = t68;
    g->esp = sp0 - 0x14u;
    t69 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc9ccu), t68);
    t70 = g->edx;
    g->edx = t70;
    return t69 & 0xffffff00u;
L_1029d347: ;
    COW_AT(1029d347)
    t71 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t71);
    wr32(sp0 - 0x10u, arg1);
    g->eax = t71;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t72 = cow_cdecl(g, COW_IMG(0x102793f0u), 2, arg1, t71);
    t73 = g->edx;
    g->edx = t73;
    return (t72 & 0xffffff00u) | (uint8_t)(t72 | 0xffu);
L_1029d35f: ;
    COW_AT(1029d35f)
    t74 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t74);
    wr32(sp0 - 0x10u, arg1);
    g->eax = arg1;
    g->edx = t74;
    g->esp = sp0 - 8u;
    t75 = cow_cdecl(g, COW_IMG(0x10279380u), 2, arg1, t74);
    t76 = g->edx;
    g->edx = t76;
    return (t75 & 0xffffff00u) | (uint8_t)(t75 | 0xffu);
L_1029d377: ;
    COW_AT(1029d377)
    t77 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t77);
    wr32(sp0 - 0x10u, arg1);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t78 = cow_cdecl(g, COW_IMG(0x10279210u), 2, arg1, t77);
    t79 = g->edx;
    g->edx = t79;
    return (t78 & 0xffffff00u) | (uint8_t)(t78 | 0xffu);
L_1029d38f: ;
    COW_AT(1029d38f)
    t80 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t80);
    wr32(sp0 - 0x10u, arg1);
    g->eax = t80;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t81 = cow_cdecl(g, COW_IMG(0x10279270u), 2, arg1, t80);
    t82 = g->edx;
    g->edx = t82;
    return (t81 & 0xffffff00u) | (uint8_t)(t81 | 0xffu);
L_1029d3a7: ;
    COW_AT(1029d3a7)
    t83 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t83);
    wr32(sp0 - 0x10u, arg1);
    g->eax = arg1;
    g->edx = t83;
    g->esp = sp0 - 8u;
    t84 = cow_cdecl(g, COW_IMG(0x102791c0u), 2, arg1, t83);
    t85 = g->edx;
    g->edx = t85;
    return (t84 & 0xffffff00u) | (uint8_t)(t84 | 0xffu);
L_1029d3bf: ;
    COW_AT(1029d3bf)
    t86 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t86);
    wr32(sp0 - 0x10u, arg1);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t87 = cow_cdecl(g, COW_IMG(0x102790e0u), 2, arg1, t86);
    t88 = g->edx;
    g->edx = t88;
    return (t87 & 0xffffff00u) | (uint8_t)(t87 | 0xffu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029d140(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029d154u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029d180u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029d191u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029d1bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029d1d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d1f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d20bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d225u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d23fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d259u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d273u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d28du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d2a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d2c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d2d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d2edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d303u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d31bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d347u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d35fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d377u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d38fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d3a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029d3bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029d140(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029d140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
