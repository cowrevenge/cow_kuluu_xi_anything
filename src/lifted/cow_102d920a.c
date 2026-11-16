/* f_0x102d920a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102d920a(Guest* g)
{
    double d1;
    double d4;
    double d7;
    double d8;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, self);
    d1 = (double)(float)(double)rdf32(sp0 + 0x18u);
    wrf32(sp0 - 0x28u, (float)d1);
    wr32(sp0 - 0x2cu, arg5);
    wr32(sp0 - 0x30u, arg2);
    wr32(sp0 - 0x34u, sp0 - 0x24u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, COW_IMG(0x102d90f1u), 4, sp0 - 0x24u, arg2, arg5, cow_f2bits(d1));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x28u, t2);
    d4 = (double)(float)(double)rdf32(sp0 + 0x18u);
    wrf32(sp0 - 0x28u, (float)d4);
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    g->ecx = t2;
    g->edx = t3;
    cow_stdcall(g, COW_IMG(0x102d90f1u), 4, sp0 - 0x14u, arg3, arg4, cow_f2bits(d4));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x28u, t5);
    d7 = fr(g, fr(g, 1.0 - (double)rdf32(sp0 + 0x18u)) * (double)rdf32(sp0 + 0x18u));
    d8 = (double)(float)fr(g, d7 + d7);
    wrf32(sp0 - 0x28u, (float)d8);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    wr32(sp0 - 0x30u, sp0 - 0x24u);
    wr32(sp0 - 0x34u, arg1);
    g->edx = t6;
    cow_stdcall(g, COW_IMG(0x102d90f1u), 4, arg1, sp0 - 0x24u, sp0 - 0x14u, cow_f2bits(d8));
    t9 = g->edx;
    g->edx = t9;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d920a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d920a(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
