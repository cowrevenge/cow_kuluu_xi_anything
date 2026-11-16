/* f_0x10032c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10032c20(Guest* g)
{
    double d2;
    double d3;
    double d7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x20u, 0);
    t1 = g->edx;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x30u, 0);
    wr32(sp0 - 0x30u, rd32(self));
    d2 = (double)(float)-(double)rdf32(arg2);
    wrf32(sp0 - 0x20u, (float)d2);
    d3 = (double)(float)-(double)rdf32(arg2 + 4u);
    wrf32(sp0 - 0x1cu, (float)d3);
    t4 = rd32(arg2 + 0xcu);
    wr32(sp0 - 0x14u, t4);
    t5 = rd32(self + 4u);
    wr32(sp0 - 0x2cu, t5);
    t6 = rd32(self + 8u);
    wr32(sp0 - 0x28u, t6);
    d7 = (double)(float)-(double)rdf32(arg2 + 8u);
    wrf32(sp0 - 0x18u, (float)d7);
    t8 = rd32(self + 0xcu);
    wr32(sp0 - 0x24u, t8);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10032b50u), sp0 - 0x30u, 2, sp0 - 0x10u, sp0 - 0x20u);
    wr32(sp0 - 0x30u, rd32(t9));
    t10 = rd32(t9 + 4u);
    wr32(sp0 - 0x2cu, t10);
    t11 = rd32(t9 + 8u);
    wr32(sp0 - 0x28u, t11);
    t12 = rd32(t9 + 0xcu);
    wr32(arg1, rd32(t9));
    wr32(arg1 + 4u, t10);
    wr32(arg1 + 8u, t11);
    wr32(arg1 + 0xcu, t12);
    g->edx = t10;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10032c20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
