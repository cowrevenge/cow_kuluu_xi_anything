/* f_0x10287740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10287740(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg2, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b88dcu), t1, arg2, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10285f20u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t6 = g->edx;
    if ((int32_t)rd32(arg1 + 0x7cu) <= 0)
    {
        edx = t6;
        goto L_10287884;
    }
    eax = rd32(arg1 + 0x7cu);
    edx = t6;
    ebp = 0u;
L_10287785: ;
    if (rd32(ebp * 4u + rd32(arg1 + 0x70u)) != 0u)
    {
        ecx = rd32(arg1 + 0x70u);
        ebx = rd32(ebp * 4u + rd32(arg1 + 0x70u));
    }
    else
    {
        ecx = rd32(arg1 + 0x70u);
        g->ecx = ecx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b88b0u), ebp);
        t7 = g->ecx;
        t8 = COW_IMG(0x103b7d70u) + rd32(ebp * 4u + rd32(arg1 + 0x88u)) * 0x10u;
        g->ecx = t7;
        g->edx = rd32(arg1 + 0x88u);
        t9 = rd32(arg1 + 0x88u);
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b889cu), t8);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
        ebx = COW_IMG(0x103b7d68u);
    }
    edi = ebx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    g->ecx = ~ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, ebx, 1u, ~ecx, arg2, in_edi, in_esi);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = t12;
        edx = t13;
    }
    else
    {
        ecx = t12;
        edx = t13;
        g->esp = sp0 - 0xcu;
        t14 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, ebx, in_edi);
        t15 = g->edx;
        g->ebx = ebx;
        g->ecx = rd32(COW_IMG(0x109a2788u));
        t16 = rd32(COW_IMG(0x109a2788u));
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t15, 1, 5, t16, COW_IMG(0x103b8874u), t14, ebx, in_edi);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    }
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)(t19 & 0x80000003u) >= 0)
    {
        ecx = t20;
        edx = t21;
        zf = (t19 & 0x80000003u) == 0u;
    }
    else
    {
        eax = t19 & 0x80000003u;
        ecx = t20;
        edx = t21;
        zf = (eax - 1u | 0xfffffffcu) + 1u == 0u;
    }
    if (!zf)
    {
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t22 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
        t23 = g->ecx;
        t24 = g->edx;
        if ((int32_t)(t22 & 0x80000003u) >= 0)
        {
            eax = t22 & 0x80000003u;
            ecx = t23;
            edx = t24;
        }
        else
        {
            eax = t22 & 0x80000003u;
            ecx = t23;
            edx = t24;
            eax = (eax - 1u | 0xfffffffcu) + 1u;
        }
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            edi = 4u - eax;
        }
        else
        {
            edi = 4u - eax;
            g->ecx = ecx;
            g->esp = sp0 - 0xcu;
            t25 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, edi, in_edi);
            t26 = g->ecx;
            g->ebx = ebx;
            g->ecx = t26;
            t27 = rd32(COW_IMG(0x109a2788u));
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t27, 1, 5, t27, COW_IMG(0x103b8850u), t25, edi, in_edi);
            t28 = g->ecx;
            t29 = g->edx;
            ecx = t28;
            edx = t29;
        }
        if (edi == 0u) goto L_10287870;
L_1028785f: ;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10317079u), g->eax, g->ecx, edx, 1, 4, 0xadu, arg2, in_edi, in_esi);
        t30 = g->ecx;
        t31 = g->edx;
        if (edi != 1u)
        {
            ecx = t30;
            edx = t31;
            edi = edi - 1u;
            goto L_1028785f;
        }
        edx = t31;
    }
L_10287870: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x7cu))
    {
        eax = rd32(arg1 + 0x7cu);
        ebp = ebp + 1u;
        goto L_10287785;
    }
L_10287884: ;
    if ((int32_t)rd32(arg1 + 0x90u) <= 0)
    {
        eax = rd32(arg1 + 0x90u);
    }
    else
    {
        eax = rd32(arg1 + 0x90u);
        ebp = 0u;
L_1028789a: ;
        if (rd32(ebp * 4u + rd32(arg1 + 0x84u)) != 0u)
        {
            ecx = rd32(arg1 + 0x84u);
            ebx = rd32(ebp * 4u + rd32(arg1 + 0x84u));
        }
        else
        {
            ecx = rd32(arg1 + 0x84u);
            g->ecx = ecx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b88b0u), ebp);
            t32 = g->ecx;
            t33 = COW_IMG(0x103b7d70u) + rd32(ebp * 4u + rd32(arg1 + 0x88u)) * 0x10u;
            g->ecx = t32;
            g->edx = rd32(arg1 + 0x88u);
            t34 = rd32(arg1 + 0x88u);
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b889cu), t33);
            t35 = g->ecx;
            t36 = g->edx;
            ecx = t35;
            edx = t36;
            ebx = COW_IMG(0x103b7d68u);
        }
        edi = ebx;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        g->ecx = ~ecx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, ebx, 1u, ~ecx, arg2, in_edi, in_esi);
        t37 = g->ecx;
        t38 = g->edx;
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            ecx = t37;
            edx = t38;
        }
        else
        {
            ecx = t37;
            edx = t38;
            g->esp = sp0 - 0xcu;
            t39 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, ebx, in_edi);
            t40 = g->edx;
            g->ebx = ebx;
            g->ecx = rd32(COW_IMG(0x109a2788u));
            t41 = rd32(COW_IMG(0x109a2788u));
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t40, 1, 5, t41, COW_IMG(0x103b8828u), t39, ebx, in_edi);
            t42 = g->ecx;
            t43 = g->edx;
            ecx = t42;
            edx = t43;
        }
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t44 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
        t45 = g->ecx;
        t46 = g->edx;
        if ((int32_t)(t44 & 0x80000003u) >= 0)
        {
            ecx = t45;
            edx = t46;
            zf = (t44 & 0x80000003u) == 0u;
        }
        else
        {
            eax = t44 & 0x80000003u;
            ecx = t45;
            edx = t46;
            zf = (eax - 1u | 0xfffffffcu) + 1u == 0u;
        }
        if (!zf)
        {
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            t47 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
            t48 = g->ecx;
            t49 = g->edx;
            if ((int32_t)(t47 & 0x80000003u) >= 0)
            {
                eax = t47 & 0x80000003u;
                ecx = t48;
                edx = t49;
            }
            else
            {
                eax = t47 & 0x80000003u;
                ecx = t48;
                edx = t49;
                eax = (eax - 1u | 0xfffffffcu) + 1u;
            }
            if (rd32(COW_IMG(0x109a2788u)) == 0u)
            {
                edi = 4u - eax;
            }
            else
            {
                edi = 4u - eax;
                g->ecx = ecx;
                g->esp = sp0 - 0xcu;
                t50 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, edi, in_edi);
                t51 = g->ecx;
                g->ebx = ebx;
                g->ecx = t51;
                t52 = rd32(COW_IMG(0x109a2788u));
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t52, 1, 5, t52, COW_IMG(0x103b8850u), t50, edi, in_edi);
                t53 = g->ecx;
                t54 = g->edx;
                ecx = t53;
                edx = t54;
            }
            if (edi == 0u) goto L_10287988;
L_10287977: ;
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10317079u), g->eax, g->ecx, edx, 1, 4, 0xadu, arg2, in_edi, in_esi);
            t55 = g->ecx;
            t56 = g->edx;
            if (edi != 1u)
            {
                ecx = t55;
                edx = t56;
                edi = edi - 1u;
                goto L_10287977;
            }
            edx = t56;
        }
L_10287988: ;
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x90u))
        {
            eax = rd32(arg1 + 0x90u);
            ebp = ebp + 1u;
            goto L_10287896;
        }
        eax = rd32(arg1 + 0x90u);
    }
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_10287896: ;
    goto L_1028789a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
