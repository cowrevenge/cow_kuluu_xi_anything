/* f_0x102886f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102886f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = rd32(COW_IMG(0x109a2788u));
        esi = rd32(sp0 + 8u);
    }
    else
    {
        edx = rd32(COW_IMG(0x109a2788u));
        esi = rd32(sp0 + 8u);
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t3, COW_IMG(0x103b9004u), t1, esi, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, esi, in_edi, in_esi);
    t7 = g->ecx;
    t8 = rd32(arg1 + 0x24u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t8 <= 0)
    {
        esi = t6;
    }
    else
    {
        ecx = t7;
        esi = t6;
        loc_4 = t8;
        edi = 0u;
L_1028873e: ;
        wr32(esi + 8u, COW_IMG(0x10298b70u));
        wr32(esi + 0xcu, COW_IMG(0x10298b80u));
        wr32(esi + 0x10u, COW_IMG(0x10298c30u));
        wr32(esi + 0x14u, 0xffffffffu);
        wr32(esi + 0x18u, 0xffffffffu);
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ebx = esi;
            ebp = esi + 0x14u;
            loc_c = esi + 0x14u;
            loc_8 = esi + 0x18u;
        }
        else
        {
            edx = rd32(COW_IMG(0x109a2788u));
            ebx = esi;
            ebp = esi + 0x14u;
            loc_c = esi + 0x14u;
            loc_8 = esi + 0x18u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t9 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
            t10 = g->ecx;
            t11 = g->edx;
            g->ebx = ebx;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t11, 1, 5, t11, COW_IMG(0x103b8fecu), t9, edi, in_ebp);
        }
        wr32(edi * 4u + rd32(arg1 + 0x1cu), ebx);
        if (rd32(ebx + 0x1cu) != 0xffffffffu)
        {
            esi = esi + 0x24u;
            wr32(ebx + 0x1cu, esi);
            wr32(esi + 8u, COW_IMG(0x10298550u));
            wr32(esi + 0xcu, COW_IMG(0x10298560u));
            wr32(esi + 0x10u, COW_IMG(0x102985c0u));
            if (rd32(COW_IMG(0x109a2788u)) == 0u)
            {
                ecx = arg1;
                edx = rd32(COW_IMG(0x109a2788u));
                edi = esi;
            }
            else
            {
                edx = rd32(COW_IMG(0x109a2788u));
                edi = esi;
                g->ecx = arg1;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t12 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
                t13 = g->ecx;
                t14 = g->edx;
                g->ebx = ebx;
                g->ecx = t13;
                g->esp = sp0 - 0x18u;
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t14, 1, 5, t14, COW_IMG(0x103b8fd8u), t12, esi, in_ebp);
                t15 = g->ecx;
                t16 = g->edx;
                ecx = t15;
                edx = t16;
            }
            if (rd32(edi + 0x28u) == 0xffffffffu)
            {
                esi = esi + 0x3cu;
                goto L_102888e0;
            }
            eax = rd32(edi + 0x28u);
            esi = esi + 0x3cu;
            if (eax != 0xefbeddbau) goto L_1028886c;
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp0 - 0x14u;
            t17 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, esi, in_ebp, in_ebx);
            t18 = g->ecx;
            t19 = rd32(edi + 0x20u);
            t20 = rd32(edi + 0x24u);
            t21 = rd32(edi + 0x1cu);
            wr32(edi + 0x28u, t17);
            if (rd32(COW_IMG(0x109a2788u)) == 0u)
            {
                ebp = t19 * t20 * t21;
                esi = t17;
            }
            else
            {
                ecx = t18;
                edx = rd32(COW_IMG(0x109a2788u));
                ebp = t19 * t20 * t21;
                esi = t17;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t22 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
                t23 = g->ecx;
                t24 = g->edx;
                g->ebx = ebx;
                g->esp = sp0 - 0x18u;
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t24, 1, 5, t24, COW_IMG(0x103b8fb8u), t22, ebp, in_ebp);
            }
            t25 = rd32(edi + 0x28u);
            t26 = rd32(edi + 0x24u);
            t27 = rd32(edi + 0x20u);
            t28 = rd32(edi + 0x1cu);
            g->esi = esi;
            g->edx = t27;
            g->esp = sp0 - 0xcu;
            t29 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), t26, 9, t28, t27, t26, t25, 0u, in_ebp, in_ebx, in_edi, in_esi);
            t30 = g->edx;
            wr32(loc_c, t29);
            t31 = rd32(ebx + 0x20u) | 1u;
            wr32(ebx + 0x20u, t31);
            ecx = t31;
            edx = t30;
            esi = ebp + esi;
L_102888e7: ;
            if (rd32(edi + 0x38u) != 0xffffffffu)
            {
                g->ebx = ebx;
                g->ecx = ecx;
                g->esp = sp0 - 0x14u;
                t47 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, esi, in_ebp, in_ebx);
                t48 = g->ecx;
                t49 = rd32(edi + 0x34u);
                t50 = rd32(edi + 0x30u);
                wr32(edi + 0x38u, t47);
                if (rd32(COW_IMG(0x109a2788u)) == 0u)
                {
                    ebx = t49 * t50;
                    esi = t47;
                }
                else
                {
                    ecx = t48;
                    edx = rd32(COW_IMG(0x109a2788u));
                    ebx = t49 * t50;
                    esi = t47;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t51 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
                    t52 = g->ecx;
                    t53 = g->edx;
                    g->ebx = ebx;
                    g->esp = sp0 - 0x18u;
                    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t53, 1, 5, t53, COW_IMG(0x103b8ef8u), t51, ebx, in_ebp);
                }
                t54 = rd32(edi + 0x38u);
                t55 = rd32(edi + 0x30u);
                t56 = rd32(edi + 0x34u);
                g->ebx = ebx;
                g->esp = sp0 - 0x1cu;
                t57 = cow_cdecl(g, COW_IMG(0x102819f0u), 3, t56, t55, t54);
                wr32(loc_8, t57);
                ecx = loc_8;
                esi = ebx + esi;
            }
            else
            {
                wr32(edi + 0x38u, 0u);
            }
            edi = rd32(sp0 + 8u);
        }
        else
        {
            esi = esi + 0x24u;
            wr32(ebx + 0x1cu, 0u);
            ecx = arg1;
        }
        wr32(sp0 + 8u, edi + 1u);
        if ((int32_t)(edi + 1u) < (int32_t)loc_4)
        {
            edi = edi + 1u;
            goto L_1028873e;
        }
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    return esi;
L_1028886c: ;
    if (eax < rd32(sp0 + 8u)) goto L_10288894;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8f70u), in_ebp);
    t32 = g->ecx;
    t33 = rd32(edi + 0x28u);
    t34 = rd32(sp0 + 8u);
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8f4cu), t34);
    t35 = g->ecx;
    t36 = g->edx;
    ecx = t35;
    edx = t36;
L_102888e0: ;
    wr32(edi + 0x28u, 0u);
    goto L_102888e7;
L_10288894: ;
    if (rd32(eax * 4u + rd32(arg1 + 0x1cu)) == 0u)
    {
        eax = rd32(eax * 4u + rd32(arg1 + 0x1cu));
        edx = rd32(arg1 + 0x1cu);
        goto L_102888d3;
    }
    eax = rd32(eax * 4u + rd32(arg1 + 0x1cu));
    edx = rd32(arg1 + 0x1cu);
    if (rd32(eax + 0x1cu) == 0u)
    {
        eax = rd32(eax + 0x1cu);
        goto L_102888d3;
    }
    eax = rd32(eax + 0x1cu);
    t37 = rd32(eax + 0x28u);
    t38 = rd32(edi + 0x20u);
    t39 = rd32(edi + 0x1cu);
    wr32(edi + 0x28u, t37);
    t40 = rd32(edi + 0x24u);
    g->esi = esi;
    g->edx = t39;
    g->esp = sp0 - 0xcu;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), t38, 9, t39, t38, t40, t37, 0u, in_ebp, in_ebx, in_edi, in_esi);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(ebp, t41);
    t44 = (rd32(ebx + 0x20u) & 0xffffff00u) | (uint8_t)(rd32(ebx + 0x20u) | 1u);
    wr32(ebx + 0x20u, t44);
    ecx = t42;
    edx = t43;
    goto L_102888e7;
L_102888d3: ;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8f1cu), in_ebp);
    t45 = g->ecx;
    t46 = g->edx;
    ecx = t45;
    edx = t46;
    goto L_102888e0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102886f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102886f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
