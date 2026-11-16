/* f_0x102bf6a6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bf6a6(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    unsigned of;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    if (rd32(arg1 + 0xecu) != 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        t1 = rd8(arg1 + 0x124u);
        wr32(sp0 - 0x44u, t1);
        t2 = rd32(arg1 + 0xe4u);
        wr32(sp0 - 0x48u, t2);
        wr32(sp0 - 0x4cu, COW_IMG(0x103c8054u));
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x38u, COW_IMG(0x103c8054u), t2, t1, in_edi);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x54u, sp0 - 0x38u);
        wr32(sp0 - 0x58u, arg1);
        g->ecx = t3;
        g->esp = sp0 - 0x48u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t4, 1, 4, arg1, sp0 - 0x38u, sp0 - 0x38u, COW_IMG(0x103c8054u));
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    if ((rd8(arg1 + 0x71u) & 0x10u) != 0u)
    {
        if (rd8(arg1 + 0x108u) != 3u)
        {
            if (rd16(arg1 + 0x11au) == 0u)
            {
                wr32(sp0 - 0x44u, 0u);
                loc_44 = 0u;
            }
            else
            {
                wr32(sp0 - 0x44u, arg1 + 0x18cu);
                loc_44 = arg1 + 0x18cu;
            }
            t13 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x48u, t13);
            wr32(sp0 - 0x4cu, arg1 + 0x100u);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x102c1c79u), ecx, 3, arg1 + 0x100u, t13, loc_44);
            t14 = g->ecx;
            t15 = g->edx;
            ecx = t14;
            edx = t15;
        }
        else
        {
            t7 = rd16(arg1 + 0x11au);
            wr32(sp0 - 0x44u, t7);
            t8 = rd32(arg1 + 0x188u);
            wr32(sp0 - 0x48u, t8);
            t9 = rd32(arg1 + 0x114u);
            wr32(sp0 - 0x4cu, t9);
            t10 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x50u, t10);
            wr32(sp0 - 0x54u, arg1 + 0x100u);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x102c1a72u), ecx, 5, arg1 + 0x100u, t10, t9, t8, t7);
            t11 = g->ecx;
            t12 = g->edx;
            ecx = t11;
            edx = t12;
        }
    }
    if ((rd8(arg1 + 0x72u) & 4u) != 0u)
    {
        wr32(sp0 - 0x44u, 0x80u);
        t16 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t16);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->ecx = ecx;
        g->esp = sp0 - 0x3cu;
        cow_call_regs(g, COW_IMG(0x102c32b3u), g->eax, g->ecx, edx, 1, 4, arg1 + 0x100u, t16, 0x80u, in_edi);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    }
    if ((rd8(arg1 + 0x72u) & 0x60u) != 0u)
    {
        t19 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t19);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        wr32(sp0 - 0x4cu, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t20 = cow_thiscall_cdecl(g, COW_IMG(0x102c0272u), ecx, 4, arg1, arg1 + 0x100u, t19, in_edi);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 == 0u)
        {
            ecx = t21;
            edx = t22;
        }
        else
        {
            eax = t20;
            ecx = t21;
            edx = t22;
            t23 = rd32(arg1 + 0x70u);
            wr8(arg1 + 0x228u, 1u);
            if (t23 == 0x400000u)
            {
                wr32(sp0 - 0x44u, COW_IMG(0x103c802cu));
                wr32(sp0 - 0x48u, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t24 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c802cu));
                t25 = g->edx;
                eax = t24;
                ecx = COW_IMG(0x103c802cu);
                edx = t25;
            }
            if (rd32(arg1 + 0x70u) == 0x200000u)
            {
                wr32(sp0 - 0x44u, COW_IMG(0x103c802cu));
                wr32(sp0 - 0x48u, arg1);
                g->esp = sp0 - 0x38u;
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c802cu), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
                t26 = g->edx;
                ecx = COW_IMG(0x103c802cu);
                edx = t26;
            }
        }
    }
    wr32(sp0 - 0x44u, in_ebx);
    if ((rd32(arg1 + 0x70u) & 0x4000u) != 0u)
    {
        if ((rd32(arg1 + 0x68u) & 0x800u) == 0u)
        {
            t27 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x48u, t27);
            wr32(sp0 - 0x4cu, arg1 + 0x100u);
            g->ebx = 0x800u;
            g->esp = sp0 - 0x40u;
            cow_call_regs(g, COW_IMG(0x102c0140u), arg1 + 0x100u, ecx, edx, 1, 3, arg1 + 0x100u, t27, in_ebx);
            t28 = g->edx;
            ecx = rd32(sp0 - 0x48u);
            edx = t28;
        }
    }
    if ((rd8(arg1 + 0x70u) & 0x80u) != 0u)
    {
        if (rd16(arg1 + 0x11au) != 0u) goto L_102bf802;
        if ((rd8(arg1 + 0x126u) & 4u) == 0u) goto L_102bf858;
L_102bf802: ;
        t29 = rd32(arg1 + 0x158u);
        wr32(sp0 - 0x48u, t29);
        t30 = rd32(arg1 + 0x178u);
        wr32(sp0 - 0x4cu, t30);
        t31 = rd32(arg1 + 0x174u);
        wr32(sp0 - 0x50u, t31);
        t32 = rd32(arg1 + 0x170u);
        wr32(sp0 - 0x54u, t32);
        t33 = rd32(arg1 + 0x16cu);
        wr32(sp0 - 0x58u, t33);
        t34 = rd32(arg1 + 0x168u);
        wr32(sp0 - 0x5cu, t34);
        t35 = rd32(arg1 + 0x164u);
        wr32(sp0 - 0x60u, t35);
        wr32(sp0 - 0x64u, arg1 + 0x142u);
        wr32(sp0 - 0x68u, arg1 + 0x138u);
        wr32(sp0 - 0x6cu, arg1 + 0x18cu);
        t36 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x70u, t36);
        wr32(sp0 - 0x74u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_call_regs(g, COW_IMG(0x102c0875u), arg1 + 0x100u, ecx, g->edx, 1, 12, arg1 + 0x100u, t36, arg1 + 0x18cu, arg1 + 0x138u, arg1 + 0x142u, t35, t34, t33, t32, t31, t30, t29);
        t37 = g->ecx;
        t38 = g->edx;
        ecx = t37;
        edx = t38;
    }
L_102bf858: ;
    if ((rd32(arg1 + 0x70u) >> 8u & 0x20u) != 0u)
    {
        eax = rd32(arg1 + 0x70u);
        if ((int8_t)eax >= 0) goto L_102bf877;
        if (rd16(arg1 + 0x11au) != 0u) goto L_102bf8a9;
        if ((rd8(arg1 + 0x126u) & 4u) != 0u) goto L_102bf8a9;
L_102bf877: ;
        if (rd8(arg1 + 0x126u) != 3u)
        {
            t39 = rd32(arg1 + 0x158u);
            wr32(sp0 - 0x48u, t39);
            t40 = rd32(arg1 + 0x170u);
            wr32(sp0 - 0x4cu, t40);
            t41 = rd32(arg1 + 0x164u);
            wr32(sp0 - 0x50u, t41);
            t42 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x54u, t42);
            wr32(sp0 - 0x58u, arg1 + 0x100u);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            cow_thiscall_cdecl(g, COW_IMG(0x102c1700u), ecx, 6, arg1 + 0x100u, t42, t41, t40, t39, in_ebx);
            t43 = g->ecx;
            t44 = g->edx;
            ecx = t43;
            edx = t44;
        }
    }
L_102bf8a9: ;
    if ((rd8(arg1 + 0x71u) & 4u) != 0u)
    {
        t45 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t45);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x102bfd29u), 2, arg1 + 0x100u, t45);
        t46 = g->edx;
        ecx = rd32(sp0 - 0x48u);
        edx = t46;
    }
    if ((rd8(arg1 + 0x70u) & 0x40u) != 0u)
    {
        t47 = rd32(arg1 + 0x1f0u);
        wr32(sp0 - 0x48u, t47);
        t48 = rd32(arg1 + 0x1ecu);
        wr32(sp0 - 0x4cu, t48);
        t49 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x50u, t49);
        wr32(sp0 - 0x54u, arg1 + 0x100u);
        g->eax = arg1 + 0x100u;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t50 = cow_thiscall_cdecl(g, COW_IMG(0x102c1fccu), ecx, 4, arg1 + 0x100u, t49, t48, t47);
        t51 = g->ecx;
        t52 = g->edx;
        if (rd32(arg1 + 0x104u) != 0u)
        {
            ecx = t51;
            edx = t52;
        }
        else
        {
            eax = t50;
            ecx = t51;
            edx = t52;
            wr32(sp0 - 0x48u, COW_IMG(0x103c8008u));
            wr32(sp0 - 0x4cu, arg1);
            g->esp = sp0 - 0x3cu;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c8008u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t53 = g->edx;
            ecx = COW_IMG(0x103c8008u);
            edx = t53;
        }
    }
    if ((rd8(arg1 + 0x70u) & 0x20u) != 0u)
    {
        t54 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t54);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_thiscall_cdecl(g, COW_IMG(0x102c31cau), ecx, 2, arg1 + 0x100u, t54);
        t55 = g->edx;
        ecx = rd32(sp0 - 0x48u);
        edx = t55;
    }
    if ((rd8(arg1 + 0x70u) & 8u) != 0u)
    {
        wr32(sp0 - 0x48u, arg1 + 0x181u);
        t56 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x4cu, t56);
        wr32(sp0 - 0x50u, arg1 + 0x100u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_call_regs(g, COW_IMG(0x102bfbaeu), arg1 + 0x100u, g->ecx, g->edx, 1, 3, arg1 + 0x100u, t56, arg1 + 0x181u);
        t57 = g->ecx;
        t58 = g->edx;
        ecx = t57;
        edx = t58;
    }
    if ((rd8(arg1 + 0x70u) & 4u) != 0u)
    {
        t59 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t59);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->esp = sp0 - 0x40u;
        cow_call_regs(g, COW_IMG(0x102bfa9fu), g->eax, ecx, edx, 1, 3, arg1 + 0x100u, t59, in_ebx);
        t60 = g->edx;
        ecx = rd32(sp0 - 0x48u);
        edx = t60;
    }
    if (rd8(arg1 + 0x70u) & 1u)
    {
        t61 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t61);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->esp = sp0 - 0x40u;
        cow_call_regs(g, COW_IMG(0x102c3440u), g->eax, g->ecx, edx, 1, 3, arg1 + 0x100u, t61, in_ebx);
        t62 = g->edx;
        ecx = rd32(sp0 - 0x48u);
        edx = t62;
    }
    if (rd8(arg1 + 0x72u) & 1u)
    {
        t63 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x48u, t63);
        wr32(sp0 - 0x4cu, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        cow_thiscall_cdecl(g, COW_IMG(0x102c3266u), ecx, 2, arg1 + 0x100u, t63);
        t64 = g->edx;
        ecx = rd32(sp0 - 0x48u);
        edx = t64;
    }
    if ((rd32(arg1 + 0x70u) & 0x4000u) != 0u)
    {
        if ((rd32(arg1 + 0x68u) & 0x800u) != 0u)
        {
            t65 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x48u, t65);
            wr32(sp0 - 0x4cu, arg1 + 0x100u);
            g->ebx = 0x800u;
            g->esp = sp0 - 0x40u;
            cow_call_regs(g, COW_IMG(0x102c0140u), arg1 + 0x100u, ecx, edx, 1, 3, arg1 + 0x100u, t65, in_ebx);
            t66 = g->edx;
            ecx = rd32(sp0 - 0x48u);
            edx = t66;
        }
    }
    if ((rd8(arg1 + 0x71u) & 0x80u) != 0u)
    {
        t67 = rd32(arg1 + 0x6cu);
        wr32(sp0 - 0x44u, t67);
        t68 = rd16(arg1 + 0x12eu);
        wr32(sp0 - 0x48u, t68);
        t69 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x4cu, t69);
        wr32(sp0 - 0x50u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall_cdecl(g, COW_IMG(0x102bff09u), ecx, 5, arg1 + 0x100u, t69, t68, t67, in_edi);
        t70 = g->ecx;
        t71 = g->edx;
        ecx = t70;
        edx = t71;
    }
    if ((rd8(arg1 + 0x72u) & 8u) != 0u)
    {
        t72 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t72);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall_cdecl(g, COW_IMG(0x102bfe5fu), ecx, 3, arg1 + 0x100u, t72, in_edi);
        t73 = g->edx;
        ecx = rd32(sp0 - 0x44u);
        edx = t73;
    }
    if ((rd8(arg1 + 0x72u) & 2u) != 0u)
    {
        t74 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t74);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        g->ebx = in_ebx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall_cdecl(g, COW_IMG(0x102bfd6du), ecx, 3, arg1 + 0x100u, t74, in_edi);
        t75 = g->edx;
        ecx = rd32(sp0 - 0x44u);
        edx = t75;
    }
    if ((rd8(arg1 + 0x70u) & 0x10u) != 0u)
    {
        t76 = rd32(arg1 + 0xecu) + 1u;
        wr32(sp0 - 0x44u, t76);
        wr32(sp0 - 0x48u, arg1 + 0x100u);
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102c3239u), 2, arg1 + 0x100u, t76);
        t77 = g->edx;
        edx = t77;
    }
    if ((rd8(arg1 + 0x72u) & 0x10u) != 0u)
    {
        if (rd32(arg1 + 0x58u) == 0u)
        {
            eax = rd32(arg1 + 0x58u);
        }
        else
        {
            eax = rd32(arg1 + 0x58u);
            t78 = rd32(arg1 + 0xecu) + 1u;
            wr32(sp0 - 0x44u, t78);
            wr32(sp0 - 0x48u, arg1 + 0x100u);
            wr32(sp0 - 0x4cu, arg1);
            g->eax = eax;
            g->esp = sp0 - 0x40u;
            t79 = cow_thiscall_cdecl(g, eax, arg1 + 0x100u, 3, arg1, arg1 + 0x100u, t78);
            eax = t79;
        }
        if (rd8(arg1 + 0x64u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x64u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x64u);
            wr8(arg1 + 0x109u, (uint8_t)eax);
        }
        if (rd8(arg1 + 0x65u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x65u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + 0x65u);
            wr8(arg1 + 0x10au, (uint8_t)eax);
        }
        t80 = rd8(arg1 + 0x10au);
        t81 = rd32(arg1 + 0x100u);
        eax = (eax & 0xffffff00u) | t80;
        esi = arg1;
        cf = 0u;
        of = 0u;
        { /* imul byte ptr [esi + 0x109] */ uint32_t A = (uint32_t)(esi + 0x109u); { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)rd8(A); eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
        wr8(esi + 0x10bu, (uint8_t)eax);
        t82 = (t81 * (uint8_t)eax + 7u) >> 3u;
        wr32(esi + 0x104u, t82);
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bf6a6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bf6a6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
