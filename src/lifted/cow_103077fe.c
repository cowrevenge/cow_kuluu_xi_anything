/* f_0x103077fe - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_103077fe(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(arg1 + 0x1a4u) + 0x10u);
    t2 = rd32(arg1 + 0x1a4u);
    wr32(arg1 + 0x74u, t1);
    t3 = rd32(t2 + 0x14u);
    g->edi = arg1;
    g->eax = t1;
    t4 = cow_call_regs(g, COW_IMG(0x10307060u), g->eax, self, in_edx, 1, 3, t3, in_edi, in_esi);
    t5 = g->edx;
    wr8(t2 + 0x1cu, 1u);
    g->edi = in_edi;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103077fe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103077fe(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
