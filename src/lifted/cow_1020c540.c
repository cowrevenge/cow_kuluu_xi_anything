/* f_0x1020c540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020c540(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1020a420u), rd32(COW_IMG(0x10664494u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1020c79d;
    }
    edx = t2;
    edi = t1;
    if ((rd32(edi + 0x34u) >> 8u & 4u) == 0u)
    {
        eax = rd32(edi + 0x34u);
        wr32(self + 0x14u, 0u);
    }
    else
    {
        eax = rd32(edi + 0x34u);
        wr32(self + 0x14u, 1u);
    }
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x101192b0u), t3, 2, 1u, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(self + 0x14u) != 1u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_c = 0x12u;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_c = 0x11u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_c);
    t8 = g->edx;
    g->edi = edi;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 1u, t7);
    t9 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = t9;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = t9;
        if (rd32(eax + 0x3c390u) != rd32(edi + 0x1cu))
        {
            eax = rd32(eax + 0x3c390u);
        }
        else
        {
            eax = rd32(eax + 0x3c390u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
    t12 = rd32(self + 8u);
    wr32(self + 0x20u, 0u);
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x101192b0u), t12, 2, 4u, 1u);
    t14 = g->edx;
    g->edi = edi;
    g->edx = t14;
    t15 = rd32(self + 8u);
    cow_thiscall(g, COW_IMG(0x101192b0u), t15, 2, 5u, 1u);
    t16 = g->ecx;
    t17 = g->edx;
    if (rd32(rd32(COW_IMG(0x10664494u)) + 0x58u) == 3u)
    {
        ecx = t16;
        edx = t17;
    }
    else
    {
        eax = rd32(COW_IMG(0x10664494u));
        ecx = t16;
        edx = t17;
        if ((rd32(eax + 0x5cu) & 0x1000000u) != 0u)
        {
            wr32(self + 0x20u, 1u);
        }
    }
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_1020c626;
    }
    eax = rd32(self + 0x20u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1020c65a;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3bcu);
    t19 = g->edx;
    g->edi = edi;
    g->edx = t19;
    t20 = rd32(self + 8u);
    t21 = cow_thiscall(g, COW_IMG(0x1011adb0u), t20, 2, 4u, t18);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    loc_c = 0x3bdu;
L_1020c645: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_c);
    t31 = g->edx;
    g->edi = edi;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 5u, t30);
    t33 = g->edx;
    eax = t32;
    edx = t33;
L_1020c65a: ;
    t34 = rd32(edi + 0x1cu);
    g->ecx = rd32(COW_IMG(0x106643a8u));
    g->edx = edx;
    t35 = rd32(COW_IMG(0x106643a8u));
    g->esp = sp0 - 8u;
    t36 = cow_call_regs(g, COW_IMG(0x102031f0u), eax, g->ecx, g->edx, 0, 3, t34, 1u, 1u);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        eax = t36;
        edx = t38;
        goto L_1020c6d9;
    }
    ecx = t37;
    edx = t38;
    if ((rd32(edi + 0x34u) >> 8u & 4u) != 0u)
    {
        eax = rd32(edi + 0x34u);
        goto L_1020c6d9;
    }
    eax = rd32(edi + 0x34u);
    if ((eax >> 8u & 0x20u) == 0u) goto L_1020c682;
    if ((eax & 8u) == 0u) goto L_1020c6d9;
L_1020c682: ;
    if ((eax & 0x10000000u) != 0u) goto L_1020c6d9;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1020c6e5;
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd32(eax + 0x3c350u) == rd16(edi + 0x2cu))
    {
        ecx = rd32(eax + 0x3c350u);
        edx = rd16(edi + 0x2cu);
        goto L_1020c6e5;
    }
    ecx = rd32(eax + 0x3c350u);
    edx = rd16(edi + 0x2cu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_cdecl(g, COW_IMG(0x100fd370u), 1, eax);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint8_t)t39 != 0u)
    {
        ecx = t40;
        edx = t41;
        goto L_1020c6e5;
    }
    ecx = t40;
    edx = t41;
    t42 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    g->ecx = t42;
    g->edx = edx;
    t43 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 8u;
    t44 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, t42);
    t45 = g->ecx;
    t46 = g->edx;
    if ((t44 & 4u) == 0u)
    {
        eax = t44;
        edx = t46;
        goto L_1020c6d9;
    }
    ecx = t45;
    edx = t46;
    t47 = (edx & 0xffff0000u) | rd16(edi + 0x2cu);
    g->ecx = ecx;
    g->edx = t47;
    g->esp = sp0 - 8u;
    t48 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, t47);
    t49 = g->ecx;
    t50 = g->edx;
    if ((t48 & 4u) != 0u)
    {
        ecx = t49;
        edx = t50;
        goto L_1020c6e5;
    }
    eax = t48;
    edx = t50;
L_1020c6d9: ;
    g->edx = edx;
    t51 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10118b60u), t51, 2, 5u, 3u);
    t52 = g->ecx;
    t53 = g->edx;
    ecx = t52;
    edx = t53;
L_1020c6e5: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        if (rd16(eax + 0x210u) != 0u)
        {
            g->eax = eax;
            g->edx = edx;
            t54 = rd32(self + 8u);
            g->esp = sp0 - 8u;
            t55 = cow_thiscall(g, COW_IMG(0x10118b60u), t54, 2, 5u, 3u);
            t56 = g->ecx;
            t57 = g->edx;
            eax = t55;
            ecx = t56;
            edx = t57;
        }
    }
    if (rd8(edi + 0x24u) == 0x17u)
    {
        g->eax = eax;
        g->edx = edx;
        t58 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t59 = cow_thiscall(g, COW_IMG(0x10118b60u), t58, 2, 5u, 3u);
        t60 = g->ecx;
        t61 = g->edx;
        eax = t59;
        ecx = t60;
        edx = t61;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t62 = cow_call_regs(g, COW_IMG(0x10201f00u), eax, g->ecx, g->edx, 1, 0);
    t63 = g->edx;
    if ((uint8_t)t62 == 0u)
    {
        eax = t62;
        edx = t63;
    }
    else
    {
        eax = t62;
        edx = t63;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t64 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
        t65 = g->edx;
        eax = t64;
        edx = t65;
    }
    if ((rd8(edi + 0x34u) & 8u) == 0u) goto L_1020c79d;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t66 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, 3u);
    t67 = g->edx;
    if (t66 == 5u)
    {
        eax = t66;
        edx = t67;
        goto L_1020c79d;
    }
    edx = t67;
    g->ecx = rd32(COW_IMG(0x106643a8u));
    g->edx = edx;
    t68 = rd32(COW_IMG(0x106643a8u));
    g->esp = sp0 - 8u;
    t69 = cow_stdcall(g, COW_IMG(0x10203310u), 1, 1u);
    t70 = g->ecx;
    t71 = g->edx;
    if ((uint8_t)t69 == 0u)
    {
        eax = t69;
        edx = t71;
        goto L_1020c791;
    }
    ecx = t70;
    edx = t71;
    g->esp = sp0 - 8u;
    t72 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t73 = rd32(rd32(t72) + 0x160u);
    g->edi = edi;
    g->edx = t73;
    t74 = rd32(self + 8u);
    t75 = cow_thiscall(g, COW_IMG(0x1011ae50u), t74, 2, 3u, t73);
    t76 = g->ecx;
    t77 = g->edx;
    g->edx = t77;
    t78 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x61u);
    t79 = g->edx;
    g->edi = edi;
    g->edx = t79;
    t80 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 3u, t78);
    t81 = g->edx;
    g->edi = in_edi;
    g->edx = t81;
    return t80;
L_1020c626: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3bau);
    t25 = g->edx;
    g->edi = edi;
    g->edx = t25;
    t26 = rd32(self + 8u);
    t27 = cow_thiscall(g, COW_IMG(0x1011adb0u), t26, 2, 4u, t24);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    loc_c = 0x3bbu;
    goto L_1020c645;
L_1020c791: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t82 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
    t83 = g->edx;
    eax = t82;
    edx = t83;
L_1020c79d: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020c540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
