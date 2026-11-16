/* f_0x101fcf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101fcf60(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x101cb7a0u), 2, 0u, arg2);
    if (t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        t2 = rd32(eax + 0x14u);
        t3 = rd32(eax + 0x10u);
        t4 = rd32(eax + 0xcu);
        t5 = rd32(eax + 8u);
        t6 = rd32(eax + 4u);
        g->edx = rd32(eax);
        t7 = rd32(eax);
        g->esp = sp0 - 0x24u;
        t8 = cow_cdecl(g, COW_IMG(0x101cb830u), 1, arg2);
        t9 = g->edx;
        g->esp = sp0 - 8u;
        t10 = cow_call_regs(g, COW_IMG(0x101fcec0u), arg1, self, t9, 0, 9, arg1, t8, t7, t6, t5, t4, t3, t2, arg2);
        eax = t10;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fcf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fcf60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
