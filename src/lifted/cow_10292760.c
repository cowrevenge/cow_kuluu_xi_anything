/* f_0x10292760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10292760(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_mc;
    double d21;
    double d45;
    double d59;
    double d60;
    double d78;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t6;
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
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x18u, in_ebx);
    wr32(sp1 - 0x1cu, in_esi);
    wr32(sp1 - 0x20u, in_edi);
    wr32(sp1 - 0x24u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 0x28u, arg1);
    wr32(sp1 - 0x2cu, COW_IMG(0x103bb3e8u));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp1 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3e8u), arg1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = arg2;
        edx = t5;
    }
    else
    {
        ecx = t4;
        edx = t5;
        wr32(sp1 - 0x24u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp1 - 0x28u, rd32(arg1));
        wr32(sp1 - 0x2cu, COW_IMG(0x103b41dcu));
        g->eax = rd32(arg1);
        g->ecx = t6;
        g->edx = t7;
        t8 = rd32(arg1);
        g->esp = sp1 - 0x24u;
        t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t8);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp1 - 0x30u, arg3 + 1u);
        g->edx = t11;
        t12 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), rd32(sp1 - 0x28u));
        t13 = g->edx;
        t14 = rd32(arg1 + 0x1cu);
        wr32(sp1 - 0x34u, t14);
        wr32(sp1 - 0x38u, COW_IMG(0x103bb3d8u));
        g->ecx = t14;
        g->edx = t13;
        g->esp = sp1 - 0x30u;
        t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3d8u), t14);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp1 - 0x3cu, arg3 + 1u);
        g->ecx = t16;
        g->edx = t17;
        t18 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3d8u), rd32(sp1 - 0x34u));
        t19 = g->ecx;
        t20 = g->edx;
        d21 = (double)rdf32(arg1 + 0x20u);
        wrf64(sp1 - 0x28u, d21);
        wr32(sp1 - 0x2cu, COW_IMG(0x103bb3c8u));
        g->ecx = t19;
        g->edx = t20;
        g->esp = sp1 - 0x24u;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3c8u), cow_dlo(d21));
        t23 = g->ecx;
        t24 = g->edx;
        wr32(sp1 - 0x30u, arg3 + 1u);
        g->ecx = t23;
        t25 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3c8u), rd32(sp1 - 0x28u));
        t26 = g->ecx;
        t27 = rd32(arg1 + 0x24u);
        wr32(sp1 - 0x34u, t27);
        wr32(sp1 - 0x38u, COW_IMG(0x103bb3b8u));
        g->ecx = t26;
        g->edx = t27;
        g->esp = sp1 - 0x30u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3b8u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        wr32(sp1 - 0x3cu, arg3 + 1u);
        g->ecx = t29;
        g->edx = t30;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3b8u), rd32(sp1 - 0x34u));
        t31 = g->ecx;
        t32 = g->edx;
        t33 = rd32(arg1 + 0x4cu);
        wr32(sp1 - 0x40u, t33);
        wr32(sp1 - 0x44u, COW_IMG(0x103bb3a8u));
        g->eax = t33;
        g->ecx = t31;
        g->edx = t32;
        g->esp = sp1 - 0x3cu;
        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3a8u), t33);
        t35 = g->ecx;
        t36 = g->edx;
        wr32(sp1 - 0x48u, arg3 + 1u);
        g->ecx = t35;
        g->edx = t36;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3a8u), rd32(sp1 - 0x40u));
        t37 = g->ecx;
        t38 = g->edx;
        if (rd32(arg1 + 0x28u) != 1u)
        {
            eax = rd32(arg1 + 0x28u);
            ecx = t37;
            edx = t38;
            if (eax == 2u)
            {
                eax = COW_IMG(0x103bb398u);
            }
            else
            {
                eax = COW_IMG(0x103bb390u);
            }
        }
        else
        {
            ecx = t37;
            edx = t38;
            eax = COW_IMG(0x103bb3a0u);
        }
        wr32(sp1 - 0x24u, eax);
        wr32(sp1 - 0x28u, COW_IMG(0x103bb37cu));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x20u;
        t39 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb37cu), eax);
        t40 = g->ecx;
        t41 = g->edx;
        wr32(sp1 - 0x2cu, arg3 + 1u);
        g->ecx = t40;
        g->edx = t41;
        t42 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb37cu), rd32(sp1 - 0x24u));
        t43 = g->ecx;
        t44 = g->edx;
        d45 = (double)rdf32(arg1 + 0x30u);
        wrf64(sp1 - 0x28u, d45);
        wr32(sp1 - 0x2cu, COW_IMG(0x103bb368u));
        g->ecx = t43;
        g->edx = t44;
        g->esp = sp1 - 0x24u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb368u), cow_dlo(d45));
        t46 = g->ecx;
        t47 = g->edx;
        if (rd32(arg1 + 0x1cu) == 0u)
        {
            eax = rd32(arg1 + 0x1cu);
            edx = t47;
        }
        else
        {
            ecx = t46;
            edx = t47;
            wr32(sp1 - 0x24u, arg3 + 1u);
            if (rd32(arg1 + 0x34u) == 0u)
            {
                eax = rd32(arg1 + 0x34u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x18u;
                t82 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t83 = g->ecx;
                t84 = g->edx;
                wr32(sp1 - 0x28u, COW_IMG(0x103bb2c8u));
                g->ecx = t83;
                g->edx = t84;
                g->esp = sp1 - 0x20u;
                t85 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb2c8u), arg3 + 1u);
                t86 = g->ecx;
                t87 = g->edx;
                eax = t85;
                ecx = t86;
                edx = t87;
            }
            else
            {
                eax = rd32(arg1 + 0x34u);
                wr32(sp1 - 0xcu, 0u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x18u;
                t48 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t49 = g->ecx;
                t50 = g->edx;
                wr32(sp1 - 0x28u, COW_IMG(0x103bb35cu));
                g->edx = t50;
                g->esp = sp1 - 0x20u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb35cu), arg3 + 1u);
                t51 = g->edx;
                wr32(sp1 - 0x10u, 0u);
                if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
                {
                    ecx = rd32(arg1 + 0x1cu);
                    edx = t51;
                    ebx = 0u;
                    al_mc = 0u;
                    goto L_10292957;
                }
                eax = 0u;
                ebx = 0u;
                al_m10 = 0u;
L_1029288b: ;
                t52 = ebx + rd32(rd32(eax * 4u + rd32(arg1 + 0x34u)) + 8u);
                wr32(sp1 - 0xcu, t52);
                if ((int32_t)arg2 < 2)
                {
                    edx = rd32(rd32(eax * 4u + rd32(arg1 + 0x34u)) + 8u);
                    ebx = t52;
                    al_mc = t52;
                }
                else
                {
                    esi = rd32(eax * 4u + rd32(arg1 + 0x34u));
                    al_mc = t52;
                    wr32(sp1 - 0x24u, arg3 + 2u);
                    g->esp = sp1 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t53 = rd32(esi + 0xcu);
                    wr32(sp1 - 0x28u, t53);
                    t54 = rd32(esi + 8u);
                    wr32(sp1 - 0x2cu, t54);
                    t55 = rd32(sp1 - 0x10u);
                    wr32(sp1 - 0x30u, t55);
                    wr32(sp1 - 0x34u, COW_IMG(0x103bb33cu));
                    g->ecx = t54;
                    g->edx = t55;
                    g->esp = sp1 - 0x2cu;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb33cu), t55);
                    t56 = g->ecx;
                    t57 = g->edx;
                    wr32(sp1 - 4u, 0u);
                    t58 = rd32(arg1 + 0x24u) << 2u;
                    wr32(sp1 - 8u, t58);
                    d59 = fr(g, (double)(int32_t)rd32(esi + 8u) / (double)(int32_t)t58);
                    wrf64(sp1 - 0x28u, d59);
                    d60 = (double)rdf32(esi + 0x10u);
                    wrf64(sp1 - 0x30u, d60);
                    wr32(sp1 - 0x34u, COW_IMG(0x103bb320u));
                    g->eax = t58;
                    g->ecx = t56;
                    g->edx = t57;
                    t61 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb320u), cow_dlo(d60));
                    t62 = g->ecx;
                    t63 = g->edx;
                    wr32(sp1 - 0x38u, arg3 + 2u);
                    g->ecx = t62;
                    g->edx = t63;
                    t64 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103bb320u), rd32(sp1 - 0x30u));
                    t65 = g->ecx;
                    t66 = g->edx;
                    wr32(sp1 - 0x3cu, COW_IMG(0x103bb310u));
                    g->ecx = t65;
                    g->edx = t66;
                    g->esp = sp1 - 0x34u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb310u), arg3 + 2u);
                    t67 = g->ecx;
                    t68 = g->edx;
                    if ((int32_t)rd32(esi + 8u) <= 0)
                    {
                        eax = rd32(esi + 8u);
                        ecx = t67;
                        edx = t68;
                        goto L_10292932;
                    }
                    eax = rd32(esi + 8u);
                    ebx = 0u;
L_10292915: ;
                    t69 = (uint32_t)(int8_t)rd8(ebx + rd32(esi + 4u));
                    wr32(sp1 - 0x24u, t69);
                    wr32(sp1 - 0x28u, COW_IMG(0x103ba458u));
                    g->ecx = rd32(esi + 4u);
                    g->edx = t69;
                    t70 = rd32(esi + 4u);
                    g->esp = sp1 - 0x20u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba458u), t69);
                    t71 = g->ecx;
                    t72 = g->edx;
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 8u))
                    {
                        eax = rd32(esi + 8u);
                        ebx = ebx + 1u;
                        goto L_10292915;
                    }
                    eax = rd32(esi + 8u);
                    ecx = t71;
                    edx = t72;
L_10292932: ;
                    wr32(sp1 - 0x24u, COW_IMG(0x10350e4cu));
                    g->edx = edx;
                    g->esp = sp1 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x20u));
                    t73 = g->edx;
                    eax = rd32(sp1 - 0x10u);
                    edx = t73;
                    ebx = rd32(sp1 - 0xcu);
                }
                wr32(sp1 - 0x10u, eax + 1u);
                if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x1cu))
                {
                    al_m10 = eax + 1u;
                    eax = eax + 1u;
                    goto L_1029288b;
                }
                ecx = rd32(arg1 + 0x1cu);
L_10292957: ;
                t74 = rd32(arg1 + 0x24u) * rd32(arg1 + 0x1cu) * 4u;
                wr32(sp1 - 0x10u, t74);
                if ((int32_t)ebx <= 0)
                {
                    eax = t74;
                }
                else
                {
                    al_m10 = t74;
                    wr32(sp1 - 0x24u, arg3 + 1u);
                    g->eax = arg3 + 1u;
                    g->ecx = arg3;
                    g->edx = edx;
                    g->esp = sp1 - 0x18u;
                    t75 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t76 = g->ecx;
                    t77 = g->edx;
                    wr32(sp1 - 0x28u, t76);
                    d78 = fr(g, (double)(int32_t)rd32(sp1 - 0x10u) / (double)(int32_t)rd32(sp1 - 0xcu));
                    wrf64(sp1 - 0x28u, d78);
                    wr32(sp1 - 0x2cu, COW_IMG(0x103bb2f8u));
                    g->ecx = t76;
                    g->edx = t77;
                    g->esp = sp1 - 0x24u;
                    t79 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb2f8u), cow_dlo(d78));
                    t80 = g->ecx;
                    t81 = g->edx;
                    eax = t79;
                    ecx = t80;
                    edx = t81;
                }
            }
            if ((int32_t)arg2 >= 2)
            {
                if (rd32(arg1 + 0x4cu) != 0u)
                {
                    eax = rd32(arg1 + 0x4cu);
                    wr32(sp1 - 0x24u, arg3 + 2u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = arg3 + 2u;
                    g->esp = sp1 - 0x18u;
                    t88 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t89 = g->ecx;
                    t90 = g->edx;
                    wr32(sp1 - 0x28u, COW_IMG(0x103bb2e8u));
                    g->ecx = t89;
                    g->edx = t90;
                    g->esp = sp1 - 0x20u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb2e8u), arg3 + 2u);
                    t91 = g->ecx;
                    t92 = g->edx;
                    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
                    {
                        eax = rd32(arg1 + 0x1cu);
                        ecx = t91;
                        edx = t92;
                        goto L_102929dd;
                    }
                    edx = t92;
                    esi = 0u;
L_102929c1: ;
                    t93 = rd32(esi * 4u + rd32(arg1 + 0x4cu));
                    wr32(sp1 - 0x24u, t93);
                    wr32(sp1 - 0x28u, COW_IMG(0x103ba458u));
                    g->ecx = t93;
                    g->edx = edx;
                    g->esp = sp1 - 0x20u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba458u), t93);
                    t94 = g->ecx;
                    t95 = g->edx;
                    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
                    {
                        edx = t95;
                        esi = esi + 1u;
                        goto L_102929c1;
                    }
                    eax = rd32(arg1 + 0x1cu);
                    ecx = t94;
                    edx = t95;
L_102929dd: ;
                    wr32(sp1 - 0x24u, COW_IMG(0x10350e4cu));
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp1 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x20u));
                    t96 = g->ecx;
                    t97 = g->edx;
                    ecx = t96;
                    edx = t97;
                }
                if (rd32(arg1 + 0x50u) == 0u)
                {
                    eax = rd32(arg1 + 0x50u);
                }
                else
                {
                    eax = rd32(arg1 + 0x50u);
                    wr32(sp1 - 0x24u, arg3 + 2u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp1 - 0x18u;
                    t98 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                    t99 = g->ecx;
                    t100 = g->edx;
                    wr32(sp1 - 0x28u, COW_IMG(0x103bb2d8u));
                    g->ecx = t99;
                    g->edx = t100;
                    g->esp = sp1 - 0x20u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb2d8u), arg3 + 2u);
                    t101 = g->ecx;
                    t102 = g->edx;
                    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
                    {
                        eax = rd32(arg1 + 0x1cu);
                        ecx = t101;
                        edx = t102;
                        goto L_10292a2e;
                    }
                    ecx = t101;
                    esi = 0u;
L_10292a10: ;
                    t103 = rd8(esi + rd32(arg1 + 0x50u));
                    wr32(sp1 - 0x24u, t103);
                    wr32(sp1 - 0x28u, COW_IMG(0x103ba458u));
                    g->ecx = ecx;
                    g->edx = rd32(arg1 + 0x50u);
                    t104 = rd32(arg1 + 0x50u);
                    g->esp = sp1 - 0x20u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba458u), t103);
                    t105 = g->ecx;
                    t106 = g->edx;
                    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
                    {
                        ecx = t105;
                        esi = esi + 1u;
                        goto L_10292a10;
                    }
                    eax = rd32(arg1 + 0x1cu);
                    ecx = t105;
                    edx = t106;
L_10292a2e: ;
                    wr32(sp1 - 0x24u, COW_IMG(0x10350e4cu));
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp1 - 0x1cu;
                    t107 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x20u));
                    t108 = g->edx;
                    eax = t107;
                    edx = t108;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
