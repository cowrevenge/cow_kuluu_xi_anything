/* f_0x101df130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101df130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10101cb0u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    t4 = cow_call_regs(g, COW_IMG(0x100991d0u), (uint8_t)t1, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    if (t4 == 0u)
    {
        esi = (uint8_t)t1;
    }
    else
    {
        eax = t4;
        ecx = t5;
        esi = (uint8_t)t1;
        esi = esi + (rd16(eax + 2u) >> 7u & 0x3fu);
    }
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101df130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
