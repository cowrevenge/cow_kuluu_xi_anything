/* f_0x1013e7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013e7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        wr16(self + 0x1cu, (uint16_t)arg2);
    }
    else
    {
        if ((uint32_t)(int16_t)arg1 == 6u)
        {
            wr16(self + 0x1cu, 0xeu);
        }
    }
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x20u);
        if (rd16(self + 0x1cu) == 0xdu)
        {
            edx = in_edx;
        }
        else
        {
            ecx = (self & 0xffff0000u) | rd16(self + 0x1cu);
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0;
            t1 = cow_thiscall_cdecl(g, eax, ecx, 1, ecx);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013e7a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
