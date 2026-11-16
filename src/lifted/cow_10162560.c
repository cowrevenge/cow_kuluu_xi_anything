/* f_0x10162560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10162560(Guest* g)
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
    uint32_t t3;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd8(sp0 + 4u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(self + 0x34u) >= 0)
        {
            eax = rd32(self + 0x34u);
            ecx = (uint32_t)(int16_t)rd16(self + 0x54u);
            wr32(self + 0x34u, eax + ecx);
        }
        else
        {
            ecx = (uint32_t)(int16_t)rd16(self + 0x54u);
            wr32(self + 0x34u, ecx);
        }
        t1 = rd32(self + 0x3cu) + 0x14u;
        t2 = rd32(self + 0x34u);
        wr32(self + 0x3cu, t1);
        if ((int32_t)t2 > (int32_t)((uint32_t)(int16_t)rd16(self + 0x4eu) * ecx))
        {
            eax = (uint32_t)(int16_t)rd16(self + 0x4eu) * ecx;
            wr32(self + 0x34u, eax);
        }
        t3 = rd32(self + 0x34u);
        t4 = cow_divs(g, t3, ecx);
        t5 = cow_mods(g, t3, ecx);
        if (t5 == 0u)
        {
            edx = t5;
        }
        else
        {
            edx = t5;
            edi = t3;
            t6 = ecx + edi - edx;
            wr32(self + 0x34u, t6);
        }
    }
    t7 = rd32(self + 0x18u);
    wr32(sp0 + 4u, 0u);
    t8 = (edx & 0xffff0000u) | rd16(t7 + 0x14u);
    wr32(sp0 - 8u, t8);
    if ((int16_t)rd16(self + 0x4eu) <= 0)
    {
        ecx = t7;
        goto L_1016261f;
    }
    eax = 0u;
    edx = t8;
    edi = 0u;
L_101625cc: ;
    if ((int32_t)edi >= (int8_t)rd8(self + 0x30u))
    {
        ecx = (uint32_t)(int8_t)rd8(self + 0x30u);
        goto L_101625fb;
    }
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edx = sp0 + 4u;
    t9 = rd32(self + 0x18u);
    g->esp = sp0 - 0x18u;
    t10 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 8u, t9, g->edx, 0, 2, sp0 - 8u, sp0 + 4u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = t11;
        edx = t12;
        goto L_101625fb;
    }
    eax = rd32(sp0 + 4u);
    ecx = t11;
    edx = t12;
    if (eax == 0u) goto L_1016261f;
    if ((int32_t)(edi + 1u) < (int16_t)rd16(self + 0x4eu))
    {
        edi = edi + 1u;
        goto L_101625cc;
    }
    ecx = (uint32_t)(int16_t)rd16(self + 0x4eu);
L_101625fb: ;
    if (eax != 0u)
    {
        if ((int8_t)rd8(self + 0x30u) <= 0)
        {
            ecx = (ecx & 0xffffff00u) | rd8(self + 0x30u);
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | rd8(self + 0x30u);
            if (rd8(eax + 0x12u) == 1u)
            {
                if ((int8_t)rd8(self + 0x31u) >= (int16_t)rd16(self + 0x4eu))
                {
                    edx = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(self + 0x31u);
                    t13 = rd32(self + 0x20u);
                    g->esp = sp0 - 0x18u;
                    cow_fastcall(g, COW_IMG(0x10136560u), t13, edx, 0);
                    t14 = g->ecx;
                    ecx = t14;
                }
            }
        }
    }
L_1016261f: ;
    t15 = (ecx & 0xffff0000u) | rd16(rd32(self + 0x18u) + 0x14u);
    wr32(sp0 - 8u, t15);
    t16 = (in_ebx & 0xffff0000u) | (uint16_t)((uint16_t)(uint32_t)(int8_t)rd8(self + 0x31u) - rd16(rd32(self + 0x1cu) + 0x5cu));
    wr32(sp0 - 4u, t16);
    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x4eu) + 7u) <= 0)
    {
        edx = rd32(self + 0x1cu);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x4eu) + 7u;
        ebx = t16;
        loc_4 = t16;
        edi = 0u;
L_10162651: ;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edx = sp0 - 8u;
        t17 = rd32(self + 0x18u);
        g->esp = sp0 - 0x18u;
        t18 = cow_call_regs(g, COW_IMG(0x101292e0u), eax, t17, g->edx, 0, 2, sp0 - 8u, sp0 + 4u);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0u)
        {
            edx = t20;
            goto L_101626d6;
        }
        ecx = t19;
        edx = t20;
        if (rd32(sp0 + 4u) == 0u) goto L_101626d6;
        eax = rd32(sp0 + 4u);
        if ((int32_t)edi >= (int16_t)ebx)
        {
            ebp = (uint32_t)(int16_t)ebx;
            if ((int8_t)rd8(self + 0x30u) > 0)
            {
                if (rd8(eax + 0x12u) == 2u)
                {
                    if ((int8_t)rd8(self + 0x31u) >= (int32_t)((uint32_t)(int16_t)rd16(self + 0x4eu) - (uint32_t)(int16_t)rd16(rd32(self + 0x1cu) + 0x4eu)))
                    {
                        ecx = rd32(self + 0x1cu);
                        edx = (uint32_t)(int8_t)rd8(self + 0x31u);
                        t21 = rd32(eax + 0xcu);
                        wr32(sp0 - 0x1cu, t21);
                        g->esp = sp0 - 0x18u;
                        cow_thiscall(g, COW_IMG(0x101371e0u), ecx, 1, t21);
                        t22 = rd32(sp0 + 4u);
                        wr8(t22 + 0x12u, 0u);
                        if ((int32_t)ebp <= (int32_t)((uint32_t)(int16_t)rd16(self + 0x4eu) - 4u))
                        {
                            ecx = t22;
                        }
                        else
                        {
                            ecx = t22;
                            t23 = rd32(sp0 - 4u) - 1u;
                            wr32(sp0 - 4u, t23);
                            loc_4 = t23;
                        }
                        t24 = (ecx & 0xffff0000u) | rd16(rd32(self + 0x18u) + 0x14u);
                        wr32(sp0 - 8u, t24);
                        eax = rd32(self + 0x18u);
                        edi = 0xffffffffu;
                    }
                }
            }
        }
        if ((int32_t)(edi + 1u) < (int32_t)((uint32_t)(int16_t)rd16(self + 0x4eu) + 7u))
        {
            edi = edi + 1u;
            goto L_1016264d;
        }
        edx = (uint32_t)(int16_t)rd16(self + 0x4eu) + 7u;
    }
L_101626d6: ;
    g->edx = edx;
    return;
L_1016264d: ;
    ebx = loc_4;
    goto L_10162651;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10162560(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
