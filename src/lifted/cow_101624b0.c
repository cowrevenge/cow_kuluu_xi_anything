/* f_0x101624b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101624b0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x34u) - (uint32_t)(int16_t)rd16(self + 0x54u);
    t2 = rd16(self + 0x54u);
    wr32(self + 0x34u, t1);
    if ((int32_t)t1 >= (int32_t)((uint32_t)(int16_t)rd16(self + 0x50u) * (uint32_t)(int16_t)t2))
    {
        edi = (uint32_t)(int16_t)t2;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x50u) * (uint32_t)(int16_t)t2;
        edi = (uint32_t)(int16_t)t2;
        wr32(self + 0x34u, eax);
    }
    t3 = rd32(self + 0x34u);
    t4 = cow_divs(g, t3, edi);
    t5 = cow_mods(g, t3, edi);
    if (t5 != 0u)
    {
        edx = t5;
        esi = t3;
        t6 = edi + esi - edx;
        wr32(self + 0x34u, t6);
    }
    t7 = rd32(self + 0x3cu) - 0x14u;
    t8 = rd32(self + 0x3cu);
    wr32(self + 0x3cu, t7);
    if ((int32_t)(t8 - 0x14u) >= 0)
    {
        eax = t7;
    }
    else
    {
        eax = t7;
        wr32(self + 0x3cu, 0u);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101624b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101624b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
