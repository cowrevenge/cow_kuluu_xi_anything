/* f_0x101eb0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101eb0d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_c;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    g->esp = sp0 - 0x24u;
    cow_fastcall(g, COW_IMG(0x101ead30u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 8u, 0x1010101u);
    wr8(sp0 - 4u, 1u);
    g->eax = 0x1010101u;
    g->ecx = t1;
    g->edx = t2;
    t3 = cow_stdcall(g, COW_IMG(0x100e7260u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->ebx = 0u;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x100e6c00u), t4, 0);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    t9 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = (uint32_t)(int16_t)t9 + 6u;
    t13 = rd32(self + 0x5cu);
    wr32(self + 0x50u, t12);
    if (t13 != 0u)
    {
        ecx = t10;
        edi = t12;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    else
    {
        edx = t11;
        edi = t12;
        wr32(sp0 - 0x28u, edi * 0x54u);
        g->eax = edi * 8u - edi;
        g->esp = sp0 - 0x1cu;
        t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, edi * 0x54u, edx, 1, 3, edi * 0x54u, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            ecx = t15;
            ebp = 0u;
        }
        else
        {
            eax = t14;
            ecx = t15;
            edx = t16;
            ebp = t14;
            if ((int32_t)(edi - 1u) < 0)
            {
                edi = edi - 1u;
            }
            else
            {
                ebx = ebp;
                edi = edi - 1u;
                edi = edi + 1u;
L_101eb13d: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t17 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t18 = g->ecx;
                t19 = g->edx;
                if (edi != 1u)
                {
                    eax = t17;
                    edx = t19;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_101eb13d;
                }
                ecx = t18;
                edi = edi - 1u;
            }
        }
        wr32(self + 0x5cu, ebp);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    if (rd32(self + 0x60u) == 0u)
    {
        t20 = rd32(self + 0x50u);
        wr32(sp0 - 0x28u, t20 * 0x88u);
        g->eax = t20;
        g->esp = sp0 - 0x1cu;
        t21 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, t20 * 0x88u, 1, 3, t20 * 0x88u, loc_24, loc_20);
        t22 = g->ecx;
        wr32(self + 0x60u, t21);
        ecx = t22;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    t23 = rd32(self + 0x50u);
    wr32(self + 0x54u, 0u);
    wr32(sp0 - 0x10u, 0u);
    if ((int32_t)t23 <= 0)
    {
        eax = t23;
        loc_10 = 0u;
        goto L_101eb336;
    }
    loc_10 = 0u;
L_101eb183: ;
    wr32(sp0 - 0x28u, loc_10);
    t24 = rd32(self + 0x54u) * 0x54u + rd32(self + 0x5cu);
    wr32(sp0 - 0x14u, t24);
    g->eax = rd32(self + 0x54u) * 0x15u;
    g->edx = loc_10;
    t25 = rd32(self + 0x54u);
    t26 = rd32(self + 0x5cu);
    g->esp = sp0 - 0x24u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), t26, 1, loc_10);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_101eb336;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    ebx = t24;
    ebp = t27;
    wr32(sp0 - 0x28u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t30 = cow_cdecl(g, COW_IMG(0x100e75f0u), 1, ebp);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 0u) goto L_101eb322;
    eax = t30;
    ecx = t31;
    edx = t32;
    wr32(sp0 - 0x28u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t33 = cow_cdecl(g, COW_IMG(0x100e7600u), 1, ebp);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        wr32(sp0 - 0x28u, ebp);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t36 = cow_cdecl(g, COW_IMG(0x100e76a0u), 1, ebp);
        t37 = g->ecx;
        t38 = g->edx;
        if ((uint8_t)t36 != 0u)
        {
            eax = t36;
            ecx = t37;
            edx = t38;
            wr32(sp0 - 0x28u, ebp);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t39 = cow_cdecl(g, COW_IMG(0x100e7710u), 1, ebp);
            t40 = g->ecx;
            t41 = g->edx;
            if ((uint8_t)t39 == 0u)
            {
                eax = t39;
                ecx = t40;
                edx = t41;
                wr32(sp0 - 0x28u, ebp);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t42 = cow_cdecl(g, COW_IMG(0x100e76e0u), 1, ebp);
                t43 = g->edx;
                t44 = -((uint8_t)t42 != 0u) + 1u;
                eax = t44;
                edx = t43;
                edi = t44;
            }
            else
            {
                eax = t39;
                edx = t41;
                edi = 4u;
            }
        }
        else
        {
            eax = t36;
            edx = t38;
            edi = 3u;
        }
    }
    else
    {
        eax = t33;
        edx = t35;
        edi = 2u;
    }
    wr32(sp0 - 0xcu, edi);
    if (rd8(edi + sp0 - 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + sp0 - 8u);
        loc_c = edi;
        loc_14 = rd32(sp0 - 0x14u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(edi + sp0 - 8u);
        loc_c = edi;
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, ebx);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t45 = cow_thiscall(g, COW_IMG(0x101eb040u), self, 2, ebx, edi);
        wr8(edi + sp0 - 8u, 0u);
        wr32(sp0 - 0x14u, t45);
        eax = t45;
        ebx = t45;
        loc_c = rd32(sp0 - 0xcu);
        loc_14 = t45;
    }
    if (rd8(edi + self + 0xa4u) != 0u) goto L_101eb322;
    t46 = rd32(self + 0x54u);
    wr32(sp0 - 0x28u, ebp);
    t47 = t46 * 0x88u + rd32(self + 0x60u);
    wr32(sp0 - 0x2cu, t47);
    wr32(sp0 - 0x30u, ebx);
    t48 = rd16(sp0 - 0x10u);
    t49 = rd32(self + 0x60u);
    wr16(t47 + 2u, (uint16_t)t48);
    g->eax = (t46 & 0xffff0000u) | t48;
    g->edx = t49;
    g->esp = sp0 - 0x24u;
    t50 = cow_thiscall(g, COW_IMG(0x101ead70u), self, 3, ebx, t47, ebp);
    t51 = g->ecx;
    t52 = g->edx;
    wr32(sp0 - 0x28u, ebp);
    g->ecx = t51;
    g->edx = t52;
    t53 = cow_cdecl(g, COW_IMG(0x100e76a0u), 1, ebp);
    t54 = g->ecx;
    t55 = g->edx;
    if ((uint8_t)t53 != 0u)
    {
        ecx = t54;
        edx = t55;
        edi = t47;
        wr8(edi + 1u, 0u);
    }
    else
    {
        ecx = t54;
        edx = t55;
        edi = t47;
        wr8(edi + 1u, 1u);
    }
    if (rd32(sp0 - 0xcu) > 4u)
    {
        eax = rd32(sp0 - 0xcu);
        goto L_101eb2de;
    }
    eax = rd32(sp0 - 0xcu);
    t56 = rd32(COW_IMG(0x101eb374u) + eax * 4u);
    switch (t56 - RD)
    {
    case 0x101eb289u: goto L_101eb289;
    case 0x101eb2ccu: goto L_101eb2cc;
    case 0x101eb2d1u: goto L_101eb2d1;
    case 0x101eb2d6u: goto L_101eb2d6;
    case 0x101eb2dbu: goto L_101eb2db;
    default: rt_fatal(g, COW_IMG(0x101eb282u), "switch");
    }
    return;
L_101eb289: ;
    wr32(sp0 - 0x28u, ebp);
    wr32(sp0 - 0x2cu, edi);
    t57 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x30u, t57);
    wr8(edi, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t58 = cow_thiscall(g, COW_IMG(0x101eae00u), self, 3, t57, edi, ebp);
    t59 = g->edx;
    wr32(sp0 - 0x28u, ebp);
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, t57);
    g->edx = t59;
    t60 = cow_thiscall(g, COW_IMG(0x101eae80u), self, 3, t57, edi, ebp);
    t61 = g->ecx;
    t62 = g->edx;
    wr32(sp0 - 0x28u, ebp);
    g->ecx = t61;
    g->edx = t62;
    t63 = cow_cdecl(g, COW_IMG(0x100e7810u), 1, ebp);
    t64 = g->ecx;
    t65 = g->edx;
    if ((uint8_t)t63 == 0u)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    else
    {
        eax = t63;
        ecx = t64;
        edx = t65;
        ebx = t57;
        wr32(sp0 - 0x28u, ebp);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t66 = cow_cdecl(g, COW_IMG(0x100e7870u), 1, ebp);
        t67 = g->ecx;
        t68 = g->edx;
        if ((uint8_t)t66 == 0u)
        {
            eax = t66;
            ecx = t67;
            edx = t68;
        }
        else
        {
            eax = t66;
            edx = t68;
            wr32(sp0 - 0x28u, ebp);
            wr32(sp0 - 0x2cu, edi);
            wr32(sp0 - 0x30u, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t69 = cow_thiscall(g, COW_IMG(0x101eaec0u), self, 3, ebx, edi, ebp);
            t70 = g->ecx;
            t71 = g->edx;
            eax = t69;
            ecx = t70;
            edx = t71;
        }
    }
L_101eb2de: ;
    wr32(sp0 - 0x28u, ebp);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t72 = cow_cdecl(g, COW_IMG(0x100e63d0u), 1, ebp);
    if (t72 == 0u)
    {
        wr8(edi + 0x80u, 0u);
    }
    else
    {
        eax = t72;
        wr32(sp0 - 0x28u, 0x80808080u);
        t73 = rd32(self + 0x84u);
        wr32(sp0 - 0x2cu, t73);
        wr32(sp0 - 0x30u, 0xeu);
        wr32(sp0 - 0x34u, 0u);
        g->esp = sp0 - 0x24u;
        cow_fastcall(g, COW_IMG(0x101f4b20u), rd32(sp0 - 0x14u), t73, 4, 0u, 0xeu, t73, 0x80808080u);
        wr8(edi + 0x80u, 1u);
    }
    wr32(rd32(sp0 - 0x14u) + 0x48u, edi);
    t74 = rd32(self + 0x54u) + 1u;
    wr32(self + 0x54u, t74);
L_101eb322: ;
    t75 = rd32(sp0 - 0x10u) + 1u;
    wr32(sp0 - 0x10u, t75);
    if ((int32_t)(rd32(sp0 - 0x10u) + 1u) < (int32_t)rd32(self + 0x50u))
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = t75;
        goto L_101eb183;
    }
    eax = t75;
    ecx = rd32(self + 0x50u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_10 = t75;
L_101eb336: ;
    wr32(sp0 - 0x28u, 1u);
    t76 = (ecx & 0xffff0000u) | rd16(self + 0x54u);
    wr32(sp0 - 0x2cu, t76);
    t77 = rd32(self + 0x5cu);
    wr32(sp0 - 0x30u, t77);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x24u;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, t77, 3, t77, t76, 1u);
    t78 = g->ecx;
    t79 = g->edx;
    if (rd32(sp0 - 0x10u) == 0u)
    {
        eax = rd32(sp0 - 0x10u);
        ecx = t78;
        edx = t79;
        wr32(sp0 - 0x28u, 0x66u);
        wr32(sp0 - 0x2cu, 7u);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t80 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x66u);
        wr32(self + 0x3cu, t80);
        wr8(self + 0x44u, 0x20u);
        wr8(self + 0x45u, 0x18u);
    }
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
L_101eb2cc: ;
    wr8(edi, 2u);
    goto L_101eb2de;
L_101eb2d1: ;
    wr8(edi, 3u);
    goto L_101eb2de;
L_101eb2d6: ;
    wr8(edi, 7u);
    goto L_101eb2de;
L_101eb2db: ;
    wr8(edi, 4u);
    goto L_101eb2de;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101eb0d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
