/* f_0x10259210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10259210(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x18u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        eax = 0u;
    }
    else
    {
        eax = t1;
        wr32(eax + 4u, 0u);
        wr32(eax + 0x10u, 0u);
        wr32(eax + 8u, 3u);
        wr32(eax + 0xcu, arg1);
        wr32(eax + 0x14u, arg2);
        wr32(eax, COW_IMG(0x1033ceb0u));
        edx = arg1;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10259120u), self, 1, eax);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(self, 1u);
    cow_thiscall(g, COW_IMG(0x10259150u), t4, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10259210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10259210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
