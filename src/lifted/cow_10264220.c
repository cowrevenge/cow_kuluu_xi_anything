/* f_0x10264220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10264220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0xbcu);
    t2 = rd32(COW_IMG(0x10329104u));
    wr32(self, COW_IMG(0x10340868u));
    wr32(self + 0xcu, COW_IMG(0x10340820u));
    wr32(self + 0x10u, COW_IMG(0x10340808u));
    wr32(self + 0xa0u, COW_IMG(0x103407f8u));
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
        edi = t2;
    }
    else
    {
        eax = t1;
        edi = t2;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, edi, self, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0xc0u) != 0u)
    {
        eax = rd32(self + 0xc0u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, edi, ecx, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    g->eax = self + 0xa4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, rd32(COW_IMG(0x103292f4u)), ecx, 1, self + 0xa4u);
    t8 = g->edx;
    g->esp = sp0;
    g->edx = t8;
    cow_tailcall(g, COW_IMG(0x10262560u), t7, self, t8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10264220(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
