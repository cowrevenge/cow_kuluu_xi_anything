/* f_0x1026dead - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1026dead(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x1099aeb0u)));
    g->eax = arg1;
    g->ecx = rd32(COW_IMG(0x1099aeb0u));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x1099aeb0u));
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x1026db61u), 3, t1, arg1, in_ebp);
    t3 = g->ecx;
    t4 = g->edx;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026dead(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026dead(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
