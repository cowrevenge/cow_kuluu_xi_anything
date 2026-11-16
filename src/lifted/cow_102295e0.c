/* f_0x102295e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102295e0(Guest* g)
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

    t1 = rd32(self + 0x78u);
    wr32(self, COW_IMG(0x1033c418u));
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->eax = eax - 4u;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax - 4u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    wr32(self + 0x78u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1018d250u), self + 0x64u, 0);
    t5 = g->edx;
    g->esp = sp0;
    g->edx = t5;
    cow_tailcall(g, COW_IMG(0x102218c0u), t4, self, t5);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102295e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102295e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
