/* f_0x101f7570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101f7570(Guest* g)
{
    double d10;
    double d4;
    double d5;
    double d6;
    double d9;
    uint32_t t1;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x101f75c0u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    d5 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d4)) * (double)rdf32(COW_IMG(0x1032a698u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    d6 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d4);
    fpush(g, d5);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    d9 = fr(g, fr(g, d6 * (double)rdf32(sp0 + 0x14u)) * (double)rdf32(COW_IMG(0x1032a698u)));
    wr16(arg2, (uint16_t)t7);
    d10 = fr(g, d9 + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d10);
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    wr16(arg3, (uint16_t)-t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f7570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
