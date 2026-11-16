/* f_0x102b3c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b3c70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x14u) != rd32(arg1 + 0x18u))
    {
        ecx = rd32(arg1 + 0x18u);
    }
    else
    {
        eax = rd32(arg1 + 0x14u);
        t1 = eax + rd32(arg1 + 0x1cu);
        g->ecx = t1;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102b3b20u), 2, arg1, t1);
        t2 = g->ecx;
        ecx = t2;
    }
    t3 = rd32(arg1 + 0x14u);
    g->edx = arg2;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102b3c30u), 3, arg1, t3, arg2);
    t4 = g->edx;
    t5 = rd32(arg1 + 0x14u) + 1u;
    wr32(arg1 + 0x14u, t5);
    g->edx = t4;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
