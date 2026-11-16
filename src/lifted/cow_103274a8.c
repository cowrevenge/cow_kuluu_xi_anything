/* f_0x103274a8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103274a8(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self, COW_IMG(0x1034b4c8u));
    t1 = rd32(arg1 + 8u);
    t2 = rd32(arg1 + 8u);
    wr32(self + 8u, t1);
    if (t2 == 0u)
    {
        t10 = rd32(arg1 + 4u);
        wr32(self + 4u, t10);
    }
    else
    {
        eax = t1;
        t3 = rd32(arg1 + 4u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t3);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t4 + 1u, t3, in_edi);
        t8 = g->edx;
        wr32(self + 4u, t7);
        if (t7 != 0u)
        {
            eax = t7;
            ecx = t3;
            edx = t8;
            t9 = rd32(arg1 + 4u);
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10317500u), 3, eax, t9, in_edi);
        }
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103274a8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103274a8(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
