/* f_0x1019c400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019c400(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x84u, 0x3cu);
    wr32(sp0 - 0x88u, 0x2bu);
    wr32(sp0 - 0x8cu, 0xau);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x2bu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x88u, t1);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->edx = t3;
    g->esp = sp0 - 0x78u;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t1, 0x3cu, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu));
    t5 = g->edx;
    wr32(sp0 - 0x84u, sp0 - 0x80u);
    g->edx = t5;
    g->esp = sp0 - 0x80u;
    t6 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x80u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019c400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
