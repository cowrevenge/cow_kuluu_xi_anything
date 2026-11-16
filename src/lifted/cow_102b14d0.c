/* f_0x102b14d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b14d0(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_m14;
    uint32_t al_m18;
    uint32_t al_m1c;
    uint32_t al_m20;
    uint32_t al_m24;
    uint32_t al_m4;
    uint32_t al_mc;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x28u, in_ebx);
    wr32(sp1 - 0x2cu, in_esi);
    wr32(sp1 - 0x30u, in_edi);
    if ((int32_t)rd32(arg1 + 0x3cu) <= 0)
    {
        eax = rd32(arg1 + 0x3cu);
        ecx = self;
        edx = in_edx;
        edi = 0u;
        goto L_102b150e;
    }
    edx = in_edx;
    esi = 0u;
    edi = 0u;
L_102b14ea: ;
    t1 = rd32(rd32(esi * 4u + rd32(arg1 + 0x38u)) + 0x9cu);
    wr32(sp1 - 0x34u, t1);
    wr32(sp1 - 0x38u, arg1);
    g->eax = rd32(esi * 4u + rd32(arg1 + 0x38u));
    g->ecx = t1;
    g->edx = edx;
    t2 = rd32(esi * 4u + rd32(arg1 + 0x38u));
    g->esp = sp1 - 0x30u;
    t3 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, arg1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0xffffffffu)
    {
        ecx = t4;
        edx = t5;
    }
    else
    {
        ecx = t4;
        edx = t5;
        edi = edi + 1u;
    }
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x3cu))
    {
        esi = esi + 1u;
        goto L_102b14ea;
    }
    eax = rd32(arg1 + 0x3cu);
L_102b150e: ;
    wr32(sp1 - 0x34u, edi);
    wr32(sp1 - 0x38u, COW_IMG(0x103bfa18u));
    wr32(sp1 - 0x3cu, arg2);
    g->ebx = arg1;
    g->esp = sp1 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bfa18u), edi, in_edi, in_esi);
    wr32(sp1 - 0x1cu, 0u);
    wr32(sp1 - 0x20u, 0u);
    if ((int32_t)rd32(arg1 + 0x3cu) <= 0) goto L_102b1709;
    al_m1c = 0u;
    al_m20 = 0u;
L_102b1535: ;
    t6 = rd32(rd32(al_m1c * 4u + rd32(arg1 + 0x38u)) + 0x9cu);
    wr32(sp1 - 0x34u, t6);
    wr32(sp1 - 0x38u, arg1);
    g->eax = al_m1c;
    g->edx = rd32(arg1 + 0x38u);
    t7 = rd32(arg1 + 0x38u);
    t8 = rd32(al_m1c * 4u + rd32(arg1 + 0x38u));
    g->esp = sp1 - 0x30u;
    t9 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, arg1, t6);
    t10 = g->edx;
    if (t9 == 0xffffffffu)
    {
        eax = t9;
        edx = t10;
        edi = t8;
        t42 = rd32(sp1 - 0x20u);
        wr32(sp1 - 0x34u, t42);
        wr32(sp1 - 0x38u, edi);
        wr32(sp1 - 0x3cu, arg1);
        g->esp = sp1 - 0x30u;
        cow_cdecl(g, COW_IMG(0x102b10f0u), 3, arg1, edi, t42);
        t43 = rd32(sp1 - 0x20u) + 1u;
        wr32(sp1 - 0x20u, t43);
        al_m20 = t43;
    }
    else
    {
        eax = t9;
        edi = t8;
        wr32(sp1 - 0x34u, eax);
        wr32(sp1 - 0x38u, COW_IMG(0x103bfa0cu));
        wr32(sp1 - 0x3cu, arg2);
        t11 = rd32(edi + 0x30u);
        wr32(sp1 - 0x14u, t11);
        t12 = rd32(edi + 0x38u);
        wr32(sp1 - 8u, t12);
        t13 = rd32(edi + 0x50u);
        wr32(sp1 - 0x10u, t13);
        g->ebx = arg1;
        g->eax = eax;
        g->ecx = t12;
        g->esp = sp1 - 0x28u;
        t14 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t11, 1, 5, arg2, COW_IMG(0x103bfa0cu), eax, rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu));
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp1 - 0x40u, t13);
        wr32(sp1 - 0x44u, COW_IMG(0x103bfa00u));
        wr32(sp1 - 0x48u, arg2);
        g->ebx = arg1;
        g->esp = sp1 - 0x34u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t16, 1, 5, arg2, COW_IMG(0x103bfa00u), t13, arg2, COW_IMG(0x103bfa0cu));
        t17 = cow_divs(g, t13, 0x64u);
        t18 = cow_mods(g, t13, 0x64u);
        wr32(sp1 - 0xcu, t18);
        wr32(sp1 - 4u, t17);
        if ((int32_t)t17 <= 0)
        {
            eax = t17;
            ecx = 0u;
            edx = t18;
            ebx = t17;
            edi = t13;
            al_mc = t18;
        }
        else
        {
            eax = t17;
            ebx = t17;
            al_mc = t18;
            al_m4 = t17;
            wr32(sp1 - 0x18u, ebx);
            wr32(sp1 - 0x24u, ebx);
            ecx = 0u;
            edi = rd32(sp1 - 0x14u);
            al_m18 = ebx;
            al_m24 = ebx;
L_102b15ae: ;
            ebx = 0x64u;
L_102b15b3: ;
            wr32(sp1 - 0x34u, rd32(edi));
            wr32(sp1 - 0x38u, COW_IMG(0x103ba458u));
            wr32(sp1 - 0x3cu, arg2);
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            t19 = rd32(edi);
            g->esp = sp1 - 0x28u;
            t20 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t19, 1, 5, arg2, COW_IMG(0x103ba458u), t19, rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu));
            t21 = g->ecx;
            t22 = g->edx;
            if (ebx != 1u)
            {
                eax = t20;
                ecx = t21;
                ebx = ebx - 1u;
                edi = edi + 4u;
                goto L_102b15b3;
            }
            eax = t20;
            ecx = t21;
            edx = t22;
            ebx = ebx - 1u;
            edi = edi + 4u;
            wr32(sp1 - 0x34u, COW_IMG(0x10350e4cu));
            wr32(sp1 - 0x38u, arg2);
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp1 - 0x24u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu), rd32(sp1 - 0x28u));
            t23 = g->ecx;
            t24 = rd32(sp1 - 0x18u) - 1u;
            wr32(sp1 - 0x18u, t24);
            if (rd32(sp1 - 0x18u) != 1u)
            {
                eax = t24;
                ecx = t23;
                al_m18 = t24;
                goto L_102b15ae;
            }
            eax = t24;
            ecx = rd32(sp1 - 0x24u);
            edx = rd32(sp1 - 0xcu);
            ebx = rd32(sp1 - 4u);
            edi = rd32(sp1 - 0x10u);
        }
        if ((int32_t)edx > 0)
        {
            wr32(sp1 - 0x14u, edx);
            edi = ecx * 0x190u + rd32(sp1 - 0x14u);
            al_m14 = edx;
L_102b160a: ;
            wr32(sp1 - 0x34u, rd32(edi));
            wr32(sp1 - 0x38u, COW_IMG(0x103ba458u));
            wr32(sp1 - 0x3cu, arg2);
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp1 - 0x28u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba458u), rd32(edi), rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu));
            t25 = g->ecx;
            t26 = g->edx;
            t27 = rd32(sp1 - 0x14u) - 1u;
            wr32(sp1 - 0x14u, t27);
            if (rd32(sp1 - 0x14u) != 1u)
            {
                ecx = t25;
                edx = t26;
                edi = edi + 4u;
                al_m14 = t27;
                goto L_102b160a;
            }
            eax = t27;
            ecx = t25;
            edx = t26;
            edi = rd32(sp1 - 0x10u);
        }
        wr32(sp1 - 0x34u, COW_IMG(0x10350e4cu));
        wr32(sp1 - 0x38u, arg2);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x24u;
        t28 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu), rd32(sp1 - 0x28u));
        t29 = g->ecx;
        t30 = g->edx;
        wr32(sp1 - 0x3cu, edi);
        wr32(sp1 - 0x40u, COW_IMG(0x103bf9f4u));
        wr32(sp1 - 0x44u, arg2);
        g->ebx = ebx;
        g->ecx = t29;
        g->esp = sp1 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t30, 1, 5, arg2, COW_IMG(0x103bf9f4u), edi, arg2, COW_IMG(0x10350e4cu));
        t31 = g->ecx;
        t32 = g->edx;
        if ((int32_t)ebx <= 0)
        {
            eax = 0u;
            ecx = t31;
            edx = t32;
        }
        else
        {
            ecx = t31;
            edx = t32;
            wr32(sp1 - 0x10u, ebx);
            wr32(sp1 - 0x24u, ebx);
            eax = 0u;
            edi = rd32(sp1 - 8u);
            al_m10 = ebx;
            al_m24 = ebx;
L_102b1659: ;
            ebx = 0x64u;
L_102b165e: ;
            wrf64(sp1 - 0x38u, (double)rdf32(edi));
            wr32(sp1 - 0x3cu, COW_IMG(0x103bf9bcu));
            wr32(sp1 - 0x40u, arg2);
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp1 - 0x2cu;
            t33 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bf9bcu), cow_dlo((double)rdf32(edi)), cow_dhi((double)rdf32(edi)), rd32(sp1 - 0x30u));
            t34 = g->ecx;
            t35 = g->edx;
            if (ebx != 1u)
            {
                eax = t33;
                ecx = t34;
                edx = t35;
                ebx = ebx - 1u;
                edi = edi + 4u;
                goto L_102b165e;
            }
            eax = t33;
            ecx = t34;
            edx = t35;
            ebx = ebx - 1u;
            edi = edi + 4u;
            wr32(sp1 - 0x34u, COW_IMG(0x10350e4cu));
            wr32(sp1 - 0x38u, arg2);
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp1 - 0x24u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu), rd32(sp1 - 0x28u));
            t36 = g->ecx;
            t37 = g->edx;
            t38 = rd32(sp1 - 0x10u) - 1u;
            wr32(sp1 - 0x10u, t38);
            if (rd32(sp1 - 0x10u) != 1u)
            {
                eax = t38;
                ecx = t36;
                edx = t37;
                al_m10 = t38;
                goto L_102b1659;
            }
            ecx = t36;
            edx = t37;
            eax = rd32(sp1 - 0x24u);
        }
        if ((int32_t)rd32(sp1 - 0xcu) <= 0)
        {
            ebx = rd32(sp1 - 0xcu);
        }
        else
        {
            ebx = rd32(sp1 - 0xcu);
            edi = eax * 0x190u + rd32(sp1 - 8u);
            eax = rd32(sp1 - 8u);
L_102b16ae: ;
            wrf64(sp1 - 0x38u, (double)rdf32(edi));
            wr32(sp1 - 0x3cu, COW_IMG(0x103bf9bcu));
            wr32(sp1 - 0x40u, arg2);
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp1 - 0x2cu;
            t39 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bf9bcu), cow_dlo((double)rdf32(edi)), cow_dhi((double)rdf32(edi)), rd32(sp1 - 0x30u));
            t40 = g->ecx;
            t41 = g->edx;
            if (ebx != 1u)
            {
                eax = t39;
                ecx = t40;
                edx = t41;
                ebx = ebx - 1u;
                edi = edi + 4u;
                goto L_102b16ae;
            }
            eax = t39;
            ecx = t40;
            edx = t41;
            ebx = ebx - 1u;
        }
        wr32(sp1 - 0x34u, COW_IMG(0x10350e4cu));
        wr32(sp1 - 0x38u, arg2);
        g->ebx = ebx;
        g->esp = sp1 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu), rd32(sp1 - 0x28u));
    }
    t44 = rd32(sp1 - 0x1cu) + 1u;
    wr32(sp1 - 0x1cu, t44);
    if ((int32_t)(rd32(sp1 - 0x1cu) + 1u) < (int32_t)rd32(arg1 + 0x3cu))
    {
        al_m1c = t44;
        goto L_102b1535;
    }
L_102b1709: ;
    g->ebx = rd32(sp1 - 0x28u);
    g->esi = rd32(sp1 - 0x2cu);
    g->edi = rd32(sp1 - 0x30u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b14d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b14d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
