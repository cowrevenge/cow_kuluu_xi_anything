/* f_0x100751b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100751b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == rd32(self + 0xd4cu))
    {
        t1 = rd32(arg1 + 8u);
        wr32(self + 0xd4cu, t1);
    }
    if (rd32(arg1 + 8u) != 0u)
    {
        edx = rd32(arg1 + 8u);
        t2 = rd32(arg1 + 0xcu);
        wr32(edx + 0xcu, t2);
    }
    if (rd32(arg1 + 0xcu) != 0u)
    {
        edx = rd32(arg1 + 0xcu);
        t3 = rd32(arg1 + 8u);
        wr32(edx + 8u, t3);
    }
    if (rd32(self + 0xd50u) != arg1)
    {
        edx = rd32(self + 0xd50u);
    }
    else
    {
        t4 = rd32(arg1 + 0xcu);
        wr32(self + 0xd50u, t4);
        edx = t4;
    }
    if (rd32(self + 0xd54u) == arg1)
    {
        t5 = rd32(arg1 + 8u);
        wr32(self + 0xd54u, t5);
        edx = t5;
    }
    if (rd32(self + 0xd5cu) != arg1)
    {
        eax = arg1;
    }
    else
    {
        t6 = rd32(arg1 + 0xcu);
        wr32(self + 0xd5cu, t6);
        eax = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100751b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100751b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
