/* f_0x10032fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10032fa0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x44u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10032fe0u), self, 1, sp0 - 0x40u);
    t3 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x40u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10027d10u), arg1, 1, sp0 - 0x40u);
    t5 = g->edx;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10032fa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
