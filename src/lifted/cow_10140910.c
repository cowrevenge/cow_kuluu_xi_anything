/* f_0x10140910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10140910(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101c9440u), arg4, g->ecx, g->edx, 1, 5, arg1, arg4, 1u, 0x80808080u, 1u);
    t2 = g->ecx;
    g->eax = arg2;
    g->esp = sp0;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t2, 7, arg2, arg3, t1, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10140910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10140910(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
