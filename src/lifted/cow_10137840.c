/* f_0x10137840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10137840(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_4;
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
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, 1u);
    g->eax = rd32(COW_IMG(0x10578158u));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x28u;
    t2 = cow_thiscall(g, COW_IMG(0x1018ee20u), rd32(t1 + 0x64044u), 1, 1u);
    t3 = g->edx;
    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) == 1u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        wr32(sp0 - 0x2cu, 1u);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t4 = cow_fastcall(g, COW_IMG(0x10162f00u), rd32(COW_IMG(0x1062193cu)), edx, 1, 1u);
        wr32(sp0 - 0x2cu, 1u);
        t5 = rd32(self + 8u);
        wr32(sp0 - 0x30u, t5);
        g->edx = t5;
        t6 = cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    if (rd8(self + 0x60u) == 0u)
    {
        loc_1c = in_ebx;
        loc_20 = in_ebp;
        loc_24 = in_esi;
        loc_28 = in_edi;
    }
    else
    {
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        t8 = rd32(self + 0x64u);
        wr32(sp0 - 0x34u, t8);
        t9 = rd32(self + 0x54u);
        wr32(sp0 - 0x38u, t9);
        g->eax = t8;
        g->esp = sp0 - 0x28u;
        t10 = cow_fastcall(g, COW_IMG(0x101295d0u), rd32(COW_IMG(0x10578158u)), edx, 4, t9, t8, 0u, 0u);
        wr32(self + 0x64u, t10);
        if (t10 != 0u)
        {
            loc_1c = in_ebx;
            loc_20 = in_ebp;
            loc_24 = in_esi;
            loc_28 = in_edi;
        }
        else
        {
            eax = t10;
            wr8(self + 0x60u, (uint8_t)eax);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    t11 = rd32(rd32(self + 8u) + 0x88u);
    wr32(sp0 - 0x10u, t11);
    t12 = rd32(self + 0x5cu);
    t13 = rd32(self + 8u);
    wr32(t11 + 8u, t12);
    t14 = rd32(self + 0x54u);
    wr32(sp0 - 0x2cu, t14);
    wr32(sp0 - 0x14u, 0u);
    g->eax = t12;
    g->edx = t13;
    g->esp = sp0 - 0x28u;
    t15 = cow_thiscall(g, COW_IMG(0x10129390u), rd32(COW_IMG(0x10578158u)), 1, t14);
    t16 = g->edx;
    wr32(sp0 - 4u, t15);
    if (rd32(self + 0x54u) == 0u)
    {
        edi = t11;
        loc_4 = t15;
        goto L_1013797c;
    }
    eax = rd32(self + 0x54u);
    edx = t16;
    esi = t15;
    edi = t11;
    loc_4 = t15;
    if (eax == 8u) goto L_1013797c;
    g->esp = sp0 - 0x28u;
    t17 = cow_call_regs(g, COW_IMG(0x10129c60u), eax, rd32(COW_IMG(0x10578158u)), g->edx, 1, 0);
    wr32(sp0 - 0x18u, t17);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->edx = sp0 - 0x14u;
    t18 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 0x18u, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0x18u, sp0 - 0x14u);
    t19 = g->edx;
    if (rd8(self + 0x24u) == 0u)
    {
        eax = (t18 & 0xffffff00u) | rd8(self + 0x24u);
    }
    else
    {
        eax = (t18 & 0xffffff00u) | rd8(self + 0x24u);
        edx = t19;
        if ((uint16_t)esi != 0u)
        {
            t20 = (uint32_t)(int16_t)esi + rd32(self + 0x20u);
            wr32(self + 0x20u, t20);
            edx = t20;
        }
        if ((uint8_t)eax != 0u)
        {
            if (rd32(sp0 - 0x14u) == 0u)
            {
                eax = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = rd32(sp0 - 0x14u);
                if ((uint16_t)esi != 0u)
                {
                    wr8(self + 0x24u, 0u);
L_1013793f: ;
                    g->ebx = 0u;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x28u;
                    t21 = cow_thiscall(g, COW_IMG(0x10138180u), self, 0);
                    t22 = g->edx;
                    if (rd8(self + 0x24u) == 0u)
                    {
                        eax = (t21 & 0xffffff00u) | rd8(self + 0x24u);
                        edx = t22;
                        goto L_1013793f;
                    }
                    eax = (t21 & 0xffffff00u) | rd8(self + 0x24u);
                }
            }
        }
    }
    t23 = rd32(self + 0x54u);
    wr32(sp0 - 0x2cu, t23);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t24 = cow_stdcall(g, COW_IMG(0x101293f0u), 1, t23);
    wr32(edi + 0x10u, (uint8_t)t24);
    t25 = rd32(self + 0x58u);
    wr32(edi + 0xcu, t25);
    t26 = (uint8_t)t24 - rd32(self + 0x20u) - rd32(self + 0x58u);
    t27 = rd32(self + 0x20u);
    wr32(edi + 0x14u, t26);
    eax = t26;
    edx = t27;
    ebx = 0u;
L_10137af7: ;
    wr32(sp0 - 0x2cu, self + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t50 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, self + 0x14u);
    t51 = g->edx;
    wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) + 0xfffcu));
    wr16(self + 0x16u, (uint16_t)(rd16(self + 0x16u) + 3u));
    g->edx = t51;
    t52 = rd32(COW_IMG(0x10662d98u));
    t53 = cow_thiscall(g, COW_IMG(0x1011ba40u), t52, 0);
    t54 = g->ecx;
    t55 = g->edx;
    if ((uint8_t)t53 == 0u)
    {
        eax = t53;
        ecx = t54;
        edx = t55;
    }
    else
    {
        eax = t53;
        ecx = t54;
        edx = t55;
        wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) + 0xfff0u));
    }
    wr32(sp0 - 0x2cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t56 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t57 = g->edx;
    if ((uint8_t)t56 != 0u)
    {
        eax = t56;
        edx = t57;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t58 = cow_thiscall(g, COW_IMG(0x1011ba40u), self, 0);
        t59 = g->edx;
        if ((uint8_t)t58 != 0u)
        {
            eax = t58;
            edx = t59;
            wr32(sp0 - 0x2cu, 1u);
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t60 = cow_fastcall(g, COW_IMG(0x10162f00u), rd32(COW_IMG(0x1062193cu)), edx, 1, 1u);
            t61 = g->edx;
            wr32(sp0 - 0x2cu, COW_IMG(0x1036f96cu));
            g->edx = t61;
            t62 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f96cu));
            t63 = g->edx;
            wr32(sp0 - 0x2cu, COW_IMG(0x1036f958u));
            cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f958u));
        }
    }
    t64 = rd32(self + 0x54u);
    wr32(sp0 - 0x2cu, t64);
    wr32(sp0 - 0x30u, arg1);
    g->edi = edi;
    g->eax = arg1;
    g->edx = t64;
    g->esp = sp0 - 0x28u;
    t65 = cow_thiscall(g, COW_IMG(0x10137c70u), self, 2, arg1, t64);
    t66 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t66;
    return t65;
L_1013797c: ;
    t28 = rd32(rd32(rd32(COW_IMG(0x10578158u)) + 0x64044u) + 8u);
    wr32(sp0 - 8u, t28);
    wr32(sp0 - 0x14u, 0u);
    t29 = rd32(self + 0x20u);
    wr32(sp0 - 0xcu, t29);
    g->edx = t29;
    g->esp = sp0 - 0x28u;
    t30 = cow_call_regs(g, COW_IMG(0x10129c60u), t28, rd32(COW_IMG(0x10578158u)), g->edx, 1, 0);
    t31 = g->edx;
    wr32(sp0 - 0x18u, t30);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->edx = t31;
    t32 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 0x14u, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0x18u, sp0 - 0x14u);
    t33 = g->edx;
    if (rd16(sp0 - 0x18u) == 0xffffu)
    {
        edx = t33;
        loc_14 = 0u;
        goto L_10137a0c;
    }
    eax = t32;
    loc_14 = 0u;
L_101379c4: ;
    t34 = rd32(self + 0x54u);
    wr32(sp0 - 0x2cu, t34);
    esi = loc_14;
    edi = sp0 - 0x68u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t35 = cow_fastcall(g, COW_IMG(0x10129980u), rd32(COW_IMG(0x10578158u)), t34, 16, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), sp0 - 0x18u, t34);
    t36 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        edx = t36;
        goto L_10137a08;
    }
    edx = t36;
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t37 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 0x14u, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0x18u, sp0 - 0x14u);
    t38 = g->edx;
    if (t37 == 0u)
    {
        edx = t38;
        goto L_10137a08;
    }
    eax = t37;
    edx = t38;
    if (rd16(sp0 - 0x18u) != 0xffffu)
    {
        loc_14 = rd32(sp0 - 0x14u);
        goto L_101379c4;
    }
L_10137a08: ;
    edi = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_10137a0c: ;
    if (loc_14 == 0u)
    {
        ebx = 0u;
    }
    else
    {
        edx = rd32(COW_IMG(0x10578158u));
        ebx = rd32(sp0 - 8u) - rd32(rd32(COW_IMG(0x10578158u)) + 0x10u) + 1u;
    }
    if (rd16(sp0 - 0x18u) != 0xffffu)
    {
L_10137a34: ;
        t39 = rd32(sp0 - 0xcu) - 1u;
        wr32(sp0 - 0xcu, t39);
        if ((int32_t)(rd32(sp0 - 0xcu) - 1u) < 0) goto L_10137aae;
        loc_c = t39;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        t40 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 0x14u, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0x18u, sp0 - 0x14u);
        if (rd16(sp0 - 0x18u) == 0xffffu)
        {
            loc_14 = rd32(sp0 - 0x14u);
            goto L_10137aae;
        }
        eax = t40;
L_10137a5c: ;
        t41 = rd32(self + 0x54u);
        wr32(sp0 - 0x2cu, t41);
        esi = rd32(sp0 - 0x14u);
        edi = sp0 - 0x68u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t42 = cow_fastcall(g, COW_IMG(0x10129980u), rd32(COW_IMG(0x10578158u)), t41, 16, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), sp0 - 0x18u, t41);
        t43 = g->edx;
        if ((uint8_t)t42 != 0u)
        {
            edx = t43;
            goto L_10137aa2;
        }
        edx = t43;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t44 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 0x14u, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0x18u, sp0 - 0x14u);
        t45 = g->edx;
        if (t44 == 0u)
        {
            edx = t45;
            goto L_10137aa2;
        }
        eax = t44;
        if (rd16(sp0 - 0x18u) != 0xffffu) goto L_10137a5c;
L_10137aaa: ;
        edi = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
L_10137aae: ;
    t46 = rd32(self + 0x58u);
    t47 = rd32(sp0 - 8u);
    wr32(edi + 0xcu, t46);
    wr32(edi + 0x10u, t47);
    if (loc_14 == 0u)
    {
        eax = loc_14;
        edx = t46;
        goto L_10137af2;
    }
    eax = loc_14;
    if (rd8(self + 0x24u) == 0u)
    {
        edx = rd32(self + 0x58u);
        esi = ebx + rd32(eax + 0xcu) - rd32(self + 0x58u);
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
    }
    else
    {
        edx = rd32(self + 0x58u);
        esi = ebx + rd32(eax + 0xcu) - rd32(self + 0x58u);
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
        if (rd16(sp0 - 4u) != 0u)
        {
            wr8(self + 0x24u, 0u);
L_10137ae0: ;
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t48 = cow_thiscall(g, COW_IMG(0x10138180u), self, 0);
            t49 = g->edx;
            if (rd8(self + 0x24u) == 0u)
            {
                eax = (t48 & 0xffffff00u) | rd8(self + 0x24u);
                edx = t49;
                goto L_10137ae0;
            }
            eax = (t48 & 0xffffff00u) | rd8(self + 0x24u);
            edx = t49;
        }
    }
    if ((int32_t)esi >= 0) goto L_10137af4;
L_10137af2: ;
    esi = 0u;
L_10137af4: ;
    wr32(edi + 0x14u, esi);
    goto L_10137af7;
L_10137a30: ;
    edi = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    goto L_10137a34;
L_10137aa2: ;
    if (rd16(sp0 - 0x18u) != 0xffffu) goto L_10137a30;
    goto L_10137aaa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10137840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10137840(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
