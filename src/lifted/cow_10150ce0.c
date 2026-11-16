/* f_0x10150ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10150ce0(Guest* g)
{
    uint32_t edx;
    uint32_t loc_d8;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 224u);

    wr32(sp0 - 0xd0u, in_esi);
    if (arg1 == 0u)
    {
        wr32(sp0 - 0xd4u, arg2);
        wr32(sp0 - 0xd8u, 0u);
        edx = in_edx;
        loc_d8 = 0u;
    }
    else
    {
        wr32(sp0 - 0xd4u, arg1);
        wr32(sp0 - 0xd8u, 0xc9u);
        wr32(sp0 - 0xdcu, sp0 - 0xccu);
        g->esp = sp0 - 0xc8u;
        cow_call_regs(g, COW_IMG(0x1025c110u), g->eax, self, in_edx, 1, 5, sp0 - 0xccu, 0xc9u, arg1, in_esi, rd32(sp0 - 0xccu));
        wr32(sp0 - 0xd4u, arg2);
        wr32(sp0 - 0xd8u, sp0 - 0xccu);
        edx = sp0 - 0xccu;
        loc_d8 = sp0 - 0xccu;
    }
    g->edx = edx;
    g->esp = sp0 - 0xd0u;
    t1 = cow_thiscall(g, COW_IMG(0x10221030u), self + 0xa4u, 2, loc_d8, arg2);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150ce0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
