/* f_0x10040ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10040ba0(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
        goto L_10040c15;
    }
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0xfcu);
        eax = rd32(eax);
    }
    if ((int8_t)rd8(eax + 0xdeu) >= 0)
    {
        edx = in_edx;
        goto L_10040bd9;
    }
    ecx = (self & 0xffffff00u) | rd8(eax + 0xdeu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10002d80u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    d3 = cow_take_float(g);
    if (d3 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t2;
        goto L_10040c15;
    }
    eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t2;
L_10040bd9: ;
    if (rd8(self + 0x179u) == 0u) goto L_10040beb;
    eax = (eax & 0xffffff00u) | rd8(self + 0x179u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10040c20u), eax, self, edx);
L_10040beb: ;
    if (rd32(self + 0x104u) == 0u) goto L_10040c06;
    eax = rd32(self + 0x104u);
    g->edx = edx;
    t4 = rd32(eax);
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10040220u), t4, t4, g->edx, 0, 2, COW_IMG(0x1047bc0cu), self);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_10040c06: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10040220u), 0u, 0u, g->edx, 0, 2, COW_IMG(0x1047bc0cu), self);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_10040c15: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10040ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10040ba0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
