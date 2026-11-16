/* f_0x10322961 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10322961(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t6;
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
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    if (rd32(COW_IMG(0x109b27b8u)) == 0u)
    {
        wr32(sp0 - 0x30u, rd32(COW_IMG(0x109b29f0u)));
        t52 = rd32(COW_IMG(0x109b29f0u));
        wr32(COW_IMG(0x103d0030u), COW_IMG(0x103d003au));
        wr32(COW_IMG(0x103d0034u), COW_IMG(0x103d003au));
        g->eax = COW_IMG(0x103d003au);
        g->esp = sp0 - 0x24u;
        t53 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 3, t52, in_ebx, rd32(sp0 - 0x28u));
        t54 = g->ecx;
        t55 = g->edx;
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x109b29f4u)));
        t56 = rd32(COW_IMG(0x109b29f4u));
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t54, t55, 1, 3, t56, rd32(sp0 - 0x30u), in_ebx);
        t57 = g->edx;
        wr32(COW_IMG(0x109b29f0u), 0u);
        wr32(COW_IMG(0x109b29f4u), 0u);
        eax = 0u;
        edx = t57;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x30u, in_esi);
        wr32(sp0 - 0x34u, in_edi);
        if (rd32(COW_IMG(0x109b27c8u)) != 0u)
        {
            ecx = self;
            edx = in_edx;
            goto L_103229a9;
        }
        wr32(sp0 - 0x38u, COW_IMG(0x109b27c8u));
        wr32(sp0 - 0x3cu, 0x1004u);
        wr32(sp0 - 0x40u, rd16(COW_IMG(0x109b2a04u)));
        wr32(sp0 - 0x44u, 0u);
        g->ebx = 0u;
        t1 = rd16(COW_IMG(0x109b2a04u));
        g->esp = sp0 - 0x34u;
        t2 = cow_call_regs(g, COW_IMG(0x10325a60u), t1, self, in_edx, 1, 4, 0u, t1, 0x1004u, COW_IMG(0x109b27c8u));
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 != 0u)
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            loc_c = 0u;
            goto L_10322b57;
        }
        ecx = t3;
        edx = t4;
L_103229a9: ;
        wr32(sp0 - 0x38u, 0x202u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t5 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x202u, in_edi, in_esi);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x3cu, 0x202u);
        wr32(sp0 - 0x14u, t5);
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 0x30u;
        t8 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x202u, 0x202u, in_edi);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x40u, 0x101u);
        wr32(sp0 - 0x10u, t8);
        g->ecx = t9;
        g->edx = t10;
        g->esp = sp0 - 0x34u;
        t11 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x101u, 0x202u, 0x202u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x44u, 0x202u);
        wr32(sp0 - 8u, t11);
        g->ecx = t12;
        g->edx = t13;
        g->esp = sp0 - 0x38u;
        t14 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x202u, 0x101u, 0x202u);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0xcu, t14);
        if (t5 == 0u)
        {
            eax = t14;
            ecx = t15;
            edx = t16;
            loc_c = t14;
            goto L_10322b57;
        }
        eax = t14;
        ecx = t15;
        edx = t16;
        edi = t5;
        loc_c = t14;
        if (rd32(sp0 - 0x10u) == 0u) goto L_10322b57;
        if (rd32(sp0 - 8u) == 0u) goto L_10322b57;
        if (eax == 0u) goto L_10322b57;
        eax = 0u;
L_10322a04: ;
        t17 = rd32(sp0 - 8u);
        wr8(eax + t17, (uint8_t)eax);
        if ((int32_t)(eax + 1u) < 256)
        {
            eax = eax + 1u;
            goto L_10322a04;
        }
        ecx = t17;
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109b27c8u)));
        g->eax = sp0 - 0x28u;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t18 = cow_thiscall(g, rd32(COW_IMG(0x10329274u)), ecx, 2, rd32(COW_IMG(0x109b27c8u)), sp0 - 0x28u);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0u)
        {
            eax = t18;
            ecx = t19;
            edx = t20;
            goto L_10322b57;
        }
        eax = t18;
        ecx = t19;
        edx = t20;
        if (rd32(sp0 - 0x28u) > 2u) goto L_10322b57;
        t21 = rd16(sp0 - 0x28u);
        t22 = rd16(sp0 - 0x28u);
        wr32(COW_IMG(0x103d023cu), t21);
        if ((int32_t)t22 > 1)
        {
            if (rd8(sp0 - 0x22u) != 0u)
            {
                eax = sp0 - 0x21u;
L_10322a47: ;
                if (rd8(eax) == 0u)
                {
                    edx = (edx & 0xffffff00u) | rd8(eax);
                    goto L_10322a6b;
                }
                edx = (edx & 0xffffff00u) | rd8(eax);
                ecx = rd8(eax - 1u);
                edx = (uint8_t)edx;
L_10322a54: ;
                if ((int32_t)ecx > (int32_t)edx) goto L_10322a64;
                wr8(ecx + rd32(sp0 - 8u), 0u);
                ecx = ecx + 1u;
                edx = rd8(eax);
                goto L_10322a54;
            }
        }
L_10322a6b: ;
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, edi + 2u);
        wr32(sp0 - 0x48u, 0x100u);
        t23 = rd32(sp0 - 8u);
        wr32(sp0 - 0x4cu, t23);
        wr32(sp0 - 0x50u, 1u);
        g->esp = sp0 - 0x34u;
        t24 = cow_call_regs(g, COW_IMG(0x10320813u), g->eax, ecx, edx, 1, 7, 1u, t23, 0x100u, edi + 2u, 0u, 0u, 0u);
        t25 = g->ecx;
        t26 = g->edx;
        if (t24 == 0u)
        {
            eax = t24;
            ecx = t25;
            edx = t26;
            goto L_10322b57;
        }
        edx = t26;
        t27 = rd32(sp0 - 0xcu);
        wr16(edi, 0u);
        eax = 0u;
        ecx = t27;
L_10322a90: ;
        wr16(ecx, (uint16_t)eax);
        if ((int32_t)(eax + 1u) < 256)
        {
            eax = eax + 1u;
            ecx = ecx + 2u;
            goto L_10322a90;
        }
        ecx = ecx + 2u;
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        t28 = rd32(sp0 - 0x10u) + 2u;
        wr32(sp0 - 0x40u, t28);
        wr32(sp0 - 0x44u, 0x100u);
        t29 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x48u, t29);
        wr32(sp0 - 0x4cu, 1u);
        t30 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x34u;
        t31 = cow_call_regs(g, COW_IMG(0x10323e15u), g->eax, ecx, edx, 1, 6, 1u, t29, 0x100u, t28, 0u, 0u);
        t32 = g->ecx;
        t33 = g->edx;
        if (t31 == 0u)
        {
            eax = t31;
            ecx = t32;
            edx = t33;
            goto L_10322b57;
        }
        ecx = t32;
        edx = t33;
        edi = t28;
        wr16(rd32(sp0 - 0x10u), 0u);
        if ((int32_t)rd32(COW_IMG(0x103d023cu)) > 1)
        {
            if (rd8(sp0 - 0x22u) != 0u)
            {
                eax = sp0 - 0x21u;
L_10322ad0: ;
                if (rd8(eax) == 0u)
                {
                    ecx = (ecx & 0xffffff00u) | rd8(eax);
                    goto L_10322afe;
                }
                ecx = (ecx & 0xffffff00u) | rd8(eax);
                if ((int32_t)rd8(eax - 1u) > (int32_t)(uint8_t)ecx)
                {
                    ecx = (uint8_t)ecx;
                }
                else
                {
                    esi = rd8(eax - 1u);
                    ecx = esi * 2u + rd32(sp0 - 0x14u) + 2u;
L_10322ae8: ;
                    wr16(ecx, 0x8000u);
                    if ((int32_t)(esi + 1u) <= (int32_t)rd8(eax))
                    {
                        ecx = ecx + 2u;
                        esi = esi + 1u;
                        goto L_10322ae8;
                    }
                    ecx = ecx + 2u;
                    edx = rd8(eax);
                }
                if (rd8(eax + 1u) != 0u)
                {
                    eax = eax + 2u;
                    goto L_10322ad0;
                }
            }
        }
L_10322afe: ;
        t34 = rd32(sp0 - 0x14u);
        wr32(COW_IMG(0x103d0034u), edi);
        wr32(COW_IMG(0x103d0030u), t34 + 2u);
        if (rd32(COW_IMG(0x109b29f0u)) != 0u)
        {
            eax = rd32(COW_IMG(0x109b29f0u));
            wr32(sp0 - 0x38u, eax);
            g->esp = sp0 - 0x2cu;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t35 = g->edx;
            ecx = rd32(sp0 - 0x38u);
            edx = t35;
        }
        t36 = rd32(sp0 - 0x14u);
        wr32(COW_IMG(0x109b29f0u), t36);
        if (rd32(COW_IMG(0x109b29f4u)) != 0u)
        {
            eax = rd32(COW_IMG(0x109b29f4u));
            wr32(sp0 - 0x38u, eax);
            g->esp = sp0 - 0x2cu;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
            t37 = g->edx;
            ecx = rd32(sp0 - 0x38u);
            edx = t37;
        }
        t38 = rd32(sp0 - 0x10u);
        wr32(COW_IMG(0x109b29f4u), t38);
        eax = t38;
        ebx = 0u;
L_10322b3f: ;
        t46 = rd32(sp0 - 8u);
        wr32(sp0 - 0x38u, t46);
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t47 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t46, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        t48 = g->ecx;
        t49 = g->edx;
        t50 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x3cu, t50);
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t48, t49, 1, 3, t50, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t51 = g->edx;
        eax = ebx;
        edx = t51;
        esi = rd32(sp0 - 0x30u);
        edi = rd32(sp0 - 0x34u);
    }
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10322a64: ;
    if (rd8(eax + 1u) != 0u)
    {
        eax = eax + 2u;
        goto L_10322a47;
    }
    goto L_10322a6b;
L_10322b57: ;
    t39 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x38u, t39);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t40 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t39, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t41 = g->ecx;
    t42 = g->edx;
    t43 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x3cu, t43);
    g->esp = sp0 - 0x30u;
    t44 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t41, t42, 1, 3, t43, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t45 = g->edx;
    wr32(sp0 - 0x38u, 1u);
    eax = t44;
    ecx = rd32(sp0 - 0x38u);
    edx = t45;
    ebx = 1u;
    goto L_10322b3f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10322961(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10322961(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
