/* f_0x101ecd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ecd10(Guest* g)
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0xcu, 1u);
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x100eb1b0u), 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    wr16(self + 6u, (uint16_t)(t5 + 1u));
    if ((int16_t)(t5 + 1u) > 0)
    {
        ecx = t6;
        edx = t7;
        goto L_101ecd40;
    }
    eax = t5 + 1u;
    edx = t7;
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    g->esi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, 0u, 0u, 1u);
    t9 = g->edx;
    g->esi = in_esi;
    g->edx = t9;
    return t8;
L_101ecd40: ;
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        wr32(sp0 - 0xcu, eax);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(self + 8u, 0u);
        ecx = t10;
        edx = t11;
    }
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        ebx = in_ebx;
    }
    else
    {
        t12 = (uint32_t)(int16_t)rd16(self + 6u) * 0x54u;
        wr32(sp0 - 0x18u, t12);
        g->eax = (uint32_t)(int16_t)rd16(self + 6u) * 8u - (uint32_t)(int16_t)rd16(self + 6u);
        t13 = rd16(self + 6u);
        g->esp = sp0 - 0xcu;
        t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t12, edx, 1, 3, t12, in_edi, in_ebp);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            eax = t14;
            ecx = t15;
            edx = t16;
            ebx = in_ebx;
            ebp = 0u;
        }
        else
        {
            ecx = t15;
            edx = t16;
            ebp = t14;
            edi = (uint32_t)(int16_t)t13;
            if ((int32_t)(edi - 1u) < 0)
            {
                eax = edi - 1u;
                ebx = ebp;
            }
            else
            {
                eax = edi - 1u;
                ebx = ebp;
                edi = eax + 1u;
L_101ecd8f: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t17 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t18 = g->ecx;
                t19 = g->edx;
                if (edi != 1u)
                {
                    eax = t17;
                    edx = t19;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_101ecd8f;
                }
                eax = t17;
                ecx = t18;
                edx = t19;
                ebx = ebx + 0x54u;
            }
        }
        wr32(self + 8u, ebp);
    }
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, 0x2cu);
    wr32(sp0 - 0x20u, 9u);
    t20 = rd32(self + 8u);
    wr16(self + 4u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x2cu);
    t22 = g->edx;
    wr32(sp0 - 0x1cu, t21);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    g->esp = sp0 - 0x14u;
    t23 = cow_fastcall(g, COW_IMG(0x101f4b20u), t20, t22, 4, 1u, 1u, t21, 0x80808080u);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(t20 + 0x48u, 1u);
    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
    if ((int16_t)rd16(self + 6u) <= 0)
    {
        edx = t25;
        goto L_101eceb1;
    }
    eax = t23;
    ecx = t24;
    ebp = 0u;
L_101ecde0: ;
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, 1u);
    g->eax = eax;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x14u;
    t26 = cow_cdecl(g, COW_IMG(0x100eb160u), 3, 1u, ebp, sp0 - 4u);
    t27 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        edx = t27;
    }
    else
    {
        edx = t27;
        if ((int32_t)rd32(rd32(sp0 - 4u) + 4u) < 0)
        {
            eax = rd32(sp0 - 4u);
        }
        else
        {
            eax = rd32(sp0 - 4u);
            ecx = rd32(rd32(sp0 - 4u) + 4u);
            edi = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
            t28 = (edx & 0xffff0000u) | rd16(eax);
            wr32(sp0 - 0x18u, t28);
            wr32(sp0 - 0x1cu, 0u);
            g->esi = self;
            g->eax = eax;
            g->edx = t28;
            g->esp = sp0 - 0x14u;
            t29 = cow_cdecl(g, COW_IMG(0x101cba50u), 2, 0u, t28);
            t30 = g->edx;
            t31 = (-((uint8_t)t29 != 0u) & 0x404040u) - 0x7fbfbfc0u;
            if (rd8(rd32(sp0 - 4u) + 2u) < rd8(rd32(sp0 - 4u) + 3u))
            {
                eax = rd32(sp0 - 4u);
                ecx = t31;
                edx = (t30 & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 2u);
                ebx = (ebx & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 3u);
            }
            else
            {
                eax = rd32(sp0 - 4u);
                edx = (t30 & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 2u);
                ebx = (ebx & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 3u);
                ecx = 0x80404040u;
            }
            wr32(sp0 - 0x18u, ecx);
            wr32(sp0 - 0x1cu, rd16(eax));
            wr32(sp0 - 0x20u, 0x19u);
            wr32(sp0 - 0x24u, 1u);
            g->esp = sp0 - 0x14u;
            cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 0x19u, rd16(eax), ecx);
            wr32(sp0 - 0x18u, 0x80808080u);
            t32 = rd16(rd32(sp0 - 4u));
            wr32(sp0 - 0x1cu, t32);
            wr32(sp0 - 0x20u, 0x15u);
            wr32(sp0 - 0x24u, 0u);
            g->eax = rd32(sp0 - 4u);
            t33 = rd32(sp0 - 4u);
            t34 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t32, 4, 0u, 0x15u, t32, 0x80808080u);
            wr32(sp0 - 0x18u, 0x80808080u);
            t35 = (rd32(rd32(sp0 - 4u) + 4u) & 0x7fffffffu) + 1u;
            wr32(sp0 - 0x1cu, t35);
            wr32(sp0 - 0x20u, 0xau);
            wr32(sp0 - 0x24u, 2u);
            cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t35, 4, 2u, 0xau, t35, 0x80808080u);
            t36 = g->edx;
            t37 = rd32(sp0 - 4u);
            wr32(edi + 0x48u, t37);
            wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
            eax = t37;
            edx = t36;
        }
    }
    if ((int32_t)(ebp + 1u) < (int16_t)rd16(self + 6u))
    {
        ecx = (uint32_t)(int16_t)rd16(self + 6u);
        ebp = ebp + 1u;
        goto L_101ecde0;
    }
L_101eceb1: ;
    wr32(sp0 - 0x18u, 1u);
    t38 = (edx & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x1cu, t38);
    t39 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t39);
    g->esi = self;
    g->eax = t39;
    g->edx = t38;
    g->esp = sp0 - 0x14u;
    t40 = cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, t39, t38, 1u);
    t41 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = t41;
    return t40;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ecd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ecd10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
