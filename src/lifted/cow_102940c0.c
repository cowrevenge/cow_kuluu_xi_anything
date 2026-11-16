/* f_0x102940c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102940c0(Guest* g)
{
    uint32_t al_mc;
    double d22;
    double d46;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp1 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5dcu), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 >= 1)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x10u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp1 - 0x1cu;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t9);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), t9);
        t14 = g->edx;
        t15 = rd32(arg1 + 0x1cu);
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp1 - 0x28u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3d8u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        g->edx = t18;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3d8u), t15);
        t20 = g->ecx;
        t21 = g->edx;
        d22 = (double)rdf32(arg1 + 0x20u);
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp1 - 0x1cu;
        t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3c8u), cow_dlo(d22));
        t24 = g->ecx;
        t25 = g->edx;
        g->ecx = t24;
        t26 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3c8u), cow_dlo(d22));
        t27 = g->ecx;
        t28 = rd32(arg1 + 0x24u);
        g->ecx = t27;
        g->edx = t28;
        g->esp = sp1 - 0x28u;
        t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3b8u), t28);
        t30 = g->ecx;
        t31 = g->edx;
        g->ecx = t30;
        g->edx = t31;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3b8u), t28);
        t32 = g->ecx;
        t33 = g->edx;
        t34 = rd32(arg1 + 0x34u);
        g->eax = t34;
        g->ecx = t32;
        g->edx = t33;
        g->esp = sp1 - 0x34u;
        t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3a8u), t34);
        t36 = g->ecx;
        t37 = g->edx;
        g->ecx = t36;
        g->edx = t37;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3a8u), t34);
        t38 = g->ecx;
        t39 = g->edx;
        if (rd32(arg1 + 0x28u) != 1u)
        {
            eax = rd32(arg1 + 0x28u);
            ecx = t38;
            edx = t39;
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
            ecx = t38;
            edx = t39;
            eax = COW_IMG(0x103bb3a0u);
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb37cu), eax);
        t40 = g->ecx;
        t41 = g->edx;
        if ((int32_t)arg2 >= 2)
        {
            ecx = t40;
            edx = t41;
            if ((int32_t)rd32(arg1 + 0x24u) <= 0) goto L_10294215;
            ebx = 0u;
            al_mc = 0u;
L_102941a6: ;
            g->eax = arg3 + 2u;
            g->ecx = arg3;
            g->esp = sp1 - 0x10u;
            t42 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_edi, in_esi);
            t43 = g->ecx;
            g->ecx = t43;
            g->edx = al_mc;
            g->esp = sp1 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5ccu), al_mc);
            t44 = g->ecx;
            t45 = g->edx;
            if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
            {
                eax = rd32(arg1 + 0x1cu);
                ecx = t44;
                edx = t45;
                goto L_102941f8;
            }
            edi = 0u;
L_102941cd: ;
            d46 = (double)rdf32(ebx * 4u + rd32(arg1 + 0x2cu));
            g->ecx = cow_dhi(d46);
            g->edx = cow_dlo(d46);
            g->esp = sp1 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5c8u), cow_dlo(d46));
            t47 = g->ecx;
            t48 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
            {
                ebx = ebx + 1u;
                edi = edi + 1u;
                goto L_102941cd;
            }
            eax = rd32(arg1 + 0x1cu);
            ecx = t47;
            edx = t48;
            ebx = ebx + 1u;
L_102941f8: ;
            g->edx = edx;
            g->esp = sp1 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5c4u), in_edi);
            t49 = g->edx;
            if ((int32_t)(al_mc + 1u) < (int32_t)rd32(arg1 + 0x24u))
            {
                edx = t49;
                al_mc = al_mc + 1u;
                goto L_102941a6;
            }
            ecx = rd32(arg1 + 0x24u);
            edx = t49;
L_10294215: ;
            if (rd32(arg1 + 0x34u) != 0u)
            {
                g->eax = arg3 + 2u;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x10u;
                t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_edi, in_esi);
                t51 = g->ecx;
                t52 = g->edx;
                g->ecx = t51;
                g->edx = t52;
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb2e8u), arg3 + 2u);
                t53 = g->ecx;
                t54 = g->edx;
                if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
                {
                    eax = rd32(arg1 + 0x1cu);
                    ecx = t53;
                    edx = t54;
                    goto L_1029425a;
                }
                eax = rd32(arg1 + 0x1cu);
                edi = 0u;
L_1029423e: ;
                t55 = rd32(edi * 4u + rd32(arg1 + 0x34u));
                g->ecx = rd32(arg1 + 0x34u);
                g->edx = t55;
                t56 = rd32(arg1 + 0x34u);
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba458u), t55);
                t57 = g->ecx;
                t58 = g->edx;
                if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
                {
                    eax = rd32(arg1 + 0x1cu);
                    edi = edi + 1u;
                    goto L_1029423e;
                }
                eax = rd32(arg1 + 0x1cu);
                ecx = t57;
                edx = t58;
L_1029425a: ;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x14u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), in_edi);
                t59 = g->ecx;
                t60 = g->edx;
                ecx = t59;
                edx = t60;
            }
            if (rd32(arg1 + 0x38u) != 0u)
            {
                g->eax = arg3 + 2u;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x10u;
                t61 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_edi, in_esi);
                t62 = g->ecx;
                t63 = g->edx;
                g->ecx = t62;
                g->edx = t63;
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb2d8u), arg3 + 2u);
                t64 = g->ecx;
                t65 = g->edx;
                if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
                {
                    eax = rd32(arg1 + 0x1cu);
                    ecx = t64;
                    edx = t65;
                    goto L_102942ae;
                }
                eax = rd32(arg1 + 0x1cu);
                edi = 0u;
L_10294290: ;
                t66 = rd8(edi + rd32(arg1 + 0x38u));
                g->ecx = rd32(arg1 + 0x38u);
                g->edx = t66;
                t67 = rd32(arg1 + 0x38u);
                g->esp = sp1 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba458u), t66);
                t68 = g->ecx;
                t69 = g->edx;
                if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
                {
                    eax = rd32(arg1 + 0x1cu);
                    edi = edi + 1u;
                    goto L_10294290;
                }
                eax = rd32(arg1 + 0x1cu);
                ecx = t68;
                edx = t69;
L_102942ae: ;
                g->esp = sp1 - 0x14u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), in_edi);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102940c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102940c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
