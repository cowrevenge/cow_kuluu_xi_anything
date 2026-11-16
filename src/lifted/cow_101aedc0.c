/* f_0x101aedc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101aedc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t2 = cow_thiscall(g, COW_IMG(0x1011a710u), t1, 1, sp0 - 8u);
    t3 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103798ccu));
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015dc10u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798ccu));
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        ebp = t4;
        edi = (uint32_t)(int16_t)rd16(sp0 - 2u) - (uint32_t)(int16_t)rd16(sp0 - 6u) + 2u;
        goto L_101aee97;
    }
    eax = t4;
    edx = t5;
    ebp = t4;
    edi = (uint32_t)(int16_t)rd16(sp0 - 2u) - (uint32_t)(int16_t)rd16(sp0 - 6u) + 2u;
    wr32(sp0 - 0x2cu, COW_IMG(0x103798b8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t6 = cow_thiscall(g, COW_IMG(0x1015dc10u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798b8u));
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101aee62;
    }
    eax = t6;
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, eax, g->edx, 0, 1, sp0 - 0x18u);
    t8 = g->edx;
    t9 = (uint32_t)(int16_t)rd16(sp0 - 0x18u);
    wr32(sp0 - 0x10u, t9);
    t10 = (uint32_t)(int16_t)rd16(sp0 - 0x12u) + 2u;
    wr32(sp0 - 0xcu, t10);
    eax = t10;
    edx = t8;
    loc_10 = t9;
L_101aee9b: ;
    if (eax != 0u) goto L_101aef2e;
    if (rd32(rd32(COW_IMG(0x1062193cu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x1062193cu));
        goto L_101aeed9;
    }
    eax = rd32(COW_IMG(0x1062193cu));
    ecx = rd32(rd32(COW_IMG(0x1062193cu)) + 8u);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, ecx, g->edx, 0, 1, sp0 - 0x18u);
    t15 = g->edx;
    t16 = (uint32_t)(int16_t)rd16(sp0 - 0x18u);
    wr32(sp0 - 0x10u, t16);
    if ((int32_t)((uint32_t)(int16_t)rd16(sp0 - 0x12u) - 0x20u) <= (int16_t)rd16(sp0 - 0x16u))
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x12u) - 0x20u;
        edx = t15;
        loc_10 = t16;
    }
    else
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x16u);
        edx = t15;
        loc_10 = t16;
        eax = ecx;
    }
    eax = eax - edi;
L_101aeefc: ;
    wr32(sp0 - 0xcu, eax);
    if (eax != 0u) goto L_101aef2e;
L_101aef04: ;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x10u, 0x20u);
    wr32(sp0 - 0xcu, 0xc8u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 0x10u, 0u, 1u);
    t18 = g->edx;
    if (0u)
    {
        edx = t18;
        goto L_101aef3c;
    }
    eax = 0xc8u;
    edx = t18;
    loc_10 = 0x20u;
L_101aef2e: ;
    wr32(sp0 - 0x2cu, eax);
    wr32(sp0 - 0x30u, loc_10);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10119110u), eax, rd32(self + 8u), g->edx, 0, 2, loc_10, eax);
    t19 = g->edx;
    edx = t19;
L_101aef3c: ;
    t20 = rd32(rd32(self + 0x1cu) + 0xf10cu);
    t21 = rd32(self + 0x1cu);
    wr32(self + 0x24u, t20);
    t22 = rd32(t21 + 0xf110u);
    wr32(sp0 - 0x2cu, t22);
    wr32(sp0 - 0x30u, t20);
    g->eax = t22;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t23 = cow_thiscall(g, COW_IMG(0x101af580u), self, 2, t20, t22);
    t24 = g->edx;
    wr32(self + 0x2cu, t23);
    wr32(self + 0x14u, 0u);
    eax = t23;
    edx = t24;
    edi = 8u;
L_101aef62: ;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, edi);
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t25 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, edi, 0u);
    t26 = g->edx;
    if ((int32_t)(edi + 1u) < 83)
    {
        eax = t25;
        edx = t26;
        edi = edi + 1u;
        goto L_101aef62;
    }
    eax = t25;
    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u)
    {
        edx = rd32(COW_IMG(0x10456a28u));
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t47 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 1u);
        t48 = g->edx;
        wr32(sp0 - 0x2cu, 2u);
        wr32(sp0 - 0x30u, 0x10u);
        g->edx = t48;
        t49 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 2u);
        t50 = g->edx;
        wr32(sp0 - 0x2cu, 3u);
        wr32(sp0 - 0x30u, 0x10u);
        g->edx = t50;
        t51 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 3u);
        t52 = g->edx;
        wr32(sp0 - 0x2cu, 4u);
        wr32(sp0 - 0x30u, 0x10u);
        g->edx = t52;
        t53 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 4u);
        t54 = g->edx;
        wr32(sp0 - 0x2cu, 5u);
        wr32(sp0 - 0x30u, 0x10u);
        g->edx = t54;
        t55 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 5u);
        t56 = g->edx;
        wr32(sp0 - 0x2cu, 0x54u);
        wr32(sp0 - 0x30u, 0x10u);
        g->edx = t56;
        t57 = rd32(self + 8u);
        t58 = cow_thiscall(g, COW_IMG(0x10118b60u), t57, 2, 0x10u, 0x54u);
        t59 = g->ecx;
        t60 = g->edx;
        eax = t58;
        ecx = t59;
        edx = t60;
    }
    else
    {
        edx = rd32(COW_IMG(0x10456a28u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t27 = cow_thiscall(g, COW_IMG(0x101af630u), self, 0);
        t28 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 4u);
        g->edi = t27;
        g->edx = t28;
        t29 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 4u, 0u);
        t30 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0x55u);
        g->edi = t27;
        g->edx = t30;
        t31 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 0x55u, 0u);
        t32 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0x56u);
        g->edi = t27;
        g->edx = t32;
        t33 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 0x56u, 0u);
        t34 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0x57u);
        g->edi = t27;
        g->edx = t34;
        t35 = rd32(self + 8u);
        t36 = cow_thiscall(g, COW_IMG(0x101192b0u), t35, 2, 0x57u, 0u);
        t37 = g->ecx;
        t38 = g->edx;
        if (t27 == 0u)
        {
            eax = t36;
            ecx = t37;
            edx = t38;
        }
        else
        {
            eax = t36;
            ecx = t37;
            edx = t38;
            edi = t27;
            if (rd8(edi + 0x10u) != 0u)
            {
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, 1u);
                g->edi = edi;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t39 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 1u, 0u);
                t40 = g->edx;
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, 2u);
                g->edi = edi;
                g->edx = t40;
                t41 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 2u, 0u);
                t42 = g->edx;
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, 3u);
                g->edi = edi;
                g->edx = t42;
                t43 = rd32(self + 8u);
                t44 = cow_thiscall(g, COW_IMG(0x101192b0u), t43, 2, 3u, 0u);
                t45 = g->ecx;
                t46 = g->edx;
                eax = t44;
                ecx = t45;
                edx = t46;
            }
        }
    }
    wr32(sp0 - 0x2cu, 0x25cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t61 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x25cu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t62 = g->edx;
    if (t61 == 0u)
    {
        edx = t62;
        eax = 0u;
    }
    else
    {
        eax = t61;
        wr32(eax, 0x4bu);
        ecx = 0x4bu;
        edx = eax + 4u;
        eax = eax + 4u;
L_101af047: ;
        wr16(eax, 0u);
        wr16(eax + 2u, 0u);
        wr16(eax + 4u, 0u);
        wr16(eax + 6u, 0u);
        if (ecx != 1u)
        {
            eax = eax + 8u;
            ecx = ecx - 1u;
            goto L_101af047;
        }
        eax = edx;
    }
    wr32(self + 0x30u, eax);
    edi = 0u;
L_101af067: ;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, edi + 8u);
    t63 = edi * 8u + rd32(self + 0x30u);
    wr32(sp0 - 0x38u, t63);
    g->ebx = 0u;
    g->edi = edi;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, t63, edi + 8u, 1u, 1u);
    t64 = rd32(self + 0x30u);
    wr16(edi * 8u + t64, (uint16_t)(rd16(edi * 8u + t64) + 1u));
    t65 = rd32(self + 0x30u);
    wr16(edi * 8u + t65 + 2u, (uint16_t)(rd16(edi * 8u + t65 + 2u) + 1u));
    if ((int32_t)(edi + 1u) < 75)
    {
        edx = t64;
        edi = edi + 1u;
        goto L_101af067;
    }
    eax = edi * 8u + t65 + 2u;
    edx = t64;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 8u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t66 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 8u, 0u);
    t67 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t67;
    return t66;
L_101aee62: ;
    wr32(sp0 - 0x2cu, COW_IMG(0x1036f868u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_thiscall(g, COW_IMG(0x1015dc10u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f868u));
    t12 = g->edx;
    if (t11 == 0u)
    {
        edx = t12;
        goto L_101aee97;
    }
    eax = t11;
    edx = t12;
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, eax, g->edx, 0, 1, sp0 - 0x18u);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 0x18u);
    wr32(sp0 - 0x10u, t13);
    t14 = (uint32_t)(int16_t)rd16(sp0 - 0x16u) - edi;
    wr32(sp0 - 0xcu, t14);
    eax = t14;
    edx = t13;
    loc_10 = t13;
    goto L_101aee9b;
L_101aee97: ;
    eax = 0u;
    loc_10 = 0u;
    loc_1c = in_ebx;
    loc_20 = in_ebp;
    loc_24 = in_esi;
    loc_28 = in_edi;
    goto L_101aee9b;
L_101aeed9: ;
    if (ebp == 0u) goto L_101aef04;
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, ebp, g->edx, 0, 1, sp0 - 0x18u);
    t17 = (uint32_t)(int16_t)rd16(sp0 - 0x18u);
    wr32(sp0 - 0x10u, t17);
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x16u) - edi - 0x20u;
    edx = t17;
    loc_10 = t17;
    goto L_101aeefc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aedc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101aedc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
