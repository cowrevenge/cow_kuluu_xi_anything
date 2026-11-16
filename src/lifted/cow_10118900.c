/* f_0x10118900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10118900(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, arg2);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        if (rd16(eax + 0x3au) != rd16(self + 0x4cu))
        {
            ecx = (uint32_t)(int16_t)rd16(eax + 0x2au);
            edx = (uint32_t)(int16_t)rd16(eax + 0x2cu);
            edi = (in_edi & 0xffff0000u) | rd16(eax + 0x3au);
        }
        else
        {
            ecx = (uint32_t)(int16_t)rd16(eax + 0x2au);
            edx = (uint32_t)(int16_t)rd16(eax + 0x2cu);
            edi = (in_edi & 0xffff0000u) | rd16(eax + 0x3au);
            if (rd8(self + 0x63u) != 0u)
            {
                ebx = (in_ebx & 0xffffff00u) | rd8(self + 0x63u);
                if ((uint8_t)arg3 != 0u)
                {
                    ebx = (ebx & 0xffffff00u) | (uint8_t)arg3;
                    if (rd32(eax + 0x10u) == 5u)
                    {
                        ecx = ecx + 1u;
                        edx = edx + 1u;
                    }
                    else
                    {
                        if ((uint8_t)arg4 == 0u)
                        {
                            ecx = ecx - 1u;
                            edx = edx - 1u;
                        }
                        else
                        {
                            ecx = ecx - 1u;
                            edx = edx - 1u;
                            if ((int16_t)rd16(self + 0x5eu) > 0)
                            {
                                ecx = ecx + 2u;
                                edx = edx + 2u;
                            }
                        }
                    }
                }
            }
        }
        wr16(arg1, (uint16_t)ecx);
        wr16(arg1 + 2u, (uint16_t)edx);
        wr16(arg1 + 4u, (uint16_t)((uint16_t)ecx + rd16(eax + 0x2eu)));
        wr16(arg1 + 6u, (uint16_t)((uint16_t)edx + rd16(eax + 0x30u)));
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118900(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
