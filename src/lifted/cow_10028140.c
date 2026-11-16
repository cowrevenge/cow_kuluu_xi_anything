/* f_0x10028140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10028140(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x10u, arg1);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, arg1);
    t3 = cow_thiscall(g, COW_IMG(0x10028170u), self, 2, arg1, sp0 - 0x10u);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10028140(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
