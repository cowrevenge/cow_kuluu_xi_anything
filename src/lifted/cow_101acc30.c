/* f_0x101acc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101acc30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    eax = in_eax;
    edx = in_edx;
    ebp = 0xcu;
    edi = sp0 - 0x34u;
L_101acc44: ;
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t1 = cow_fastcall(g, COW_IMG(0x101acf40u), edi, edx, 4, 0u, 0u, 0u, 0u);
    t2 = g->edx;
    if (ebp != 1u)
    {
        eax = t1;
        edx = t2;
        ebp = ebp - 1u;
        edi = edi + 4u;
        goto L_101acc44;
    }
    edx = t2;
    wr32(sp0 - 4u, 0u);
    t3 = rd32(sp0 + 4u);
    wr8(sp0 - 0x44u, 0u);
    t4 = rd32(t3);
    wr8(sp0 - 0x43u, 0u);
    wr8(sp0 - 0x42u, 0u);
    wr8(sp0 - 0x41u, 0u);
    g->eax = t4;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t5 = cow_thiscall(g, rd32(t4 + 0x10u), t3, 0);
    t6 = g->edx;
    t7 = cow_thiscall(g, COW_IMG(0x101bc9b0u), t3, 0);
    t8 = rd32(t3 + 0x14u);
    wr8(sp0 - 0x40u, 0u);
    wr8(sp0 - 0x3fu, 0u);
    wr8(sp0 - 0x3eu, 0u);
    wr8(sp0 - 0x3du, 0u);
    wr32(sp0 - 0x38u, t8);
    wr32(sp0 - 0x3cu, t7);
    t9 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x40u, t9);
    g->edx = t9;
    t10 = cow_call_regs(g, COW_IMG(0x101acf60u), t7, sp0 - 0x40u, g->edx, 1, 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_call_regs(g, COW_IMG(0x101acf60u), t10, sp0 - 0x38u, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != (uint8_t)t10)
    {
        ecx = t13;
        ebx = (uint8_t)t10;
        ebp = t5;
        goto L_101accf2;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    ebx = (uint8_t)t10;
    ebp = t5;
    if (rd8(sp0 - 0x37u) != rd8(sp0 - 0x3fu))
    {
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x3fu);
        goto L_101accf2;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x37u);
    ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x3fu);
    if ((uint8_t)rd16(sp0 - 0x36u) != (uint8_t)rd16(sp0 - 0x3eu))
    {
        ecx = (ecx & 0xffff0000u) | rd16(sp0 - 0x3eu);
        goto L_101accf2;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 - 0x36u);
    ecx = (ecx & 0xffff0000u) | rd16(sp0 - 0x3eu);
    if ((uint8_t)(eax >> 8u) != (uint8_t)(ecx >> 8u)) goto L_101accf2;
    t15 = rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x58u, t15);
    wr32(sp0 - 0x5cu, ebp);
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t16 = cow_thiscall(g, COW_IMG(0x101abc50u), self, 2, ebp, t15);
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return (uint8_t)t16;
L_101accf2: ;
    t17 = rd32(rd32(sp0 + 4u) + 0x14u);
    wr32(sp0 - 0x38u, t17);
    if (t17 >> 0x18u == 0u)
    {
        eax = t17;
        edx = rd32(sp0 + 4u);
        goto L_101ace9f;
    }
    if ((int32_t)(rd32(self + 0xa50u) + rd32(self + 0xc74u) + rd32(sp0 - 0x3cu)) > (int32_t)rd32(self + 0xa54u))
    {
        eax = rd32(self + 0xa54u);
        goto L_101ace92;
    }
    eax = rd32(self + 0xa54u);
    ebx = rd32(sp0 - 0x3cu);
    if ((int32_t)(rd32(self + 0x888u) + rd32(self + 0xc70u) + 6u) > (int32_t)eax) goto L_101ace92;
    ecx = rd32(self + 0xc70u);
    edx = rd32(self + 0x888u) + rd32(self + 0xc70u) + 6u;
    t18 = rd32(self + 1u);
    wr32(sp0 - 0x38u, t18);
    if ((int32_t)rd32(self + 0xa4u) >= 12)
    {
        eax = rd32(self + 0xa4u);
    }
    else
    {
        eax = rd32(self + 0xa4u);
        wr32(sp0 - 0x58u, sp0 - 0x38u);
        g->eax = eax;
        g->esp = sp0 - 0x54u;
        t19 = cow_fastcall(g, COW_IMG(0x101acf70u), eax * 4u + self + 0x74u, edx, 1, sp0 - 0x38u);
        t20 = g->ecx;
        t21 = g->edx;
        wr32(self + 0xa4u, rd32(self + 0xa4u) + 1u);
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    if ((int32_t)ebx <= 0)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_101acdcf;
    }
    edi = 0u;
    loc_4 = rd32(sp0 - 4u);
L_101acd6f: ;
    wr32(sp0 - 0x58u, edi);
    wr32(sp0 - 0x5cu, ebp);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t22 = cow_stdcall(g, COW_IMG(0x101ad1b0u), 2, ebp, edi);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        ecx = t23;
        edx = t24;
        edi = edi + 1u;
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        t25 = rd8(ebp + edi + 2u);
        t26 = rd8(ebp + edi + 3u);
        t27 = rd8(ebp + edi + 1u);
        wr8(sp0 - 0x40u, (uint8_t)t27);
        t28 = rd8(ebp + edi + 4u);
        wr8(sp0 - 0x3fu, (uint8_t)t25);
        wr8(sp0 - 0x3eu, (uint8_t)t26);
        wr8(sp0 - 0x3du, (uint8_t)t28);
        t29 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x38u, t29);
        if ((int32_t)rd32(sp0 - 4u) >= 12)
        {
            ecx = (ecx & 0xffffff00u) | t26;
            edx = ((edx | t27) & 0xffffff00u) | t28;
            loc_4 = rd32(sp0 - 4u);
        }
        else
        {
            eax = rd32(sp0 - 4u);
            edx = ((edx | t27) & 0xffffff00u) | t28;
            wr32(sp0 - 0x58u, sp0 - 0x38u);
            g->esp = sp0 - 0x54u;
            cow_fastcall(g, COW_IMG(0x101acf70u), eax * 4u + sp0 - 0x34u, edx, 1, sp0 - 0x38u);
            t30 = g->ecx;
            t31 = g->edx;
            t32 = rd32(sp0 - 4u) + 1u;
            wr32(sp0 - 4u, t32);
            ecx = t30;
            edx = t31;
            loc_4 = t32;
        }
        edi = edi + 6u;
    }
    if ((int32_t)edi < (int32_t)rd32(sp0 - 0x3cu))
    {
        eax = rd32(sp0 - 0x3cu);
        goto L_101acd6f;
    }
    eax = rd32(sp0 - 0x3cu);
    ebx = eax;
L_101acdcf: ;
    if (loc_4 == 0u) goto L_101ace39;
    eax = loc_4;
    wr32(sp0 - 4u, eax - 1u);
    t33 = rd32(eax * 4u + sp0 - 0x38u);
    wr32(sp0 - 0x38u, t33);
    wr8(sp0 - 0x44u, (uint8_t)t33);
    wr8(sp0 - 0x43u, (uint8_t)(t33 >> 8u));
    wr8(sp0 - 0x42u, (uint8_t)(t33 >> 0x10u));
    wr8(sp0 - 0x41u, t33 >> 0x18u);
    t34 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x38u, t34);
    if ((int32_t)rd32(self + 0x38u) >= 12)
    {
        edi = t34;
        loc_4 = eax - 1u;
    }
    else
    {
        edi = t34;
        loc_4 = eax - 1u;
        eax = rd32(self + 0x38u);
        wr32(sp0 - 0x58u, sp0 - 0x38u);
        g->esp = sp0 - 0x54u;
        cow_fastcall(g, COW_IMG(0x101acf70u), eax * 4u + self + 8u, sp0 - 0x38u, 1, sp0 - 0x38u);
        t35 = g->ecx;
        t36 = g->edx;
        wr32(self + 0x38u, rd32(self + 0x38u) + 1u);
        ecx = t35;
        edx = t36;
        loc_4 = rd32(sp0 - 4u);
    }
    wr32(sp0 - 0x38u, edi);
    if ((int32_t)rd32(self + 0x70u) < 12)
    {
        eax = rd32(self + 0x70u);
        wr32(sp0 - 0x58u, sp0 - 0x38u);
        g->esp = sp0 - 0x54u;
        cow_fastcall(g, COW_IMG(0x101acf70u), eax * 4u + self + 0x40u, edx, 1, sp0 - 0x38u);
        t37 = g->ecx;
        t38 = g->edx;
        wr32(self + 0x70u, rd32(self + 0x70u) + 1u);
        ecx = t37;
        edx = t38;
        loc_4 = rd32(sp0 - 4u);
    }
    goto L_101acdcf;
L_101ace39: ;
    t39 = rd32(sp0 + 4u);
    wr8(self + rd32(self + 0xc70u) + 0xc2cu, 0xfdu);
    t40 = rd32(t39 + 0x14u);
    t41 = rd32(self + 0xc70u);
    wr32(self + t41 + 0xc2du, t40);
    wr8(self + rd32(self + 0xc70u) + 0xc31u, 0xfdu);
    t42 = rd32(self + 0xc70u) + 6u;
    wr32(self + 0xc70u, t42);
    wr8(self + t42 + 0xc2cu, 0u);
    t43 = ebx + rd32(self + 0xc74u);
    wr32(self + 0xc74u, t43);
    edx = t41;
L_101acebc: ;
    if (rd32(self + 0x38u) != 0u) goto L_101acee6;
    eax = rd32(self + 0x38u);
    wr8(self, 0u);
    wr32(self + 0x70u, 0u);
    wr32(self + 0xa4u, 0u);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x101acfb0u), self, 0);
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return 1u;
L_101ace92: ;
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return 0xffffffffu;
L_101ace9f: ;
    wr32(sp0 + 4u, eax);
    if ((int32_t)rd32(self + 0x38u) < 12)
    {
        eax = rd32(self + 0x38u);
        wr32(sp0 - 0x58u, sp0 + 4u);
        g->esp = sp0 - 0x54u;
        cow_fastcall(g, COW_IMG(0x101acf70u), eax * 4u + self + 8u, edx, 1, sp0 + 4u);
        t44 = g->edx;
        wr32(self + 0x38u, rd32(self + 0x38u) + 1u);
        edx = t44;
    }
    goto L_101acebc;
L_101acee6: ;
    wr8(self, 1u);
    if (rd32(self + 0x38u) != 0u)
    {
        eax = rd32(self + 0x38u);
        wr32(self + 0x38u, eax - 1u);
        t45 = rd32(eax * 4u + self + 4u);
        wr32(sp0 + 4u, t45);
        eax = (eax - 1u & 0xffffff00u) | rd8(sp0 + 7u);
        ecx = rd8(sp0 + 6u);
        edx = (t45 & 0xffffff00u) | rd8(sp0 + 5u);
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
    }
    else
    {
        eax = rd32(self + 0x38u);
        eax = eax & 0xffffff00u;
        ecx = 0u;
        edx = edx & 0xffffff00u;
        ebx = ebx & 0xffffff00u;
    }
    wr8(self + 1u, (uint8_t)ebx);
    wr8(self + 2u, (uint8_t)edx);
    wr8(self + 3u, (uint8_t)ecx);
    wr8(self + 4u, (uint8_t)eax);
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101acc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101acc30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
