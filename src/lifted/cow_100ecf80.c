/* f_0x100ecf80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ecf80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x58u, in_esi);
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19520u) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = rd8(arg3 + 0x14u) * 5u;
        edx = rd8(arg3 + 0x14u) * 0xbu;
        goto L_100ecfaa;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    edx = rd8(arg3 + 0x14u) * 0xbu;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100ecfaa: ;
    wr32(sp0 - 0x5cu, 5u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 5u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        goto L_100ecfdf;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_100ecfb8: ;
    if (rd16(eax + 0x18u) != (rd16(arg3 + 0x10u) & 0x7fffu))
    {
        ecx = rd16(arg3 + 0x10u) & 0x7fffu;
    }
    else
    {
        ecx = rd16(arg3 + 0x10u) & 0x7fffu;
        t4 = rd16(arg3 + 0x12u);
        t5 = rd8(arg3 + 0x14u);
        wr16(eax + t5 * 2u + 0x38u, (uint16_t)t4);
        ecx = (ecx & 0xffff0000u) | t4;
        edx = t5;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t6 = cow_cdecl(g, COW_IMG(0x100e8c70u), 9, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_100ecfb8;
    }
    ecx = t7;
L_100ecfdf: ;
    if (rd32(arg3 + 8u) == rd32(arg1 + 0x3c390u))
    {
        wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19550u, rd16(arg3 + 0x12u));
        if ((rd8(arg3 + 0x11u) & 0x80u) == 0u)
        {
            eax = rd8(arg3 + 0x14u) * 0xbu;
            ecx = rd32(COW_IMG(0x104dfd98u));
            wr32(eax * 8u + ecx + 0x1954cu, 1u);
        }
        else
        {
            eax = rd8(arg3 + 0x14u) * 0xbu;
            ecx = rd32(COW_IMG(0x104dfd98u));
            wr32(eax * 8u + ecx + 0x1954cu, 2u);
        }
    }
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_edi);
    wr32(sp0 - 0x68u, 0x10u);
    wr32(sp0 - 0x6cu, arg3 + 0x16u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19552u, rd16(arg3 + 0xeu));
    t9 = rd16(arg3 + 0xcu);
    wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19558u, t9);
    t10 = rd32(arg3 + 4u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19554u, t10);
    t11 = rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1955cu;
    wr32(sp0 - 0x70u, t11);
    g->edx = t11;
    g->esp = sp0 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10312090u), rd8(arg3 + 0x14u) * 0xbu, g->ecx, g->edx, 1, 3, t11, arg3 + 0x16u, 0x10u);
    t12 = g->edx;
    if (rd8(arg3 + 0x15u) == 0u)
    {
        wr8(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1951cu, 2u);
        if (rd16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19520u) != 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            edx = rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u;
            if (rd16(arg3 + 0x12u) != 0xffffu)
            {
                ebp = (in_ebp & 0xffff0000u) | rd16(arg3 + 0x12u);
                if ((int16_t)ebp > 0)
                {
                    if (rd8(arg3 + 0x26u) != 0u)
                    {
                        edi = sp0 - 0x54u;
                        eax = 0u;
                        ecx = 0x15u;
                        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        t33 = rd16(edx + 0x19520u);
                        wr8(sp0 - 4u, 1u);
                        wr32(sp0 - 0x48u, t33);
                        wr32(sp0 - 0x68u, (uint32_t)(int16_t)ebp);
                        wr32(sp0 - 0x6cu, COW_IMG(0x10352ff0u));
                        wr32(sp0 - 0x70u, sp0 - 0x34u);
                        t34 = rd32(edx + 0x1956cu);
                        wr32(sp0 - 0x50u, t34);
                        g->ebx = arg3 + 0x26u;
                        g->eax = (uint32_t)(int16_t)ebp;
                        g->ecx = sp0 - 0x34u;
                        g->esp = sp0 - 0x5cu;
                        t35 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x34u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)ebp, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                        t36 = g->ecx;
                        wr32(sp0 - 0x74u, 0x18u);
                        wr32(sp0 - 0x78u, arg3 + 0x26u);
                        wr32(sp0 - 0x7cu, sp0 - 0x1cu);
                        g->ecx = t36;
                        g->edx = sp0 - 0x1cu;
                        g->esp = sp0 - 0x70u;
                        cow_call_regs(g, COW_IMG(0x10312090u), t35, g->ecx, g->edx, 1, 3, sp0 - 0x1cu, arg3 + 0x26u, 0x18u);
                        t37 = g->ecx;
                        t38 = g->edx;
                        t39 = rd32(arg3 + 8u);
                        wr32(sp0 - 0x54u, t39);
                        wr16(sp0 - 0x4cu, (uint16_t)(((-(t39 != 0u) & 0xffffff00u) | (-(t39 != 0u) & 0x8fu)) + 0x82u));
                        wr32(sp0 - 0x80u, sp0 - 0x54u);
                        g->ebx = arg3 + 0x26u;
                        g->esp = sp0 - 0x7cu;
                        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
                    }
                }
            }
        }
    }
    else
    {
        eax = rd8(arg3 + 0x15u);
        edx = t12;
        if (eax == 1u)
        {
            eax = eax - 1u;
            if (rd16(arg3 + 0x12u) != 0xffffu)
            {
                edx = (edx & 0xffff0000u) | rd16(arg3 + 0x12u);
                if ((int16_t)edx > 0)
                {
                    if (rd8(arg3 + 0x26u) != 0u)
                    {
                        edi = sp0 - 0x54u;
                        eax = 0u;
                        ecx = 0x15u;
                        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        t20 = rd32(COW_IMG(0x104dfd98u));
                        t21 = rd8(arg3 + 0x14u);
                        t22 = rd16(rd32(COW_IMG(0x104dfd98u)) + ((eax & 0xffffff00u) | rd8(arg3 + 0x14u)) * 0x58u + 0x19520u);
                        wr8(sp0 - 4u, 1u);
                        wr32(sp0 - 0x48u, t22);
                        wr32(sp0 - 0x68u, (uint32_t)(int16_t)edx);
                        wr32(sp0 - 0x6cu, COW_IMG(0x10352ff0u));
                        wr32(sp0 - 0x70u, sp0 - 0x34u);
                        t23 = rd32(t20 + ((eax & 0xffffff00u) | t21) * 0x58u + 0x1956cu);
                        wr32(sp0 - 0x50u, t23);
                        g->ebx = arg3 + 0x16u;
                        g->ecx = (uint32_t)(int16_t)edx;
                        g->edx = sp0 - 0x34u;
                        g->esp = sp0 - 0x5cu;
                        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x34u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)edx, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                        t24 = g->ecx;
                        t25 = g->edx;
                        wr32(sp0 - 0x74u, 0x18u);
                        wr32(sp0 - 0x78u, arg3 + 0x26u);
                        wr32(sp0 - 0x7cu, sp0 - 0x1cu);
                        g->edx = t25;
                        g->esp = sp0 - 0x70u;
                        cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x1cu, g->ecx, g->edx, 1, 3, sp0 - 0x1cu, arg3 + 0x26u, 0x18u);
                        t26 = g->edx;
                        t27 = rd32(arg3 + 8u);
                        wr32(sp0 - 0x54u, t27);
                        wr32(sp0 - 0x80u, sp0 - 0x54u);
                        wr16(sp0 - 0x4cu, (uint16_t)(((-(t27 != 0u) & 0xffffff00u) | (-(t27 != 0u) & 0x8fu)) + 0x82u));
                        g->ebx = arg3 + 0x16u;
                        g->esp = sp0 - 0x7cu;
                        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
                    }
                }
            }
            if (rd16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19520u) != 0u)
            {
                edx = rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u;
                wr32(sp0 - 0x68u, 0x18u);
                edi = sp0 - 0x54u;
                eax = 0u;
                ecx = 0x15u;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr16(sp0 - 0x4cu, 0x12u);
                t28 = (eax & 0xffff0000u) | rd16(edx + 0x19520u);
                wr32(sp0 - 0x48u, t28);
                wr8(sp0 - 4u, 1u);
                wr32(sp0 - 0x6cu, arg3 + 0x16u);
                wr32(sp0 - 0x70u, sp0 - 0x34u);
                t29 = rd32(edx + 0x1956cu);
                wr32(sp0 - 0x50u, t29);
                g->ecx = t29;
                g->edx = sp0 - 0x34u;
                g->esp = sp0 - 0x64u;
                cow_call_regs(g, COW_IMG(0x10312090u), t28, g->ecx, g->edx, 1, 3, sp0 - 0x34u, arg3 + 0x16u, 0x18u);
                t30 = g->ecx;
                t31 = g->edx;
                t32 = rd32(arg3 + 4u);
                wr32(sp0 - 0x54u, t32);
                wr16(sp0 - 0x4cu, (uint16_t)(((-(t32 != 0u) & 0xffffff00u) | (-(t32 != 0u) & 0x8fu)) + 0x83u));
                wr32(sp0 - 0x74u, sp0 - 0x54u);
                g->ebx = arg3 + 0x16u;
                g->esp = sp0 - 0x70u;
                cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            }
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                if (rd16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19520u) != 0u)
                {
                    edx = rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u;
                    t13 = rd32(arg3 + 4u);
                    edi = sp0 - 0x54u;
                    eax = 0u;
                    ecx = 0x15u;
                    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    if (t13 == 0u)
                    {
                        wr16(sp0 - 0x4cu, 0x1fu);
                        t18 = rd16(edx + 0x19520u);
                        wr8(sp0 - 4u, 1u);
                        wr32(sp0 - 0x48u, t18);
                        t19 = rd32(edx + 0x1956cu);
                        wr32(sp0 - 0x50u, t19);
                        wr32(sp0 - 0x68u, sp0 - 0x54u);
                        wr32(sp0 - 0x54u, 0u);
                        g->ebx = arg3 + 0x16u;
                        g->esp = sp0 - 0x64u;
                        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
                    }
                    else
                    {
                        ebp = t13;
                        wr16(sp0 - 0x4cu, 0xfu);
                        t14 = rd16(edx + 0x19520u);
                        wr8(sp0 - 4u, 1u);
                        wr32(sp0 - 0x48u, t14);
                        wr32(sp0 - 0x68u, 0x18u);
                        wr32(sp0 - 0x6cu, arg3 + 0x16u);
                        wr32(sp0 - 0x70u, sp0 - 0x34u);
                        t15 = rd32(edx + 0x1956cu);
                        wr32(sp0 - 0x50u, t15);
                        wr32(sp0 - 0x54u, ebp);
                        g->edx = t15;
                        g->esp = sp0 - 0x64u;
                        t16 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x34u, g->ecx, g->edx, 1, 3, sp0 - 0x34u, arg3 + 0x16u, 0x18u);
                        t17 = g->edx;
                        wr32(sp0 - 0x74u, sp0 - 0x54u);
                        g->ebx = arg3 + 0x16u;
                        g->esp = sp0 - 0x70u;
                        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
                    }
                }
            }
        }
        wr8(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1951cu, 3u);
        edi = rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19520u;
        eax = 0u;
        ecx = 0xbu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x1988cu, 2u);
    if (rd8(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1951cu) != 3u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = rd8(arg3 + 0x14u) * 5u;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = rd8(arg3 + 0x14u) * 0xbu;
        edx = rd8(arg3 + 0x14u) * 5u;
        wr8(eax + 0x19890u, (uint8_t)(rd8(eax + 0x19890u) - 1u));
        if ((int8_t)rd8(rd32(COW_IMG(0x104dfd98u)) + 0x19890u) >= 0)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
        }
        else
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            wr8(eax + 0x19890u, 0u);
            eax = rd32(COW_IMG(0x104dfd98u));
        }
        eax = eax + 0x57d8u;
        ecx = 0x14u;
L_100ed40b: ;
        t40 = rd8(arg3 + 0x14u);
        wr16(eax + t40 * 2u + 0x38u, 0u);
        if (ecx != 1u)
        {
            eax = eax + 0x70u;
            ecx = ecx - 1u;
            goto L_100ed40b;
        }
        eax = eax + 0x70u;
        edx = t40;
    }
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x64u);
    g->ebp = rd32(sp0 - 0x60u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ecf80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ecf80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
