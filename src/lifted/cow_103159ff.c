/* f_0x103159ff - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_103159ff(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1034a1f8u));
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 1, 0x1bu);
    t2 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        eax = t1;
        ecx = 0x1bu;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        esi = rd32(self + 4u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, 0x1bu, edx, 1, 1, esi);
        t4 = g->edx;
        eax = t3;
        ecx = esi;
        edx = t4;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 1, 0x1bu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103159ff(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103159ff(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
