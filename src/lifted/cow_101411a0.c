/* f_0x101411a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101411a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    if (rd8(self + 0x3cu) != 0u)
    {
        if ((int32_t)rd32(self + 0x18u) >= 0)
        {
            if ((int32_t)rd32(COW_IMG(0x103701c4u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 4u) >= 0)
            {
                eax = rd32(COW_IMG(0x103701c4u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 4u);
                ecx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
                if ((int32_t)eax <= 7)
                {
                    if (rd16(COW_IMG(0x103701e8u) + eax * 0xcu) != 0x1du)
                    {
                        edx = eax * 3u;
                        esi = rd16(COW_IMG(0x103701e8u) + eax * 0xcu);
                    }
                    else
                    {
                        edx = eax * 3u;
                        esi = rd16(COW_IMG(0x103701e8u) + eax * 0xcu);
                        t1 = rd32(COW_IMG(0x1057876cu));
                        g->esp = sp0 - 8u;
                        t2 = cow_call_regs(g, COW_IMG(0x10158470u), eax, t1, edx, 1, 0);
                        t3 = g->ecx;
                        t4 = g->edx;
                        if ((uint8_t)t2 == 0u)
                        {
                            eax = t2;
                            ecx = t3;
                            edx = t4;
                        }
                        else
                        {
                            edx = t4;
                            g->edx = edx;
                            t5 = rd32(COW_IMG(0x1057876cu));
                            g->esp = sp0 - 8u;
                            t6 = cow_thiscall(g, COW_IMG(0x101598b0u), t5, 0);
                            t7 = g->ecx;
                            t8 = g->edx;
                            if (t6 == 0u)
                            {
                                eax = t6;
                                ecx = t7;
                                edx = t8;
                            }
                            else
                            {
                                eax = t6;
                                edx = t8;
                                if ((rd32(eax + 0x13cu) & 0x40u) != 0x40u)
                                {
                                    ecx = rd32(eax + 0x13cu) & 0x40u;
                                }
                                else
                                {
                                    ecx = rd32(eax + 0x13cu) & 0x40u;
                                    g->edx = edx;
                                    g->esp = sp0 - 8u;
                                    t9 = cow_thiscall_cdecl(g, COW_IMG(0x10133a40u), ecx, 1, eax);
                                    t10 = g->ecx;
                                    t11 = g->edx;
                                    t12 = (-((uint8_t)t9 != 0u) & 0xfffffcf7u) + 0x327u;
                                    eax = t12;
                                    ecx = t10;
                                    edx = t11;
                                    esi = t12;
                                }
                            }
                        }
                    }
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, esi);
                    t14 = g->edx;
                    g->esp = sp0 - 8u;
                    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t13, 0u);
                    wr8(self + 0x3cu, 0u);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101411a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101411a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
