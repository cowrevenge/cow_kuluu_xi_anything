/* f_0x10291c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10291c80(Guest* g)
{
    uint32_t eax;
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
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10291cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291cac;
    case 0x10291d71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291d71;
    case 0x10291d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291d76;
    case 0x10291d7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291d7b;
    case 0x10291d80u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291d80;
    case 0x10291dbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291dbb;
    case 0x10291dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291dc7;
    case 0x10291dd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291dd9;
    case 0x10291ddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291dde;
    case 0x10291de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291de3;
    case 0x10291decu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291dec;
    case 0x10291df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291df3;
    case 0x10291e38u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291e38;
    case 0x10291e3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291e3f;
    case 0x10291e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10291e84;
    default: break;
    }
#endif

    COW_AT(10291c80)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb090u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if (arg2 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(10291cac)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->ebx = arg2;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb07cu), t9);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb07cu), t9);
        t14 = g->edx;
        t15 = rd32(arg1 + 0x1cu);
        g->ebx = arg2;
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp0 - 0x20u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb068u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb068u), t15);
        t20 = g->ecx;
        t21 = rd32(arg1 + 0x20u);
        g->ebx = arg2;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x2cu;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb054u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb054u), t21);
        t25 = g->ecx;
        t26 = g->edx;
        t27 = rd8(arg1 + 0x74u);
        g->ebx = arg2;
        g->eax = t27;
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0x38u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb040u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        g->edx = t30;
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb040u), t27);
        t32 = g->edx;
        t33 = rd32(arg1 + 0x68u);
        g->ebx = arg2;
        g->ecx = t33;
        g->edx = t32;
        g->esp = sp0 - 0x44u;
        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb02cu), t33);
        t35 = g->ecx;
        t36 = g->edx;
        g->ecx = t35;
        t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb02cu), t33);
        t38 = g->ecx;
        t39 = rd32(arg1 + 0x6cu);
        g->ebx = arg2;
        g->ecx = t38;
        g->edx = t39;
        g->esp = sp0 - 0x10u;
        t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb018u), t39);
        t41 = g->ecx;
        t42 = g->edx;
        g->ecx = t41;
        g->edx = t42;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb018u), t39);
        t43 = g->ecx;
        t44 = g->edx;
        t45 = rd32(arg1 + 0x70u);
        g->ebx = arg2;
        g->eax = t45;
        g->ecx = t43;
        g->edx = t44;
        g->esp = sp0 - 0x1cu;
        t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb004u), t45);
        t47 = g->ecx;
        t48 = g->edx;
        g->ecx = t47;
        g->edx = t48;
        t49 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb004u), t45);
        t50 = g->ecx;
        t51 = g->edx;
        g->ebx = arg2;
        g->ecx = t50;
        g->edx = t51;
        g->esp = sp0 - 0x28u;
        t52 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baff0u), arg1 + 0x24u);
        t53 = g->ecx;
        t54 = g->edx;
        g->edx = t54;
        t55 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baff0u), arg1 + 0x24u);
        t56 = g->edx;
        t57 = rd32(arg1 + 0x64u);
        g->ebx = arg2;
        g->ecx = t57;
        g->edx = t56;
        g->esp = sp0 - 0x34u;
        t58 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bafdcu), t57);
        t59 = g->ecx;
        t60 = g->edx;
        if (arg2 != 1u)
        {
            eax = t58;
            ecx = t59;
            edx = t60;
    COW_AT(10291d71)
            if (arg2 == 2u) goto L_10291d80;
    COW_AT(10291d76)
            if (arg2 == 5u) goto L_10291d80;
    COW_AT(10291d7b)
            if (arg2 != 6u) goto L_10291dd9;
L_10291d80: ;
    COW_AT(10291d80)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t61 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
            t62 = g->ecx;
            t63 = g->edx;
            g->ebx = arg2;
            g->ecx = t62;
            g->esp = sp0 - 0x14u;
            t64 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bafc4u), arg1 + 0x24u);
            t65 = g->ecx;
            g->ecx = t65;
            g->edx = arg3 + 2u;
            g->esp = sp0 - 0xcu;
            t66 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x24u, arg2, arg3 + 2u, COW_IMG(0x103bafc4u), arg1 + 0x24u, arg3 + 1u, in_edi);
            t67 = g->ecx;
            t68 = g->edx;
            g->ecx = t67;
            g->edx = t68;
            g->esp = sp0 - 0x20u;
            t69 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, arg1 + 0x24u, arg2);
            t70 = g->ecx;
            t71 = g->edx;
            g->ebx = arg2;
            g->ecx = t70;
            g->edx = t71;
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bafb4u), arg3 + 1u);
            t72 = g->ecx;
            t73 = g->edx;
            if (rd32(arg1 + 0x64u) == 0u)
            {
                eax = rd32(arg1 + 0x64u);
                ecx = t72;
                edx = t73;
    COW_AT(10291dc7)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t76 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
                t77 = g->ecx;
                t78 = g->edx;
                g->ebx = arg2;
                g->ecx = t77;
                g->edx = t78;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bafacu), arg3 + 1u);
                t79 = g->ecx;
                t80 = g->edx;
                ecx = t79;
                edx = t80;
            }
            else
            {
                eax = rd32(arg1 + 0x64u);
                ecx = t72;
                edx = t73;
    COW_AT(10291dbb)
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x102857a0u), 3, eax, arg2, arg3 + 1u);
                t74 = g->ecx;
                t75 = g->edx;
                ecx = t74;
                edx = t75;
            }
L_10291dd9: ;
    COW_AT(10291dd9)
            if (arg2 == 4u) goto L_10291dec;
    COW_AT(10291dde)
            if (arg2 == 5u) goto L_10291dec;
    COW_AT(10291de3)
            if (arg2 != 6u) goto L_10291e84;
L_10291dec: ;
    COW_AT(10291dec)
            if (rd32(arg1 + 0x6cu) != 0u)
            {
                eax = rd32(arg1 + 0x6cu);
    COW_AT(10291df3)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t81 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
                t82 = g->ecx;
                t83 = g->edx;
                g->ebx = arg2;
                g->ecx = t82;
                g->edx = t83;
                g->esp = sp0 - 0x10u;
                t84 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bafa0u), arg3 + 1u);
                t85 = g->ecx;
                t86 = g->edx;
                g->ecx = t85;
                g->edx = t86;
                t87 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bafa0u), arg3 + 1u);
                t88 = g->ecx;
                t89 = g->edx;
                g->ebx = arg2;
                g->edx = t89;
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba878u), arg3 + 1u);
                t90 = g->edx;
                t91 = rd32(arg1 + 0x6cu);
                g->eax = arg3 + 4u;
                g->ecx = t91;
                g->edx = t90;
                g->esp = sp0 - 8u;
                t92 = cow_cdecl(g, COW_IMG(0x10291c80u), 9, t91, arg2, arg3 + 4u, COW_IMG(0x103ba878u), arg3 + 1u, COW_IMG(0x103bafa0u), arg3 + 1u, in_edi, in_esi);
                t93 = g->ecx;
                t94 = g->edx;
                g->ecx = t93;
                g->edx = t94;
                g->esp = sp0 - 0x24u;
                t95 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, t91, arg2);
                t96 = g->ecx;
                t97 = g->edx;
                g->ebx = arg2;
                g->ecx = t96;
                g->edx = t97;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), arg3 + 1u);
                t98 = g->ecx;
                t99 = g->edx;
                ecx = t98;
                edx = t99;
            }
    COW_AT(10291e38)
            if (rd32(arg1 + 0x70u) != 0u)
            {
                eax = rd32(arg1 + 0x70u);
    COW_AT(10291e3f)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t100 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
                t101 = g->ecx;
                t102 = g->edx;
                g->ebx = arg2;
                g->ecx = t101;
                g->edx = t102;
                g->esp = sp0 - 0x10u;
                t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baf94u), arg3 + 1u);
                t104 = g->ecx;
                t105 = g->edx;
                g->ecx = t104;
                g->edx = t105;
                t106 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baf94u), arg3 + 1u);
                t107 = g->ecx;
                t108 = g->edx;
                g->ebx = arg2;
                g->ecx = t107;
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba878u), arg3 + 1u);
                t109 = g->ecx;
                t110 = rd32(arg1 + 0x70u);
                g->eax = t110;
                g->ecx = t109;
                g->edx = arg3 + 4u;
                g->esp = sp0 - 8u;
                t111 = cow_cdecl(g, COW_IMG(0x10291c80u), 9, t110, arg2, arg3 + 4u, COW_IMG(0x103ba878u), arg3 + 1u, COW_IMG(0x103baf94u), arg3 + 1u, in_edi, in_esi);
                t112 = g->ecx;
                t113 = g->edx;
                g->ecx = t112;
                g->edx = t113;
                g->esp = sp0 - 0x24u;
                t114 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, t110, arg2);
                t115 = g->ecx;
                t116 = g->edx;
                g->ebx = arg2;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), arg3 + 1u);
            }
        }
    }
L_10291e84: ;
    COW_AT(10291e84)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10291c80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10291cacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291d71u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1 + 0x24u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291d76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1 + 0x24u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291d7bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1 + 0x24u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291d80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg1 + 0x24u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291dbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x14u, arg3 + 1u);
        (void)sp0;
        return 1;
    }
    case 0x10291dc7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x14u, arg3 + 1u);
        (void)sp0;
        return 1;
    }
    case 0x10291dd9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291ddeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291de3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291decu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291df3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291e38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291e3fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10291e84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10291c80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10291c80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
