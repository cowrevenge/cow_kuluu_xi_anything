/* f_0x10060450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10060450(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self, COW_IMG(0x1032b8e8u));
    if (rd32(COW_IMG(0x1047bf20u)) == self)
    {
        wr32(COW_IMG(0x1047bf20u), 0u);
    }
    t1 = rd32(self + 0x3cu);
    wr32(rd32(COW_IMG(0x104568fcu)) + 0x32cu, t1);
    t2 = rd32(COW_IMG(0x104568fcu));
    d3 = (double)rdf32(self + 0x4cu);
    wrf32(t2 + 0x330u, (float)d3);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x100747c0u), self, t2, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
        t7 = g->edx;
        edx = t7;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10060450(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
