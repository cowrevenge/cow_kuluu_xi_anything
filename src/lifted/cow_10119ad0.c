/* f_0x10119ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10119ad0(Guest* g)
{
    double d15;
    double d21;
    double d4;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
        edx = in_edx;
        goto L_10119bb4;
    }
    eax = rd32(self + 0xcu);
    if (rd8(sp0 + 0xcu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
        goto L_10119b82;
    }
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 + 0xcu);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 + 0xcu, sp0 - 8u);
    t2 = g->ecx;
    t3 = (uint32_t)(int16_t)rd16(self + 0x32u);
    wr32(sp0 - 4u, t3);
    g->ecx = t2;
    g->edx = t3;
    d4 = fr(g, (double)(int32_t)t3 * (double)rdf32(sp0 + 0xcu));
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr16(self + 0x2au, (uint16_t)(t5 + rd32(sp0 + 4u)));
    t8 = (uint32_t)(int16_t)rd16(self + 0x34u);
    wr32(sp0 + 4u, t8);
    g->ecx = t6;
    d9 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 - 8u));
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    wr16(self + 0x2cu, (uint16_t)(arg2 + t10));
    t12 = (uint32_t)(int16_t)(rd16(self + 0x36u) - rd16(self + 0x32u));
    t13 = rd16(self + 0x36u);
    t14 = rd16(self + 0x32u);
    wr32(sp0 + 4u, t12);
    g->edx = t12;
    d15 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
    fpush(g, d15);
    t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg2 + t10, g->ecx, g->edx, 1, 0);
    t17 = g->edx;
    wr16(self + 0x2eu, (uint16_t)t16);
    t18 = (uint32_t)(int16_t)(rd16(self + 0x38u) - rd16(self + 0x34u));
    t19 = rd16(self + 0x38u);
    t20 = rd16(self + 0x34u);
    wr32(sp0 + 0xcu, t18);
    g->edx = t17;
    d21 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(sp0 - 8u));
    fpush(g, d21);
    t22 = cow_call_regs(g, COW_IMG(0x10311c6cu), (t16 & 0xffff0000u) | (uint16_t)(t19 - t20), g->ecx, g->edx, 1, 0);
    t23 = g->edx;
    wr16(self + 0x30u, (uint16_t)t22);
    g->edx = t23;
    return t22;
L_10119b82: ;
    t24 = rd16(self + 0x34u);
    t25 = rd16(self + 0x32u);
    t26 = rd16(sp0 + 4u);
    wr16(self + 0x2au, (uint16_t)(t25 + t26));
    wr16(self + 0x2cu, (uint16_t)((uint16_t)arg2 + t24));
    wr16(self + 0x2eu, (uint16_t)(rd16(self + 0x36u) - rd16(self + 0x32u)));
    t27 = rd16(self + 0x38u);
    t28 = rd16(self + 0x34u);
    wr16(self + 0x30u, (uint16_t)(t27 - t28));
    eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)arg2 + t24);
    edx = (in_edx & 0xffff0000u) | (uint16_t)(t27 - t28);
L_10119bb4: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119ad0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
