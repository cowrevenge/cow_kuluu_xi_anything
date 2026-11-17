/* f_0x1000c050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1000c050(Guest* g)
{
    double d5;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 300u);

    t1 = rd32(self + 0xcu);
    wr32(sp0 - 0x10cu, t1);
    g->eax = t1;
    t2 = rd32(t1);
    g->esp = sp0 - 0x108u;
    t3 = cow_thiscall(g, rd32(t2 + 0x10u), t2, 1, t1);
    t4 = g->ecx;
    wr32(sp0 - 0x108u, t3);
    wr32(sp0 - 0x104u, 0u);
    d5 = fr(g, (double)(int64_t)cow_i64(t3, 0u) * (double)rdf32(COW_IMG(0x10329a38u)));
    wrf64(sp0 - 0x110u, d5);
    wr32(sp0 - 0x114u, COW_IMG(0x1034ffbcu));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->ecx = t4;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034ffbcu), cow_dlo(d5), cow_dhi(d5), t3);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0x440c0000u);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    g->edx = t7;
    g->esp = sp0 - 0x118u;
    t8 = cow_call_regs(g, COW_IMG(0x100384b0u), sp0 - 0x100u, g->ecx, g->edx, 1, 4, sp0 - 0x100u, 0x440c0000u, 0u, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000c050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000c050(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
