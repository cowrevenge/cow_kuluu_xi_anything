/* f_0x1012ce90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012ce90(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        goto L_1012d1ba;
    }
    ecx = rd32(self + 8u);
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, sp0 - 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, ecx, g->edx, 0, 1, sp0 - 8u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    wr32(sp0 - 0x40u, 1u);
    g->eax = sp0 - 0x18u;
    g->edx = sp0 - 0x14u;
    t1 = rd32(sp0 - 8u);
    t2 = rd32(sp0 - 6u);
    t3 = cow_cdecl(g, COW_IMG(0x100a3800u), 5, 1u, sp0 - 0x18u, sp0 - 0x14u, sp0 - 0x10u, sp0 - 0x1cu);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        esi = t1 + 0x4fu;
        edi = t2 + 0x36u;
        if (rd32(sp0 - 0x18u) != 0u)
        {
            ecx = rd32(sp0 - 0x18u);
            t6 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x30u, t6);
            wr32(sp0 - 0x34u, ecx + 9u);
            g->eax = eax;
            g->edx = t6;
            g->esp = sp0 - 0x30u;
            t7 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), ecx + 9u, 1, ecx + 9u);
            t8 = g->ecx;
            t9 = g->edx;
            wr32(sp0 - 0x34u, t7);
            wr32(sp0 - 0x38u, edi);
            wr32(sp0 - 0x3cu, esi + 0x10u);
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi + 0x10u, edi, t7, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
            wr32(sp0 - 0x30u, 0u);
            t10 = rd16(rd32(sp0 - 0x18u) + 6u);
            t11 = (rd8(rd32(sp0 - 0x18u) + 7u) & 0xfu) * 0xdu + 0x38u | (t10 >> 4u & 0xfu) * 0xd00u + 0x3800u | ((t10 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
            wr32(sp0 - 0x34u, t11);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, 0x3f000000u);
            t12 = rd32(sp0 - 6u) + 0x34u;
            wr32(sp0 - 0x40u, t12);
            t13 = rd32(sp0 - 8u) + 0x4fu;
            wr32(sp0 - 0x44u, t13);
            t14 = (uint8_t)rd32(sp0 - 0x14u);
            wr32(sp0 - 0x48u, t14);
            t15 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x4cu, t15);
            g->eax = ((t10 & 0xfu) * 0xdu << 0x10u) + 0x380000u;
            g->edx = t15;
            g->esp = sp0 - 0x44u;
            t16 = cow_cdecl(g, COW_IMG(0x101cb860u), 2, t15, t14);
            t17 = g->edx;
            wr32(sp0 - 0x48u, t16);
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t16, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), 0x3f000000u, 0u, rd32(sp0 - 0x34u), 0u);
        }
        else
        {
            t5 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x30u, t5);
            wr32(sp0 - 0x34u, eax);
            wr32(sp0 - 0x38u, edi);
            wr32(sp0 - 0x3cu, esi);
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, edi, eax, t5, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        }
    }
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    wr32(sp0 - 0x40u, 2u);
    g->eax = sp0 - 0x10u;
    g->edx = sp0 - 0x18u;
    t18 = rd32(sp0 - 8u);
    t19 = rd32(sp0 - 6u);
    g->esp = sp0 - 0x2cu;
    t20 = cow_cdecl(g, COW_IMG(0x100a3800u), 5, 2u, sp0 - 0x18u, sp0 - 0x14u, sp0 - 0x10u, sp0 - 0x1cu);
    t21 = g->edx;
    if (t20 == 0u)
    {
        edx = t21;
    }
    else
    {
        eax = t20;
        edx = t21;
        esi = t18 + 0x4fu;
        edi = t19 + 0x46u;
        if (rd32(sp0 - 0x18u) != 0u)
        {
            ecx = rd32(sp0 - 0x18u);
            t24 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x30u, t24);
            wr32(sp0 - 0x34u, ecx + 9u);
            g->eax = eax;
            g->edx = t24;
            g->esp = sp0 - 0x30u;
            t25 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), ecx + 9u, 1, ecx + 9u);
            t26 = g->ecx;
            t27 = g->edx;
            wr32(sp0 - 0x34u, t25);
            wr32(sp0 - 0x38u, edi);
            wr32(sp0 - 0x3cu, esi + 0x10u);
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi + 0x10u, edi, t25, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
            wr32(sp0 - 0x30u, 0u);
            t28 = rd16(rd32(sp0 - 0x18u) + 6u);
            t29 = (rd8(rd32(sp0 - 0x18u) + 7u) & 0xfu) * 0xdu + 0x38u | (t28 >> 4u & 0xfu) * 0xd00u + 0x3800u | ((t28 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
            wr32(sp0 - 0x34u, t29);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, 0x3f000000u);
            t30 = rd32(sp0 - 6u) + 0x44u;
            wr32(sp0 - 0x40u, t30);
            t31 = rd32(sp0 - 8u) + 0x4fu;
            wr32(sp0 - 0x44u, t31);
            t32 = (uint8_t)rd32(sp0 - 0x14u);
            wr32(sp0 - 0x48u, t32);
            t33 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x4cu, t33);
            g->eax = ((t28 & 0xfu) * 0xdu << 0x10u) + 0x380000u;
            g->edx = t33;
            g->esp = sp0 - 0x44u;
            t34 = cow_cdecl(g, COW_IMG(0x101cb860u), 2, t33, t32);
            t35 = g->edx;
            wr32(sp0 - 0x48u, t34);
            g->edx = t35;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t34, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), 0x3f000000u, 0u, rd32(sp0 - 0x34u), 0u);
            t36 = g->edx;
            edx = t36;
        }
        else
        {
            t22 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x30u, t22);
            wr32(sp0 - 0x34u, eax);
            wr32(sp0 - 0x38u, edi);
            wr32(sp0 - 0x3cu, esi);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, edi, eax, t22, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
            t23 = g->edx;
            edx = t23;
        }
    }
    g->eax = rd32(sp0 - 8u);
    t37 = rd32(sp0 - 8u);
    t38 = rd32(sp0 - 6u);
    g->esp = sp0 - 0x2cu;
    t39 = cow_thiscall(g, COW_IMG(0x100a3610u), t38, 0);
    t40 = g->ecx;
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    wr32(sp0 - 0x34u, 1u);
    g->edx = sp0 - 0x1cu;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x100a3740u), t40, 2, 1u, sp0 - 0x1cu);
    t42 = g->edx;
    if (t41 == 0u)
    {
        ebx = rd32(sp0 - 0x2cu);
    }
    else
    {
        eax = t41;
        edx = t42;
        ebx = rd32(sp0 - 0x2cu);
        esi = t37 + 0x50u;
        edi = t38 + 0x56u;
        t43 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, t43);
        wr32(sp0 - 0x30u, eax);
        wr32(sp0 - 0x34u, edi);
        wr32(sp0 - 0x38u, esi);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, edi, eax, t43, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    }
    if ((uint32_t)(int16_t)rd16(rd32(sp0 - 0xcu) + 0x14u) == 0xfffffffdu)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(sp0 - 0xcu) + 0x14u);
        edx = rd32(sp0 - 8u);
        goto L_1012d1ba;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(sp0 - 0xcu) + 0x14u);
    edx = rd32(sp0 - 8u);
    esi = rd32(sp0 - 8u) + 0x64u;
    edi = rd32(sp0 - 6u) + 0x17u;
    if (eax == 0xfffffffeu) goto L_1012d190;
    if (eax == 0xffffffffu) goto L_1012d137;
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x30u, eax);
    g->eax = eax;
    g->edx = edx;
    t44 = rd32(COW_IMG(0x1066268cu));
    g->esp = sp0 - 0x2cu;
    t45 = cow_thiscall(g, COW_IMG(0x1018d950u), t44, 1, eax);
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp0 - 0x30u, t45);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, esi);
    g->edx = t47;
    g->esp = sp0 - 0x14u;
    t48 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, edi, t45, 0x80808080u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t49 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t49;
    return t48;
L_1012d137: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t50 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t51 = g->edx;
    if (t50 == 0u)
    {
        eax = t50;
        edx = t51;
        goto L_1012d1ba;
    }
    eax = t50;
    edx = t51;
    g->eax = eax;
    g->edx = edx;
    t52 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x28u;
    t53 = cow_thiscall(g, COW_IMG(0x101598b0u), t52, 0);
    t54 = g->ecx;
    t55 = g->edx;
    if (rd16(t53 + 0x210u) == 0u)
    {
        eax = t53;
        ecx = t54;
        edx = t55;
        goto L_1012d176;
    }
    eax = t53;
    ecx = t54;
    edx = t55;
    wr32(sp0 - 0x2cu, 0x80909040u);
    wr32(sp0 - 0x30u, eax + 0x214u);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, esi);
    g->eax = eax + 0x214u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t56 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, edi, eax + 0x214u, 0x80909040u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t57 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t57;
    return t56;
L_1012d176: ;
    wr32(sp0 - 0x2cu, 0x80909040u);
    wr32(sp0 - 0x30u, eax + 0x7cu);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, esi);
    g->eax = eax + 0x7cu;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t58 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, edi, eax + 0x7cu, 0x80909040u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t59 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t59;
    return t58;
L_1012d190: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t60 = cow_thiscall(g, COW_IMG(0x1018d9f0u), rd32(COW_IMG(0x1066268cu)), 0);
    t61 = g->edx;
    if (t60 == 0u)
    {
        eax = t60;
        edx = t61;
    }
    else
    {
        eax = t60;
        edx = t61;
        wr32(sp0 - 0x2cu, 0x80509050u);
        g->eax = eax;
        g->edx = edx;
        t62 = rd32(COW_IMG(0x1066268cu));
        g->esp = sp0 - 0x2cu;
        t63 = cow_thiscall(g, COW_IMG(0x1018d9f0u), t62, 0);
        t64 = g->ecx;
        t65 = g->edx;
        wr32(sp0 - 0x30u, t63);
        wr32(sp0 - 0x34u, edi);
        wr32(sp0 - 0x38u, esi);
        g->edx = t65;
        g->esp = sp0 - 0x14u;
        t66 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi, edi, t63, 0x80509050u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
        t67 = g->edx;
        eax = t66;
        edx = t67;
    }
L_1012d1ba: ;
    g->ebx = ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012ce90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012ce90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
