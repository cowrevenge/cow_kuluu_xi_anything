/* f_0x10145240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10145240(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
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
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106631d4u));
        edx = in_edx;
        loc_4 = self;
        goto L_1014544c;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        loc_4 = self;
        goto L_1014544c;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd8(COW_IMG(0x105782d4u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 0u, 1u, 0u);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            ecx = t2;
            edx = t3;
            wr8(COW_IMG(0x105782d4u), 0u);
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x100f97a0u), 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_call_regs(g, COW_IMG(0x101cc1b0u), t5, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    g->ecx = rd32(COW_IMG(0x106631d4u));
    g->edx = t9;
    t10 = rd32(COW_IMG(0x106631d4u));
    t11 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        edx = t13;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t8 != 0u;
        loc_4 = (self & 0xffffffu) | (t5 != 0u) << 0x18u;
        goto L_101452df;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t8 != 0u;
    loc_4 = (self & 0xffffffu) | (t5 != 0u) << 0x18u;
    if ((uint8_t)ebx != 0u) goto L_101452df;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 5u);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 7u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    edi = in_edi;
    loc_14 = 0u;
L_1014540e: ;
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    t74 = rd32(self + 8u);
    g->esp = sp0 - 0x10u;
    t75 = cow_thiscall(g, COW_IMG(0x1011ae50u), t74, 2, 6u, loc_14);
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
L_10145418: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t78 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x93u);
    t79 = g->edx;
    g->edi = edi;
    g->edx = t79;
    t80 = rd32(self + 8u);
    t81 = cow_thiscall(g, COW_IMG(0x1011ade0u), t80, 2, 6u, t78);
    t82 = g->ecx;
    t83 = g->edx;
    g->edx = t83;
    t84 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x29au);
    t85 = g->edx;
    g->edi = edi;
    g->edx = t85;
    t86 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 6u, t84);
    t87 = g->edx;
    eax = t86;
    edx = t87;
L_1014544c: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101452df: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t21 = g->edx;
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    t22 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0x14u;
    t23 = cow_call_regs(g, COW_IMG(0x100f96e0u), g->eax, g->ecx, t21, 1, 1, t22);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        edi = t20;
        goto L_10145375;
    }
    eax = t23;
    edx = t25;
    edi = t20;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 5u);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 6u);
    t29 = g->edx;
    g->edx = t29;
    t30 = rd32(self + 8u);
    t31 = cow_thiscall(g, COW_IMG(0x10118b60u), t30, 2, 5u, 7u);
    t32 = g->ecx;
    t33 = g->edx;
    if (edi == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
    }
    else
    {
        t34 = rd32(rd32(edi) + 0x980u);
        g->edi = edi;
        g->eax = t34;
        g->edx = rd32(edi);
        t35 = rd32(self + 8u);
        t36 = rd32(edi);
        g->esp = sp0 - 0x10u;
        t37 = cow_thiscall(g, COW_IMG(0x1011ae50u), t35, 2, 6u, t34);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t40 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x94u);
    t41 = g->edx;
    g->edi = edi;
    g->edx = t41;
    t42 = rd32(self + 8u);
    t43 = cow_thiscall(g, COW_IMG(0x1011ade0u), t42, 2, 6u, t40);
    t44 = g->ecx;
    t45 = g->edx;
    g->edx = t45;
    t46 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x29bu);
    t47 = g->edx;
    g->edi = edi;
    g->edx = t47;
    t48 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 6u, t46);
    t49 = g->edx;
    wr8(self + 0x16u, 0u);
    g->edi = in_edi;
    g->edx = t49;
    return t48;
L_10145375: ;
    if (rd8(self + 0x16u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x16u);
        goto L_101453af;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x16u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t50 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 5u);
    t51 = g->edx;
    g->edx = t51;
    t52 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
    t53 = g->edx;
    g->edx = t53;
    t54 = rd32(self + 8u);
    t55 = cow_thiscall(g, COW_IMG(0x10118b60u), t54, 2, 5u, 7u);
    t56 = g->ecx;
    t57 = g->edx;
    if (edi == 0u)
    {
        eax = t55;
        ecx = t56;
        edx = t57;
        goto L_10145418;
    }
    eax = t55;
    t58 = rd32(rd32(edi) + 0x97cu);
    edx = t58;
    loc_14 = t58;
    goto L_1014540e;
L_101453af: ;
    g->edi = edi;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t59 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t60 = g->edx;
    if ((uint8_t)t59 == 0u)
    {
        eax = t59;
        edx = t60;
        goto L_101453c2;
    }
    eax = t59;
    edx = t60;
    if ((uint8_t)ebx != 0u) goto L_101453c2;
    loc_18 = 0xbu;
L_101453c6: ;
    g->eax = eax;
    g->edx = edx;
    t61 = rd32(self + 8u);
    g->esp = sp0 - 0x10u;
    t62 = cow_thiscall(g, COW_IMG(0x10118b60u), t61, 2, loc_18, 5u);
    t63 = g->ecx;
    t64 = g->edx;
    g->edi = edi;
    g->edx = t64;
    t65 = cow_call_regs(g, COW_IMG(0x10097b40u), t62, g->ecx, g->edx, 1, 0);
    t66 = g->edx;
    if ((uint8_t)t65 == 0u)
    {
        eax = t65;
        edx = t66;
        goto L_101453e9;
    }
    eax = t65;
    edx = t66;
    if ((uint8_t)ebx != 0u) goto L_101453e9;
    if (loc_4 >> 0x18u == 0u)
    {
        eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
        goto L_101453e9;
    }
    eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
    loc_18 = 0xbu;
L_101453ed: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t67 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, loc_18, 7u);
    t68 = g->edx;
    g->edx = t68;
    t69 = rd32(self + 8u);
    t70 = cow_thiscall(g, COW_IMG(0x10118b60u), t69, 2, 0xbu, 6u);
    t71 = g->ecx;
    t72 = g->edx;
    if (edi == 0u)
    {
        eax = t70;
        ecx = t71;
        edx = t72;
        goto L_10145418;
    }
    edx = t72;
    t73 = rd32(rd32(edi) + 0x978u);
    eax = rd32(edi);
    loc_14 = t73;
    goto L_1014540e;
L_101453c2: ;
    loc_18 = 5u;
    goto L_101453c6;
L_101453e9: ;
    loc_18 = 5u;
    goto L_101453ed;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145240(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
