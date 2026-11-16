/* f_0x10060da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=11 */
uint32_t cow_fn_10060da0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t3 = g->edx;
    wr32(self, COW_IMG(0x1032bc10u));
    wrf32(self + 0x74u, (float)(double)(int32_t)arg4);
    wr32(self + 0x34u, COW_IMG(0x1032bbf4u));
    t4 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg2);
    t5 = cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, arg3);
    t6 = g->ecx;
    wr16(self + 0x78u, (uint16_t)arg5);
    wr16(self + 0x7au, (uint16_t)arg6);
    wr32(self + 0x80u, arg8);
    wr32(self + 0x7cu, arg7);
    wr32(self + 0x8cu, arg11);
    wr32(self + 0x84u, arg9);
    wr32(self + 0x88u, arg10);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10060da0(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
