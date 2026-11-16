/* f_0x100b5210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100b5210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t5;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, 3u);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 3u);
    t2 = g->edx;
    wr32(sp0 - 0x30u, t1);
    g->esp = sp0 - 0x24u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 8u, sp0 - 0x14u);
    t4 = g->ecx;
    if ((uint8_t)t3 != 1u)
    {
        eax = t3;
        ecx = t4;
        goto L_100b54a8;
    }
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, sp0 - 4u);
    wr32(sp0 - 0x30u, 7u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 7u);
    t6 = g->edx;
    wr32(sp0 - 0x30u, t5);
    g->esp = sp0 - 0x24u;
    t7 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t6, 3, t5, sp0 - 4u, sp0 - 0x10u);
    t8 = g->ecx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        ecx = t8;
        goto L_100b54a8;
    }
    t9 = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u;
    wr32(sp0 - 0x14u, t9);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u) == 0u)
    {
        eax = t9;
        ecx = (uint16_t)rd32(sp0 - 0x14u);
        goto L_100b54a8;
    }
    eax = t9;
    ecx = (uint16_t)rd32(sp0 - 0x14u);
    edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u);
    loc_14 = t9;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u) == 0u) goto L_100b54a8;
    ebp = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u);
    t10 = rd32(edi + 0x74u);
    wr32(sp0 - 0x10u, t10);
    t11 = rd32(ebp + 0x74u);
    wr32(sp0 - 0x10u, t11);
    if (rd32(edi + 0x78u) != rd32(sp0 - 8u))
    {
        eax = rd32(edi + 0x78u);
        ecx = rd32(ebp + 0x78u);
        goto L_100b54a8;
    }
    eax = rd32(edi + 0x78u);
    ecx = rd32(ebp + 0x78u);
    if (ecx != rd32(sp0 - 4u)) goto L_100b54a8;
    t12 = rd32(edi + 0x120u);
    if (!(t12 >> 9u & 1u))
    {
        ecx = t12;
        goto L_100b54a8;
    }
    ecx = t12;
    t13 = rd32(ebp + 0x120u);
    if (!(t13 >> 9u & 1u))
    {
        eax = t13;
        goto L_100b54a8;
    }
    eax = t13;
    edx = t13 >> 9u;
    if (!(ecx >> 7u & 1u))
    {
        ecx = ecx >> 7u;
        goto L_100b54a8;
    }
    ecx = ecx >> 7u;
    if (!(eax >> 7u & 1u))
    {
        eax = eax >> 7u;
        goto L_100b54a8;
    }
    wr32(sp0 - 0x28u, 0xbu);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t14 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 0xbu);
    t15 = g->edx;
    wr32(sp0 - 4u, t14);
    t16 = rd32(ebp + 0xa0u);
    wr32(sp0 - 8u, t16);
    if (rd8(arg1 + rd32(self + 0x260u) + 0x160u) != 0u)
    {
        eax = (t16 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
        edx = t15;
        edi = rd32(edi + 0xa0u);
        loc_4 = t14;
        loc_8 = t16;
        goto L_100b542e;
    }
    eax = (t16 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
    edx = t15;
    edi = rd32(edi + 0xa0u);
    loc_4 = t14;
    loc_8 = t16;
L_100b533d: ;
    wr32(sp0 - 0x28u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t18 = g->edx;
    if (arg1 != 0u)
    {
        eax = t17;
        edx = t18;
        wr32(sp0 - 0x28u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x100d2220u), edi, 1, eax);
        t35 = g->edx;
        edx = t35;
    }
    else
    {
        eax = t17;
        edx = t18;
        wr32(sp0 - 0x28u, 1u);
        if ((int32_t)eax < 3072)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t21 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
            t22 = g->edx;
            wr32(sp0 - 0x28u, 1u);
            if ((int32_t)t21 < 2048)
            {
                eax = t21;
                edx = t22;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t25 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                t26 = g->edx;
                wr32(sp0 - 0x28u, 1u);
                if ((int32_t)t25 < 1024)
                {
                    eax = t25;
                    edx = t26;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    t29 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                    t30 = g->edx;
                    wr32(sp0 - 0x28u, 1u);
                    if ((int32_t)t29 < 512)
                    {
                        eax = t29;
                        edx = t30;
                        g->eax = eax;
                        g->esp = sp0 - 0x24u;
                        t33 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                        wr32(sp0 - 0x28u, t33 + 0x7d68u);
                        wr32(sp0 - 0x2cu, sp0 + 4u);
                        g->edx = sp0 + 4u;
                        cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t33 + 0x7d68u);
                        t34 = g->edx;
                        edx = t34;
                    }
                    else
                    {
                        eax = t29;
                        edx = t30;
                        g->eax = eax;
                        g->esp = sp0 - 0x24u;
                        t31 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                        wr32(sp0 - 0x28u, t31 + 0xbfefu);
                        wr32(sp0 - 0x2cu, sp0 + 4u);
                        g->edx = sp0 + 4u;
                        cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t31 + 0xbfefu);
                        t32 = g->edx;
                        edx = t32;
                    }
                }
                else
                {
                    eax = t25;
                    edx = t26;
                    g->eax = eax;
                    g->esp = sp0 - 0x24u;
                    t27 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                    wr32(sp0 - 0x28u, t27 + 0xdc19u);
                    wr32(sp0 - 0x2cu, sp0 + 4u);
                    g->edx = sp0 + 4u;
                    cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t27 + 0xdc19u);
                    t28 = g->edx;
                    edx = t28;
                }
            }
            else
            {
                eax = t21;
                edx = t22;
                g->eax = eax;
                g->esp = sp0 - 0x24u;
                t23 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                wr32(sp0 - 0x28u, t23 + 0xe95bu);
                wr32(sp0 - 0x2cu, sp0 + 4u);
                g->edx = sp0 + 4u;
                cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t23 + 0xe95bu);
                t24 = g->edx;
                edx = t24;
            }
        }
        else
        {
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
            wr32(sp0 - 0x28u, t19 + 0x10323u);
            wr32(sp0 - 0x2cu, sp0 + 4u);
            g->edx = sp0 + 4u;
            cow_thiscall(g, COW_IMG(0x100d2110u), edi, 2, sp0 + 4u, t19 + 0x10323u);
            t20 = g->edx;
            edx = t20;
        }
    }
    t36 = rd32(self + 0x260u);
    wr8(arg1 + t36 + 0x160u, 1u);
    if (rd8(arg1 + rd32(self + 0x260u) + 0x160u) == 0u)
    {
        eax = (t36 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
        goto L_100b533d;
    }
    eax = (t36 & 0xffffff00u) | rd8(arg1 + rd32(self + 0x260u) + 0x160u);
L_100b542e: ;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t37 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, edi, g->edx, 1, 0);
    t38 = g->ecx;
    t39 = g->edx;
    if ((uint8_t)t37 == 0u)
    {
        eax = t37;
        goto L_100b54df;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    if (rd32(sp0 - 4u) == 0u)
    {
        ebx = rd32(sp0 - 4u);
    }
    else
    {
        ebx = rd32(sp0 - 4u);
        if (ebx != 0x78787878u)
        {
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x10087d40u), rd32(rd32(sp0 - 0x14u)), 0);
            wr32(sp0 - 0x28u, 0u);
            t40 = rd32(sp0 - 8u);
            wr32(sp0 - 0x2cu, t40);
            wr32(sp0 - 0x30u, ebx);
            t41 = rd32(rd32(sp0 - 0x14u));
            wr32(t41 + 0x1ecu, ebx);
            wr32(t41 + 0x1f4u, t40);
            g->edx = rd32(edi);
            t42 = rd32(edi);
            cow_thiscall(g, rd32(t42 + 0x298u), edi, 3, ebx, t40, 0u);
            t43 = g->ecx;
            t44 = g->edx;
            ecx = t43;
            edx = t44;
        }
    }
    t45 = rd32(self + 0x260u);
    wr8(arg1 + t45 + 0x160u, 0u);
    if ((uint8_t)arg3 == 0u)
    {
        eax = (t45 & 0xffffff00u) | (uint8_t)arg3;
    }
    else
    {
        eax = (t45 & 0xffffff00u) | (uint8_t)arg3;
        wr32(sp0 - 0x28u, 0xfu);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t46 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xfu);
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, ebx);
        wr32(sp0 - 0x30u, t46);
        t47 = cow_thiscall(g, rd32(rd32(edi) + 0x2a8u), edi, 3, t46, ebx, edi);
        t48 = g->ecx;
        eax = t47;
        ecx = t48;
    }
L_100b54a8: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xfu));
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x256u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x256u);
        wr16(self + 0x256u, (uint16_t)(eax + 2u));
        eax = eax + 2u;
    }
    wr8(self + 0x25au, (uint8_t)arg2);
    return (eax & 0xffffff00u) | 1u;
L_100b54df: ;
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b5210(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
