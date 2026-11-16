/* f_0x10060990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10060990(Guest* g)
{
    double d2;
    double d3;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    wr32(self + 0x40u, arg4);
    wr32(self, COW_IMG(0x1032bb80u));
    wr8(self + 0x48u, (uint8_t)arg5);
    wr32(self + 0x44u, arg2);
    wr32(self + 0x34u, arg3);
    wr32(self + 0x38u, arg3);
    if ((uint8_t)arg5 == 0u) goto L_100609d5;
    d2 = (double)rdf32(arg2 + 0x1a4u);
    wrf32(self + 0x3cu, (float)d2);
    return self;
L_100609d5: ;
    d3 = (double)rdf32(arg2 + 0x1a8u);
    wrf32(self + 0x3cu, (float)d3);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10060990(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
