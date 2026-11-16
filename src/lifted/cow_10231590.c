/* f_0x10231590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10231590(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
        t1 = rd32(arg1 + 0x30u);
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_call_regs(g, COW_IMG(0x10230bd0u), in_eax, arg1, g->edx, 0, 1, t1);
        t3 = g->edx;
        if ((int32_t)arg3 < 0)
        {
            eax = t2;
            edx = t3;
        }
        else
        {
            eax = t2;
            edx = t3;
            ebp = t1;
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
                        esi = (arg1 & 0xffff0000u) | rd16(eax);
                        g->edx = edx;
                        t4 = rd32(COW_IMG(0x10621808u));
                        g->esp = sp0 - 0x10u;
                        t5 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t4, 1, (uint16_t)esi);
                        t6 = g->ecx;
                        t7 = g->edx;
                        if (t5 == 0u)
                        {
                            eax = t5;
                            edx = t7;
                        }
                        else
                        {
                            eax = t5;
                            ecx = t6;
                            edx = t7;
                            edi = t5;
                            t8 = (edx & 0xffffff00u) | ebp == arg3;
                            g->eax = eax;
                            g->ecx = ecx;
                            g->edx = t8;
                            g->esp = sp0 - 0x10u;
                            t9 = cow_cdecl(g, COW_IMG(0x10231250u), 6, edi, arg2, esi, arg4, 0u, t8);
                            t10 = g->ecx;
                            t11 = g->edx;
                            g->edx = t11;
                            g->esp = sp0 - 0x2cu;
                            t12 = cow_call_regs(g, COW_IMG(0x10231360u), t9, g->ecx, g->edx, 1, 3, edi, esi, arg2);
                            t13 = g->edx;
                            eax = t12;
                            edx = t13;
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
void cow_adapter_10231590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10231590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
