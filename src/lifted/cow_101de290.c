/* f_0x101de290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101de290(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_138;
    uint32_t loc_13c;
    uint32_t loc_140;
    uint32_t loc_144;
    uint32_t loc_148;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 360u);

    wr32(sp0 - 0x13cu, in_ebx);
    wr32(sp0 - 0x140u, in_ebp);
    wr32(sp0 - 0x144u, in_esi);
    wr32(sp0 - 0x148u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x148u;
    cow_thiscall(g, rd32(rd32(self)), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(self + 8u);
    wr16(self + 6u, 0x51u);
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t1;
        edx = t2;
        edi = 0x51u;
        loc_13c = in_ebx;
        loc_140 = in_ebp;
        loc_144 = in_esi;
        loc_148 = in_edi;
    }
    else
    {
        eax = t3;
        ecx = t1;
        edx = t2;
        wr32(sp0 - 0x14cu, 0x1a94u);
        g->eax = eax;
        g->esp = sp0 - 0x140u;
        t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1a94u, in_edi, in_esi);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            ebx = 0u;
            edi = 0x51u;
        }
        else
        {
            eax = t4;
            edx = t6;
            ebx = t4;
            esi = ebx;
            edi = 0x51u;
L_101de2c6: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x148u;
            t7 = cow_thiscall(g, COW_IMG(0x101f4af0u), esi, 0);
            t8 = g->ecx;
            t9 = g->edx;
            if (edi != 1u)
            {
                eax = t7;
                edx = t9;
                esi = esi + 0x54u;
                edi = edi - 1u;
                goto L_101de2c6;
            }
            eax = t7;
            ecx = t8;
            edx = t9;
            edi = edi - 1u;
        }
        wr32(self + 8u, ebx);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_140 = rd32(sp0 - 0x140u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_148 = rd32(sp0 - 0x148u);
    }
    wr32(sp0 - 0x134u, 0u);
    t10 = rd16(self + 6u);
    wr16(self + 4u, 0u);
    wr32(sp0 - 0x138u, 1u);
    if ((int16_t)t10 <= 1)
    {
        esi = 0u;
        goto L_101de462;
    }
    ebx = 1u;
    loc_134 = 0u;
    loc_138 = 1u;
L_101de2f7: ;
    wr32(sp0 - 0x14cu, ebx);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x148u;
    t11 = cow_cdecl(g, COW_IMG(0x100e0300u), 1, ebx);
    t12 = g->ecx;
    if (t11 == 0u)
    {
        eax = t11;
        ecx = t12;
    }
    else
    {
        esi = t11;
        wr32(sp0 - 0x14cu, 0x80808080u);
        wr32(sp0 - 0x150u, esi);
        wr32(sp0 - 0x154u, 0x16u);
        wr32(sp0 - 0x158u, 0u);
        t13 = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
        g->eax = (uint32_t)(int16_t)rd16(self + 4u) * 8u - (uint32_t)(int16_t)rd16(self + 4u);
        t14 = rd16(self + 4u);
        t15 = rd32(self + 8u);
        g->esp = sp0 - 0x148u;
        t16 = cow_fastcall(g, COW_IMG(0x101f4b20u), t13, t15, 4, 0u, 0x16u, esi, 0x80808080u);
        t17 = g->ecx;
        t18 = g->edx;
        t19 = (t16 & 0xffff0000u) | rd16(esi);
        wr32(sp0 - 0x14cu, t19);
        wr32(sp0 - 0x150u, 0u);
        g->esi = esi;
        g->eax = t19;
        g->edx = t18;
        t20 = cow_cdecl(g, COW_IMG(0x101cba50u), 2, 0u, t19);
        t21 = g->edx;
        t22 = (-((uint8_t)t20 != 0u) & 0xffdfdfe0u) - 0x7f7f7f80u;
        wr32(sp0 - 0x14cu, t22);
        t23 = rd32(esi + 0xcu) + 1u;
        wr32(sp0 - 0x150u, t23);
        wr32(sp0 - 0x154u, 0xau);
        wr32(sp0 - 0x158u, 2u);
        g->eax = t22;
        t24 = cow_fastcall(g, COW_IMG(0x101f4b20u), t13, t21, 4, 2u, 0xau, t23, t22);
        t25 = g->ecx;
        t26 = g->edx;
        if (rd16(esi + 0x2cu) == 0u)
        {
            edx = t26;
            edi = t13;
            loc_134 = rd32(sp0 - 0x134u);
        }
        else
        {
            eax = (t24 & 0xffff0000u) | rd16(esi + 0x2cu);
            ecx = t25;
            edi = t13;
            wr32(sp0 - 0x14cu, eax);
            wr32(sp0 - 0x150u, 1u);
            t27 = rd32(esi + 0xcu);
            wr32(sp0 - 0x154u, t27);
            g->eax = eax;
            g->edx = t27;
            g->esp = sp0 - 0x148u;
            t28 = cow_cdecl(g, COW_IMG(0x100fd710u), 3, t27, 1u, eax);
            t29 = g->edx;
            wr32(sp0 - 0x14cu, 0x80909040u);
            wr32(sp0 - 0x150u, t28 + 1u);
            wr32(sp0 - 0x154u, 0xcu);
            wr32(sp0 - 0x158u, 3u);
            g->eax = t28 + 1u;
            t30 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t29, 4, 3u, 0xcu, t28 + 1u, 0x80909040u);
            t31 = g->ecx;
            t32 = g->edx;
            wr32(sp0 - 0x14cu, 1u);
            wr32(sp0 - 0x150u, 1u);
            wr32(sp0 - 0x154u, t28);
            g->ebx = t28;
            g->edx = t32;
            g->esp = sp0 - 0x140u;
            t33 = cow_call_regs(g, COW_IMG(0x101c9440u), t30, g->ecx, g->edx, 1, 5, t28, 1u, 1u, rd32(sp0 - 0x148u), rd32(sp0 - 0x144u));
            t34 = g->edx;
            wr32(sp0 - 0x158u, t33);
            wr32(sp0 - 0x15cu, COW_IMG(0x1037f188u));
            wr32(sp0 - 0x160u, sp0 - 0x100u);
            g->ebx = t28;
            g->ecx = sp0 - 0x100u;
            g->esp = sp0 - 0x14cu;
            t35 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037f188u), t33, rd32(sp0 - 0x154u), 1u);
            t36 = g->ecx;
            wr32(sp0 - 0x164u, sp0 - 0x100u);
            g->edx = sp0 - 0x100u;
            g->esp = sp0 - 0x158u;
            t37 = cow_cdecl(g, COW_IMG(0x101c9550u), 3, sp0 - 0x100u, sp0 - 0x100u, COW_IMG(0x1037f188u));
            t38 = g->edx;
            if ((int16_t)t37 <= (int16_t)rd16(sp0 - 0x134u))
            {
                edx = t38;
                loc_134 = rd32(sp0 - 0x134u);
            }
            else
            {
                eax = t37;
                edx = t38;
                wr32(sp0 - 0x134u, eax);
                loc_134 = eax;
            }
        }
        t39 = rd32(sp0 - 0x138u);
        wr32(edi + 0x48u, t39);
        g->eax = rd32(self);
        g->edx = edx;
        t40 = rd32(self);
        g->esp = sp0 - 0x148u;
        t41 = cow_thiscall(g, rd32(t40 + 0x14u), self, 0);
        t42 = g->edx;
        wr32(edi + 0x4cu, t41);
        wr32(sp0 - 0x14cu, rd16(esi));
        g->edx = t42;
        t43 = rd32(COW_IMG(0x10621808u));
        t44 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t43, 1, rd16(esi));
        t45 = g->ecx;
        t46 = g->edx;
        wr32(sp0 - 0x130u, t44);
        if (t44 == 0u)
        {
            eax = t44;
            ecx = t45;
            ebx = t39;
        }
        else
        {
            eax = t44;
            edx = t46;
            ebx = t39;
            loc_130 = t44;
            wr32(sp0 - 0x120u, ebx);
            wr32(sp0 - 0x14cu, eax);
            wr16(sp0 - 0x12cu, rd16(esi));
            wr32(sp0 - 0x150u, sp0 - 0x12cu);
            t47 = rd32(self);
            wr8(sp0 - 0x12au, (uint8_t)ebx);
            g->eax = sp0 - 0x12cu;
            g->esp = sp0 - 0x148u;
            t48 = cow_thiscall(g, rd32(t47 + 0x20u), self, 2, sp0 - 0x12cu, eax);
            t49 = g->ecx;
            t50 = (t49 & 0xffff0000u) | rd16(esi + 0x2cu);
            wr32(sp0 - 0x14cu, t50);
            wr32(sp0 - 0x150u, 1u);
            t51 = rd32(esi + 0xcu);
            wr32(sp0 - 0x154u, t51);
            wr32(sp0 - 0x138u, t48);
            g->edx = t51;
            g->esp = sp0 - 0x13cu;
            t52 = cow_cdecl(g, COW_IMG(0x100fd820u), 6, t51, 1u, t50, rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u));
            t53 = g->edx;
            if (t52 > arg2)
            {
                eax = 0x80404040u;
                edx = t53;
            }
            else
            {
                edx = t53;
                eax = rd32(sp0 - 0x138u);
            }
            wr32(sp0 - 0x14cu, eax);
            t54 = rd32(rd32(sp0 - 0x130u) + 0x14c8u);
            wr32(sp0 - 0x150u, t54);
            wr32(sp0 - 0x154u, 1u);
            wr32(sp0 - 0x158u, 1u);
            g->eax = rd32(sp0 - 0x130u);
            t55 = rd32(sp0 - 0x130u);
            g->esp = sp0 - 0x148u;
            t56 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 1u, t54, eax);
            t57 = g->ecx;
            eax = t56;
            ecx = t57;
        }
        wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
    }
    wr32(sp0 - 0x138u, ebx + 1u);
    if ((int32_t)(ebx + 1u) < (int16_t)rd16(self + 6u))
    {
        edx = (uint32_t)(int16_t)rd16(self + 6u);
        loc_13c = rd32(sp0 - 0x13cu);
        loc_140 = rd32(sp0 - 0x140u);
        loc_144 = rd32(sp0 - 0x144u);
        loc_148 = rd32(sp0 - 0x148u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_138 = ebx + 1u;
        ebx = ebx + 1u;
        goto L_101de2f7;
    }
    edx = (uint32_t)(int16_t)rd16(self + 6u);
    esi = rd32(sp0 - 0x134u);
    loc_13c = rd32(sp0 - 0x13cu);
    loc_140 = rd32(sp0 - 0x140u);
    loc_144 = rd32(sp0 - 0x144u);
    loc_148 = rd32(sp0 - 0x148u);
L_101de462: ;
    wr32(sp0 - 0x14cu, 1u);
    t58 = (eax & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x150u, t58);
    t59 = rd32(self + 8u);
    wr32(sp0 - 0x154u, t59);
    g->esi = esi;
    g->edi = edi;
    g->eax = t58;
    g->esp = sp0 - 0x148u;
    t60 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, t59, t58, 1u);
    t61 = g->edx;
    if ((uint16_t)esi == 0u)
    {
        eax = t60;
        edx = t61;
    }
    else
    {
        eax = t60;
        edx = t61;
        if (rd8(self + 0xdu) != 1u)
        {
            wr8(self + 0xdu, 1u);
        }
        wr16(self + 0xeu, (uint16_t)esi);
    }
    g->ebx = rd32(sp0 - 0x13cu);
    g->esi = rd32(sp0 - 0x144u);
    g->edi = rd32(sp0 - 0x148u);
    g->ebp = rd32(sp0 - 0x140u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de290(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
