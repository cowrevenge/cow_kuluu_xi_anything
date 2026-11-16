/* f_0x10034190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10034190(Guest* g)
{
    double d3;
    double d8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1084u);

    wr32(sp0 - 0x404u, in_esi);
    wr32(sp0 - 0x408u, in_edi);
    t1 = rd8(self + 0x30u);
    wr32(sp0 - 0x40cu, t1);
    wr32(sp0 - 0x410u, COW_IMG(0x1035108cu));
    wr32(sp0 - 0x414u, 0x400u);
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    g->ecx = sp0 - 0x400u;
    g->esp = sp0 - 0x400u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x400u, 0x400u, COW_IMG(0x1035108cu), t1, in_edi, in_esi);
    t2 = g->ecx;
    wr32(sp0 - 0x41cu, 0u);
    d3 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a1acu)));
    wrf32(sp0 + 8u, (float)d3);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 - 0x420u, t4);
    wr32(sp0 - 0x424u, arg1);
    wr32(sp0 - 0x428u, sp0 - 0x400u);
    g->esp = sp0 - 0x418u;
    cow_call_regs(g, COW_IMG(0x100384b0u), sp0 - 0x400u, g->ecx, g->edx, 1, 4, sp0 - 0x400u, arg1, t4, 0u);
    t5 = rd16(self + 0x32u);
    wr32(sp0 - 0x42cu, t5);
    wr32(sp0 - 0x430u, COW_IMG(0x103516c0u));
    wr32(sp0 - 0x434u, 0x400u);
    wr32(sp0 - 0x438u, sp0 - 0x400u);
    g->ecx = t5;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x420u;
    cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x400u, 0x400u, COW_IMG(0x103516c0u), t5, sp0 - 0x400u, arg1);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x40cu, 0u);
    wr32(sp0 - 0x410u, t6);
    d8 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a1acu)));
    wrf32(sp0 - 0x410u, (float)d8);
    wr32(sp0 - 0x414u, arg1);
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    g->edx = t7;
    g->esp = sp0 - 0x408u;
    t9 = cow_call_regs(g, COW_IMG(0x100384b0u), sp0 - 0x400u, g->ecx, g->edx, 1, 4, sp0 - 0x400u, arg1, cow_f2bits(d8), 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10034190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10034190(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
