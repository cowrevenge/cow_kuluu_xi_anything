/* f_0x10061630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10061630(Guest* g)
{
    double d4;
    double d5;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10061110u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10061642;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10061642: ;
    g->edx = edx;
    d4 = rdf64(COW_IMG(0x1032abc8u));
    d5 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)rdf32(self + 0x74u) / (double)rdf32(self + 0x80u))) * fr(g, (double)rdf32(self + 0x7cu) - (double)rdf32(self + 0x78u))) + (double)rdf32(self + 0x78u));
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    t7 = g->edx;
    d8 = cow_take_float(g);
    if (rd8(self + 0x84u) == 0u)
    {
        eax = (t6 & 0xffffff00u) | rd8(self + 0x84u);
        edx = t7;
        loc_4_f = (double)(float)d8;
        x1 = d4;
        x0 = d5;
        goto L_10061690;
    }
    eax = (t6 & 0xffffff00u) | rd8(self + 0x84u);
    edx = t7;
    loc_4_f = (double)(float)d8;
    x1 = d4;
    x0 = d5;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10061520u), self, 0);
    g->edx = rd32(t9);
    t10 = rd32(t9);
    t11 = cow_thiscall(g, rd32(t10 + 0x418u), t9, 1, cow_f2bits(loc_4_f));
    t12 = g->edx;
    g->edx = t12;
    fpush(g, x0);
    fpush(g, x1);
    return t11 & 0xffffff00u;
L_10061690: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x10061520u), self, 0);
    g->edx = rd32(t13);
    t14 = rd32(t13);
    t15 = cow_thiscall(g, rd32(t14 + 0x410u), t13, 1, cow_f2bits(loc_4_f));
    t16 = g->edx;
    g->edx = t16;
    fpush(g, x0);
    fpush(g, x1);
    return t15 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10061630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
