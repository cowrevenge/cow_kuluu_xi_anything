/* f_0x100ccf50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100ccf50(Guest* g)
{
    double d16;
    double d19;
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (rd32(t1) == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100cd01a;
    }
    edx = t2;
    g->eax = rd32(self);
    g->edx = edx;
    t3 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, rd32(t3 + 0x304u), self, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100cd038;
    }
    eax = t4;
    edx = t5;
    d6 = (double)rdf32(self + 0x900u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_100cd038;
    }
    t7 = rd32(self + 0x90cu);
    wr32(sp0 - 4u, t7);
    wr32(sp0 - 0x20u, 0u);
    t8 = rd32(self + 0x8f8u);
    wr32(sp0 - 0x10u, t8);
    wr32(sp0 - 0x24u, 1u);
    t9 = rd32(self + 0x8fcu);
    wr32(sp0 - 0xcu, t9);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10456d58u)));
    wr32(sp0 - 0x30u, rd32(COW_IMG(0x10456d50u)));
    t10 = rd32(self + 0x908u);
    wr32(sp0 - 8u, t10);
    g->eax = rd32(COW_IMG(0x10456d50u));
    g->ecx = t10;
    g->edx = rd32(COW_IMG(0x10456d58u));
    t11 = rd32(COW_IMG(0x10456d50u));
    t12 = rd32(COW_IMG(0x10456d58u));
    g->esp = sp0 - 0x30u;
    t13 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x34u, t14);
    wr32(sp0 - 0x14u, (uint16_t)t13);
    d16 = (double)(float)(double)(int32_t)(uint16_t)t13;
    wrf32(sp0 - 0x34u, (float)d16);
    g->eax = (uint16_t)t13;
    g->ecx = t14;
    g->esp = sp0 - 0x34u;
    t17 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t18 = g->ecx;
    wr32(sp0 - 0x38u, t18);
    wr32(sp0 - 0x14u, (uint16_t)t17);
    d19 = (double)(float)(double)(int32_t)(uint16_t)t17;
    wrf32(sp0 - 0x38u, (float)d19);
    t20 = rd32(self + 0x900u);
    wr32(sp0 - 0x3cu, t20);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->eax = (uint16_t)t17;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x1cu;
    t21 = cow_thiscall(g, COW_IMG(0x1006c280u), self + 0x8f0u, 9, sp0 - 0x10u, t20, cow_f2bits(d19), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), 1u, 1u, 0u);
    t22 = g->edx;
    if (t21 != 0u)
    {
        eax = t21;
        edx = t22;
        goto L_100cd038;
    }
    eax = t21;
    edx = t22;
L_100cd01a: ;
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t23 = cow_thiscall(g, COW_IMG(0x1002c270u), self + 0x674u, 1, 0u);
    t24 = g->edx;
    t25 = rd8(self + 0xb2u);
    wr8(self + 0xb0u, 1u);
    wr8(self + 0xb2u, (uint8_t)(t25 | 1u));
    eax = ((t23 | t25) & 0xffffff00u) | (uint8_t)(t25 | 1u);
    edx = t24;
L_100cd038: ;
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ccf50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ccf50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
