/* f_0x10061530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10061530(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032bd78u));
    wr32(self + 0x34u, COW_IMG(0x1032bd5cu));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10061520u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1006159f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    d4 = rdf64(COW_IMG(0x1032abc8u));
    d5 = (double)rdf32(self + 0x7cu);
    fpush(g, d4);
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    t7 = g->edx;
    t8 = rd8(self + 0x84u);
    wrf32(self + 0x7cu, (float)d5);
    if ((uint8_t)t8 == 0u)
    {
        eax = (t6 & 0xffffff00u) | t8;
        edx = t7;
        goto L_1006158c;
    }
    eax = (t6 & 0xffffff00u) | t8;
    edx = t7;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10061520u), self, 0);
    t10 = rd32(self + 0x7cu);
    g->edx = rd32(t9);
    t11 = rd32(t9);
    t12 = cow_thiscall(g, rd32(t11 + 0x418u), t9, 1, t10);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t15 = g->edx;
    g->esp = sp0;
    g->edx = t15;
    cow_tailcall(g, COW_IMG(0x100747c0u), t14, self, t15);
    return;
L_1006158c: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10061520u), self, 0);
    t17 = rd32(self + 0x7cu);
    g->edx = rd32(t16);
    t18 = rd32(t16);
    t19 = cow_thiscall(g, rd32(t18 + 0x410u), t16, 1, t17);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_1006159f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t22 = g->edx;
    g->esp = sp0;
    g->edx = t22;
    cow_tailcall(g, COW_IMG(0x100747c0u), t21, self, t22);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10061530(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
