/* f_0x100611e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100611e0(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032bce8u));
    wr32(self + 0x34u, COW_IMG(0x1032bcccu));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
        t4 = rd32(self + 0x7cu);
        g->edx = rd32(t3);
        t5 = rd32(t3);
        t6 = cow_thiscall(g, rd32(t5 + 0x5cu), t3, 1, t4);
        t7 = g->edx;
        d8 = (double)rdf32(self + 0x7cu);
        if (d8 != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            edx = t7;
        }
        else
        {
            eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            edx = t7;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t9 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
            g->edx = rd32(t9);
            t10 = rd32(t9);
            t11 = cow_thiscall(g, rd32(t10 + 0x50u), t9, 1, 2u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t14 = g->edx;
    g->esp = sp0;
    g->edx = t14;
    cow_tailcall(g, COW_IMG(0x100747c0u), t13, self, t14);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100611e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100611e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
