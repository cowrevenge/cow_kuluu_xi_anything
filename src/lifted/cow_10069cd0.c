/* f_0x10069cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10069cd0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x10068380u), sp0 - 8u, in_edx, 1, arg1);
    t2 = g->edx;
    wr32(sp0 - 0x10u, t1);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10069d00u), self, 1, t1);
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x100683d0u), sp0 - 8u, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10069cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10069cd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
