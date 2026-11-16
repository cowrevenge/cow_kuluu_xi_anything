/* f_0x1008af60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1008af60(Guest* g)
{
    double d15;
    double d16;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_1008b04c;
    if (rd32(self + 0x124u) >> 0x11u & 1u) goto L_1008b04c;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_1008b04c;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, 0xffu);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u) goto L_1008b04c;
    eax = t3;
    edx = t4;
    if (rd8(self + 0x1bdu) != 0u) goto L_1008b04c;
    eax = (eax & 0xffffff00u) | rd8(self + 0x1bdu);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x100dd9d0u), eax, g->ecx, g->edx, 1, 1, arg1);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    g->ecx = t6;
    d9 = fr(g, fr(g, d8 * (double)rdf32(COW_IMG(0x1032d3d8u))) * (double)rdf32(COW_IMG(0x1032d6b4u)));
    fpush(g, d9);
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    g->ecx = t11;
    g->edx = arg2;
    t12 = cow_call_regs(g, COW_IMG(0x100dd9d0u), t10, g->ecx, g->edx, 1, 1, arg2);
    t13 = g->ecx;
    t14 = g->edx;
    d15 = cow_take_float(g);
    g->edx = t14;
    d16 = fr(g, fr(g, d15 * (double)rdf32(COW_IMG(0x1032d3d8u))) * (double)rdf32(COW_IMG(0x1032d6b4u)));
    fpush(g, d16);
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    if ((int32_t)(t10 - t17 & 0xfffu) >= 2048)
    {
        eax = t17;
        esi = t10;
        goto L_1008b028;
    }
    ecx = t10 - t17 & 0xfffu;
    edx = t18;
    if ((int32_t)ecx <= 512) goto L_1008b04c;
    t19 = rd32(self + 0xa0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t19) + 0x298u), t19, 3, 0x306c7440u, t19, 0u);
    return;
L_1008b028: ;
    if ((int32_t)(eax - esi & 0xfffu) > 512)
    {
        eax = eax - esi & 0xfffu;
        t20 = rd32(self + 0xa0u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(t20) + 0x298u), t20, 3, 0x30727440u, t20, 0u);
    }
L_1008b04c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008af60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008af60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
