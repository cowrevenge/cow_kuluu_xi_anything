/* f_0x102c3723 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c3723(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    if (arg2 >= 0x120u)
    {
        eax = rd32(arg1);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x102c43b8u), g->eax, self, in_edx, 1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_call_regs(g, COW_IMG(0x102c4348u), g->eax, t2, t3, 1, 1, 2u);
        t5 = g->edx;
        wr32(arg1, t4);
        ecx = eax;
        eax = t4;
        edx = t5;
    }
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3, eax, 0u, 0x120u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3723(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c3723(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
