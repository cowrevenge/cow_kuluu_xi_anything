/* f_0x10252140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10252140(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    if ((rd8(rd32(sp0 + 4u)) & 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102523e3;
    }
    esi = rd32(sp0 + 4u);
    t1 = rd32(esi + 0x14u);
    wr32(sp0 - 0x64u, t1);
    t2 = rd32(esi + 0xcu);
    wr32(sp0 - 0x68u, t2);
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t3 = cow_cdecl(g, COW_IMG(0x102520c0u), 6, t2, t1, in_edi, in_esi, in_ebp, in_ebx);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        edi = t3;
    }
    else
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        t6 = rd32(esi + 0xcu);
        wr32(esi + 0x14u, eax);
        edi = t6;
    }
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        goto L_10252346;
    }
    if (rd32(esi + 0x3cu) == 0u)
    {
        eax = rd32(esi + 0x3cu);
        goto L_102523e3;
    }
    eax = rd32(esi + 0x3cu);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_stdcall(g, COW_IMG(0x102523f0u), 0);
    t7 = g->edx;
    if ((int32_t)rd32(esi + 0x10u) >= 12)
    {
        edx = t7;
        goto L_10252268;
    }
    ebx = rd32(esi + 0x10u);
    t8 = rd32(esi + 0x3cu);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)rd32(esi + 0x28u) <= 0)
    {
        ecx = 0u;
        edx = rd32(esi + 0x28u);
        goto L_1025226c;
    }
    eax = ebx * 0x1cu + t8 + 0xf0u;
    edx = rd32(esi + 0x28u);
    ecx = 0u;
    edi = eax + 0x18u;
L_102521c4: ;
    if ((int32_t)ebx >= 12) goto L_1025226c;
    if ((int32_t)ebx >= 4)
    {
        if ((int32_t)ebx >= 8)
        {
            eax = (eax & 0xffffff00u) | 0x48u;
            ecx = (rd32(esi + 0x3cu) & 0xffffff00u) | (uint8_t)(rd8(rd32(esi + 0x3cu) + 0xcu) + 0x41u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | 0x42u;
            ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 0x2cu);
        }
    }
    else
    {
        eax = (ecx & 0xffffff00u) | (uint8_t)((-(ecx & 1u) & 7u) + 0x46u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(((ecx & 0xfffffffeu) != 0u) + 0x30u);
    }
    if (rd32(edi) == 0u)
    {
        eax = (uint32_t)(int8_t)eax;
        wr32(sp0 - 0x64u, (uint32_t)(int8_t)ecx);
        wr32(sp0 - 0x68u, eax);
        wr32(sp0 - 0x6cu, COW_IMG(0x10389a0cu));
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        g->ecx = sp0 - 0x50u;
        g->esp = sp0 - 0x5cu;
        t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x10389a0cu), eax, (uint32_t)(int8_t)ecx, rd32(sp0 - 0x60u));
        t13 = g->ecx;
        eax = t12;
        ecx = t13;
    }
    else
    {
        eax = (uint32_t)(int8_t)eax;
        edx = rd32(edi);
        t9 = rd32(edi - 0x14u);
        wr32(sp0 - 0x64u, t9);
        wr32(sp0 - 0x68u, edx);
        wr32(sp0 - 0x6cu, (uint32_t)(int8_t)ecx);
        wr32(sp0 - 0x70u, eax);
        wr32(sp0 - 0x74u, COW_IMG(0x10389a20u));
        wr32(sp0 - 0x78u, sp0 - 0x50u);
        g->ecx = sp0 - 0x50u;
        g->esp = sp0 - 0x64u;
        t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x10389a20u), eax, (uint32_t)(int8_t)ecx, edx);
        t11 = g->ecx;
        eax = t10;
        ecx = t11;
    }
    wr32(sp0 - 0x64u, sp0 - 0x50u);
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x10252400u), 2, sp0 - 0x50u, rd32(sp0 - 0x60u));
    t14 = g->edx;
    t15 = rd32(sp0 + 4u) + 1u;
    t16 = rd32(sp0 + 4u);
    t17 = rd32(esi + 0x28u);
    wr32(sp0 + 4u, t15);
    if ((int32_t)(t16 + 1u) < (int32_t)t17)
    {
        eax = t15;
        edx = t14;
        ebx = ebx + 1u;
        edi = edi + 0x1cu;
        goto L_102521c0;
    }
    edx = t14;
L_10252268: ;
    ecx = rd32(sp0 + 4u);
L_1025226c: ;
    if ((int32_t)ecx >= (int32_t)rd32(esi + 0x28u))
    {
        eax = rd32(esi + 0x28u);
        goto L_102523e3;
    }
    ebp = rd32(esi + 0x3cu) + 0xa8u;
    ebp = ebp + 0x20u;
    edi = 0u;
L_10252285: ;
    if ((int32_t)edi < 2)
    {
        if (rd32(ebp) == 0u)
        {
            if (edi == 0u)
            {
                eax = 0x30u;
            }
            else
            {
                eax = edi + 0x40u;
            }
            wr32(sp0 - 0x64u, eax);
            t24 = (uint32_t)(int8_t)((-(edi != 0u) & 6u) + 0x42u);
            wr32(sp0 - 0x68u, t24);
            wr32(sp0 - 0x6cu, COW_IMG(0x10389a0cu));
            wr32(sp0 - 0x70u, sp0 - 0x50u);
            g->ecx = t24;
            g->edx = sp0 - 0x50u;
            g->esp = sp0 - 0x5cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x10389a0cu), t24, eax, rd32(sp0 - 0x60u));
            t25 = g->ecx;
            t26 = g->edx;
            ecx = t25;
            edx = t26;
        }
        else
        {
            eax = rd32(ebp);
            if (edi != 0u)
            {
                ecx = rd32(rd32(esi + 0x3cu) + 0xcu) + 0x41u;
            }
            else
            {
                ecx = 0x30u;
            }
            t18 = (uint32_t)(int8_t)((-((rd32(eax + 0xa8u) & 4u) != 0u) & 0xdu) + 0x49u);
            wr32(sp0 - 0x64u, t18);
            t19 = rd32(ebp - 0xcu);
            wr32(sp0 - 0x68u, t19);
            t20 = rd32(ebp - 0x1cu);
            wr32(sp0 - 0x6cu, t20);
            wr32(sp0 - 0x70u, eax);
            wr32(sp0 - 0x74u, ecx);
            t21 = (uint32_t)(int8_t)((-(edi != 0u) & 6u) + 0x42u);
            wr32(sp0 - 0x78u, t21);
            wr32(sp0 - 0x7cu, COW_IMG(0x103899f0u));
            wr32(sp0 - 0x80u, sp0 - 0x50u);
            g->ecx = t21;
            g->edx = sp0 - 0x50u;
            g->esp = sp0 - 0x6cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103899f0u), t21, ecx, eax);
            t22 = g->ecx;
            t23 = g->edx;
            ecx = t22;
            edx = t23;
        }
        wr32(sp0 - 0x64u, sp0 - 0x50u);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_cdecl(g, COW_IMG(0x10252400u), 2, sp0 - 0x50u, rd32(sp0 - 0x60u));
        t27 = g->edx;
        ecx = rd32(sp0 + 4u);
        edx = t27;
        ebp = ebp + 0x24u;
        edi = edi + 1u;
    }
    t28 = rd32(esi + 0x28u);
    wr32(sp0 + 4u, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)t28)
    {
        ecx = ecx + 1u;
        goto L_10252285;
    }
    eax = t28;
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    g->edx = edx;
    return eax;
L_102521c0: ;
    ecx = rd32(sp0 + 4u);
    goto L_102521c4;
L_10252346: ;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    cow_stdcall(g, COW_IMG(0x102523f0u), 0);
    t29 = g->edx;
    if ((int32_t)rd32(esi + 0x30u) <= 0)
    {
        eax = rd32(esi + 0x30u);
        edx = t29;
        goto L_1025238a;
    }
    eax = rd32(esi + 0x30u);
    edx = t29;
    ebx = 0u;
L_10252354: ;
    wr32(sp0 - 0x64u, 0xffffffffu);
    wr32(sp0 - 0x68u, sp0 - 0x50u);
    wr32(sp0 - 0x6cu, edi);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x60u;
    t30 = cow_call_regs(g, COW_IMG(0x102756c0u), g->eax, sp0 - 0x50u, edx, 1, 3, edi, sp0 - 0x50u, 0xffffffffu);
    t31 = g->ecx;
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    wr32(sp0 - 0x74u, COW_IMG(0x10361dc0u));
    g->ecx = t31;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x10252400u), 2, COW_IMG(0x10361dc0u), sp0 - 0x50u);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x78u, edi);
    g->edx = t33;
    t34 = cow_cdecl(g, COW_IMG(0x10275630u), 3, edi, COW_IMG(0x10361dc0u), sp0 - 0x50u);
    t35 = g->edx;
    if (t34 != 0u)
    {
        edx = t35;
        edi = t34;
    }
    else
    {
        edx = t35;
        edi = t34;
        ebx = rd32(esi + 0x30u);
    }
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x30u))
    {
        eax = rd32(esi + 0x30u);
        ebx = ebx + 1u;
        goto L_10252354;
    }
    eax = rd32(esi + 0x30u);
L_1025238a: ;
    if (rd32(esi + 4u) == 2u)
    {
        t36 = rd32(esi + 0x14u) + rd32(esi + 0x2cu);
        wr32(sp0 - 0x64u, t36);
        t37 = rd32(esi + 0xcu);
        wr32(sp0 - 0x68u, t37);
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t38 = cow_cdecl(g, COW_IMG(0x102520c0u), 6, t37, t36, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
        t39 = g->edx;
        if (t38 == 0u)
        {
            eax = t38;
            edx = t39;
        }
        else
        {
            edx = t39;
            ebx = t38;
            if ((int32_t)rd32(esi + 0x38u) <= 0)
            {
                eax = rd32(esi + 0x38u);
                goto L_102523e3;
            }
            edi = 0u;
L_102523b4: ;
            wr32(sp0 - 0x64u, 2u);
            wr32(sp0 - 0x68u, sp0 - 0x50u);
            t40 = ebx + edi * 8u + rd32(esi + 0x18u) * 8u;
            wr32(sp0 - 0x6cu, t40);
            g->ebx = ebx;
            g->eax = edi + rd32(esi + 0x18u);
            t41 = rd32(esi + 0x18u);
            g->esp = sp0 - 0x60u;
            t42 = cow_call_regs(g, COW_IMG(0x102756c0u), g->eax, t40, sp0 - 0x50u, 1, 3, t40, sp0 - 0x50u, 2u);
            t43 = g->ecx;
            wr32(sp0 - 0x70u, sp0 - 0x50u);
            wr32(sp0 - 0x74u, COW_IMG(0x10361dc0u));
            g->edx = sp0 - 0x50u;
            g->esp = sp0 - 0x6cu;
            cow_cdecl(g, COW_IMG(0x10252400u), 2, COW_IMG(0x10361dc0u), sp0 - 0x50u);
            t44 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x38u))
            {
                edi = edi + 1u;
                goto L_102523b4;
            }
            eax = rd32(esi + 0x38u);
            edx = t44;
        }
    }
L_102523e3: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
