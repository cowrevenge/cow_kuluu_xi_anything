/* f_0x1025b340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025b340(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x14u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        wr32(eax + 4u, 0u);
        wr32(eax + 0xcu, 0u);
        wr32(eax + 8u, 6u);
        wr32(eax + 0x10u, arg1);
        wr32(eax, COW_IMG(0x1033cef4u));
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1025a880u), self, 1, eax);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self, 1u);
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1025aab0u), t3, 0);
    t5 = g->edx;
    g->edx = t5;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025b340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025b340(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
