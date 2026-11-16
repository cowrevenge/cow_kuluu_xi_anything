/* f_0x102af300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102af300(Guest* g)
{
    double d35;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, arg3);
    g->eax = arg3;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, COW_IMG(0x103bf530u));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf530u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t4;
        edx = t6;
        ebx = in_ebx;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebx, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = rd32(arg1 + 0x14u);
        wr32(sp0 - 0x18u, t9);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf520u));
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf520u), t9);
        t10 = g->ecx;
        t11 = g->edx;
        if (rd32(arg1 + 0x14u) == 0u)
        {
            eax = rd32(arg1 + 0x14u);
            ecx = t10;
            edx = t11;
        }
        else
        {
            eax = rd32(arg1 + 0x14u);
            ecx = t10;
            edx = t11;
            if ((int32_t)arg2 >= 2)
            {
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    goto L_102af380;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = 0u;
L_102af35d: ;
                wr32(sp0 - 0x14u, arg3 + 2u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t12 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t13 = rd32(ebx * 4u + rd32(arg1 + 0x14u));
                wr32(sp0 - 0x18u, t13);
                wr32(sp0 - 0x1cu, ebx);
                wr32(sp0 - 0x20u, COW_IMG(0x103bf50cu));
                g->ecx = rd32(arg1 + 0x14u);
                g->edx = t13;
                t14 = rd32(arg1 + 0x14u);
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf50cu), ebx);
                t15 = g->ecx;
                t16 = g->edx;
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    eax = rd32(arg1 + 0x34u);
                    ecx = t15;
                    edx = t16;
                    ebx = ebx + 1u;
                    goto L_102af35d;
                }
                eax = rd32(arg1 + 0x34u);
                ecx = t15;
                edx = t16;
L_102af380: ;
            }
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t17 = g->ecx;
        t18 = g->edx;
        t19 = rd32(arg1 + 0x18u);
        wr32(sp0 - 0x18u, t19);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4fcu));
        g->ecx = t17;
        g->edx = t18;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4fcu), t19);
        t20 = g->ecx;
        t21 = g->edx;
        if (rd32(arg1 + 0x18u) == 0u)
        {
            eax = rd32(arg1 + 0x18u);
            ecx = t20;
            edx = t21;
        }
        else
        {
            eax = rd32(arg1 + 0x18u);
            ecx = t20;
            edx = t21;
            if ((int32_t)arg2 >= 2)
            {
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    goto L_102af3d1;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = 0u;
L_102af3ae: ;
                wr32(sp0 - 0x14u, arg3 + 2u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t22 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t23 = rd32(ebx * 4u + rd32(arg1 + 0x18u));
                wr32(sp0 - 0x18u, t23);
                wr32(sp0 - 0x1cu, ebx);
                wr32(sp0 - 0x20u, COW_IMG(0x103bf4e8u));
                g->ecx = rd32(arg1 + 0x18u);
                g->edx = t23;
                t24 = rd32(arg1 + 0x18u);
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4e8u), ebx);
                t25 = g->ecx;
                t26 = g->edx;
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    eax = rd32(arg1 + 0x34u);
                    ecx = t25;
                    edx = t26;
                    ebx = ebx + 1u;
                    goto L_102af3ae;
                }
                eax = rd32(arg1 + 0x34u);
                ecx = t25;
                edx = t26;
L_102af3d1: ;
            }
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t27 = g->ecx;
        t28 = g->edx;
        t29 = rd32(arg1 + 0x1cu);
        wr32(sp0 - 0x18u, t29);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4d4u));
        g->ecx = t27;
        g->edx = t28;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4d4u), t29);
        t30 = g->ecx;
        t31 = g->edx;
        if (rd32(arg1 + 0x1cu) == 0u)
        {
            eax = rd32(arg1 + 0x1cu);
            ecx = t30;
            edx = t31;
        }
        else
        {
            eax = rd32(arg1 + 0x1cu);
            ecx = t30;
            edx = t31;
            if ((int32_t)arg2 >= 2)
            {
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    goto L_102af425;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = 0u;
L_102af3ff: ;
                wr32(sp0 - 0x14u, arg3 + 2u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t32 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t33 = g->edx;
                t34 = rd32(arg1 + 0x1cu);
                wr32(sp0 - 0x18u, t34);
                d35 = (double)rdf32(ebx * 4u + t34);
                wrf64(sp0 - 0x18u, d35);
                wr32(sp0 - 0x1cu, ebx);
                wr32(sp0 - 0x20u, COW_IMG(0x103bf4b8u));
                g->ecx = t34;
                g->edx = t33;
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4b8u), ebx);
                t36 = g->ecx;
                t37 = g->edx;
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    eax = rd32(arg1 + 0x34u);
                    ecx = t36;
                    edx = t37;
                    ebx = ebx + 1u;
                    goto L_102af3ff;
                }
                eax = rd32(arg1 + 0x34u);
                ecx = t36;
                edx = t37;
L_102af425: ;
            }
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t39 = g->ecx;
        t40 = rd32(arg1 + 0x20u);
        wr32(sp0 - 0x18u, t40);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4a4u));
        g->ecx = t39;
        g->edx = t40;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4a4u), t40);
        t41 = g->ecx;
        t42 = g->edx;
        if (rd32(arg1 + 0x20u) == 0u)
        {
            eax = rd32(arg1 + 0x20u);
            ecx = t41;
            edx = t42;
        }
        else
        {
            eax = rd32(arg1 + 0x20u);
            ecx = t41;
            edx = t42;
            if ((int32_t)arg2 >= 2)
            {
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                }
                else
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = 0u;
                    ebp = 0u;
L_102af455: ;
                    wr32(sp0 - 0x14u, arg3 + 2u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t43 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                    t44 = g->ecx;
                    t45 = g->edx;
                    wr32(sp0 - 0x18u, ebx);
                    wr32(sp0 - 0x1cu, COW_IMG(0x103bf490u));
                    g->edx = t45;
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf490u), ebx);
                    t46 = g->edx;
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, arg2);
                    t47 = ebp + rd32(arg1 + 0x20u);
                    wr32(sp0 - 0x28u, t47);
                    g->ecx = t47;
                    g->edx = t46;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x10274ad0u), 3, t47, arg2, 0u);
                    t48 = g->ecx;
                    t49 = g->edx;
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                    {
                        eax = rd32(arg1 + 0x34u);
                        ecx = t48;
                        edx = t49;
                        ebx = ebx + 1u;
                        ebp = ebp + 0xcu;
                        goto L_102af455;
                    }
                    eax = rd32(arg1 + 0x34u);
                    ecx = t48;
                    edx = t49;
                }
            }
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t51 = g->ecx;
        t52 = rd32(arg1 + 0x20u);
        wr32(sp0 - 0x18u, t52);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4a4u));
        g->ecx = t51;
        g->edx = t52;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4a4u), t52);
        t53 = g->ecx;
        t54 = g->edx;
        if (rd32(arg1 + 0x24u) == 0u)
        {
            eax = rd32(arg1 + 0x24u);
            ecx = t53;
            edx = t54;
        }
        else
        {
            eax = rd32(arg1 + 0x24u);
            ecx = t53;
            edx = t54;
            if ((int32_t)arg2 >= 2)
            {
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                }
                else
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = 0u;
                    ebp = 0u;
L_102af4ba: ;
                    wr32(sp0 - 0x14u, arg3 + 2u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t55 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                    t56 = g->ecx;
                    t57 = g->edx;
                    wr32(sp0 - 0x18u, ebx);
                    wr32(sp0 - 0x1cu, COW_IMG(0x103bf47cu));
                    g->edx = t57;
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf47cu), ebx);
                    t58 = g->edx;
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, arg2);
                    t59 = ebp + rd32(arg1 + 0x24u);
                    wr32(sp0 - 0x28u, t59);
                    g->ecx = t59;
                    g->edx = t58;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x10274ad0u), 3, t59, arg2, 0u);
                    t60 = g->ecx;
                    t61 = g->edx;
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                    {
                        eax = rd32(arg1 + 0x34u);
                        ecx = t60;
                        edx = t61;
                        ebx = ebx + 1u;
                        ebp = ebp + 0xcu;
                        goto L_102af4ba;
                    }
                    eax = rd32(arg1 + 0x34u);
                    ecx = t60;
                    edx = t61;
                }
            }
        }
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t62 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t63 = g->ecx;
        t64 = g->edx;
        wr32(sp0 - 0x18u, COW_IMG(0x103bf46cu));
        g->ecx = t63;
        g->esp = sp0 - 0x10u;
        t65 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf46cu), arg3 + 1u);
        t66 = g->ecx;
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x24u, arg1 + 0x28u);
        g->ecx = t66;
        g->edx = arg1 + 0x28u;
        g->esp = sp0 - 0x18u;
        t67 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x28u, arg2, 0u);
        t68 = g->ecx;
        t69 = g->edx;
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->ecx = t68;
        g->edx = t69;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, arg1 + 0x28u, arg2);
        t70 = g->ecx;
        t71 = g->edx;
        t72 = rd32(arg1 + 0x34u);
        wr32(sp0 - 0x2cu, t72);
        wr32(sp0 - 0x30u, COW_IMG(0x103bf45cu));
        g->eax = t72;
        g->ecx = t70;
        g->edx = t71;
        g->esp = sp0 - 0x28u;
        t73 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf45cu), t72);
        t74 = g->ecx;
        t75 = g->edx;
        wr32(sp0 - 0x34u, arg3 + 1u);
        g->edx = t75;
        t76 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bf45cu), rd32(sp0 - 0x2cu));
        t77 = g->edx;
        t78 = rd32(arg1 + 0x38u);
        wr32(sp0 - 0x38u, t78);
        wr32(sp0 - 0x3cu, COW_IMG(0x103bf304u));
        g->ecx = t78;
        g->edx = t77;
        g->esp = sp0 - 0x34u;
        t79 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf304u), t78);
        t80 = g->ecx;
        t81 = g->edx;
        if (rd32(arg1 + 0x38u) == 0u)
        {
            eax = t79;
            edx = t81;
            ebx = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = t79;
            ecx = t80;
            edx = t81;
            ebx = rd32(sp0 - 0x10u);
            esi = rd32(arg1 + 0x38u);
            if ((int32_t)arg2 >= 2)
            {
                wr32(sp0 - 0x10u, arg3 + 2u);
                wr32(sp0 - 0x14u, arg2);
                wr32(sp0 - 0x18u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t82 = cow_cdecl(g, COW_IMG(0x102af040u), 5, esi, arg2, arg3 + 2u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
                t83 = g->edx;
                eax = t82;
                edx = t83;
            }
        }
    }
    g->ebx = ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102af300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102af300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
