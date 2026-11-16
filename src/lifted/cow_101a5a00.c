/* f_0x101a5a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a5a00(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((uint8_t)arg1 == 0u)
    {
        eax = (rd32(self + 8u) & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffffff00u) | (uint8_t)arg1;
        edi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        wr32(sp0 - 0x14u, 0xffffffffu);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 0x89u);
        wr32(sp0 - 0x20u, 0x3eu);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0x89u, 1u, 0xffffffffu, in_edi, in_esi, rd32(sp0 - 8u));
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            edx = t3;
            if (rd8(self + 0x1cu) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x1cu);
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x18u, 6u);
                g->edx = rd32(self);
                t4 = rd32(self);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(t4 + 0x18u), self, 2, 6u, 0u);
                t5 = g->edx;
                edx = t5;
            }
            wr32(sp0 - 0x14u, 1u);
            wr32(sp0 - 0x18u, 5u);
            g->eax = rd32(self);
            g->edx = edx;
            t6 = rd32(self);
            g->esp = sp0 - 0x10u;
            t7 = cow_thiscall(g, rd32(t6 + 0x18u), self, 2, 5u, 1u);
            t8 = g->ecx;
            t9 = g->edx;
            eax = t7;
            ecx = t8;
            edx = t9;
        }
        wr32(sp0 - 0x14u, 0xffffffffu);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 0x8au);
        wr32(sp0 - 0x20u, 0x3eu);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t10 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8au, 1u, 0xffffffffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t11 = g->edx;
        if ((uint8_t)t10 == 0u)
        {
            eax = t10;
            edx = t11;
        }
        else
        {
            eax = t10;
            edx = t11;
            if (rd8(self + 0x1cu) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x1cu);
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x18u, 6u);
                g->edx = rd32(self);
                t12 = rd32(self);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(t12 + 0x18u), self, 2, 6u, 0u);
                t13 = g->edx;
                edx = t13;
            }
            wr32(sp0 - 0x14u, 2u);
            wr32(sp0 - 0x18u, 5u);
            g->eax = rd32(self);
            g->edx = edx;
            t14 = rd32(self);
            g->esp = sp0 - 0x10u;
            t15 = cow_thiscall(g, rd32(t14 + 0x18u), self, 2, 5u, 2u);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t17 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t18 = g->edx;
        if ((uint8_t)t17 == 0u)
        {
            eax = t17;
            edx = t18;
        }
        else
        {
            eax = t17;
            edx = t18;
            if ((int32_t)edi >= 4)
            {
                if ((int32_t)edi <= 9)
                {
                    wr32(sp0 - 8u, 0u);
                    wr32(sp0 - 4u, 0u);
                    if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                    {
                        eax = rd32(COW_IMG(0x104e1d4cu));
                        t19 = rd32(eax + 4u);
                        wr32(sp0 - 8u, t19);
                        t20 = rd32(eax + 8u);
                        wr32(sp0 - 4u, t20);
                        edx = t20;
                    }
                    if (rd32(rd32(COW_IMG(0x106627bcu)) + 8u) == 0u)
                    {
                        eax = rd32(COW_IMG(0x106627bcu));
                    }
                    else
                    {
                        ecx = rd32(rd32(COW_IMG(0x106627bcu)) + 8u);
                        wr32(sp0 - 0x14u, sp0 - 8u);
                        g->edx = sp0 - 8u;
                        g->esp = sp0 - 0x10u;
                        t21 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                        t22 = g->edx;
                        if ((uint8_t)t21 == 0u)
                        {
                            eax = t21;
                            edx = t22;
                        }
                        else
                        {
                            edx = t22;
                            wr32(sp0 - 0x14u, edi);
                            wr32(sp0 - 0x18u, 8u);
                            g->eax = rd32(self);
                            g->edx = edx;
                            t23 = rd32(self);
                            g->esp = sp0 - 0x10u;
                            t24 = cow_thiscall(g, rd32(t23 + 0x18u), self, 2, 8u, edi);
                            t25 = g->edx;
                            eax = t24;
                            edx = t25;
                        }
                    }
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a5a00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
