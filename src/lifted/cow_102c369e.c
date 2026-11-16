/* f_0x102c369e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102c369e(Guest* g)
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebp);
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_102c36aa;
    }
    eax = rd32(sp0 + 4u);
    return eax;
L_102c36aa: ;
    t1 = rd32(eax + 0x244u);
    wr32(sp0 - 8u, t1);
    t2 = rd32(eax + 0x248u);
    wr32(sp0 - 0xcu, t2);
    wr32(sp0 - 0x10u, 2u);
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x102c4359u), g->eax, self, in_edx, 1, 3, 2u, t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 + 4u, t3);
    if (t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        wr32(sp0 - 8u, 0x120u);
        wr32(sp0 - 0xcu, sp0 + 4u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x102c3723u), g->eax, ecx, edx, 1, 2, sp0 + 4u, 0x120u);
    }
    g->ebp = rd32(sp0 - 4u);
    return rd32(sp0 + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c369e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c369e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
