/* f_0x102a2550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a2550(Guest* g)
{
    double d1;
    double d12;
    double d13;
    double d14;
    double d35;
    double d56;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x14u, in_ebx);
    d1 = (double)rdf32(rd32(sp0 + 4u) + 0x38u);
    if (d1 < (double)rdf32(COW_IMG(0x1032961cu)))
    {
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        ebx = rd32(sp0 + 4u);
        wr32(sp0 - 0x18u, in_ebp);
        wr32(sp0 - 0x1cu, in_esi);
        wr32(sp0 - 0x20u, 1u);
        t2 = rd32(rd32(ebx + 0x40u) + rd32(sp0 + 8u) * 0x30u);
        wr32(sp0 - 0x24u, t2);
        wr32(sp0 - 0x28u, ebx);
        g->eax = t2;
        g->ecx = rd32(ebx + 0x24u);
        g->edx = t2 * 3u;
        t3 = rd32(ebx + 0x24u);
        t4 = rd32(ebx + 0x40u);
        t5 = rd32(sp0 + 8u);
        t6 = rd32(t2 * 0xcu + rd32(ebx + 0x24u));
        g->esp = sp0 - 0x1cu;
        t7 = cow_cdecl(g, COW_IMG(0x1028f610u), 3, ebx, t2, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x2cu, 0xffffffffu);
        g->ecx = t8;
        g->esp = sp0 - 0x28u;
        t10 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
        t11 = g->ecx;
        wr32(sp0 - 0x20u, 0x3f800000u);
        d12 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(t6 + 0x1cu));
        wrf32(sp0 - 0x24u, (float)d12);
        d13 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(t6 + 0x18u));
        wrf32(sp0 - 0x28u, (float)d13);
        d14 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(t6 + 0x14u));
        wrf32(sp0 - 0x2cu, (float)d14);
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        g->ecx = t11;
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x1cu;
        t15 = cow_cdecl(g, COW_IMG(0x10274d60u), 5, sp0 - 0x10u, cow_f2bits(d14), cow_f2bits(d13), cow_f2bits(d12), 0x3f800000u);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x34u, 0x3f800000u);
        g->ecx = t16;
        g->edx = t17;
        g->esp = sp0 - 0x30u;
        t18 = cow_cdecl(g, COW_IMG(0x102833a0u), 1, 0x3f800000u);
        t19 = g->ecx;
        t20 = g->edx;
        g->ecx = t19;
        g->esp = sp0 - 0x34u;
        cow_call_regs(g, COW_IMG(0x10283130u), g->eax, g->ecx, t20, 1, 0);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->ecx = t21;
        g->edx = t22;
        t23 = cow_cdecl(g, COW_IMG(0x10283350u), 1, sp0 - 0x10u);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x3cu, 4u);
        g->ecx = t24;
        g->edx = t25;
        g->esp = sp0 - 0x38u;
        t26 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 4u);
        t27 = g->ecx;
        t28 = g->edx;
        wr32(sp0 - 0x40u, 0u);
        g->esp = sp0 - 0x34u;
        t29 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t27, t28, 1, 3, 0u, 4u, sp0 - 0x10u);
        t30 = g->ecx;
        t31 = g->edx;
        wr32(sp0 - 0x44u, 0u);
        g->ecx = t30;
        g->esp = sp0 - 0x40u;
        t32 = cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t31, 1, 1, 0u);
        t33 = g->ecx;
        t34 = g->edx;
        d35 = (double)rdf32(ebx + 0x38u);
        if ((cow_fsw(g, d35, rdf64(COW_IMG(0x10340b98u)), 0u) & 0x4100u) != 0u)
        {
            ecx = t33;
            ebp = t4 + t5 * 0x30u;
        }
        else
        {
            edx = t34;
            ebp = t4 + t5 * 0x30u;
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 0x34u);
            wr32(sp0 - 0x28u, rd32(COW_IMG(0x1066941cu)));
            g->eax = rd32(COW_IMG(0x1066941cu));
            g->edx = edx;
            t36 = rd32(COW_IMG(0x1066941cu));
            t37 = rd32(rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            t38 = cow_thiscall(g, rd32(t37 + 0xc8u), t37, 3, t36, 0x34u, 1u);
            t39 = g->ecx;
            t40 = g->edx;
            wr32(sp0 - 0x20u, 0u);
            g->ecx = t39;
            cow_cdecl(g, COW_IMG(0x10282030u), 1, 0u);
            t41 = g->ecx;
            ecx = t41;
        }
        wr32(sp0 - 0x20u, 7u);
        wr32(sp0 - 0x24u, 0x37u);
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x1066941cu)));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t42 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(t42 + 0xc8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0x37u, 7u);
        t43 = g->edx;
        wr32(sp0 - 0x20u, 3u);
        wr32(sp0 - 0x24u, 0x38u);
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x1066941cu)));
        t44 = rd32(rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(t44 + 0xc8u), t44, 3, rd32(COW_IMG(0x1066941cu)), 0x38u, 3u);
        t45 = g->ecx;
        t46 = rd32(ebp + 4u);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)t46 <= 0)
        {
            eax = t46;
            ecx = t45;
            edx = 0u;
        }
        else
        {
            wr32(sp0 - 0x20u, in_edi);
            edx = 0u;
L_102a2666: ;
            t47 = rd32(edx * 4u + rd32(ebp + 8u));
            if (rd8((t47 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t47 >> 0x10u) * 0x2cu + rd32(ebx + 0x48u) + 0x28u) + 0x1du) == 0u)
            {
                ecx = (rd32(ebx + 0x48u) & 0xffffff00u) | rd8((t47 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t47 >> 0x10u) * 0x2cu + rd32(ebx + 0x48u) + 0x28u) + 0x1du);
            }
            else
            {
                eax = (t47 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t47 >> 0x10u) * 0x2cu + rd32(ebx + 0x48u) + 0x28u);
                esi = (uint32_t)((int32_t)t47 >> 0x10u) * 0x2cu;
                edi = (t47 & 0x7fffu) * 0x90u;
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x80000000u);
                t48 = rd32(eax);
                wr32(sp0 + 8u, t48);
                g->esp = sp0 - 0x20u;
                cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0x80000000u, 0u);
                t49 = rd32(edi + rd32(esi + rd32(ebx + 0x48u) + 0x28u) + 4u);
                wr32(sp0 - 0x24u, t49);
                g->eax = t49;
                g->edx = rd32(esi + rd32(ebx + 0x48u) + 0x28u);
                t50 = rd32(esi + rd32(ebx + 0x48u) + 0x28u);
                t51 = cow_cdecl(g, COW_IMG(0x10283e20u), 1, t49);
                t52 = g->edx;
                wr32(sp0 - 0x28u, 4u);
                t53 = rd32(sp0 + 8u);
                wr32(sp0 - 0x2cu, t53);
                g->ecx = t53;
                g->esp = sp0 - 0x28u;
                cow_cdecl(g, COW_IMG(0x10285870u), 1, t53);
                t54 = g->ecx;
                ecx = t54;
                edx = rd32(sp0 + 4u);
            }
            t55 = rd32(ebp + 4u);
            wr32(sp0 + 4u, edx + 1u);
            if ((int32_t)(edx + 1u) < (int32_t)t55)
            {
                edx = edx + 1u;
                goto L_102a2666;
            }
            eax = t55;
            edx = edx + 1u;
        }
        d56 = (double)rdf32(ebx + 0x38u);
        if ((cow_fsw(g, d56, rdf64(COW_IMG(0x10340b98u)), 0u) & 0x4100u) != 0u)
        {
            eax = rd32(COW_IMG(0x1066941cu));
            ebp = rd32(sp0 - 0x18u);
            esi = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x18u, 8u);
            wr32(sp0 - 0x1cu, 0x38u);
            wr32(sp0 - 0x20u, eax);
            g->eax = eax;
            g->edx = edx;
            t61 = rd32(eax);
            g->esp = sp0 - 0x14u;
            t62 = cow_thiscall(g, rd32(t61 + 0xc8u), t61, 3, eax, 0x38u, 8u);
            t63 = g->ecx;
            t64 = g->edx;
            eax = t62;
            ecx = t63;
            edx = t64;
        }
        else
        {
            eax = rd32(COW_IMG(0x1066941cu));
            ebp = rd32(sp0 - 0x18u);
            esi = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0x34u);
            wr32(sp0 - 0x20u, eax);
            g->eax = eax;
            g->edx = rd32(eax);
            t57 = rd32(eax);
            g->esp = sp0 - 0x14u;
            t58 = cow_thiscall(g, rd32(t57 + 0xc8u), ecx, 3, eax, 0x34u, 0u);
            t59 = g->ecx;
            t60 = g->edx;
            eax = t58;
            ecx = t59;
            edx = t60;
        }
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t65 = cow_cdecl(g, COW_IMG(0x102823d0u), 2, 0u, 0u);
        t66 = g->ecx;
        t67 = g->edx;
        wr32(sp0 - 0x20u, 0xfffffffcu);
        g->ecx = t66;
        g->edx = t67;
        g->esp = sp0 - 0x1cu;
        t68 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 0xfffffffcu);
        t69 = g->ecx;
        t70 = g->edx;
        g->ecx = t69;
        g->esp = sp0 - 0x20u;
        t71 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t70, 1, 0);
        t72 = g->ecx;
        t73 = g->edx;
        wr32(sp0 - 0x24u, 1u);
        g->esp = sp0 - 0x18u;
        t74 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t72, t73, 1, 3, 1u, 0xfffffffcu, 0u);
        t75 = g->ecx;
        t76 = g->edx;
        wr32(sp0 - 0x28u, 1u);
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t76, 1, 1, 1u);
    }
    g->esi = esi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a2550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a2550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
