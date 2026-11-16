/* f_0x10231650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10231650(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_call_regs(g, COW_IMG(0x10231080u), in_eax, arg1, g->edx, 1, 0);
        t2 = g->edx;
        if ((int32_t)arg3 < 0)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            if ((int32_t)arg3 < (int32_t)rd32(arg1 + 0x44u))
            {
                if (arg3 * 8u + rd32(arg1 + 0x20u) == 0u)
                {
                    eax = arg3 * 8u + rd32(arg1 + 0x20u);
                }
                else
                {
                    eax = arg3 * 8u + rd32(arg1 + 0x20u);
                    if (rd16(eax) != 0u)
                    {
                        esi = (in_esi & 0xffff0000u) | rd16(eax);
                        g->eax = eax;
                        g->edx = edx;
                        t3 = rd32(COW_IMG(0x10621808u));
                        g->esp = sp0 - 0x10u;
                        t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t3, 1, (uint16_t)esi);
                        t5 = g->ecx;
                        t6 = g->edx;
                        if (t4 == 0u)
                        {
                            eax = t4;
                            edx = t6;
                        }
                        else
                        {
                            ecx = t5;
                            edx = t6;
                            ebx = t4;
                            if (rd32(arg1 + 0x40u) == 0u)
                            {
                                eax = rd32(arg1 + 0x40u);
                            }
                            else
                            {
                                t7 = (edx & 0xffffff00u) | rd32(arg1 + 0x30u) == arg3;
                                g->eax = rd32(arg1 + 0x30u);
                                g->ecx = ecx;
                                g->edx = t7;
                                t8 = rd32(arg1 + 0x30u);
                                g->esp = sp0 - 0x10u;
                                t9 = cow_cdecl(g, COW_IMG(0x10231250u), 6, ebx, arg2, esi, arg4, 1u, t7);
                                t10 = g->ecx;
                                t11 = g->edx;
                                if ((uint16_t)esi >= 0xf200u)
                                {
                                    eax = t9;
                                    edx = t11;
                                }
                                else
                                {
                                    eax = t9;
                                    ecx = t10;
                                    edx = t11;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x14u;
                                    t12 = cow_call_regs(g, COW_IMG(0x10231360u), eax, g->ecx, g->edx, 1, 3, ebx, esi, arg2);
                                    t13 = g->edx;
                                    eax = t12;
                                    edx = t13;
                                }
                            }
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
void cow_adapter_10231650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10231650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
