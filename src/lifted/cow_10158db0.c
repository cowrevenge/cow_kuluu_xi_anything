/* f_0x10158db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10158db0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x101598b0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (self != 0u)
    {
        eax = t1;
        edx = t3;
        ebp = t1;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, self, g->edx, 1, 0);
        t5 = g->edx;
        t6 = cow_call_regs(g, COW_IMG(0x101597f0u), t4, self, t5, 1, 0);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
        ebx = t6;
        edi = t4;
    }
    else
    {
        ecx = t2;
        edx = t3;
        ebp = t1;
        ebx = 0u;
        edi = 0u;
    }
    if (rd32(self + 0xc4u) == 0u)
    {
        loc_4 = ebx;
        goto L_10158e60;
    }
    eax = rd32(self + 0xc4u);
    loc_4 = ebx;
    if (rd8(self + 0x21u) != 0u) goto L_10158fdd;
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x21u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall_cdecl(g, eax, ecx, 2, edi, ebx);
    t10 = g->edx;
    if ((uint8_t)arg1 != 0u) goto L_10158fdd;
    edx = t10;
    wr32(self + 0xc4u, 0u);
    wr32(self + 0xc8u, 0u);
    wr32(self + 0xccu, 0u);
    wr32(self + 0xd0u, 0u);
    if (ebp == 0u)
    {
        eax = COW_IMG(0x103d3c84u);
    }
    else
    {
        if (rd16(ebp + 0x210u) == 0u)
        {
            eax = ebp + 0x7cu;
        }
        else
        {
            eax = ebp + 0x214u;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x10159830u), self, 2, eax, ebx);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10037d70u), t12, 0);
    t15 = g->edx;
    cow_call_regs(g, COW_IMG(0x10159040u), t14, self, g->edx, 1, 0);
    wr8(self + 0x22u, 0u);
    return;
L_10158e60: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t16 = cow_stdcall(g, COW_IMG(0x100f0c50u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 1u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_10158eb5;
    }
    t19 = rd32(loc_4 + 4u);
    if ((t19 & 0xff000000u) != 0x1000000u)
    {
        ecx = loc_4;
        edx = t19 & 0xff000000u;
        goto L_10158e9d;
    }
    eax = t19;
    ecx = loc_4;
    edx = t19 & 0xff000000u;
    if (eax == edx) goto L_10158e9d;
    g->ebx = ebx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, ecx, 0u, 0u, 0u, 0u);
    g->ebx = in_ebx;
    return;
L_10158e9d: ;
    if (rd32(self + 0xccu) == 0u)
    {
        eax = rd32(self + 0xccu);
        goto L_10158eb5;
    }
    eax = rd32(self + 0xccu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t20 = cow_thiscall_cdecl(g, eax, ecx, 1, edi);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 == 0u) goto L_10158fdd;
    eax = t20;
    ecx = t21;
    edx = t22;
L_10158eb5: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x101595d0u), self, 1, t23);
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        ecx = t26;
        edx = t27;
        goto L_10158f93;
    }
    eax = t25;
    ecx = t26;
    edi = t23;
    if (edi == 0u)
    {
        ebx = ebx & 0xffffff00u;
    }
    else
    {
        ebx = ebx & 0xffffff00u;
        if (rd16(edi + 0x1fau) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0x1fau);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0x1fau);
            if (ebp != rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u))
            {
                eax = (uint16_t)eax;
            }
            else
            {
                eax = (uint16_t)eax;
                ebx = (ebx & 0xffffff00u) | 1u;
            }
        }
        if (rd16(edi + 0x2a0u) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0x2a0u);
            if (ebp == rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u))
            {
                if (rd32(edi + 0x130u) >> 0x13u & 1u)
                {
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
            }
        }
        if (ebp != 0u)
        {
            if (!(rd32(ebp + 0x12cu) >> 0x16u & 1u))
            {
                ecx = rd32(ebp + 0x12cu) >> 0x16u;
            }
            else
            {
                ecx = rd32(ebp + 0x12cu) >> 0x16u;
                ebx = (ebx & 0xffffff00u) | 1u;
            }
        }
    }
    t28 = rd32(loc_4 + 4u);
    if ((t28 & 0xff000000u) != 0x1000000u)
    {
        edx = t28 & 0xff000000u;
        goto L_10158f93;
    }
    eax = t28;
    edx = t28 & 0xff000000u;
    esi = loc_4;
    if (eax == edx) goto L_10158f93;
    if (ebp == 0u) goto L_10158f6d;
    if (!(rd32(ebp + 0x1d0u) >> 8u & 1u)) goto L_10158f62;
    if (!(rd32(ebp + 0x12cu) >> 0x1eu & 1u)) goto L_10158f93;
L_10158f62: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t29 = cow_thiscall(g, COW_IMG(0x1008e150u), ebp, 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        ecx = t30;
        edx = t31;
        goto L_10158f93;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
L_10158f6d: ;
    if ((uint8_t)ebx != 0u) goto L_10158f93;
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t32 = cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, esi, 0u, 0u, 0u, 0u);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 == 0u) goto L_10158fdd;
    eax = t32;
    ecx = t33;
    edx = t34;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10037d70u), ecx, 0);
    g->ebx = in_ebx;
    return;
L_10158f93: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t35 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t36 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        edx = t36;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f5b4u), 1u, 1u);
        t38 = g->ecx;
        eax = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
        ecx = t38;
        edx = rd32(COW_IMG(0x10578170u));
    }
    else
    {
        edx = t36;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f840u), 1u, 1u);
        t37 = g->edx;
        eax = rd32(rd32(COW_IMG(0x10578250u)) + 8u);
        ecx = rd32(COW_IMG(0x10578250u));
        edx = t37;
    }
    if (eax != 0u)
    {
        if (rd8(eax + 0x6eu) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 0x6eu);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10037e30u), ecx, 0);
        }
    }
L_10158fdd: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10158db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10158db0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
