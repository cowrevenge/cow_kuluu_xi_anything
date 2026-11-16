/* f_0x10230bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10230bd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0x8eu) == 0u)
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x10087160u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            ecx = t2;
            edx = t3;
            if (rd32(self + 0x64u) == 0u)
            {
                eax = COW_IMG(0x104804e0u);
                esi = 0u;
L_10230c01: ;
                if ((rd32(eax) & 0xfffu) != 0u)
                {
                    esi = esi + 1u;
                }
                if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10480588u))
                {
                    eax = eax + 4u;
                    goto L_10230c01;
                }
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t4 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
                t5 = g->ecx;
                t6 = g->edx;
                if ((uint16_t)t4 == 0u)
                {
                    ecx = t5;
                    edx = t6;
                }
                else
                {
                    ecx = t5;
                    edx = t6;
                    esi = esi + 1u;
                }
                g->edx = edx;
                g->esp = sp0 - 8u;
                t7 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
                t8 = g->edx;
                if ((uint16_t)t7 == 0u)
                {
                    eax = t7;
                    edx = t8;
                }
                else
                {
                    eax = t7;
                    edx = t8;
                    esi = esi + 1u;
                }
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t9 = cow_stdcall(g, COW_IMG(0x10221900u), 4, 0u, esi, 0u, 8u);
                t10 = g->edx;
                g->edx = t10;
                cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, esi, 0u);
                t11 = g->ecx;
                t12 = g->edx;
                g->ecx = t11;
                g->edx = t12;
                t13 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
                t14 = g->ecx;
                t15 = g->edx;
                if ((uint16_t)t13 == 0u)
                {
                    ecx = t14;
                    edx = t15;
                    esi = 0u;
                }
                else
                {
                    ecx = t14;
                    edx = t15;
                    if ((int32_t)rd32(self + 0x44u) <= 0)
                    {
                        esi = 0u;
                    }
                    else
                    {
                        if (rd32(self + 0x20u) == 0u)
                        {
                            esi = 0u;
                        }
                        else
                        {
                            ebx = rd32(self + 0x20u);
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            t16 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
                            t17 = g->ecx;
                            t18 = g->edx;
                            t19 = (uint16_t)t16 + 0xe000u;
                            wr32(ebx, t19);
                            ecx = t17;
                            edx = t18;
                            esi = 1u;
                        }
                    }
                }
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t20 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
                t21 = g->ecx;
                t22 = g->edx;
                if ((uint16_t)t20 == 0u)
                {
                    eax = t20;
                }
                else
                {
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                    if ((int32_t)esi >= 0)
                    {
                        if ((int32_t)esi < (int32_t)rd32(self + 0x44u))
                        {
                            if (esi * 8u + rd32(self + 0x20u) == 0u)
                            {
                                eax = rd32(self + 0x20u);
                            }
                            else
                            {
                                ebx = esi * 8u + rd32(self + 0x20u);
                                g->esp = sp0 - 0xcu;
                                t23 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
                                t24 = (uint16_t)t23 + 0xe000u;
                                wr32(ebx, t24);
                                eax = t24;
                                esi = esi + 1u;
                            }
                        }
                    }
                }
                edx = COW_IMG(0x104804e0u);
L_10230ca8: ;
                if ((rd32(edx) & 0xfffu) != 0u)
                {
                    ecx = rd32(edx) & 0xfffu;
                    if ((int32_t)esi >= 0)
                    {
                        if ((int32_t)esi < (int32_t)rd32(self + 0x44u))
                        {
                            if (esi * 8u + rd32(self + 0x20u) == 0u)
                            {
                                eax = esi * 8u + rd32(self + 0x20u);
                            }
                            else
                            {
                                eax = esi * 8u + rd32(self + 0x20u);
                                wr32(eax, ecx + 0xe000u);
                                esi = esi + 1u;
                            }
                        }
                    }
                }
                if ((int32_t)(edx + 4u) < (int32_t)COW_IMG(0x10480558u))
                {
                    edx = edx + 4u;
                    goto L_10230ca8;
                }
                edx = edx + 4u;
                wr8(self + 0x8eu, 1u);
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, arg1);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10230bd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
