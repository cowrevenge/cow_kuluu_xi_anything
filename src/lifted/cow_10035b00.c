/* f_0x10035b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10035b00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x34u);
    wr32(self, COW_IMG(0x1032a904u));
    if (t1 - 1u > 7u)
    {
        eax = t1 - 1u;
        edx = in_edx;
        goto L_10035b90;
    }
    eax = t1 - 1u;
    t2 = rd32(COW_IMG(0x10035b98u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x10035b19u: goto L_10035b19;
    case 0x10035b37u: goto L_10035b37;
    case 0x10035b55u: goto L_10035b55;
    case 0x10035b73u: goto L_10035b73;
    case 0x10035b90u: edx = in_edx; goto L_10035b90;
    default: rt_fatal(g, COW_IMG(0x10035b12u), "switch");
    }
    return;
L_10035b19: ;
    t11 = rd32(self + 0x44u);
    g->eax = t11;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x100360a0u), 1, t11);
    t13 = g->edx;
    wr32(COW_IMG(0x1046392cu), 0u);
    g->esp = sp0;
    g->edx = t13;
    cow_tailcall(g, COW_IMG(0x100747c0u), t12, self, t13);
    return;
L_10035b37: ;
    t8 = rd32(self + 0x44u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x10036050u), 1, t8);
    t10 = g->edx;
    wr32(COW_IMG(0x10463928u), 0u);
    g->esp = sp0;
    g->edx = t10;
    cow_tailcall(g, COW_IMG(0x100747c0u), t9, self, t10);
    return;
L_10035b55: ;
    t5 = rd32(self + 0x44u);
    g->eax = eax;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10035fb0u), 1, t5);
    t7 = g->edx;
    wr32(COW_IMG(0x10463930u), 0u);
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x100747c0u), t6, self, t7);
    return;
L_10035b73: ;
    t3 = rd32(self + 0x44u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100360f0u), t3, self, g->edx, 1, 1, t3);
    t4 = g->edx;
    wr32(COW_IMG(0x10463934u), 0u);
    wr32(COW_IMG(0x1046391cu), 0u);
    wr32(COW_IMG(0x10463920u), 0u);
    eax = 0u;
    edx = t4;
L_10035b90: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100747c0u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10035b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10035b00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
