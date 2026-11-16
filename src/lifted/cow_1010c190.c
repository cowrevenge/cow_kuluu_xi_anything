/* f_0x1010c190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1010c190(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 0u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x48u, t1);
    g->esp = sp0 - 0x38u;
    t2 = cow_fastcall(g, COW_IMG(0x10112320u), sp0 - 0x14u, in_edx, 4, t1, 0u, 1u, 0u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x10112420u), t2, sp0 - 0x14u, g->edx, 1, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        edx = t5;
        wr32(sp0 - 0x3cu, in_ebx);
        wr32(sp0 - 0x40u, in_esi);
        wr32(sp0 - 0x44u, in_edi);
L_1010c1c2: ;
        wr32(sp0 - 0x48u, 8u);
        wr32(sp0 - 0x4cu, 0u);
        g->esp = sp0 - 0x44u;
        t6 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 8u);
        t7 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            edx = t7;
        }
        else
        {
            eax = t6;
            edx = t7;
            if (rd32(arg2 + 8u) == 0u)
            {
                wr32(sp0 + 4u, 0u);
            }
            else
            {
                ecx = rd32(arg2 + 8u);
                wr32(sp0 + 4u, eax - ecx);
                edx = eax - ecx;
            }
            wr32(sp0 - 0x48u, 0x1cu);
            wr32(sp0 - 0x4cu, 0u);
            wr32(eax, 0xff000201u);
            g->esp = sp0 - 0x44u;
            t8 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 0x1cu);
            t9 = g->edx;
            if (t8 == 0u)
            {
                edx = t9;
            }
            else
            {
                eax = t8;
                edx = t9;
                esi = t8;
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t10 = cow_call_regs(g, COW_IMG(0x101124a0u), eax, sp0 - 0x14u, g->edx, 1, 0);
                t11 = g->ecx;
                t12 = g->edx;
                wr16(esi + 2u, rd16(t10 + 4u));
                g->edx = t12;
                t13 = cow_call_regs(g, COW_IMG(0x101124a0u), t10, sp0 - 0x14u, g->edx, 1, 0);
                t14 = g->edx;
                wr32(sp0 - 0x48u, t13 + 0xcu);
                wr32(sp0 - 0x4cu, arg3);
                g->edx = t14;
                t15 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg3, t13 + 0xcu);
                t16 = g->edx;
                wr32(esi + 4u, t15);
                g->edx = t16;
                t17 = cow_call_regs(g, COW_IMG(0x101124a0u), t15, sp0 - 0x14u, g->edx, 1, 0);
                t18 = g->edx;
                wr32(sp0 - 0x48u, t17 + 0x14u);
                wr32(sp0 - 0x4cu, arg3);
                g->edx = t18;
                t19 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg3, t17 + 0x14u);
                t20 = g->edx;
                wr32(esi + 8u, t19);
                g->edx = t20;
                t21 = cow_call_regs(g, COW_IMG(0x101124a0u), t19, sp0 - 0x14u, g->edx, 1, 0);
                t22 = g->edx;
                wr32(sp0 - 0x48u, t21 + 0x1cu);
                wr32(sp0 - 0x4cu, arg3);
                g->edx = t22;
                t23 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg3, t21 + 0x1cu);
                t24 = g->edx;
                wr32(esi + 0xcu, t23);
                g->edx = t24;
                t25 = cow_call_regs(g, COW_IMG(0x101124a0u), t23, sp0 - 0x14u, g->edx, 1, 0);
                t26 = g->edx;
                g->edx = t26;
                t27 = cow_thiscall(g, COW_IMG(0x10110b00u), t25, 0);
                t28 = g->edx;
                wr32(esi + 0x10u, t27);
                g->edx = t28;
                t29 = cow_call_regs(g, COW_IMG(0x101124a0u), t27, sp0 - 0x14u, g->edx, 1, 0);
                t30 = g->edx;
                if (rd32(t29 + 0x24u) == 0u)
                {
                    eax = t29;
                    edx = t30;
                }
                else
                {
                    edi = rd32(t29 + 0x24u);
                    wr32(sp0 - 0x48u, sp0 - 0x34u);
                    g->edx = sp0 - 0x34u;
                    g->esp = sp0 - 0x44u;
                    t31 = cow_thiscall(g, COW_IMG(0x1010abb0u), edi, 1, sp0 - 0x34u);
                    t32 = g->edx;
                    wr32(sp0 - 0x48u, COW_IMG(0x1036bf64u));
                    g->edx = t32;
                    cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x34u, 1, COW_IMG(0x1036bf64u));
                    t33 = g->edx;
                    wr32(sp0 - 0x48u, sp0 - 0x24u);
                    g->edx = t33;
                    t34 = cow_thiscall(g, COW_IMG(0x1010acd0u), edi, 1, sp0 - 0x24u);
                    t35 = g->edx;
                    if (rd32(t34 + 4u) == 0u)
                    {
                        edx = t35;
                        eax = 0u;
                    }
                    else
                    {
                        eax = rd32(t34 + 4u);
                        edx = t35;
                        eax = rd32(eax + 4u);
                    }
                    wr32(sp0 - 0x48u, eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x44u;
                    t36 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x34u, 1, eax);
                    t37 = g->edx;
                    g->edx = t37;
                    t38 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x24u, 0);
                    t39 = g->edx;
                    wr32(sp0 - 0x48u, COW_IMG(0x1036bf64u));
                    g->edx = t39;
                    t40 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x34u, 1, COW_IMG(0x1036bf64u));
                    t41 = g->edx;
                    if (rd32(edi + 0x24u) == 0u)
                    {
                        eax = t40;
                        edx = t41;
                        edi = 0u;
                    }
                    else
                    {
                        eax = t40;
                        edx = t41;
                        edi = rd32(edi + 0x24u);
                        edi = rd32(edi + 4u);
                    }
                    wr32(sp0 - 0x48u, edi);
                    g->edx = edx;
                    g->esp = sp0 - 0x44u;
                    cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x34u, 1, edi);
                    t42 = g->edx;
                    wr32(sp0 - 0x48u, sp0 - 0x34u);
                    wr32(sp0 - 0x4cu, arg3);
                    g->edx = t42;
                    t43 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg3, sp0 - 0x34u);
                    t44 = g->edx;
                    wr32(esi + 0x14u, t43);
                    g->edx = t44;
                    t45 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x34u, 0);
                    t46 = g->edx;
                    eax = t45;
                    edx = t46;
                }
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t47 = cow_call_regs(g, COW_IMG(0x101124a0u), eax, sp0 - 0x14u, g->edx, 1, 0);
                t48 = g->edx;
                if (rd32(t47 + 0x28u) == 0u)
                {
                    eax = t47;
                    edx = t48;
                }
                else
                {
                    edi = rd32(t47 + 0x28u);
                    wr32(sp0 - 0x48u, sp0 - 0x2cu);
                    g->edx = sp0 - 0x2cu;
                    g->esp = sp0 - 0x44u;
                    t49 = cow_thiscall(g, COW_IMG(0x1010abb0u), edi, 1, sp0 - 0x2cu);
                    t50 = g->edx;
                    wr32(sp0 - 0x48u, COW_IMG(0x1036bf64u));
                    g->edx = t50;
                    cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x2cu, 1, COW_IMG(0x1036bf64u));
                    t51 = g->edx;
                    wr32(sp0 - 0x48u, sp0 - 0x1cu);
                    g->edx = t51;
                    t52 = cow_thiscall(g, COW_IMG(0x1010acd0u), edi, 1, sp0 - 0x1cu);
                    t53 = g->edx;
                    if (rd32(t52 + 4u) == 0u)
                    {
                        edx = t53;
                        eax = 0u;
                    }
                    else
                    {
                        eax = rd32(t52 + 4u);
                        edx = t53;
                        eax = rd32(eax + 4u);
                    }
                    wr32(sp0 - 0x48u, eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x44u;
                    t54 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x2cu, 1, eax);
                    t55 = g->edx;
                    g->edx = t55;
                    t56 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
                    t57 = g->edx;
                    wr32(sp0 - 0x48u, COW_IMG(0x1036bf64u));
                    g->edx = t57;
                    t58 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x2cu, 1, COW_IMG(0x1036bf64u));
                    t59 = g->edx;
                    if (rd32(edi + 0x24u) == 0u)
                    {
                        eax = t58;
                        edx = t59;
                        edi = 0u;
                    }
                    else
                    {
                        eax = t58;
                        edx = t59;
                        edi = rd32(edi + 0x24u);
                        edi = rd32(edi + 4u);
                    }
                    wr32(sp0 - 0x48u, edi);
                    g->edx = edx;
                    g->esp = sp0 - 0x44u;
                    cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x2cu, 1, edi);
                    t60 = g->edx;
                    wr32(sp0 - 0x48u, sp0 - 0x2cu);
                    wr32(sp0 - 0x4cu, arg3);
                    g->edx = t60;
                    t61 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg3, sp0 - 0x2cu);
                    t62 = g->edx;
                    wr32(esi + 0x18u, t61);
                    g->edx = t62;
                    t63 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x2cu, 0);
                    t64 = g->edx;
                    eax = t63;
                    edx = t64;
                }
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t65 = cow_call_regs(g, COW_IMG(0x101124a0u), eax, sp0 - 0x14u, g->edx, 1, 0);
                t66 = g->edx;
                edx = t66;
                esi = rd32(t65 + 0x40u);
L_1010c3bc: ;
                if (rd32(esi + 4u) == 0u) goto L_1010c3e5;
                if (rd32(esi + 8u) == 0u) goto L_1010c3e5;
                wr32(sp0 - 0x48u, arg3);
                wr32(sp0 - 0x4cu, arg2);
                wr32(sp0 - 0x50u, rd32(esi));
                g->esp = sp0 - 0x44u;
                cow_fastcall(g, COW_IMG(0x1010c440u), self, arg2, 3, rd32(esi), arg2, arg3);
                t67 = g->edx;
                if (rd32(esi + 8u) == 0u)
                {
                    edx = t67;
                }
                else
                {
                    eax = rd32(esi + 8u);
                    edx = t67;
                    esi = eax;
                }
                goto L_1010c3bc;
            }
L_1010c3e9: ;
            wr32(sp0 - 0x48u, 4u);
            wr32(sp0 - 0x4cu, 0u);
            g->esp = sp0 - 0x44u;
            t68 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 4u);
            if (t68 != 0u)
            {
                eax = t68;
                wr32(eax, 0xff00ff00u);
            }
            t69 = rd32(arg2 + 4u) - rd32(sp0 + 4u);
            t70 = rd32(sp0 + 4u);
            t71 = rd32(arg2 + 8u);
            wr32(t71 + t70 + 4u, t69);
            eax = t70;
            edx = t71;
        }
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t72 = cow_call_regs(g, COW_IMG(0x10112440u), eax, sp0 - 0x14u, g->edx, 1, 0);
        t73 = g->edx;
        g->edx = t73;
        t74 = cow_call_regs(g, COW_IMG(0x10112420u), t72, sp0 - 0x14u, g->edx, 1, 0);
        t75 = g->edx;
        if ((uint8_t)t74 == 0u)
        {
            edx = t75;
            goto L_1010c1c2;
        }
        eax = t74;
        edx = t75;
        ebx = rd32(sp0 - 0x3cu);
        esi = rd32(sp0 - 0x40u);
        edi = rd32(sp0 - 0x44u);
    }
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x101122b0u), sp0 - 0x14u, 0);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    return;
L_1010c3e5: ;
    goto L_1010c3e9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010c190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010c190(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
