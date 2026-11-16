/* f_0x10208b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10208b60(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd16(self + 0x1eu);
    wr32(self + 4u, 0u);
    if ((int16_t)t1 <= 0)
    {
        eax = (uint32_t)(int16_t)t1;
        goto L_10208b90;
    }
    eax = (uint32_t)(int16_t)t1;
    if ((int32_t)eax <= 2) goto L_10208b87;
    if (eax != 3u) goto L_10208b90;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x102085f0u), eax, self, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2 + 2u;
    ecx = t3;
    edx = t4;
L_10208ba4: ;
    wr32(self + 8u, eax);
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t13 = g->edx;
        wr32(self + 0xcu, 0u);
        edx = t13;
    }
    if (rd32(self + 0xcu) == 0u)
    {
        t14 = rd32(self + 8u) * 0x54u;
        t15 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t14, edx, 1, 3, t14, in_edi, in_esi);
        t17 = g->edx;
        if (t16 == 0u)
        {
            edx = t17;
            ebx = 0u;
        }
        else
        {
            edx = t17;
            ebx = t16;
            edi = t15;
            if ((int32_t)(edi - 1u) >= 0)
            {
                eax = edi - 1u;
                ebp = ebx;
                edi = eax + 1u;
L_10208bec: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t18 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebp, 0);
                t19 = g->edx;
                if (edi != 1u)
                {
                    eax = t18;
                    edx = t19;
                    ebp = ebp + 0x54u;
                    edi = edi - 1u;
                    goto L_10208bec;
                }
                edx = t19;
            }
        }
        wr32(self + 0xcu, ebx);
    }
    if ((uint32_t)(int16_t)rd16(self + 0x1eu) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x1eu) - 1u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x102086d0u), eax, self, g->edx, 1, 0);
        t28 = g->edx;
        edx = t28;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x1eu) - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x102087c0u), eax, self, g->edx, 1, 0);
            t27 = g->edx;
            edx = t27;
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                eax = eax - 1u;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t20 = cow_call_regs(g, COW_IMG(0x102086d0u), eax, self, g->edx, 1, 0);
                t21 = g->edx;
                g->edx = t21;
                t22 = cow_call_regs(g, COW_IMG(0x102087c0u), t20, self, g->edx, 1, 0);
                t23 = g->edx;
                eax = t22;
                edx = t23;
            }
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t24 = cow_thiscall(g, COW_IMG(0x10208620u), self, 0);
            t25 = g->edx;
            cow_call_regs(g, COW_IMG(0x102088b0u), t24, self, t25, 1, 0);
            t26 = g->edx;
            edx = t26;
        }
    }
    t29 = (edx & 0xffff0000u) | rd16(self + 4u);
    t30 = rd32(self + 0xcu);
    g->esi = self;
    g->eax = t30;
    g->edx = t29;
    g->esp = sp0 - 0x10u;
    t31 = cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, t30, t29, 1u);
    t32 = g->edx;
    if (rd16(self + 0x1eu) == 0u)
    {
        eax = t31;
        edx = t32;
        goto L_10208ca9;
    }
    eax = t31;
    edx = t32;
    if (rd32(self + 0x18u) == 0u) goto L_10208ca9;
    ebp = rd32(self + 0x18u);
    if ((int32_t)rd32(self + 8u) <= 0)
    {
        eax = 0u;
        goto L_10208ca9;
    }
    edi = rd32(self + 8u);
    eax = 0u;
    edx = rd32(arg1 + 0x38u);
L_10208c67: ;
    if (rd32(arg1 + 0x38u) == 0u) goto L_10208c7f;
    if ((int32_t)eax >= (int16_t)rd16(arg1 + 0x20u)) goto L_10208c7f;
    if (edx == 0u) goto L_10208c7f;
    ecx = rd32(edx + 0x48u);
L_10208c81: ;
    if (ecx == ebp) goto L_10208c98;
    if ((int32_t)(eax + 1u) < (int32_t)edi)
    {
        eax = eax + 1u;
        edx = edx + 0x54u;
        goto L_10208c67;
    }
    eax = eax + 1u;
    edx = edx + 0x54u;
    wr8(self + 0x20u, 0u);
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_10208b87: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x102085c0u), eax, self, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_10208ba4;
L_10208b90: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x102085f0u), eax, self, g->edx, 1, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_call_regs(g, COW_IMG(0x102085c0u), t8, self, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10 + t8 + 2u;
    ecx = t11;
    edx = t12;
    goto L_10208ba4;
L_10208c7f: ;
    ecx = 0u;
    goto L_10208c81;
L_10208c98: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_call_regs(g, COW_IMG(0x101f7080u), eax, arg1, g->edx, 0, 2, eax, 0u);
    t34 = g->edx;
    wr32(self + 0x18u, 0u);
    eax = t33;
    edx = t34;
L_10208ca9: ;
    wr8(self + 0x20u, 0u);
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10208b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10208b60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
