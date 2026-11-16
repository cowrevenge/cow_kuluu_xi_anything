/* f_0x1031b137 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031b137(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    const double xin0 = ST(0);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_eax);
    wrf64(sp0 - 0xcu, xin0);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x28u, sp0 + 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x24u);
    wr32(sp0 - 0x30u, in_edx);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_cdecl(g, COW_IMG(0x10324571u), 5, in_edx, sp0 - 0x24u, sp0 + 4u, in_eax, self);
    t2 = g->edx;
    if ((uint16_t)arg1 == 0x27fu)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->fcw = (uint16_t)arg1;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b137(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b137(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
