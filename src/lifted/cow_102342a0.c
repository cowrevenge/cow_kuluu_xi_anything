/* f_0x102342a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102342a0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10668ed4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ed4u));
        t1 = (in_eax & 0xffffff00u) | rd8(self + 0x64u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x10233fd0u), t1, ecx, g->edx, 0, 1, t1);
        t3 = g->edx;
        cow_thiscall(g, COW_IMG(0x10234540u), self, 1, t2);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102342a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102342a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
