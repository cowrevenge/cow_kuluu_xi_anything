/* f_0x10297550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10297550(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    if (arg5 != 0u)
    {
        ecx = sp0 - 0x1cu;
        edx = 0u;
        ebx = rd32(sp0 + 0x18u);
L_102975cb: ;
        d8 = (double)(float)fr(g, (double)rdf32(arg1 + rd32(arg2 + edx * 4u) * 0xcu + 8u) - (double)rdf32(ebx + 8u));
        wrf32(sp0 - 0x28u, (float)d8);
        t9 = rd32(arg2 + edx * 4u);
        d10 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + rd32(arg2 + edx * 4u) * 0xcu) - (double)rdf32(ebx)) * (double)rdf32(sp0 + 0x1cu)) + (double)rdf32(arg1 + rd32(arg2 + edx * 4u) * 0xcu));
        d11 = fr(g, (double)rdf32(arg1 + rd32(arg2 + edx * 4u) * 0xcu + 4u) - (double)rdf32(ebx + 4u));
        wrf32(ecx - 8u, (float)d10);
        d12 = fr(g, fr(g, d11 * (double)rdf32(sp0 + 0x1cu)) + (double)rdf32(arg1 + t9 * 0xcu + 4u));
        wrf32(ecx - 4u, (float)d12);
        d13 = fr(g, fr(g, d8 * (double)rdf32(sp0 + 0x1cu)) + (double)rdf32(arg1 + t9 * 0xcu + 8u));
        wrf32(ecx, (float)d13);
        if ((int32_t)(edx + 1u) < 3)
        {
            ecx = ecx + 0xcu;
            edx = edx + 1u;
            goto L_102975cb;
        }
    }
    else
    {
        t1 = rd32(rd32(sp0 + 0x18u) + 8u);
        wr32(sp0 - 0x28u, t1);
        d2 = fr(g, (double)rdf32(rd32(sp0 + 0x18u)) * (double)rdf32(sp0 + 0x1cu));
        d3 = (double)rdf32(rd32(sp0 + 0x18u) + 4u);
        wrf32(sp0 + 0x18u, (float)d2);
        eax = sp0 - 0x1cu;
        edx = 0u;
        x1 = fr(g, cow_bits2f(t1) * (double)rdf32(sp0 + 0x1cu));
        x0 = fr(g, d3 * (double)rdf32(sp0 + 0x1cu));
L_10297592: ;
        t4 = rd32(arg2 + edx * 4u);
        d5 = fr(g, (double)rdf32(sp0 + 0x18u) + (double)rdf32(arg1 + rd32(arg2 + edx * 4u) * 0xcu));
        wrf32(eax - 8u, (float)d5);
        d6 = fr(g, x0 + (double)rdf32(arg1 + t4 * 0xcu + 4u));
        wrf32(eax - 4u, (float)d6);
        d7 = fr(g, x1 + (double)rdf32(arg1 + t4 * 0xcu + 8u));
        wrf32(eax, (float)d7);
        if ((int32_t)(edx + 1u) < 3)
        {
            eax = eax + 0xcu;
            edx = edx + 1u;
            goto L_10297592;
        }
    }
    eax = 0u;
L_10297619: ;
    t14 = rd32(arg1 + rd32(arg2 + eax * 4u) * 0xcu);
    wr32(rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u) + rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) * 0xcu, t14);
    t15 = rd32(arg1 + rd32(arg2 + eax * 4u) * 0xcu + 4u);
    wr32(rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u) + rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) * 0xcu + 4u, t15);
    t16 = rd32(arg1 + rd32(arg2 + eax * 4u) * 0xcu + 8u);
    wr32(rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u) + rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) * 0xcu + 8u, t16);
    t17 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t17);
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_10297619;
    }
    wr32(sp0 - 0x40u, in_ebp);
    if (arg3 != rd32(arg4))
    {
        t18 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t19 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t20 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t18);
        t21 = arg1 + rd32(arg2) * 0xcu;
        wr32(sp0 - 0x44u, t21);
        t22 = t19 * 0xcu + t20;
        wr32(sp0 - 0x48u, t22);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t22, t21);
        t23 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t24 = rd32(COW_IMG(0x1099d200u));
        t25 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t26 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t24 + 0x144u, t23);
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        t27 = t25 * 0xcu + t26;
        wr32(sp0 - 0x50u, t27);
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t27, sp0 - 0x24u);
        t28 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t29 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t30 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t28);
        t31 = arg1 + rd32(arg2 + 4u) * 0xcu;
        wr32(sp0 - 0x54u, t31);
        t32 = t29 * 0xcu + t30;
        wr32(sp0 - 0x58u, t32);
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t32, t31);
        t33 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t34 = rd32(COW_IMG(0x1099d200u));
        t35 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t36 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t34 + 0x144u, t33);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        t37 = t35 * 0xcu + t36;
        wr32(sp0 - 0x60u, t37);
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t37, sp0 - 0x18u);
        t38 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t39 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t40 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t38);
        t41 = arg1 + rd32(arg2 + 4u) * 0xcu;
        wr32(sp0 - 0x64u, t41);
        t42 = t39 * 0xcu + t40;
        wr32(sp0 - 0x68u, t42);
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t42, t41);
        t43 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t44 = rd32(COW_IMG(0x1099d200u));
        t45 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t46 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t44 + 0x144u, t43);
        wr32(sp0 - 0x6cu, sp0 - 0x24u);
        t47 = t45 * 0xcu + t46;
        wr32(sp0 - 0x70u, t47);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t47, sp0 - 0x24u);
    }
    if (arg3 != rd32(arg4 + 4u))
    {
        t48 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t49 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t50 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t48);
        t51 = arg1 + rd32(arg2 + 4u) * 0xcu;
        wr32(sp0 - 0x44u, t51);
        t52 = t49 * 0xcu + t50;
        wr32(sp0 - 0x48u, t52);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t52, t51);
        t53 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t54 = rd32(COW_IMG(0x1099d200u));
        t55 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t56 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t54 + 0x144u, t53);
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        t57 = t55 * 0xcu + t56;
        wr32(sp0 - 0x50u, t57);
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t57, sp0 - 0x18u);
        t58 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t59 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t60 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t58);
        t61 = arg1 + rd32(arg2 + 8u) * 0xcu;
        wr32(sp0 - 0x54u, t61);
        t62 = t59 * 0xcu + t60;
        wr32(sp0 - 0x58u, t62);
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t62, t61);
        t63 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t64 = rd32(COW_IMG(0x1099d200u));
        t65 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t66 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t64 + 0x144u, t63);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        t67 = t65 * 0xcu + t66;
        wr32(sp0 - 0x60u, t67);
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t67, sp0 - 0xcu);
        t68 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t69 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t70 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t68);
        t71 = arg1 + rd32(arg2 + 8u) * 0xcu;
        wr32(sp0 - 0x64u, t71);
        t72 = t69 * 0xcu + t70;
        wr32(sp0 - 0x68u, t72);
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t72, t71);
        t73 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t74 = rd32(COW_IMG(0x1099d200u));
        t75 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t76 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t74 + 0x144u, t73);
        wr32(sp0 - 0x6cu, sp0 - 0x18u);
        t77 = t75 * 0xcu + t76;
        wr32(sp0 - 0x70u, t77);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t77, sp0 - 0x18u);
    }
    if (arg3 != rd32(arg4 + 8u))
    {
        t78 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t79 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t80 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t78);
        t81 = arg1 + rd32(arg2 + 8u) * 0xcu;
        wr32(sp0 - 0x40u, t81);
        t82 = t79 * 0xcu + t80;
        wr32(sp0 - 0x44u, t82);
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t82, t81);
        t83 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t84 = rd32(COW_IMG(0x1099d200u));
        t85 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t86 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t84 + 0x144u, t83);
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        t87 = t85 * 0xcu + t86;
        wr32(sp0 - 0x4cu, t87);
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t87, sp0 - 0xcu);
        t88 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t89 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t90 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t88);
        t91 = arg1 + rd32(arg2) * 0xcu;
        wr32(sp0 - 0x50u, t91);
        t92 = t89 * 0xcu + t90;
        wr32(sp0 - 0x54u, t92);
        g->esp = sp0 - 0x4cu;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t92, t91);
        t93 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t94 = rd32(COW_IMG(0x1099d200u));
        t95 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t96 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t94 + 0x144u, t93);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        t97 = t95 * 0xcu + t96;
        wr32(sp0 - 0x5cu, t97);
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t97, sp0 - 0x24u);
        t98 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t99 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t100 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, t98);
        t101 = arg1 + rd32(arg2) * 0xcu;
        wr32(sp0 - 0x60u, t101);
        t102 = t100 + t99 * 0xcu;
        wr32(sp0 - 0x64u, t102);
        g->esp = sp0 - 0x5cu;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t102, t101);
        t103 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u) + 1u;
        t104 = rd32(COW_IMG(0x1099d200u));
        t105 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u);
        t106 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x140u);
        wr32(t104 + 0x144u, t103);
        wr32(sp0 - 0x68u, sp0 - 0xcu);
        t107 = t105 * 0xcu + t106;
        wr32(sp0 - 0x6cu, t107);
        g->esp = sp0 - 0x64u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t107, sp0 - 0xcu);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10297550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
