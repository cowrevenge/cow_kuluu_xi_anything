/* f_0x100b0570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b0570(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = (in_eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x256u) + 3u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 1u);
    t3 = g->edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100b0510u), t2, self, t3, 0, 2, t2, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b0570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b0570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
