/* f_0x1032746b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1032746b(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self, COW_IMG(0x1034b4c8u));
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(arg1);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10317480u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t3, t4, 1, 3, t2 + 1u, t1, in_edi);
    t6 = g->edx;
    wr32(self + 4u, t5);
    if (t5 != 0u)
    {
        eax = t5;
        ecx = t1;
        edx = t6;
        t7 = rd32(arg1);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10317500u), 3, eax, t7, in_edi);
    }
    wr32(self + 8u, 1u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032746b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1032746b(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
