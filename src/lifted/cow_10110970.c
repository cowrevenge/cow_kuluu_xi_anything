/* f_0x10110970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10110970(Guest* g)
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg3 < 5u)
    {
        edx = in_edx;
    }
    else
    {
        g->ebx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf9cu));
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 != 0u)
        {
            edx = t3;
        }
        else
        {
            ecx = t2;
            edx = t3;
            if (rd32(arg2 + 0xcu) == 0u)
            {
                esi = rd32(self + 4u);
                goto L_101109ae;
            }
            eax = rd32(arg2 + 0xcu);
            esi = rd32(self + 4u);
            if (rd32(eax + 4u) == 0u)
            {
                ecx = rd32(eax + 4u);
                goto L_101109ae;
            }
            ecx = rd32(eax + 4u);
            eax = ecx;
L_101109b3: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
            t5 = g->ecx;
            t6 = g->edx;
            if (esi != t4)
            {
                edx = t6;
            }
            else
            {
                ecx = t5;
                edx = t6;
                if (rd32(arg2 + 0x14u) == 0u) goto L_101109d6;
                eax = rd32(arg2 + 0x14u);
                if (rd32(eax + 4u) == 0u)
                {
                    ecx = rd32(eax + 4u);
                    goto L_101109d6;
                }
                ecx = rd32(eax + 4u);
                eax = ecx;
L_101109db: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t7 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
                t8 = g->ecx;
                t9 = g->edx;
                if (t7 == 0u)
                {
                    edx = t9;
                }
                else
                {
                    eax = t7;
                    ecx = t8;
                    edx = t9;
                    esi = t7;
                    g->eax = eax;
                    g->esp = sp0 - 0xcu;
                    t10 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, edx, 1, 1, 0x18u);
                    t11 = g->edx;
                    if (t10 == 0u)
                    {
                        edx = t11;
                    }
                    else
                    {
                        eax = t10;
                        t12 = rd32(self + 4u);
                        g->edx = t12;
                        g->esp = sp0 - 0xcu;
                        t13 = cow_thiscall(g, COW_IMG(0x10110bc0u), eax, 3, esi, t12, arg2 + 0x20u);
                        t14 = g->edx;
                        if (t13 == 0u)
                        {
                            edx = t14;
                        }
                        else
                        {
                            edx = t14;
                            esi = t13;
                            g->ebx = self;
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            t15 = cow_thiscall(g, COW_IMG(0x10109570u), arg2 + 0x18u, 1, COW_IMG(0x1036bf94u));
                            t16 = g->ecx;
                            t17 = g->edx;
                            wr8(esi + 0x14u, t15 != 0u);
                            t18 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, (t17 & 0xffffff00u) | t15 != 0u, 1, 1, 0xcu);
                            if (t18 == 0u)
                            {
                                eax = 0u;
                            }
                            else
                            {
                                eax = t18;
                                wr32(eax, esi);
                                wr32(eax + 8u, 0u);
                                wr32(eax + 4u, 0u);
                            }
                            t19 = rd32(self + 0x48u);
                            wr32(eax + 8u, self + 0x44u);
                            wr32(eax + 4u, t19);
                            if (t19 == 0u)
                            {
                                edx = t19;
                            }
                            else
                            {
                                ecx = t19;
                                edx = t19;
                                wr32(ecx + 8u, eax);
                            }
                            if (rd32(eax + 8u) != 0u)
                            {
                                ecx = rd32(eax + 8u);
                                wr32(ecx + 4u, eax);
                            }
                            wr16(self + 0x36u, (uint16_t)(rd16(self + 0x36u) + 1u));
                        }
                    }
                }
            }
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return 0u;
L_101109ae: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_101109b3;
L_101109d6: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_101109db;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10110970(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
