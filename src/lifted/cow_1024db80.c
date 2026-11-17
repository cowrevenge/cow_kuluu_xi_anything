/* f_0x1024db80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1024db80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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

    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(arg1 + 0x38u, t1);
    if ((int32_t)rd32(arg1 + 4u) >= 2)
    {
        eax = rd32(arg1 + 4u);
        ecx = t2;
        edx = t3;
        goto L_1024dbb0;
    }
    eax = rd32(arg1 + 4u);
    ecx = t2;
    edx = t3;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1024d870u), g->eax, ecx, edx, 1, 5, arg1, in_edi, in_esi, in_ebp, in_ebx);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)rd32(arg1 + 4u) < 2)
    {
        eax = rd32(arg1 + 4u);
        ecx = t4;
        edx = t5;
        goto L_1024dc5a;
    }
    eax = rd32(arg1 + 4u);
    ecx = t4;
    edx = t5;
L_1024dbb0: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x10u, 1u, 0xffffffffu, in_edi, in_esi, in_ebp);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    else
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        if ((rd8(arg1) & 0x20u) == 0u)
        {
            t20 = rd32(arg1 + 0x1cu) + 1u;
            wr32(arg1 + 0x1cu, t20);
            if ((int32_t)t20 <= 2)
            {
                ecx = t20;
            }
            else
            {
                ecx = t20;
                wr32(arg1 + 0x1cu, 0u);
            }
            t21 = rd32(arg1 + 0x1cu);
            g->eax = t21;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t22 = cow_thiscall_cdecl(g, COW_IMG(0x10250820u), ecx, 5, arg1, t21, in_edi, in_esi, in_ebp);
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
        }
    }
    if ((rd8(arg1) & 4u) != 0u)
    {
        t25 = rd32(arg1 + 0x2cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t26 = cow_thiscall_cdecl(g, COW_IMG(0x1024fc30u), t25, 5, arg1, t25, in_edi, in_esi, in_ebp);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    if ((rd8(arg1) & 8u) != 0u)
    {
        t29 = rd32(arg1 + 0x2cu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t29;
        g->esp = sp0 - 0x10u;
        t30 = cow_cdecl(g, COW_IMG(0x1024fe10u), 2, arg1, t29);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    }
    if (rd32(arg1 + 0x1cu) != 2u)
    {
        ebx = in_ebx;
    }
    else
    {
        ebx = rd32(arg1 + 0x2cu);
        ebp = 4u;
        edi = arg1 + 0xf0u;
L_1024dc25: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t33 = cow_call_regs(g, COW_IMG(0x10251220u), eax, g->ecx, g->edx, 1, 3, edi, ebx, 1u);
        t34 = g->ecx;
        t35 = g->edx;
        if (ebp != 1u)
        {
            eax = t33;
            ecx = t34;
            edx = t35;
            ebp = ebp - 1u;
            edi = edi + 0x1cu;
            goto L_1024dc25;
        }
        ecx = t34;
        edx = t35;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t36 = cow_call_regs(g, COW_IMG(0x10251220u), arg1 + 0x160u, g->ecx, g->edx, 1, 3, arg1 + 0x160u, ebx, 1u);
        t37 = g->edx;
        g->edx = t37;
        g->esp = sp0 - 0x1cu;
        t38 = cow_call_regs(g, COW_IMG(0x10251220u), t36, g->ecx, g->edx, 1, 3, arg1 + 0x1d0u, ebx, 1u);
        t39 = g->edx;
        eax = t38;
        edx = t39;
    }
L_1024dcd3: ;
    t40 = rd32(arg1 + 0x2cu);
    g->ecx = t40;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t41 = cow_call_regs(g, COW_IMG(0x10270f50u), eax, g->ecx, g->edx, 1, 3, t40, in_edi, in_esi);
    t42 = g->ecx;
    t43 = g->edx;
    g->edx = t43;
    g->esp = sp0 - 4u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x10250050u), t42, 5, arg1, t40, in_edi, in_esi, in_ebp);
    t45 = g->ecx;
    t46 = g->edx;
    g->ecx = t45;
    g->esp = sp0 - 0x18u;
    t47 = cow_cdecl(g, COW_IMG(0x1024f920u), 1, arg1);
    t48 = g->ecx;
    t49 = rd32(arg1 + 0x2cu);
    g->ebx = ebx;
    g->edx = t49;
    t50 = cow_thiscall_cdecl(g, COW_IMG(0x1024dd30u), t48, 3, arg1, t49, arg1);
    t51 = g->ecx;
    t52 = g->edx;
    g->ecx = t51;
    g->edx = t52;
    g->esp = sp0 - 0x24u;
    t53 = cow_cdecl(g, COW_IMG(0x1024fee0u), 1, arg1);
    t54 = g->ecx;
    t55 = g->edx;
    g->esp = sp0 - 0x10u;
    t56 = cow_fastcall(g, COW_IMG(0x102750b0u), t54, t55, 0);
    t57 = rd32(arg1 + 0x28u);
    wr32(arg1 + 0x28u, t56);
    wr32(arg1 + 0x2cu, t56 - t57);
    t58 = cow_fastcall(g, COW_IMG(0x102750b0u), t56 - t57, t57, 0);
    t59 = t58 - rd32(arg1 + 0x38u);
    wr32(arg1 + 0x38u, t59);
    g->ebx = in_ebx;
    return 0u;
L_1024dc5a: ;
    if ((int8_t)rd8(arg1) >= 0)
    {
        ebx = in_ebx;
    }
    else
    {
        if (arg1 + 0x160u == 0u)
        {
            eax = arg1 + 0x160u;
            ebx = in_ebx;
        }
        else
        {
            if ((rd8(arg1 + 0x160u) & 0x10u) == 0u)
            {
                eax = arg1 + 0x160u;
                ebx = in_ebx;
            }
            else
            {
                eax = arg1 + 0x160u;
                ebx = rd32(arg1 + 0x2cu);
                ebp = 4u;
                edi = arg1 + 0xf0u;
L_1024dc7c: ;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t6 = cow_call_regs(g, COW_IMG(0x10251220u), eax, g->ecx, g->edx, 1, 3, edi, ebx, 0u);
                t7 = g->ecx;
                t8 = g->edx;
                if (ebp != 1u)
                {
                    eax = t6;
                    ecx = t7;
                    edx = t8;
                    ebp = ebp - 1u;
                    edi = edi + 0x1cu;
                    goto L_1024dc7c;
                }
                eax = t6;
                ecx = t7;
                edx = t8;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_call_regs(g, COW_IMG(0x10251220u), eax, g->ecx, g->edx, 1, 3, arg1 + 0x160u, ebx, 0u);
                t9 = g->ecx;
                t10 = g->edx;
                if (rd32(arg1 + 0x1cu) != 2u)
                {
                    ecx = t9;
                    edx = t10;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t15 = cow_call_regs(g, COW_IMG(0x10251430u), arg1 + 0x3cu, g->ecx, g->edx, 1, 2, arg1 + 0x160u, arg1 + 0x3cu);
                    t16 = g->edx;
                    eax = t15;
                    edx = t16;
                }
                else
                {
                    eax = rd32(arg1 + 0x1cu);
                    ecx = t9;
                    edx = t10;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x10u;
                    t11 = cow_call_regs(g, COW_IMG(0x10251220u), eax, g->ecx, g->edx, 1, 3, arg1 + 0x198u, ebx, 0u);
                    t12 = g->ecx;
                    g->edx = arg1 + 0x3cu;
                    g->esp = sp0 - 0x1cu;
                    t13 = cow_call_regs(g, COW_IMG(0x10251430u), t11, g->ecx, g->edx, 1, 2, arg1 + 0x198u, arg1 + 0x3cu);
                    t14 = g->edx;
                    eax = t13;
                    edx = t14;
                }
            }
        }
    }
    goto L_1024dcd3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024db80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024db80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
