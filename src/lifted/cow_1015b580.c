/* f_0x1015b580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_1015b580(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1015b190u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        if (rd32(self + 0x150cu) != 0u)
        {
            ecx = rd32(self + 0x150cu);
            d11 = (double)rdf32(sp0 + 0xcu);
            wr32(sp0 - 0x18u, arg6);
            wr32(sp0 - 0x1cu, arg4);
            if (d11 != (double)rdf32(COW_IMG(0x1032961cu)))
            {
                wr32(sp0 - 0x20u, arg3);
                wr32(sp0 - 0x24u, (uint32_t)(int16_t)arg2);
                wr32(sp0 - 0x28u, (uint32_t)(int16_t)arg1);
                g->eax = (uint32_t)(int16_t)arg2;
                g->edx = (uint32_t)(int16_t)arg1;
                g->esp = sp0 - 0x14u;
                t14 = cow_thiscall(g, COW_IMG(0x10026ad0u), ecx, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, arg3, arg4, arg6);
                t15 = g->edx;
                eax = t14;
                edx = t15;
            }
            else
            {
                wr32(sp0 - 0x20u, (uint32_t)(int16_t)arg2);
                wr32(sp0 - 0x24u, (uint32_t)(int16_t)arg1);
                g->ebx = arg2;
                g->eax = (uint32_t)(int16_t)arg1;
                g->esp = sp0 - 0x14u;
                t12 = cow_fastcall(g, COW_IMG(0x10026990u), ecx, (uint32_t)(int16_t)arg2, 4, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, arg4, arg6);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
        else
        {
            if (rd32(self + 0x14ecu) == 0u)
            {
                eax = rd32(self + 0x14ecu);
            }
            else
            {
                eax = rd32(self + 0x14ecu);
                if (rd32(self + 0x14b8u) != 0u)
                {
                    ecx = rd32(self + 0x14b8u);
                    if (rd32(eax) != 0u)
                    {
                        wr32(sp0 - 0x18u, 0x7cu);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t3 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x7cu);
                        t4 = g->edx;
                        if (t3 == 0u)
                        {
                            edx = t4;
                            wr32(self + 0x150cu, 0u);
                            eax = 0u;
                        }
                        else
                        {
                            eax = t3;
                            t5 = rd32(rd32(self + 0x14ecu));
                            wr32(sp0 - 0x18u, t5);
                            t6 = rd32(self + 0x14e8u);
                            wr32(sp0 - 0x1cu, t6);
                            t7 = rd32(rd32(self + 0x14b8u));
                            wr32(sp0 - 0x20u, t7);
                            g->edx = rd32(self + 0x14b8u);
                            t8 = rd32(self + 0x14b8u);
                            g->esp = sp0 - 0x14u;
                            t9 = cow_thiscall(g, COW_IMG(0x10026890u), eax, 3, t7, t6, t5);
                            t10 = g->edx;
                            wr32(self + 0x150cu, t9);
                            eax = t9;
                            edx = t10;
                        }
                    }
                }
            }
        }
        if ((int32_t)arg5 > 0)
        {
            if (rd32(self + 0x14b8u) == 0u)
            {
                eax = rd32(self + 0x14b8u);
            }
            else
            {
                eax = rd32(self + 0x14b8u);
                if (rd32(eax) != 0xffffu)
                {
                    if (rd32(self + 0x14c0u) != 0u)
                    {
                        esi = rd32(self + 0x14c0u);
                        if (1u >= rd16(esi))
                        {
                            eax = 1u < rd16(esi);
                        }
                        else
                        {
                            if ((int32_t)arg5 <= 99)
                            {
                                ecx = arg5;
                            }
                            else
                            {
                                ecx = 0x63u;
                            }
                            wr32(sp0 - 0x18u, ecx);
                            wr32(sp0 - 0x1cu, COW_IMG(0x1036f9fcu));
                            wr32(sp0 - 0x20u, sp0 - 8u);
                            g->ecx = sp0 - 8u;
                            g->esp = sp0 - 0xcu;
                            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x1036f9fcu), ecx, in_edi, in_esi);
                            t16 = g->ecx;
                            wr32(sp0 - 0x24u, 0x3f800000u);
                            wr32(sp0 - 0x28u, 0x3f800000u);
                            wr32(sp0 - 0x2cu, 1u);
                            wr32(sp0 - 0x30u, 0x80808080u);
                            wr32(sp0 - 0x34u, sp0 - 8u);
                            wr32(sp0 - 0x38u, arg2 + 0x16u);
                            wr32(sp0 - 0x3cu, arg1 + 0x1eu);
                            g->esp = sp0 - 0x20u;
                            t17 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t16, 7, arg1 + 0x1eu, arg2 + 0x16u, sp0 - 8u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                            eax = t17;
                        }
                    }
                }
            }
        }
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b580(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
