/* f_0x102017a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102017a0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(COW_IMG(0x106643a8u)) != 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x60u, in_esi, in_ebx);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            ecx = t2;
            edx = t3;
            wr32(COW_IMG(0x106643a8u), 0u);
        }
        else
        {
            edx = t3;
            esi = t1;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(esi, COW_IMG(0x1033b078u));
            wr32(COW_IMG(0x106643a8u), esi);
            ecx = t4;
            edx = t5;
        }
    }
    if (rd32(COW_IMG(0x106643acu)) == 0u)
    {
        g->esp = sp0;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x40u, in_esi, in_ebx);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
            wr32(COW_IMG(0x106643acu), 0u);
        }
        else
        {
            edx = t8;
            esi = t6;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t9 = g->ecx;
            t10 = g->edx;
            wr32(esi, COW_IMG(0x1033b028u));
            wr32(COW_IMG(0x106643acu), esi);
            ecx = t9;
            edx = t10;
        }
    }
    if (rd32(COW_IMG(0x106643b0u)) == 0u)
    {
        g->esp = sp0;
        t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x40u, in_esi, in_ebx);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 == 0u)
        {
            ecx = t12;
            edx = t13;
            wr32(COW_IMG(0x106643b0u), 0u);
        }
        else
        {
            edx = t13;
            esi = t11;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(esi, COW_IMG(0x1033afd8u));
            wr32(COW_IMG(0x106643b0u), esi);
            ecx = t14;
            edx = t15;
        }
    }
    if (rd32(COW_IMG(0x106643b4u)) == 0u)
    {
        g->esp = sp0;
        t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x89cu, in_esi, in_ebx);
        t17 = g->ecx;
        t18 = g->edx;
        if (t16 == 0u)
        {
            ecx = t17;
            edx = t18;
            wr32(COW_IMG(0x106643b4u), 0u);
        }
        else
        {
            edx = t18;
            esi = t16;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x101f67c0u), esi, 1, 0u);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(esi, COW_IMG(0x1033af48u));
            wr32(COW_IMG(0x106643b4u), esi);
            ecx = t19;
            edx = t20;
        }
    }
    if (rd32(COW_IMG(0x106643b8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x30u, in_edi, in_ebp);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 == 0u)
        {
            ecx = t22;
            edx = t23;
            wr32(COW_IMG(0x106643b8u), 0u);
        }
        else
        {
            edx = t23;
            esi = t21;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10205500u), esi, 0);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(esi, COW_IMG(0x1033aef8u));
            wr32(esi + 0x14u, 2u);
            wr32(esi + 0x1cu, 2u);
            wr32(COW_IMG(0x106643b8u), esi);
            ecx = t24;
            edx = t25;
        }
    }
    if (rd32(COW_IMG(0x106643bcu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t26 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, in_edi, in_ebp);
        t27 = g->ecx;
        t28 = g->edx;
        if (t26 == 0u)
        {
            ecx = t27;
            edx = t28;
            wr32(COW_IMG(0x106643bcu), 0u);
        }
        else
        {
            edx = t28;
            esi = t26;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10205500u), esi, 0);
            t29 = g->ecx;
            t30 = g->edx;
            wr32(esi, COW_IMG(0x1033aea8u));
            wr32(esi + 0x1cu, 2u);
            wr8(esi + 0x30u, 0u);
            wr32(COW_IMG(0x106643bcu), esi);
            ecx = t29;
            edx = t30;
        }
    }
    if (rd32(COW_IMG(0x106643c0u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_ebp);
        t32 = g->ecx;
        t33 = g->edx;
        if (t31 == 0u)
        {
            ecx = t32;
            edx = t33;
            wr32(COW_IMG(0x106643c0u), 0u);
        }
        else
        {
            edx = t33;
            esi = t31;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t34 = g->ecx;
            t35 = g->edx;
            wr32(esi, COW_IMG(0x1033ae60u));
            wr32(esi + 0x14u, 0u);
            wr32(COW_IMG(0x106643c0u), esi);
            ecx = t34;
            edx = t35;
        }
    }
    if (rd32(COW_IMG(0x106643c4u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t36 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x30u, in_edi, in_ebp);
        t37 = g->ecx;
        t38 = g->edx;
        if (t36 == 0u)
        {
            ecx = t37;
            edx = t38;
            wr32(COW_IMG(0x106643c4u), 0u);
        }
        else
        {
            edx = t38;
            esi = t36;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10205500u), esi, 0);
            t39 = g->ecx;
            t40 = g->edx;
            wr32(esi, COW_IMG(0x1033ae10u));
            wr32(esi + 0x1cu, 3u);
            wr32(COW_IMG(0x106643c4u), esi);
            ecx = t39;
            edx = t40;
        }
    }
    if (rd32(COW_IMG(0x106643c8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t41 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x30u, in_edi, in_ebp);
        t42 = g->ecx;
        t43 = g->edx;
        if (t41 == 0u)
        {
            ecx = t42;
            edx = t43;
            wr32(COW_IMG(0x106643c8u), 0u);
        }
        else
        {
            edx = t43;
            esi = t41;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10205500u), esi, 0);
            t44 = g->ecx;
            t45 = g->edx;
            wr32(esi, COW_IMG(0x1033adc0u));
            wr32(esi + 0x14u, 1u);
            wr32(esi + 0x1cu, 3u);
            wr32(COW_IMG(0x106643c8u), esi);
            ecx = t44;
            edx = t45;
        }
    }
    if (rd32(COW_IMG(0x106643ccu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t46 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x30u, in_edi, in_ebp);
        t47 = g->ecx;
        t48 = g->edx;
        if (t46 == 0u)
        {
            ecx = t47;
            edx = t48;
            wr32(COW_IMG(0x106643ccu), 0u);
        }
        else
        {
            edx = t48;
            esi = t46;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10205500u), esi, 0);
            t49 = g->ecx;
            t50 = g->edx;
            wr32(esi, COW_IMG(0x1033ad70u));
            wr32(esi + 0x14u, 1u);
            wr32(esi + 0x1cu, 3u);
            wr32(COW_IMG(0x106643ccu), esi);
            ecx = t49;
            edx = t50;
        }
    }
    if (rd32(COW_IMG(0x106643d0u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t51 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2cu, in_edi, in_ebp);
        t52 = g->ecx;
        t53 = g->edx;
        if (t51 == 0u)
        {
            ecx = t52;
            edx = t53;
            wr32(COW_IMG(0x106643d0u), 0u);
        }
        else
        {
            edx = t53;
            esi = t51;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10205500u), esi, 0);
            t54 = g->ecx;
            t55 = g->edx;
            wr32(esi, COW_IMG(0x1033ad20u));
            wr32(esi + 0x1cu, 3u);
            wr32(COW_IMG(0x106643d0u), esi);
            ecx = t54;
            edx = t55;
        }
    }
    if (rd32(COW_IMG(0x106643d4u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t56 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2cu, in_edi, in_ebp);
        t57 = g->ecx;
        t58 = g->edx;
        if (t56 == 0u)
        {
            ecx = t57;
            edx = t58;
            wr32(COW_IMG(0x106643d4u), 0u);
        }
        else
        {
            edx = t58;
            esi = t56;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10205500u), esi, 0);
            t59 = g->ecx;
            t60 = g->edx;
            wr32(esi, COW_IMG(0x1033acd0u));
            wr32(esi + 0x1cu, 3u);
            wr32(COW_IMG(0x106643d4u), esi);
            ecx = t59;
            edx = t60;
        }
    }
    if (rd32(COW_IMG(0x106643d8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106643d8u));
        goto L_10201a73;
    }
    g->esp = sp0;
    t61 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_esi, in_ebx);
    t62 = g->edx;
    if (t61 == 0u)
    {
        eax = t61;
        goto L_10201a6d;
    }
    eax = t61;
    edx = t62;
    g->esp = sp0 - 8u;
    t63 = cow_thiscall(g, COW_IMG(0x10201c90u), eax, 0);
    wr32(COW_IMG(0x106643d8u), t63);
    return t63;
L_10201a6d: ;
    wr32(COW_IMG(0x106643d8u), 0u);
L_10201a73: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102017a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102017a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
