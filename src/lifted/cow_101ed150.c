/* f_0x101ed150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ed150(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr16(self + 6u, 0u);
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((t5 & 0x200000u) != 0u)
    {
        edx = t7;
        goto L_101ed177;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((t8 >> 8u & 8u) == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101ed189;
    }
    edx = t10;
L_101ed177: ;
    t11 = rd32(COW_IMG(0x10666e2cu));
    t12 = rd32(rd32(COW_IMG(0x10666e2cu)) + 0xcu);
    t13 = rd8(rd32(COW_IMG(0x10666e2cu)) + rd32(rd32(COW_IMG(0x10666e2cu)) + 0xcu) + 0x18u);
    wr16(self + 6u, (uint16_t)t13);
    eax = t11;
    ecx = t12;
    edx = (edx & 0xffff0000u) | t13;
L_101ed189: ;
    if (rd16(self + 6u) != 0u) goto L_101ed1a4;
    g->esi = self;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t14 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, 0u, 0u, 1u);
    t15 = g->edx;
    g->esi = in_esi;
    g->edx = t15;
    return t14;
L_101ed1a4: ;
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(self + 8u, 0u);
        ecx = t16;
        edx = t17;
    }
    if (rd32(self + 8u) != 0u)
    {
        edi = in_edi;
    }
    else
    {
        t18 = (uint32_t)(int16_t)rd16(self + 6u) * 0x54u;
        g->eax = t18;
        t19 = rd16(self + 6u);
        g->esp = sp0 - 0x10u;
        t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t18, in_edi, in_ebp);
        t21 = g->edx;
        if (t20 == 0u)
        {
            edx = t21;
            edi = (uint32_t)(int16_t)t19;
            ebp = 0u;
        }
        else
        {
            eax = t20;
            edx = t21;
            ebp = t20;
            edi = (uint32_t)(int16_t)t19;
            if ((int32_t)(edi - 1u) < 0)
            {
                edi = edi - 1u;
            }
            else
            {
                ebx = ebp;
                edi = edi - 1u;
                edi = edi + 1u;
L_101ed1ea: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t22 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t23 = g->edx;
                if (edi != 1u)
                {
                    eax = t22;
                    edx = t23;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_101ed1ea;
                }
                edx = t23;
                edi = edi - 1u;
            }
        }
        wr32(self + 8u, ebp);
    }
    t24 = rd16(self + 6u);
    wr16(self + 4u, 0u);
    if ((int16_t)t24 <= 0) goto L_101ed2de;
    eax = 0u;
    loc_8 = 0u;
L_101ed212: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_thiscall(g, COW_IMG(0x1021cb80u), rd32(COW_IMG(0x10666e2cu)), 1, eax);
    t26 = g->edx;
    if (t25 == 0u)
    {
        edx = t26;
        edi = t25;
    }
    else
    {
        edi = t25;
        if (rd8(edi + 2u) == 0u)
        {
            edx = rd32(self + 8u);
        }
        else
        {
            edx = rd32(self + 8u);
            ebp = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
            g->eax = rd16(edi);
            g->edx = edx;
            t27 = rd16(edi);
            g->esp = sp0 - 0x18u;
            t28 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t27);
            t29 = g->edx;
            if (t28 == 0u)
            {
                edx = t29;
            }
            else
            {
                eax = t28;
                ebx = t28;
                g->eax = eax;
                g->edx = rd32(self);
                t30 = rd32(self);
                g->esp = sp0 - 0x18u;
                t31 = cow_thiscall(g, rd32(t30 + 0x20u), self, 2, edi, ebx);
                t32 = g->edx;
                if (t31 == 0u)
                {
                    edx = t32;
                }
                else
                {
                    eax = t31;
                    edx = t32;
                    loc_4 = t31;
                    g->esp = sp0 - 0x18u;
                    cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, edx, 4, 0u, 0x16u, edi, 0x80808080u);
                    t33 = g->edx;
                    t34 = rd32(ebx + 0x14c8u);
                    g->eax = loc_4;
                    t35 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, t33, 4, 1u, 1u, t34, loc_4);
                    t36 = g->edx;
                    t37 = (t36 & 0xffff0000u) | rd16(edi);
                    g->ebx = ebx;
                    g->edx = t37;
                    t38 = cow_thiscall(g, COW_IMG(0x101ed020u), self, 1, t37);
                    t39 = g->edx;
                    if (t38 == 0u)
                    {
                        edx = t39;
                    }
                    else
                    {
                        eax = t38;
                        edx = t39;
                        t40 = (rd32(eax + 4u) & 0x7fffffffu) + 1u;
                        g->esp = sp0 - 0x18u;
                        cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, edx, 4, 2u, 0xau, t40, 0x80808080u);
                        t41 = g->edx;
                        edx = t41;
                    }
                    wr32(ebp + 0x48u, edi);
                    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
                }
            }
        }
    }
    if ((int32_t)(loc_8 + 1u) < (int16_t)rd16(self + 6u))
    {
        eax = loc_8 + 1u;
        loc_8 = loc_8 + 1u;
        goto L_101ed212;
    }
L_101ed2de: ;
    t42 = (edx & 0xffff0000u) | rd16(self + 4u);
    t43 = rd32(self + 8u);
    g->esi = self;
    g->edi = edi;
    g->eax = t43;
    g->esp = sp0 - 0x18u;
    t44 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t42, 3, t43, t42, 1u);
    t45 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t45;
    return t44;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ed150(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
