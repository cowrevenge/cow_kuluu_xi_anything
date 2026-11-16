/* f_0x1026dbaf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026dbaf(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, arg1 + 0xc044u);
    g->eax = arg1 + 0xc044u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026d199u), self, 1, arg1 + 0xc044u);
    t2 = g->ecx;
    t3 = g->edx;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026dbaf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026dbaf(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
