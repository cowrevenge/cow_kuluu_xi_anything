/* f_0x1021bb90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1021bb90(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106646a0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106646a0u));
        ecx = self;
        edx = in_edx;
        goto L_1021bbc5;
    }
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x37cu);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1021bbbb;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x102175c0u), eax, 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(COW_IMG(0x106646a0u), t4);
    g->edx = t6;
    return cow_tailcall(g, COW_IMG(0x102174f0u), t4, t5, t6);
L_1021bbbb: ;
    wr32(COW_IMG(0x106646a0u), 0u);
L_1021bbc5: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x102174f0u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bb90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021bb90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
